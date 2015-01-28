Pod::Spec.new do |s|
  s.name                    = "Fountain"
  s.version                 = "0.1-alpha1"
  s.summary                 = "Pluggable data sources and adapters for representing content with table view, collection views or other custom elements."
  s.authors                 = { "Tobias Kräntzer" => "info@tobias-kraentzer.de" }
  s.license                 = { :type => 'BSD', :file => 'LICENSE.md' }
  s.homepage                = 'https://github.com/anagromataf/Fountain'
  s.source                  = :git => 'https://github.com/anagromataf/Fountain.git', :tag => '0.1-alpha1'
  s.requires_arc            = true
  s.source_files            = 'Fountain/Fountain/**/*.{h,m,c}'
  s.frameworks = 'CoreData'
end
