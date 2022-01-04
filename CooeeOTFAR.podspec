Pod::Spec.new do |s|
  s.name         = "CooeeOTFAR"
  s.version      = "0.0.1"
  s.summary      = "Hyper-personalised Mobile App Re-Engagement via Machine Learning"
  s.homepage     = "https://github.com/letscooee/cooee-ios-otf-ar"
  s.description  = "Hyper-personalised Mobile App Re-Engagement via Machine Learning"
  
  s.license      = { :type => "MIT" }

  s.author       = { "Ashish Gaikwad" => "ashishgaikwad534@gmail.com" }
  
  s.ios.deployment_target  = "11.0"

  s.source       = { :git => "git@github.com:letscooee/cooee-ios-otf-ar.git"}
  s.ios.vendored_frameworks = 'CooeeOTFAR.xcframework'

end

