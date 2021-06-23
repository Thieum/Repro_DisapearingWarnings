# Repro_DisapearingWarnings

Shows how some native warnings will disappear in error list in native and CLR Projects when coupled in a solution with .NET Framework projects.

Repro steps:
1. Rebuild Solution and watch the error list.
2. Some C26451 will appear then disappear when .net framework project will build.
3. The CA warning from the native CLR Dll will never appear in the error list.
