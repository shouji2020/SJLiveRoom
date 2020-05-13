

Pod::Spec.new do |s|
  s.name             = 'SJLiveRoom'
  s.version          = '0.0.1'
  s.summary          = 'shouji playSDK'

  s.homepage         = 'https://github.com/shouji2020/SJLiveRoom'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'lijinzhu' => 'lijinzhu@dobest.com' }
  s.source           = { :git => 'https://github.com/shouji2020/SJLiveRoom.git', :tag => s.version}

  s.ios.deployment_target = '9.0'

  s.source_files = 'SJLiveRoom/*'
  s.resource = 'SJLiveRoom/SJLiveBundle.bundle'
  s.vendored_frameworks = 'SJLiveRoom/*.framework'

  # s.frameworks = 'UIKit', 'MapKit'
  s.dependency 'AFNetworking', '4.0.0'
  s.dependency 'SDWebImage'
  s.dependency 'MJRefresh' , '~> 3.2.0'
  s.dependency 'Masonry', '1.1.0'
  s.dependency 'MJExtension'
  s.dependency 'Toast', '~> 3.0'
  s.dependency 'CocoaLumberjack'
  s.dependency 'YYText', '~> 1.0.7'
  s.dependency 'SVGAPlayer'
  s.dependency 'NIMSDK', '~> 7.0.3'
end
