//
//  ContentView.swift
//  CppPractice
//
//  Created by 김인섭 on 10/21/23.
//

import SwiftUI
import CppFramework

struct ContentView: View {
    var body: some View {
        VStack {
            Image(systemName: "globe")
                .imageScale(.large)
                .foregroundStyle(.tint)
            Text("Hello, world!")
        }
        .padding()
        .onAppear(perform: {
            // available from macOS 13.3.0
            if #available(iOS 16.4.0, *) {
                let mountain = Mountain.create("관악산", 632)
                mountain.displayInfo()
            } else {
                // Fallback on earlier versions
            }
        })
    }
}

#Preview {
    ContentView()
}
