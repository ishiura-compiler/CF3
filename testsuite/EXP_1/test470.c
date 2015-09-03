#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = INT32_MAX;
static volatile int64_t t0 = 63929926LL;
static int16_t x9 = INT16_MIN;
uint32_t x12 = 401U;
static int8_t x13 = INT8_MIN;
int16_t x18 = INT16_MAX;
volatile uint64_t t3 = 41416456704LLU;
int32_t x25 = -30503;
int64_t x33 = -1LL;
uint8_t x41 = UINT8_MAX;
static int16_t x42 = INT16_MIN;
static int16_t x43 = INT16_MIN;
static int32_t x44 = INT32_MIN;
static uint64_t x58 = 117341778547LLU;
static volatile uint64_t t9 = 6LLU;
static int8_t x65 = -7;
static int64_t x67 = INT64_MIN;
int32_t x79 = -948;
uint32_t x80 = 0U;
static int16_t x93 = INT16_MAX;
int8_t x111 = INT8_MIN;
static volatile uint16_t x117 = 3U;
int32_t x125 = -2;
volatile uint16_t x136 = 1U;
int16_t x138 = INT16_MAX;
volatile int64_t x140 = -1LL;
volatile uint16_t x146 = 22220U;
uint64_t t29 = 429514224067199879LLU;
static uint16_t x169 = 28U;
uint32_t x170 = UINT32_MAX;
int64_t x172 = -1LL;
int16_t x184 = INT16_MIN;
uint64_t t32 = 2149468858949009LLU;
static int8_t x191 = INT8_MAX;
uint16_t x192 = 375U;
int16_t x195 = INT16_MIN;
uint64_t t34 = 0LLU;
volatile int32_t t35 = -463;
static uint64_t x208 = 291840375234LLU;
static int32_t t37 = 105044165;
static int64_t x233 = -408394124108LL;
volatile int64_t t41 = -157882461LL;
int8_t x240 = INT8_MIN;
int32_t x246 = -72;
volatile int64_t x275 = -1LL;
uint64_t x277 = 44LLU;
int8_t x279 = INT8_MIN;
volatile int16_t x280 = INT16_MIN;
int8_t x284 = 2;
int64_t x302 = -1LL;
int8_t x315 = INT8_MIN;
int16_t x316 = -1;
static uint32_t t57 = 886U;
uint32_t x331 = 1711594U;
int64_t x340 = -1LL;
int8_t x351 = INT8_MAX;
int32_t x356 = INT32_MIN;
int64_t t63 = -12872599LL;
int16_t x361 = INT16_MAX;
int16_t x370 = 1;
uint64_t x378 = 1133083323096LLU;
volatile int16_t x391 = 8;
static uint64_t t68 = UINT64_MAX;
int16_t x393 = -13;
uint64_t x410 = UINT64_MAX;
volatile int16_t x413 = INT16_MIN;
uint8_t x418 = 3U;
int32_t t73 = -45;
int8_t x431 = INT8_MIN;
volatile int64_t t75 = -527936003539LL;
static uint32_t x447 = UINT32_MAX;
int8_t x450 = INT8_MIN;
int32_t t78 = 6726919;
volatile int64_t t79 = 219LL;
uint64_t t80 = 272544398LLU;
static int16_t x476 = 373;
uint8_t x479 = 40U;
volatile int16_t x480 = -12;
int32_t t82 = -1875;
uint32_t x481 = 56U;
int32_t x482 = -5;
int64_t x484 = INT64_MAX;
uint64_t x487 = 29860746269LLU;
uint64_t t84 = 23LLU;
volatile uint32_t x521 = 102012934U;
volatile int16_t x528 = -56;
int32_t t91 = 7737;
volatile uint16_t x550 = 9U;
uint64_t x561 = 3665829894929410LLU;
volatile uint64_t t96 = 2LLU;
static int8_t x583 = INT8_MIN;
int64_t x587 = -1LL;
static int64_t x588 = INT64_MAX;


