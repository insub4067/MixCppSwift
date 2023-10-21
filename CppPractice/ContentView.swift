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
            var mountain = Mountain("관악산", 632)
            mountain.displayInfo()
        })
    }
}

#Preview {
    ContentView()
}
