require 'sinatra'

get '/' do
	puts "Worked!"
end

post '/' do
	puts params[:update]
end
