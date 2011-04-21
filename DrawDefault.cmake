set tcl_interactive 1
set tcl_precision 17

if [info exists library] {
  source [file join $library init.tcl]
}
set dir ""
if { [info exists env(DRAWHOME) ] } { 
  set dir $env(DRAWHOME)  
} else {
    if { [info exists env(CASROOT) ] } {
  set dir [file join $env(CASROOT) src DrawResources]
    } else {
  set dir [file join "@OCE_INSTALL_DATA_DIR@" src DrawResources]
    }
}

# san - 02/08/2002 - In Tcl8.3 it is no longer necessary to load Tix explicitly on WNT
#if { [info exists env(STATION)] } {
#  if { $env(STATION) == "wnt" } {
#    load tix8183.dll Tix
#  }
#}

if { [file exist  $dir] } { 
   source [file join $dir StandardCommands.tcl]
   source [file join $dir StandardViews.tcl]
   source [file join $dir Geometry.tcl]
   if [info exists tk_version] {source [file join $dir DrawTK.tcl]}
   if [file readable DrawAppliInit] {
  source DrawAppliInit
   }
   set stationname $tcl_platform(platform)
   if { ${stationname} == "windows" } {
      wm iconbitmap . -default [file join $dir lamp.ico]
   }
} 