void f0(void) {
	static int8_t x1 = 0;
	int64_t x3 = 378179925407239217LL;
	static int16_t x4 = INT16_MAX;

	t0 = (((x1*x2)&x3)-x4);

	if (t0 != -32767LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x10 = 2811LLU;
	uint8_t x11 = 19U;
	uint64_t t1 = 1953LLU;

	t1 = (((x9*x10)&x11)-x12);

	if (t1 != 18446744073709551215LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x14 = -1LL;
	volatile int16_t x15 = INT16_MIN;
	uint64_t x16 = 711678LLU;
	uint64_t t2 = 3775913LLU;

	t2 = (((x13*x14)&x15)-x16);

	if (t2 != 18446744073708839938LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	static int64_t x19 = INT64_MIN;
	static volatile uint32_t x20 = UINT32_MAX;

	t3 = (((x17*x18)&x19)-x20);

	if (t3 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x26 = 194305LLU;
	uint64_t x27 = 207637258061559319LLU;
	int16_t x28 = INT16_MIN;
	uint64_t t4 = 7614101753915264LLU;

	t4 = (((x25*x26)&x27)-x28);

	if (t4 != 207637256446453265LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	uint32_t x30 = UINT32_MAX;
	uint32_t x31 = 1070619676U;
	volatile int64_t x32 = 93602892LL;
	volatile int64_t t5 = -3234847LL;

	t5 = (((x29*x30)&x31)-x32);

	if (t5 != -93602892LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x34 = INT32_MIN;
	uint16_t x35 = 13756U;
	static volatile int64_t x36 = -1LL;
	static int64_t t6 = 378901722LL;

	t6 = (((x33*x34)&x35)-x36);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t t7 = 450156;

	t7 = (((x41*x42)&x43)-x44);

	if (t7 != 2139127808) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = 728649804206837913LLU;
	int32_t x54 = INT32_MIN;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -795083489;
	volatile uint64_t t8 = 9LLU;

	t8 = (((x53*x54)&x55)-x56);

	if (t8 != 10037388545639056097LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x57 = 2253;
	uint16_t x59 = UINT16_MAX;
	static volatile int64_t x60 = 128141567486011LL;

	t9 = (((x57*x58)&x59)-x60);

	if (t9 != 18446615932142081500LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = -1;
	int8_t x62 = INT8_MIN;
	volatile uint16_t x63 = UINT16_MAX;
	int32_t x64 = -1;
	int32_t t10 = -1816;

	t10 = (((x61*x62)&x63)-x64);

	if (t10 != 129) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x66 = UINT32_MAX;
	volatile int16_t x68 = INT16_MIN;
	int64_t t11 = 75730418132060855LL;

	t11 = (((x65*x66)&x67)-x68);

	if (t11 != 32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x73 = UINT8_MAX;
	volatile int64_t x74 = -14740417537013LL;
	volatile uint32_t x75 = 158784865U;
	static int8_t x76 = INT8_MAX;
	int64_t t12 = -71118023610796059LL;

	t12 = (((x73*x74)&x75)-x76);

	if (t12 != 158649314LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = UINT32_MAX;
	int8_t x78 = 7;
	volatile uint32_t t13 = 121420U;

	t13 = (((x77*x78)&x79)-x80);

	if (t13 != 4294966344U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x81 = 1766830736U;
	static int32_t x82 = 81;
	int32_t x83 = -1;
	volatile int16_t x84 = INT16_MAX;
	static volatile uint32_t t14 = 64U;

	t14 = (((x81*x82)&x83)-x84);

	if (t14 != 1379336081U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x89 = INT8_MAX;
	uint32_t x90 = 245165483U;
	static int8_t x91 = INT8_MAX;
	uint64_t x92 = UINT64_MAX;
	static volatile uint64_t t15 = 335903LLU;

	t15 = (((x89*x90)&x91)-x92);

	if (t15 != 86LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x94 = 22695U;
	volatile uint32_t x95 = 4U;
	int16_t x96 = INT16_MIN;
	uint32_t t16 = 34U;

	t16 = (((x93*x94)&x95)-x96);

	if (t16 != 32768U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x101 = 149930U;
	int32_t x102 = -1;
	int32_t x103 = -1;
	int32_t x104 = 46;
	volatile uint32_t t17 = 0U;

	t17 = (((x101*x102)&x103)-x104);

	if (t17 != 4294817320U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x109 = INT32_MIN;
	int64_t x110 = 819106LL;
	static uint64_t x112 = UINT64_MAX;
	uint64_t t18 = 13880LLU;

	t18 = (((x109*x110)&x111)-x112);

	if (t18 != 18444985056968572929LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x113 = -1;
	int8_t x114 = -1;
	uint32_t x115 = 909893681U;
	int32_t x116 = INT32_MAX;
	static volatile uint32_t t19 = 6U;

	t19 = (((x113*x114)&x115)-x116);

	if (t19 != 2147483650U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x118 = 3275956U;
	volatile uint8_t x119 = UINT8_MAX;
	int16_t x120 = INT16_MAX;
	uint32_t t20 = 59064U;

	t20 = (((x117*x118)&x119)-x120);

	if (t20 != 4294934557U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x121 = 304724696LLU;
	uint64_t x122 = UINT64_MAX;
	int16_t x123 = -192;
	static int16_t x124 = -8;
	uint64_t t21 = 54126897LLU;

	t21 = (((x121*x122)&x123)-x124);

	if (t21 != 18446744073404826888LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x126 = 1149332192137695141LLU;
	uint8_t x127 = 1U;
	uint64_t x128 = 6029761326198996496LLU;
	volatile uint64_t t22 = 7960987608986751LLU;

	t22 = (((x125*x126)&x127)-x128);

	if (t22 != 12416982747510555120LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x129 = 26U;
	uint64_t x130 = 11963391LLU;
	static int8_t x131 = -1;
	uint8_t x132 = 77U;
	volatile uint64_t t23 = 30730940LLU;

	t23 = (((x129*x130)&x131)-x132);

	if (t23 != 311048089LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x133 = 7016051348174744LLU;
	volatile uint32_t x134 = UINT32_MAX;
	int64_t x135 = 0LL;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (((x133*x134)&x135)-x136);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x137 = INT16_MAX;
	static int64_t x139 = -507LL;
	int64_t t25 = 13088031262202009LL;

	t25 = (((x137*x138)&x139)-x140);

	if (t25 != 1073676290LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = INT16_MAX;
	uint64_t x147 = UINT64_MAX;
	static int8_t x148 = -1;
	uint64_t t26 = 8548639650779455LLU;

	t26 = (((x145*x146)&x147)-x148);

	if (t26 != 728082741LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x149 = 1852208838770599319LLU;
	volatile int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MIN;
	uint32_t x152 = UINT32_MAX;
	uint64_t t27 = 0LLU;

	t27 = (((x149*x150)&x151)-x152);

	if (t27 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = INT8_MIN;
	static volatile uint32_t x154 = 9U;
	uint32_t x155 = 52284U;
	static uint8_t x156 = 0U;
	static volatile uint32_t t28 = 588U;

	t28 = (((x153*x154)&x155)-x156);

	if (t28 != 51200U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x165 = INT16_MIN;
	static uint64_t x166 = 679406945257LLU;
	static int64_t x167 = INT64_MIN;
	volatile int64_t x168 = INT64_MAX;

	t29 = (((x165*x166)&x167)-x168);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x171 = INT64_MIN;
	int64_t t30 = -189160723795LL;

	t30 = (((x169*x170)&x171)-x172);

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x181 = UINT16_MAX;
	static volatile int8_t x182 = -1;
	int32_t x183 = INT32_MAX;
	int32_t t31 = -18016;

	t31 = (((x181*x182)&x183)-x184);

	if (t31 != 2147450881) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x185 = 48U;
	uint64_t x186 = UINT64_MAX;
	int32_t x187 = -42;
	int64_t x188 = -1LL;

	t32 = (((x185*x186)&x187)-x188);

	if (t32 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x189 = 14;
	static int16_t x190 = INT16_MAX;
	static volatile int32_t t33 = -1;

	t33 = (((x189*x190)&x191)-x192);

	if (t33 != -261) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x193 = 128011628812362LLU;
	static int8_t x194 = INT8_MIN;
	uint16_t x196 = UINT16_MAX;

	t34 = (((x193*x194)&x195)-x196);

	if (t34 != 18430358585221480449LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x197 = INT8_MIN;
	int8_t x198 = 3;
	int32_t x199 = INT32_MIN;
	volatile int32_t x200 = INT32_MIN;

	t35 = (((x197*x198)&x199)-x200);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x205 = 30U;
	uint64_t x206 = 291264748708569445LLU;
	int64_t x207 = -241913478LL;
	uint64_t t36 = 5577465984313LLU;

	t36 = (((x205*x206)&x207)-x208);

	if (t36 != 8737942169315829648LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x213 = 61U;
	volatile int16_t x214 = INT16_MAX;
	volatile int8_t x215 = -1;
	int32_t x216 = -6;

	t37 = (((x213*x214)&x215)-x216);

	if (t37 != 1998793) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MAX;
	static int32_t x219 = INT32_MIN;
	volatile int16_t x220 = INT16_MIN;
	static volatile int32_t t38 = -141182;

	t38 = (((x217*x218)&x219)-x220);

	if (t38 != -2147450880) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x225 = -1LL;
	uint32_t x226 = 9U;
	int16_t x227 = -1;
	static int32_t x228 = INT32_MIN;
	volatile int64_t t39 = 3177840412066735512LL;

	t39 = (((x225*x226)&x227)-x228);

	if (t39 != 2147483639LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x229 = -46200;
	int8_t x230 = INT8_MAX;
	uint8_t x231 = 36U;
	int64_t x232 = INT64_MAX;
	int64_t t40 = 2569LL;

	t40 = (((x229*x230)&x231)-x232);

	if (t40 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x234 = 2U;
	volatile int16_t x235 = -1;
	int64_t x236 = INT64_MIN;

	t41 = (((x233*x234)&x235)-x236);

	if (t41 != 9223371220066527592LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x237 = -788;
	int16_t x238 = INT16_MAX;
	int64_t x239 = 41255810534860645LL;
	volatile int64_t t42 = -1022748868LL;

	t42 = (((x237*x238)&x239)-x240);

	if (t42 != 41255810509046660LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x241 = -1LL;
	int16_t x242 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MIN;
	int64_t t43 = 2047480471LL;

	t43 = (((x241*x242)&x243)-x244);

	if (t43 != 2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = -1;
	volatile int32_t x247 = INT32_MIN;
	uint64_t x248 = 2147LLU;
	static uint64_t t44 = 266312726470206LLU;

	t44 = (((x245*x246)&x247)-x248);

	if (t44 != 18446744073709549469LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x249 = -24;
	int8_t x250 = INT8_MIN;
	static int8_t x251 = 0;
	static uint32_t x252 = 4762606U;
	volatile uint32_t t45 = 105U;

	t45 = (((x249*x250)&x251)-x252);

	if (t45 != 4290204690U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x253 = 2967087057188868LLU;
	int32_t x254 = 17805;
	static uint8_t x255 = UINT8_MAX;
	uint64_t x256 = 14905434491378LLU;
	static uint64_t t46 = 14728601LLU;

	t46 = (((x253*x254)&x255)-x256);

	if (t46 != 18446729168275060290LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x257 = 99U;
	static volatile uint8_t x258 = 0U;
	static uint16_t x259 = UINT16_MAX;
	int64_t x260 = -5729507134066LL;
	volatile int64_t t47 = 180LL;

	t47 = (((x257*x258)&x259)-x260);

	if (t47 != 5729507134066LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x265 = -1;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	volatile int32_t t48 = 63294;

	t48 = (((x265*x266)&x267)-x268);

	if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x269 = 1527LLU;
	int32_t x270 = INT32_MAX;
	volatile int64_t x271 = 29984715LL;
	static int8_t x272 = -6;
	uint64_t t49 = 34731444026184LLU;

	t49 = (((x269*x270)&x271)-x272);

	if (t49 != 29983247LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x273 = 2334LL;
	int16_t x274 = INT16_MIN;
	int8_t x276 = -10;
	volatile int64_t t50 = -62LL;

	t50 = (((x273*x274)&x275)-x276);

	if (t50 != -76480502LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x278 = 0;
	static uint64_t t51 = 12170137480451LLU;

	t51 = (((x277*x278)&x279)-x280);

	if (t51 != 32768LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x281 = 2278U;
	int16_t x282 = -349;
	int16_t x283 = -1;
	volatile int32_t t52 = 35;

	t52 = (((x281*x282)&x283)-x284);

	if (t52 != -795024) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x285 = 81U;
	volatile int32_t x286 = -19309;
	volatile uint16_t x287 = UINT16_MAX;
	int8_t x288 = INT8_MIN;
	int32_t t53 = 458160576;

	t53 = (((x285*x286)&x287)-x288);

	if (t53 != 8963) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x289 = INT64_MIN;
	uint8_t x290 = 1U;
	static int32_t x291 = INT32_MAX;
	static uint8_t x292 = 14U;
	int64_t t54 = 2483LL;

	t54 = (((x289*x290)&x291)-x292);

	if (t54 != -14LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x301 = -1;
	int8_t x303 = INT8_MIN;
	volatile int64_t x304 = 11559291526LL;
	volatile int64_t t55 = 13055234516LL;

	t55 = (((x301*x302)&x303)-x304);

	if (t55 != -11559291526LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x309 = 0U;
	static int16_t x310 = INT16_MAX;
	static uint16_t x311 = 176U;
	int8_t x312 = -1;
	volatile int32_t t56 = -301;

	t56 = (((x309*x310)&x311)-x312);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x313 = 953368510U;
	int16_t x314 = -1;

	t57 = (((x313*x314)&x315)-x316);

	if (t57 != 3341598721U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x321 = -30;
	uint64_t x322 = 38LLU;
	static uint32_t x323 = 226367138U;
	static int32_t x324 = -69;
	static uint64_t t58 = 38LLU;

	t58 = (((x321*x322)&x323)-x324);

	if (t58 != 226366149LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x329 = INT32_MAX;
	uint32_t x330 = UINT32_MAX;
	int16_t x332 = INT16_MIN;
	static uint32_t t59 = 2U;

	t59 = (((x329*x330)&x331)-x332);

	if (t59 != 32768U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x337 = INT16_MIN;
	volatile int16_t x338 = INT16_MAX;
	int8_t x339 = INT8_MAX;
	volatile int64_t t60 = 1756841463446LL;

	t60 = (((x337*x338)&x339)-x340);

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x345 = -1;
	static uint8_t x346 = UINT8_MAX;
	int16_t x347 = -1;
	int64_t x348 = -1LL;
	volatile int64_t t61 = -111019892191219630LL;

	t61 = (((x345*x346)&x347)-x348);

	if (t61 != -254LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x349 = INT16_MIN;
	uint32_t x350 = 22718U;
	int8_t x352 = 3;
	volatile uint32_t t62 = 1054U;

	t62 = (((x349*x350)&x351)-x352);

	if (t62 != 4294967293U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x353 = -7108LL;
	int64_t x354 = -1LL;
	int16_t x355 = -15982;

	t63 = (((x353*x354)&x355)-x356);

	if (t63 != 2147484032LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x362 = 2580435820258680958LLU;
	int32_t x363 = -3438;
	int64_t x364 = -1LL;
	volatile uint64_t t64 = 172050528LLU;

	t64 = (((x361*x362)&x363)-x364);

	if (t64 != 11712432605323891331LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x369 = INT8_MAX;
	int16_t x371 = -1;
	static uint32_t x372 = 130470U;
	volatile uint32_t t65 = 33U;

	t65 = (((x369*x370)&x371)-x372);

	if (t65 != 4294836953U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x377 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	int32_t x380 = INT32_MIN;
	static uint64_t t66 = 65242415304LLU;

	t66 = (((x377*x378)&x379)-x380);

	if (t66 != 1692309561647562752LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x385 = 2U;
	int64_t x386 = -1LL;
	int16_t x387 = INT16_MIN;
	static int16_t x388 = -662;
	volatile int64_t t67 = -1485LL;

	t67 = (((x385*x386)&x387)-x388);

	if (t67 != -32106LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x389 = UINT64_MAX;
	volatile int64_t x390 = INT64_MIN;
	uint64_t x392 = 1LLU;

	t68 = (((x389*x390)&x391)-x392);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x394 = INT8_MIN;
	int32_t x395 = -1;
	static uint64_t x396 = 520976LLU;
	uint64_t t69 = 26971LLU;

	t69 = (((x393*x394)&x395)-x396);

	if (t69 != 18446744073709032304LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x409 = 35U;
	uint16_t x411 = 22862U;
	int16_t x412 = -1;
	static uint64_t t70 = 1639LLU;

	t70 = (((x409*x410)&x411)-x412);

	if (t70 != 22861LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x414 = 0;
	int32_t x415 = INT32_MIN;
	uint8_t x416 = 2U;
	int32_t t71 = -348613;

	t71 = (((x413*x414)&x415)-x416);

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x417 = 3U;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = 1;
	uint32_t t72 = 232U;

	t72 = (((x417*x418)&x419)-x420);

	if (t72 != 8U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x425 = UINT16_MAX;
	volatile int8_t x426 = INT8_MAX;
	int8_t x427 = INT8_MIN;
	static int8_t x428 = INT8_MIN;

	t73 = (((x425*x426)&x427)-x428);

	if (t73 != 8323072) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x429 = UINT16_MAX;
	static int8_t x430 = INT8_MAX;
	uint8_t x432 = UINT8_MAX;
	static volatile int32_t t74 = 1027870;

	t74 = (((x429*x430)&x431)-x432);

	if (t74 != 8322689) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x437 = -833;
	volatile int64_t x438 = 4524LL;
	static int32_t x439 = -1708580;
	int64_t x440 = INT64_MIN;

	t75 = (((x437*x438)&x439)-x440);

	if (t75 != 9223372036850871636LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x441 = INT16_MIN;
	uint16_t x442 = UINT16_MAX;
	uint8_t x443 = UINT8_MAX;
	int8_t x444 = INT8_MIN;
	volatile int32_t t76 = 6107905;

	t76 = (((x441*x442)&x443)-x444);

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x445 = -1LL;
	static int32_t x446 = INT32_MAX;
	int8_t x448 = -25;
	int64_t t77 = -461236499018LL;

	t77 = (((x445*x446)&x447)-x448);

	if (t77 != 2147483674LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x449 = 1;
	uint16_t x451 = 5535U;
	static int8_t x452 = INT8_MAX;

	t78 = (((x449*x450)&x451)-x452);

	if (t78 != 5377) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x457 = UINT8_MAX;
	int32_t x458 = 1;
	uint32_t x459 = 41020198U;
	int64_t x460 = -47130914LL;

	t79 = (((x457*x458)&x459)-x460);

	if (t79 != 47130952LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x469 = 89600891809958LLU;
	int64_t x470 = INT64_MIN;
	uint16_t x471 = 7U;
	volatile int8_t x472 = INT8_MIN;

	t80 = (((x469*x470)&x471)-x472);

	if (t80 != 128LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x473 = INT8_MIN;
	volatile int8_t x474 = INT8_MIN;
	int8_t x475 = INT8_MAX;
	int32_t t81 = -5468229;

	t81 = (((x473*x474)&x475)-x476);

	if (t81 != -373) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x477 = INT16_MIN;
	volatile int16_t x478 = 123;

	t82 = (((x477*x478)&x479)-x480);

	if (t82 != 12) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x483 = INT32_MAX;
	volatile int64_t t83 = -1LL;

	t83 = (((x481*x482)&x483)-x484);

	if (t83 != -9223372034707292439LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x485 = INT64_MIN;
	int16_t x486 = 0;
	static int64_t x488 = -4132218717LL;

	t84 = (((x485*x486)&x487)-x488);

	if (t84 != 4132218717LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x489 = INT16_MIN;
	uint8_t x490 = UINT8_MAX;
	int8_t x491 = 60;
	uint32_t x492 = UINT32_MAX;
	volatile uint32_t t85 = 3U;

	t85 = (((x489*x490)&x491)-x492);

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x497 = 1;
	static int16_t x498 = INT16_MIN;
	int64_t x499 = -21682LL;
	uint16_t x500 = 29055U;
	volatile int64_t t86 = 3640LL;

	t86 = (((x497*x498)&x499)-x500);

	if (t86 != -61823LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x501 = INT8_MIN;
	uint8_t x502 = UINT8_MAX;
	int64_t x503 = INT64_MAX;
	int32_t x504 = INT32_MAX;
	int64_t t87 = 486376LL;

	t87 = (((x501*x502)&x503)-x504);

	if (t87 != 9223372034707259521LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x509 = INT8_MIN;
	uint16_t x510 = 86U;
	int32_t x511 = INT32_MAX;
	uint64_t x512 = UINT64_MAX;
	volatile uint64_t t88 = 890208662467453734LLU;

	t88 = (((x509*x510)&x511)-x512);

	if (t88 != 2147472641LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x522 = 7754204338016631029LLU;
	volatile int8_t x523 = -1;
	int32_t x524 = -1;
	volatile uint64_t t89 = 221267LLU;

	t89 = (((x521*x522)&x523)-x524);

	if (t89 != 6505207864315530687LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x525 = -385;
	uint8_t x526 = 94U;
	int8_t x527 = 3;
	int32_t t90 = -15752081;

	t90 = (((x525*x526)&x527)-x528);

	if (t90 != 58) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x541 = INT8_MIN;
	static int32_t x542 = -679128;
	volatile int16_t x543 = -1;
	int16_t x544 = INT16_MIN;

	t91 = (((x541*x542)&x543)-x544);

	if (t91 != 86961152) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x545 = INT8_MIN;
	static uint32_t x546 = UINT32_MAX;
	int32_t x547 = INT32_MIN;
	static uint32_t x548 = 413635U;
	volatile uint32_t t92 = 863456544U;

	t92 = (((x545*x546)&x547)-x548);

	if (t92 != 4294553661U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x549 = INT8_MAX;
	volatile int64_t x551 = INT64_MIN;
	volatile uint32_t x552 = UINT32_MAX;
	int64_t t93 = 302784615137LL;

	t93 = (((x549*x550)&x551)-x552);

	if (t93 != -4294967295LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x553 = -1;
	uint64_t x554 = 1976LLU;
	uint8_t x555 = 4U;
	volatile uint64_t x556 = 538488109LLU;
	volatile uint64_t t94 = 69LLU;

	t94 = (((x553*x554)&x555)-x556);

	if (t94 != 18446744073171063507LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x562 = UINT64_MAX;
	volatile int16_t x563 = -1;
	static int16_t x564 = 0;
	static volatile uint64_t t95 = 16LLU;

	t95 = (((x561*x562)&x563)-x564);

	if (t95 != 18443078243814622206LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x565 = 15180659431LLU;
	int16_t x566 = INT16_MIN;
	static int16_t x567 = INT16_MIN;
	int8_t x568 = INT8_MIN;

	t96 = (((x565*x566)&x567)-x568);

	if (t96 != 18446246633861316736LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x577 = INT16_MAX;
	static int8_t x578 = INT8_MIN;
	static volatile int8_t x579 = INT8_MIN;
	int64_t x580 = -1LL;
	volatile int64_t t97 = 685955971LL;

	t97 = (((x577*x578)&x579)-x580);

	if (t97 != -4194175LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x581 = INT8_MIN;
	int32_t x582 = -1;
	int16_t x584 = -1;
	int32_t t98 = -245378;

	t98 = (((x581*x582)&x583)-x584);

	if (t98 != 129) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x585 = 0U;
	int32_t x586 = 8969;
	int64_t t99 = 12707LL;

	t99 = (((x585*x586)&x587)-x588);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

