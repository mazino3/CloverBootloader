#include <Platform.h> // Only use angled for Platform, else, xcode project won't compile
#include "../cpp_foundation/XString.h"
#include "../cpp_foundation/XStringArray.h"
#include "../cpp_foundation/unicode_conversions.h"
#include "../Platform/plist/plist.h"
#include "../cpp_lib/xmlLiteSimpleTypes.h"
#include "../cpp_lib/XmlLiteParser.h"
#include "../Platform/ConfigPlist/ConfigPlist.h"


static const char* config_all = "\n\n\n\n\n\n\n\n\n\n\n"
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n\
<!DOCTYPE plist PUBLIC\"-//Apple//DTD PLIST 1.0//EN\"\"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\r\n\
<plist version=\"1.0\">\r\n\
<dict>\r\n\
  <key>ACPI</key>\r\n\
  <dict>\r\n\
    <key>AutoMerge</key>\r\n\
    <true/>\r\n\
    <key>#AutoMerge1</key>\r\n\
    <true/>\r\n\
    <key>##AutoMerge2</key>\r\n\
    <true/>\r\n\
    <key>DSDT</key>\r\n\
    <dict>\r\n\
      <key>Debug</key>\r\n\
      <true/>\r\n\
      <key>Fixes</key>\r\n\
      <dict>\r\n\
        <key>FixDarwin</key>\r\n\
        <true/>\r\n\
        <key>FixDisplay</key>\r\n\
        <true/>\r\n\
        <key>FixS3D</key>\r\n\
        <true/>\r\n\
      </dict>\r\n\
      <key>Name</key>\r\n\
      <string>aa</string>\r\n\
      <key>Patches</key>\r\n\
      <array>\r\n\
        <dict>\r\n\
          <key>Comment</key>\r\n\
          <string>ACPI1</string>\r\n\
          <key>Disabled</key>\r\n\
          <false/>\r\n\
          <key>Find</key>\r\n\
          <data>\r\n\
          AA==\r\n\
          </data>\r\n\
          <key>Replace</key>\r\n\
          <data>\r\n\
          AQ==\r\n\
          </data>\r\n\
        </dict>\r\n\
        <dict>\r\n\
          <key>Comment</key>\r\n\
          <string>ACPI2</string>\r\n\
          <key>Disabled</key>\r\n\
          <true/>\r\n\
          <key>Find</key>\r\n\
          <data>\r\n\
          Ag==\r\n\
          </data>\r\n\
          <key>Replace</key>\r\n\
          <data>\r\n\
          Aw==\r\n\
          </data>\r\n\
        </dict>\r\n\
        <dict>\r\n\
          <key>Comment</key>\r\n\
          <string>change EHC1 to EH01</string>\r\n\
          <key>Disabled</key>\r\n\
          <false/>\r\n\
          <key>Find</key>\r\n\
          <data>\r\n\
          RUhDMQ==\r\n\
          </data>\r\n\
          <key>Replace</key>\r\n\
          <data>\r\n\
          RUgwMQ==\r\n\
          </data>\r\n\
        </dict>\r\n\
      </array>\r\n\
      <key>ReuseFFFF</key>\r\n\
      <true/>\r\n\
      <key>Rtc8Allowed</key>\r\n\
      <true/>\r\n\
      <key>SuspendOverride</key>\r\n\
      <true/>\r\n\
    </dict>\r\n\
    <key>DisableASPM</key>\r\n\
    <true/>\r\n\
    <key>DisabledAML</key>\r\n\
    <array>\r\n\
      <string>aa</string>\r\n\
      <string>bb</string>\r\n\
    </array>\r\n\
    <key>DropTables</key>\r\n\
    <array>\r\n\
      <dict>\r\n\
        <key>Signature</key>\r\n\
        <string>SSDT</string>\r\n\
        <key>TableId</key>\r\n\
        <string>CpuPm</string>\r\n\
      </dict>\r\n\
    </array>\r\n\
    <key>HaltEnabler</key>\r\n\
    <true/>\r\n\
    <key>PatchAPIC</key>\r\n\
    <true/>\r\n\
    <key>ResetAddress</key>\r\n\
    <string>01</string>\r\n\
    <key>ResetValue</key>\r\n\
    <string>02</string>\r\n\
    <key>SortedOrder</key>\r\n\
    <array>\r\n\
      <string>dd</string>\r\n\
      <string>cc</string>\r\n\
    </array>\r\n\
    <key>smartUPS</key>\r\n\
    <true/>\r\n\
  </dict>\r\n\
  <key>Boot</key>\r\n\
  <dict>\r\n\
    <key>Arguments</key>\r\n\
    <string>-v arch=i386 slide=0 dart=0 -xcpm darkwake=1 npci=0x2000 cpus=1 debug=0x100 aa</string>\r\n\
    <key>BlackList</key>\r\n\
    <array>\r\n\
      <string>hh</string>\r\n\
    </array>\r\n\
    <key>CustomLogo</key>\r\n\
    <string>Apple</string>\r\n\
    <key>Debug</key>\r\n\
    <true/>\r\n\
    <key>DefaultLoader</key>\r\n\
    <string>ii</string>\r\n\
    <key>DefaultVolume</key>\r\n\
    <string>LastBootedVolume</string>\r\n\
    <key>DisableCloverHotkeys</key>\r\n\
    <true/>\r\n\
    <key>HibernationFixup</key>\r\n\
    <true/>\r\n\
    <key>Legacy</key>\r\n\
    <string>LegacyBiosDefault</string>\r\n\
    <key>LegacyBiosDefaultEntry</key>\r\n\
    <integer>12</integer>\r\n\
    <key>NeverDoRecovery</key>\r\n\
    <true/>\r\n\
    <key>NeverHibernate</key>\r\n\
    <true/>\r\n\
    <key>NoEarlyProgress</key>\r\n\
    <true/>\r\n\
    <key>Policy</key>\r\n\
    <string>Allow</string>\r\n\
    <key>Secure</key>\r\n\
    <true/>\r\n\
    <key>SignatureFixup</key>\r\n\
    <true/>\r\n\
    <key>SkipHibernateTimeout</key>\r\n\
    <true/>\r\n\
    <key>StrictHibernate</key>\r\n\
    <true/>\r\n\
    <key>Timeout</key>\r\n\
    <integer>2</integer>\r\n\
    <key>WhiteList</key>\r\n\
    <array>\r\n\
      <string>ff</string>\r\n\
      <string>gg</string>\r\n\
    </array>\r\n\
    <key>XMPDetection</key>\r\n\
    <integer>1</integer>\r\n\
  </dict>\r\n\
  <key>BootGraphics</key>\r\n\
  <dict>\r\n\
    <key>DefaultBackgroundColor</key>\r\n\
    <string>0xF1F1F1</string>\r\n\
    <key>EFILoginHiDPI</key>\r\n\
    <integer>2</integer>\r\n\
    <key>UIScale</key>\r\n\
    <integer>4</integer>\r\n\
    <key>flagstate</key>\r\n\
    <integer>3</integer>\r\n\
  </dict>\r\n\
  <key>CPU</key>\r\n\
  <dict>\r\n\
    <key>BusSpeedkHz</key>\r\n\
    <integer>800</integer>\r\n\
    <key>C2</key>\r\n\
    <true/>\r\n\
    <key>C4</key>\r\n\
    <true/>\r\n\
    <key>C6</key>\r\n\
    <true/>\r\n\
    <key>FrequencyMHz</key>\r\n\
    <integer>2000</integer>\r\n\
    <key>HWPEnable</key>\r\n\
    <true/>\r\n\
    <key>HWPValue</key>\r\n\
    <string>0x7</string>\r\n\
    <key>Latency</key>\r\n\
    <string>0x3</string>\r\n\
    <key>QEMU</key>\r\n\
    <true/>\r\n\
    <key>QPI</key>\r\n\
    <integer>4</integer>\r\n\
    <key>TDP</key>\r\n\
    <integer>6</integer>\r\n\
    <key>TurboDisable</key>\r\n\
    <true/>\r\n\
    <key>Type</key>\r\n\
    <string>0x5</string>\r\n\
    <key>UseARTFrequency</key>\r\n\
    <true/>\r\n\
  </dict>\r\n\
  <key>Devices</key>\r\n\
  <dict>\r\n\
    <key>AddProperties</key>\r\n\
    <array>\r\n\
      <dict>\r\n\
        <key>Device</key>\r\n\
        <string>SATA</string>\r\n\
        <key>Disabled</key>\r\n\
        <false/>\r\n\
        <key>Key</key>\r\n\
        <string>10</string>\r\n\
        <key>Value</key>\r\n\
        <integer>11</integer>\r\n\
      </dict>\r\n\
      <dict>\r\n\
        <key>Device</key>\r\n\
        <string>LPC</string>\r\n\
        <key>Disabled</key>\r\n\
        <true/>\r\n\
        <key>Key</key>\r\n\
        <string>12</string>\r\n\
        <key>Value</key>\r\n\
        <integer>13</integer>\r\n\
      </dict>\r\n\
      <dict>\r\n\
        <key>Device</key>\r\n\
        <string>SmBUS</string>\r\n\
        <key>Disabled</key>\r\n\
        <false/>\r\n\
        <key>Key</key>\r\n\
        <string>kk</string>\r\n\
        <key>Value</key>\r\n\
        <string>ll</string>\r\n\
      </dict>\r\n\
      <dict>\r\n\
        <key>Device</key>\r\n\
        <string>Firewire</string>\r\n\
        <key>Disabled</key>\r\n\
        <false/>\r\n\
        <key>Key</key>\r\n\
        <string>14</string>\r\n\
        <key>Value</key>\r\n\
        <data>\r\n\
        FQ==\r\n\
        </data>\r\n\
      </dict>\r\n\
    </array>\r\n\
    <key>AirportBridgeDeviceName</key>\r\n\
    <string>airportbridge</string>\r\n\
    <key>Arbitrary</key>\r\n\
    <array>\r\n\
      <dict>\r\n\
        <key>Comment</key>\r\n\
        <string>C1</string>\r\n\
        <key>CustomProperties</key>\r\n\
        <array>\r\n\
          <dict>\r\n\
            <key>Disabled</key>\r\n\
            <false/>\r\n\
            <key>Key</key>\r\n\
            <string>ll</string>\r\n\
            <key>Value</key>\r\n\
            <string>mm</string>\r\n\
          </dict>\r\n\
          <dict>\r\n\
            <key>Disabled</key>\r\n\
            <true/>\r\n\
            <key>Key</key>\r\n\
            <string>nn</string>\r\n\
            <key>Value</key>\r\n\
            <integer>1</integer>\r\n\
          </dict>\r\n\
          <dict>\r\n\
            <key>Disabled</key>\r\n\
            <false/>\r\n\
            <key>Key</key>\r\n\
            <string>oo</string>\r\n\
            <key>Value</key>\r\n\
            <data>\r\n\
            Ag==\r\n\
            </data>\r\n\
          </dict>\r\n\
        </array>\r\n\
        <key>PciAddr</key>\r\n\
        <string>00:00.01</string>\r\n\
      </dict>\r\n\
    </array>\r\n\
    <key>Audio</key>\r\n\
    <dict>\r\n\
      <key>AFGLowPowerState</key>\r\n\
      <true/>\r\n\
      <key>Inject</key>\r\n\
      <string>Detect</string>\r\n\
      <key>ResetHDA</key>\r\n\
      <true/>\r\n\
    </dict>\r\n\
    <key>DisableFunctions</key>\r\n\
    <integer>2</integer>\r\n\
    <key>FakeID</key>\r\n\
    <dict>\r\n\
      <key>ATI</key>\r\n\
      <string>0x22221002</string>\r\n\
      <key>IMEI</key>\r\n\
      <string>0x22221002</string>\r\n\
      <key>IntelGFX</key>\r\n\
      <string>0x22221002</string>\r\n\
      <key>LAN</key>\r\n\
      <string>0x22221002</string>\r\n\
      <key>NVidia</key>\r\n\
      <string>0x22221002</string>\r\n\
      <key>SATA</key>\r\n\
      <string>0x22221002</string>\r\n\
      <key>WIFI</key>\r\n\
      <string>0x22221002</string>\r\n\
      <key>XHCI</key>\r\n\
      <string>0x22221002</string>\r\n\
    </dict>\r\n\
    <key>ForceHPET</key>\r\n\
    <true/>\r\n\
    <key>Inject</key>\r\n\
    <true/>\r\n\
    <key>IntelMaxValue</key>\r\n\
    <integer>1</integer>\r\n\
    <key>NoDefaultProperties</key>\r\n\
    <true/>\r\n\
    <key>Properties</key>\r\n\
    <string>jj\r\n\
kk</string>\r\n\
    <key>SetIntelBacklight</key>\r\n\
    <true/>\r\n\
    <key>SetIntelMaxBacklight</key>\r\n\
    <true/>\r\n\
    <key>USB</key>\r\n\
    <dict>\r\n\
      <key>AddClockID</key>\r\n\
      <true/>\r\n\
      <key>FixOwnership</key>\r\n\
      <true/>\r\n\
      <key>HighCurrent</key>\r\n\
      <true/>\r\n\
      <key>Inject</key>\r\n\
      <true/>\r\n\
    </dict>\r\n\
    <key>UseIntelHDMI</key>\r\n\
    <true/>\r\n\
  </dict>\r\n\
  <key>DisableDrivers</key>\r\n\
  <array>\r\n\
    <string>OsxAptioFixDrv</string>\r\n\
    <string>Ps2KeyboardDxe</string>\r\n\
    <string>Ps2MouseDxe</string>\r\n\
  </array>\r\n\
  <key>GUI</key>\r\n\
  <dict>\r\n\
    <key>ConsoleMode</key>\r\n\
    <string>Max</string>\r\n\
    <key>Custom</key>\r\n\
    <dict>\r\n\
      <key>Entries</key>\r\n\
      <array>\r\n\
        <dict>\r\n\
          <key>AddArguments</key>\r\n\
          <string>addarg</string>\r\n\
          <key>Arguments</key>\r\n\
          <string>arg</string>\r\n\
          <key>BootBgColor</key>\r\n\
          <string>bootbgcolor</string>\r\n\
          <key>CustomLogo</key>\r\n\
          <string>Apple</string>\r\n\
          <key>Disabled</key>\r\n\
          <true/>\r\n\
          <key>DriveImage</key>\r\n\
          <string>driveimage</string>\r\n\
          <key>Title</key>\r\n\
          <string>title</string>\r\n\
          <key>FullTitle</key>\r\n\
          <string>title</string>\r\n\
          <key>Hidden</key>\r\n\
          <false/>\r\n\
          <key>Hotkey</key>\r\n\
          <string>H</string>\r\n\
          <key>Image</key>\r\n\
          <string>image</string>\r\n\
          <key>Path</key>\r\n\
          <string>path</string>\r\n\
          <key>Settings</key>\r\n\
          <string>settings</string>\r\n\
          <key>SubEntries</key>\r\n\
          <array>\r\n\
            <dict>\r\n\
              <key>AddArguments</key>\r\n\
              <string>arg2</string>\r\n\
              <key>FullTitle</key>\r\n\
              <string>title1</string>\r\n\
            </dict>\r\n\
            <dict>\r\n\
              <key>AddArguments</key>\r\n\
              <string>arg3</string>\r\n\
              <key>Title</key>\r\n\
              <string>title2</string>\r\n\
            </dict>\r\n\
            <dict>\r\n\
              <key>AddArguments</key>\r\n\
              <string>arg4</string>\r\n\
              <key>FullTitle</key>\r\n\
              <string>title3</string>\r\n\
            </dict>\r\n\
            <dict>\r\n\
              <key>AddArguments</key>\r\n\
              <string>arg5</string>\r\n\
              <key>Title</key>\r\n\
              <string>title4</string>\r\n\
            </dict>\r\n\
          </array>\r\n\
          <key>Type</key>\r\n\
          <string>Oldest</string>\r\n\
          <key>Volume</key>\r\n\
          <string>v1</string>\r\n\
          <key>VolumeType</key>\r\n\
          <string>Internal</string>\r\n\
        </dict>\r\n\
      </array>\r\n\
      <key>Legacy</key>\r\n\
      <array>\r\n\
        <dict>\r\n\
          <key>Disabled</key>\r\n\
          <true/>\r\n\
          <key>FullTitle</key>\r\n\
          <string>title</string>\r\n\
          <key>Hidden</key>\r\n\
          <true/>\r\n\
          <key>Hotkey</key>\r\n\
          <string>a</string>\r\n\
          <key>Type</key>\r\n\
          <string>Windows</string>\r\n\
          <key>Volume</key>\r\n\
          <string>v2</string>\r\n\
        </dict>\r\n\
      </array>\r\n\
      <key>Tool</key>\r\n\
      <array>\r\n\
        <dict>\r\n\
          <key>Arguments</key>\r\n\
          <string>b</string>\r\n\
          <key>Disabled</key>\r\n\
          <true/>\r\n\
          <key>Hidden</key>\r\n\
          <true/>\r\n\
          <key>Hotkey</key>\r\n\
          <string>b</string>\r\n\
          <key>Path</key>\r\n\
          <string>path</string>\r\n\
          <key>Title</key>\r\n\
          <string>title</string>\r\n\
          <key>Volume</key>\r\n\
          <string>tool1</string>\r\n\
        </dict>\r\n\
      </array>\r\n\
    </dict>\r\n\
    <key>CustomIcons</key>\r\n\
    <true/>\r\n\
    <key>Hide</key>\r\n\
    <array>\r\n\
      <string>sdfsdfdf</string>\r\n\
      <string>sdfsfdf</string>\r\n\
    </array>\r\n\
    <key>Language</key>\r\n\
    <string>es:0</string>\r\n\
    <key>Mouse</key>\r\n\
    <dict>\r\n\
      <key>Enabled</key>\r\n\
      <true/>\r\n\
      <key>Mirror</key>\r\n\
      <true/>\r\n\
      <key>Speed</key>\r\n\
      <integer>5</integer>\r\n\
    </dict>\r\n\
    <key>Scan</key>\r\n\
    <dict>\r\n\
      <key>Entries</key>\r\n\
      <true/>\r\n\
      <key>Kernel</key>\r\n\
      <string>First</string>\r\n\
      <key>Legacy</key>\r\n\
      <string>First</string>\r\n\
      <key>Linux</key>\r\n\
      <true/>\r\n\
      <key>Tool</key>\r\n\
      <true/>\r\n\
    </dict>\r\n\
    <key>ScreenResolution</key>\r\n\
    <string>1366x768</string>\r\n\
    <key>ShowOptimus</key>\r\n\
    <true/>\r\n\
    <key>TextOnly</key>\r\n\
    <true/>\r\n\
    <key>Theme</key>\r\n\
    <string>th</string>\r\n\
  </dict>\r\n\
  <key>Graphics</key>\r\n\
  <dict>\r\n\
    <key>ATI</key>\r\n\
    <array>\r\n\
      <dict>\r\n\
        <key>IOPCIPrimaryMatch</key>\r\n\
        <string>0x1002888</string>\r\n\
        <key>IOPCISubDevId</key>\r\n\
        <string>0x106B</string>\r\n\
        <key>LoadVBios</key>\r\n\
        <true/>\r\n\
        <key>Model</key>\r\n\
        <string>cc</string>\r\n\
        <key>VRAM</key>\r\n\
        <integer>2000</integer>\r\n\
        <key>VideoPorts</key>\r\n\
        <integer>3</integer>\r\n\
      </dict>\r\n\
    </array>\r\n\
    <key>BootDisplay</key>\r\n\
    <integer>12</integer>\r\n\
    <key>DualLink</key>\r\n\
    <integer>1</integer>\r\n\
    <key>EDID</key>\r\n\
    <dict>\r\n\
      <key>Custom</key>\r\n\
      <data>\r\n\
      AQID\r\n\
      </data>\r\n\
      <key>Inject</key>\r\n\
      <true/>\r\n\
      <key>ProductID</key>\r\n\
      <string>0x9777</string>\r\n\
      <key>VendorID</key>\r\n\
      <string>0x1007</string>\r\n\
    </dict>\r\n\
    <key>FBName</key>\r\n\
    <string>Exmoor</string>\r\n\
    <key>Inject</key>\r\n\
    <dict>\r\n\
      <key>ATI</key>\r\n\
      <true/>\r\n\
      <key>Intel</key>\r\n\
      <true/>\r\n\
      <key>NVidia</key>\r\n\
      <true/>\r\n\
    </dict>\r\n\
    <key>LoadVBios</key>\r\n\
    <true/>\r\n\
    <key>NVCAP</key>\r\n\
    <string>0304</string>\r\n\
    <key>NVIDIA</key>\r\n\
    <array>\r\n\
      <dict>\r\n\
        <key>IOPCIPrimaryMatch</key>\r\n\
        <string>0x10DE999</string>\r\n\
        <key>IOPCISubDevId</key>\r\n\
        <string>0x106B</string>\r\n\
        <key>LoadVBios</key>\r\n\
        <false/>\r\n\
        <key>Model</key>\r\n\
        <string>aa</string>\r\n\
        <key>VRAM</key>\r\n\
        <integer>1000</integer>\r\n\
        <key>VideoPorts</key>\r\n\
        <integer>1</integer>\r\n\
      </dict>\r\n\
      <dict>\r\n\
        <key>IOPCIPrimaryMatch</key>\r\n\
        <string>0x10DE999</string>\r\n\
        <key>IOPCISubDevId</key>\r\n\
        <string>0x106B</string>\r\n\
        <key>LoadVBios</key>\r\n\
        <true/>\r\n\
        <key>Model</key>\r\n\
        <string>bb</string>\r\n\
        <key>VRAM</key>\r\n\
        <integer>1000</integer>\r\n\
        <key>VideoPorts</key>\r\n\
        <integer>2</integer>\r\n\
      </dict>\r\n\
    </array>\r\n\
    <key>NvidiaGeneric</key>\r\n\
    <true/>\r\n\
    <key>NvidiaNoEFI</key>\r\n\
    <true/>\r\n\
    <key>NvidiaSingle</key>\r\n\
    <true/>\r\n\
    <key>PatchVBios</key>\r\n\
    <true/>\r\n\
    <key>PatchVBiosBytes</key>\r\n\
    <array>\r\n\
      <dict>\r\n\
        <key>Find</key>\r\n\
        <data>\r\n\
        AwQF\r\n\
        </data>\r\n\
        <key>Replace</key>\r\n\
        <data>\r\n\
        BgcI\r\n\
        </data>\r\n\
      </dict>\r\n\
    </array>\r\n\
    <key>VRAM</key>\r\n\
    <integer>1500</integer>\r\n\
    <key>VideoPorts</key>\r\n\
    <integer>2</integer>\r\n\
    <key>display-cfg</key>\r\n\
    <string>04</string>\r\n\
    <key>ig-platform-id</key>\r\n\
    <string>0x59230000</string>\r\n\
  </dict>\r\n\
  <key>KernelAndKextPatches</key>\r\n\
  <dict>\r\n\
    <key>ATIConnectorsController</key>\r\n\
    <string>ATICtl</string>\r\n\
    <key>ATIConnectorsData</key>\r\n\
    <string>111213</string>\r\n\
    <key>ATIConnectorsPatch</key>\r\n\
    <string>141516</string>\r\n\
    <key>AppleIntelCPUPM</key>\r\n\
    <true/>\r\n\
    <key>AppleRTC</key>\r\n\
    <true/>\r\n\
    <key>BootPatches</key>\r\n\
    <array>\r\n\
      <dict>\r\n\
        <key>Comment</key>\r\n\
        <string>c3</string>\r\n\
        <key>Disabled</key>\r\n\
        <true/>\r\n\
        <key>Find</key>\r\n\
        <data>\r\n\
        MTI=\r\n\
        </data>\r\n\
        <key>MatchBuild</key>\r\n\
        <string>10.12.6</string>\r\n\
        <key>MatchOS</key>\r\n\
        <string>10.12</string>\r\n\
        <key>Replace</key>\r\n\
        <data>\r\n\
        MzQ=\r\n\
        </data>\r\n\
      </dict>\r\n\
    </array>\r\n\
    <key>Debug</key>\r\n\
    <true/>\r\n\
    <key>DellSMBIOSPatch</key>\r\n\
    <true/>\r\n\
    <key>FakeCPUID</key>\r\n\
    <string>0x0306D0</string>\r\n\
    <key>ForceKextsToLoad</key>\r\n\
    <array>\r\n\
      <string>ForceKext</string>\r\n\
    </array>\r\n\
    <key>KernelLapic</key>\r\n\
    <true/>\r\n\
    <key>KernelPm</key>\r\n\
    <true/>\r\n\
    <key>KernelToPatch</key>\r\n\
    <array>\r\n\
      <dict>\r\n\
        <key>Comment</key>\r\n\
        <string>c2</string>\r\n\
        <key>Disabled</key>\r\n\
        <true/>\r\n\
        <key>Find</key>\r\n\
        <data>\r\n\
        ISI=\r\n\
        </data>\r\n\
        <key>MatchBuild</key>\r\n\
        <string>10.13.6</string>\r\n\
        <key>MatchOS</key>\r\n\
        <string>10.13</string>\r\n\
        <key>Replace</key>\r\n\
        <data>\r\n\
        IyQ=\r\n\
        </data>\r\n\
      </dict>\r\n\
    </array>\r\n\
    <key>KernelXCPM</key>\r\n\
    <true/>\r\n\
    <key>KextsToPatch</key>\r\n\
    <array>\r\n\
      <dict>\r\n\
        <key>Comment</key>\r\n\
        <string>c1</string>\r\n\
        <key>Disabled</key>\r\n\
        <true/>\r\n\
        <key>Find</key>\r\n\
        <data>\r\n\
        AQ==\r\n\
        </data>\r\n\
        <key>InfoPlistPatch</key>\r\n\
        <true/>\r\n\
        <key>MatchBuild</key>\r\n\
        <string>10.14.6</string>\r\n\
        <key>MatchOS</key>\r\n\
        <string>10.14</string>\r\n\
        <key>Name</key>\r\n\
        <string>k1</string>\r\n\
        <key>Replace</key>\r\n\
        <data>\r\n\
        Ag==\r\n\
        </data>\r\n\
      </dict>\r\n\
      <dict>\r\n\
        <key>Comment</key>\r\n\
        <string>IONVMeFamily IONameMatch</string>\r\n\
        <key>Disabled</key>\r\n\
        <false/>\r\n\
        <key>Find</key>\r\n\
        <data>\r\n\
        PHN0cmluZz5wY2kxNDRkLGE4MDQ8L3N0cmluZz4=\r\n\
        </data>\r\n\
        <key>InfoPlistPatch</key>\r\n\
        <true/>\r\n\
        <key>Name</key>\r\n\
        <string>IONVMeFamily</string>\r\n\
        <key>Replace</key>\r\n\
        <data>\r\n\
        PHN0cmluZz5wY2kxNDRkLGE4MDI8L3N0cmluZz4=\r\n\
        </data>\r\n\
      </dict>\r\n\
    </array>\r\n\
  </dict>\r\n\
  <key>RtVariables</key>\r\n\
  <dict>\r\n\
    <key>BooterConfig</key>\r\n\
    <string>0x1</string>\r\n\
    <key>CsrActiveConfig</key>\r\n\
    <string>0x2</string>\r\n\
    <key>MLB</key>\r\n\
    <string>12345678901234567</string>\r\n\
    <key>ROM</key>\r\n\
    <data>\r\n\
    MBRwYnHo\r\n\
    </data>\r\n\
  </dict>\r\n\
  <key>SMBIOS</key>\r\n\
  <dict>\r\n\
    <key>BiosReleaseDate</key>\r\n\
    <string>08/08/17</string>\r\n\
    <key>BiosVendor</key>\r\n\
    <string>Apple Inc.</string>\r\n\
    <key>BiosVersion</key>\r\n\
    <string>MBP81.88Z.004D.B00.1708080655</string>\r\n\
    <key>Board-ID</key>\r\n\
    <string>Mac-94245B3640C91C81</string>\r\n\
    <key>BoardManufacturer</key>\r\n\
    <string>Apple Inc.</string>\r\n\
    <key>BoardSerialNumber</key>\r\n\
    <string>W89135306OPDM6CAD</string>\r\n\
    <key>BoardType</key>\r\n\
    <integer>10</integer>\r\n\
    <key>BoardVersion</key>\r\n\
    <string>1.0</string>\r\n\
    <key>ChassisAssetTag</key>\r\n\
    <string>MacBook-Aluminum</string>\r\n\
    <key>ChassisManufacturer</key>\r\n\
    <string>Apple Inc.</string>\r\n\
    <key>ChassisType</key>\r\n\
    <string>0x0A</string>\r\n\
    <key>Family</key>\r\n\
    <string>MacBook Pro</string>\r\n\
    <key>FirmwareFeatures</key>\r\n\
    <string>0xC00DE137</string>\r\n\
    <key>FirmwareFeaturesMask</key>\r\n\
    <string>0xFF1FFF3F</string>\r\n\
    <key>LocationInChassis</key>\r\n\
    <string>Part Component</string>\r\n\
    <key>Manufacturer</key>\r\n\
    <string>Apple Inc.</string>\r\n\
    <key>Memory</key>\r\n\
    <dict>\r\n\
      <key>Channels</key>\r\n\
      <integer>2</integer>\r\n\
      <key>Modules</key>\r\n\
      <array>\r\n\
        <dict>\r\n\
          <key>Frequency</key>\r\n\
          <integer>333</integer>\r\n\
          <key>Part</key>\r\n\
          <string>Part1</string>\r\n\
          <key>Serial</key>\r\n\
          <string>Ser1</string>\r\n\
          <key>Size</key>\r\n\
          <integer>2048</integer>\r\n\
          <key>Slot</key>\r\n\
          <integer>1</integer>\r\n\
          <key>Type</key>\r\n\
          <string>DDR</string>\r\n\
          <key>Vendor</key>\r\n\
          <string>v1</string>\r\n\
        </dict>\r\n\
        <dict>\r\n\
          <key>Frequency</key>\r\n\
          <integer>366</integer>\r\n\
          <key>Part</key>\r\n\
          <string>Part2</string>\r\n\
          <key>Serial</key>\r\n\
          <string>Ser2</string>\r\n\
          <key>Size</key>\r\n\
          <integer>4096</integer>\r\n\
          <key>Slot</key>\r\n\
          <integer>2</integer>\r\n\
          <key>Type</key>\r\n\
          <string>DDR2</string>\r\n\
          <key>Vendor</key>\r\n\
          <string>v2</string>\r\n\
        </dict>\r\n\
      </array>\r\n\
      <key>SlotCount</key>\r\n\
      <integer>4</integer>\r\n\
    </dict>\r\n\
    <key>Mobile</key>\r\n\
    <true/>\r\n\
    <key>PlatformFeature</key>\r\n\
    <string>0xFFFF</string>\r\n\
    <key>ProductName</key>\r\n\
    <string>MacBookPro8,1</string>\r\n\
    <key>SerialNumber</key>\r\n\
    <string>W89G91VFDH2G</string>\r\n\
    <key>Slots</key>\r\n\
    <array>\r\n\
      <dict>\r\n\
        <key>Device</key>\r\n\
        <string>NVidia</string>\r\n\
        <key>ID</key>\r\n\
        <integer>1</integer>\r\n\
        <key>Name</key>\r\n\
        <string>APPL,sdfsdf</string>\r\n\
        <key>Type</key>\r\n\
        <integer>1</integer>\r\n\
      </dict>\r\n\
    </array>\r\n\
    <key>SmUUID</key>\r\n\
    <string>F1AB23C0-C35A-473E-BDB7-455C3A6271E8</string>\r\n\
    <key>Version</key>\r\n\
    <string>1.0</string>\r\n\
  </dict>\r\n\
  <key>SystemParameters</key>\r\n\
  <dict>\r\n\
    <key>BacklightLevel</key>\r\n\
    <string>2</string>\r\n\
    <key>CustomUUID</key>\r\n\
    <string>2926A57C-FF0E-4A64-980F-23483BD41969</string>\r\n\
    <key>InjectKexts</key>\r\n\
    <string>Yes</string>\r\n\
    <key>InjectSystemID</key>\r\n\
    <true/>\r\n\
    <key>NoCaches</key>\r\n\
    <true/>\r\n\
    <key>NvidiaWeb</key>\r\n\
    <true/>\r\n\
  </dict>\r\n\
</dict>\r\n\
</plist>";


