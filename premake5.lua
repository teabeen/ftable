workspace "ftable"
    configurations {"Debug", "Release"}
    architecture "x64"

project "Ftable"
    kind "ConsoleApp"
    language "C"

    targetdir ("build/%{cfg.buildcfg}")

    objdir ("bin_int/%{cfg.buildcfg}")

    files { "src/**.c", "include/**.h" }
    includedirs {"include"}

    filter "configurations:Debug"
        defines {"DEBUG"}
        symbols "On"

    filter "configurations:Release"
        defines {"NDEBUG"}
        optimize "On"