static const char* config_test =
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n\
<!DOCTYPE plist PUBLIC\"-//Apple//DTD PLIST 1.0//EN\"\"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\r\n\
<plist version=\"1.0\">\r\n\
<dict>\r\n\
  <key>ACPIx</key>\r\n\
  <dict>\r\n\
    <key>AutoMerge</key>\r\n\
    <integer>0</integer>\r\n\
  </dict>\r\n\
</dict>\r\n\
</plist>";



#define RETURN_IF_FALSE(Expression) do { bool b = Expression; if ( !b ) return false; } while (0);

static int breakpoint(int i)
{
  return i;
}

int config_plist_tests()
{
  (void)config_all;
//  int ret;
//
//  const char* tag;
//  size_t length;
//  bool isOpeningTag, isClosingTag;
  bool b;
  ConfigPlist configPlistTest;
  
  XmlLiteParser xmlLiteParser;
//  xmlLiteParser.init(config_all, strlen(config_all));
  xmlLiteParser.init(config_test, strlen(config_test));

  b = configPlistTest.parse(&xmlLiteParser, LString8("main"));
  for ( size_t idx = 0 ; idx < xmlLiteParser.getErrorsAndWarnings().size() ; idx++ ) {
    if ( !xmlLiteParser.getErrorsAndWarnings()[idx].isError) printf("Warning: %s\n", xmlLiteParser.getErrorsAndWarnings()[idx].msg.c_str());
    if ( xmlLiteParser.getErrorsAndWarnings()[idx].isError) printf("Error: %s\n", xmlLiteParser.getErrorsAndWarnings()[idx].msg.c_str());
  }
  if ( !b ) {
    return breakpoint(102);
  }
//  if ( !configPlistTest.validate(xmlLiteParser, subXmlPath, pos, generateErrors) ) {


  return 0;
}
