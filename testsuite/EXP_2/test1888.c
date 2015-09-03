#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1;
static int8_t x11 = 1;
static int16_t x12 = -1;
int64_t x23 = 3496884288LL;
volatile int64_t t8 = 132201896612156LL;
uint8_t x49 = 2U;
uint32_t x52 = 257967653U;
uint64_t x53 = 794990LLU;
static uint16_t x63 = 3U;
volatile int64_t x76 = 47390431LL;
uint8_t x78 = UINT8_MAX;
volatile uint64_t x83 = UINT64_MAX;
int16_t x84 = -239;
static int16_t x95 = INT16_MIN;
int32_t x112 = INT32_MAX;
int64_t x119 = INT64_MAX;
int64_t t24 = INT64_MAX;
int64_t x122 = 148754LL;
static uint8_t x135 = 0U;
uint64_t x146 = 18LLU;
uint32_t x151 = 56U;
uint64_t x154 = 993545131770001153LLU;
uint32_t x168 = UINT32_MAX;
uint32_t t34 = 1U;
int16_t x171 = INT16_MAX;
static volatile uint64_t t36 = 721301817258418LLU;
static uint8_t x181 = 22U;
int32_t t37 = -72918903;
int32_t x186 = -145418;
uint16_t x188 = 119U;
volatile uint64_t t41 = 264LLU;
volatile int32_t x215 = 2;
int32_t x216 = -1;
int32_t t44 = 23671;
static int16_t x227 = -1;
int8_t x228 = 9;
int8_t x237 = -5;
int16_t x245 = -283;
volatile int8_t x266 = -1;
volatile uint64_t x267 = UINT64_MAX;
volatile uint64_t t50 = 770807LLU;
volatile int8_t x273 = INT8_MAX;
int32_t x274 = INT32_MIN;
int64_t x281 = -1LL;
int16_t x284 = -1;
static uint8_t x285 = 1U;
volatile int64_t x286 = -1LL;
volatile uint32_t x288 = 66283738U;
int8_t x290 = INT8_MAX;
static int8_t x292 = INT8_MAX;
int32_t t56 = -8711092;
int32_t x298 = INT32_MIN;
uint64_t x308 = 113681312203988189LLU;
uint32_t x310 = UINT32_MAX;
int8_t x311 = INT8_MIN;
int8_t x313 = -1;
int16_t x331 = INT16_MIN;
static int8_t x333 = 0;
static int64_t x335 = -1LL;
int8_t x336 = 18;
int64_t x362 = INT64_MAX;
volatile int32_t t71 = INT32_MIN;
int16_t x373 = -1;
static uint64_t x376 = UINT64_MAX;
uint32_t x378 = UINT32_MAX;
int64_t x380 = -3097257911527900LL;
volatile int8_t x384 = INT8_MIN;
uint32_t x395 = UINT32_MAX;
volatile int64_t x398 = INT64_MIN;
int64_t x401 = INT64_MIN;
static volatile uint32_t x402 = 2865683U;
static int16_t x404 = -6;
uint8_t x408 = UINT8_MAX;
volatile uint32_t t80 = 218752U;
int8_t x418 = -1;
int64_t x419 = -25LL;
volatile int32_t x422 = -1079;
int16_t x424 = INT16_MAX;
uint32_t x439 = 2075088U;
int16_t x440 = 7060;
int32_t x445 = INT32_MAX;
int64_t x446 = -1LL;
int8_t x447 = 1;
static int8_t x452 = 3;
uint16_t x467 = 27U;
int16_t x468 = -1;
uint8_t x473 = UINT8_MAX;
int64_t t92 = -143665993525LL;
uint16_t x478 = 15846U;
int64_t x490 = 127894LL;
volatile int32_t x491 = -1;
int64_t x498 = 13669834805899328LL;
volatile uint64_t t97 = UINT64_MAX;


void f0(void) {
	int32_t x1 = 7;
	uint8_t x2 = 1U;
	int8_t x4 = -52;
	int32_t t0 = -3242055;

	t0 = ((x1*(x2|x3))*x4);

	if (t0 != 364) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	int16_t x6 = INT16_MAX;
	volatile uint32_t x7 = 6964575U;
	int32_t x8 = INT32_MAX;
	static uint32_t t1 = 3U;

	t1 = ((x5*(x6|x7))*x8);

	if (t1 != 2154463231U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 66296U;
	int16_t x10 = INT16_MIN;
	volatile uint32_t t2 = 11235660U;

	t2 = ((x9*(x10|x11))*x12);

	if (t2 != 2172321032U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1;
	static int64_t x14 = -1LL;
	volatile uint16_t x15 = UINT16_MAX;
	uint16_t x16 = UINT16_MAX;
	volatile int64_t t3 = 615131620424685LL;

	t3 = ((x13*(x14|x15))*x16);

	if (t3 != 65535LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	int16_t x18 = -7;
	static uint16_t x19 = 3U;
	int8_t x20 = -1;
	volatile int32_t t4 = 327115;

	t4 = ((x17*(x18|x19))*x20);

	if (t4 != -5) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int16_t x22 = 0;
	static int32_t x24 = INT32_MAX;
	volatile uint64_t t5 = 123195860294878098LLU;

	t5 = ((x21*(x22|x23))*x24);

	if (t5 != 10937242249778313280LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1689130LLU;
	static uint32_t x26 = 4U;
	static uint32_t x27 = 1U;
	uint16_t x28 = UINT16_MAX;
	uint64_t t6 = 5813822978587LLU;

	t6 = ((x25*(x26|x27))*x28);

	if (t6 != 553485672750LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	int16_t x34 = 51;
	static uint16_t x35 = 67U;
	int16_t x36 = -1;
	static volatile int32_t t7 = -220040;

	t7 = ((x33*(x34|x35))*x36);

	if (t7 != 115) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	int32_t x46 = INT32_MIN;
	int64_t x47 = -1LL;
	int8_t x48 = INT8_MAX;

	t8 = ((x45*(x46|x47))*x48);

	if (t8 != 272730423296LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x50 = 77446460;
	uint32_t x51 = UINT32_MAX;
	static uint32_t t9 = 3U;

	t9 = ((x49*(x50|x51))*x52);

	if (t9 != 3779031990U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x54 = INT64_MAX;
	int8_t x55 = INT8_MAX;
	volatile uint32_t x56 = 2758312U;
	static uint64_t t10 = 1525743853708833LLU;

	t10 = ((x53*(x54|x55))*x56);

	if (t10 != 18446741880879094736LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 2126U;
	uint32_t x62 = 646U;
	int8_t x64 = INT8_MAX;
	uint32_t t11 = 354109U;

	t11 = ((x61*(x62|x63))*x64);

	if (t11 != 174691294U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = 1323332U;
	int8_t x66 = INT8_MAX;
	static volatile int8_t x67 = INT8_MIN;
	uint64_t x68 = 14LLU;
	uint64_t t12 = 46251LLU;

	t12 = ((x65*(x66|x67))*x68);

	if (t12 != 60111015496LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = -1LL;
	static int16_t x70 = INT16_MIN;
	static int32_t x71 = INT32_MIN;
	int32_t x72 = INT32_MIN;
	int64_t t13 = 216528LL;

	t13 = ((x69*(x70|x71))*x72);

	if (t13 != -70368744177664LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = UINT64_MAX;
	uint16_t x74 = 148U;
	int8_t x75 = INT8_MIN;
	volatile uint64_t t14 = 5LLU;

	t14 = ((x73*(x74|x75))*x76);

	if (t14 != 5118166548LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MIN;
	uint64_t x79 = 359884652991879066LLU;
	int64_t x80 = INT64_MIN;
	volatile uint64_t t15 = 2009905LLU;

	t15 = ((x77*(x78|x79))*x80);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x81 = 2644822176318843LL;
	static int8_t x82 = -1;
	uint64_t t16 = 1729672900394567LLU;

	t16 = ((x81*(x82|x83))*x84);

	if (t16 != 632112500140203477LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MIN;
	uint32_t x86 = 350U;
	int8_t x87 = -1;
	static int8_t x88 = INT8_MAX;
	volatile uint32_t t17 = 356427U;

	t17 = ((x85*(x86|x87))*x88);

	if (t17 != 16256U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -1;
	int16_t x90 = 409;
	int64_t x91 = 1LL;
	int16_t x92 = -1;
	volatile int64_t t18 = 13LL;

	t18 = ((x89*(x90|x91))*x92);

	if (t18 != 409LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x93 = -23;
	volatile uint8_t x94 = 3U;
	static int8_t x96 = 16;
	static volatile int32_t t19 = -3382161;

	t19 = ((x93*(x94|x95))*x96);

	if (t19 != 12057520) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x101 = UINT64_MAX;
	static int16_t x102 = 52;
	int16_t x103 = -14;
	int16_t x104 = INT16_MIN;
	uint64_t t20 = 82LLU;

	t20 = ((x101*(x102|x103))*x104);

	if (t20 != 18446744073709223936LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x105 = 28U;
	static int8_t x106 = 30;
	static int16_t x107 = INT16_MIN;
	uint16_t x108 = 1U;
	volatile int32_t t21 = -1;

	t21 = ((x105*(x106|x107))*x108);

	if (t21 != -916664) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = 538577950U;
	uint8_t x110 = 48U;
	int16_t x111 = INT16_MIN;
	static volatile uint32_t t22 = 2340U;

	t22 = ((x109*(x110|x111))*x112);

	if (t22 != 19708512U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x113 = INT64_MIN;
	volatile uint64_t x114 = 1814808561LLU;
	int32_t x115 = INT32_MAX;
	volatile uint8_t x116 = 23U;
	volatile uint64_t t23 = 2895251424LLU;

	t23 = ((x113*(x114|x115))*x116);

	if (t23 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x117 = -1;
	static uint32_t x118 = UINT32_MAX;
	int32_t x120 = -1;

	t24 = ((x117*(x118|x119))*x120);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 368746206LLU;
	int8_t x123 = INT8_MAX;
	int8_t x124 = 10;
	uint64_t t25 = 19584724LLU;

	t25 = ((x121*(x122|x123))*x124);

	if (t25 != 548926664637780LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = 8029;
	uint32_t x126 = 2U;
	volatile uint64_t x127 = 19796LLU;
	uint8_t x128 = 0U;
	static uint64_t t26 = 22175LLU;

	t26 = ((x125*(x126|x127))*x128);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x129 = -1LL;
	volatile int32_t x130 = INT32_MAX;
	uint16_t x131 = 3U;
	uint64_t x132 = 7173848585192745251LLU;
	uint64_t t27 = 8440251615548953LLU;

	t27 = ((x129*(x130|x131))*x132);

	if (t27 != 11178370463704951075LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 375501U;
	static uint16_t x134 = 548U;
	int16_t x136 = 11228;
	volatile uint32_t t28 = 2U;

	t28 = ((x133*(x134|x135))*x136);

	if (t28 != 4039186992U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x137 = INT32_MIN;
	uint64_t x138 = 971275498573LLU;
	volatile int16_t x139 = -1;
	int16_t x140 = INT16_MIN;
	uint64_t t29 = 42665497094LLU;

	t29 = ((x137*(x138|x139))*x140);

	if (t29 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = 1U;
	int16_t x142 = INT16_MIN;
	int16_t x143 = -4930;
	static int8_t x144 = INT8_MIN;
	static volatile int32_t t30 = 10505;

	t30 = ((x141*(x142|x143))*x144);

	if (t30 != 631040) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = UINT64_MAX;
	static int16_t x147 = INT16_MIN;
	uint32_t x148 = 2957782U;
	volatile uint64_t t31 = 55673061769LLU;

	t31 = ((x145*(x146|x147))*x148);

	if (t31 != 96867360500LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MAX;
	int32_t x150 = INT32_MAX;
	int8_t x152 = INT8_MIN;
	static volatile uint32_t t32 = 8940U;

	t32 = ((x149*(x150|x151))*x152);

	if (t32 != 4194176U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int32_t x155 = INT32_MAX;
	uint64_t x156 = 1927844LLU;
	volatile uint64_t t33 = 13795589456LLU;

	t33 = ((x153*(x154|x155))*x156);

	if (t33 != 17637703180107999908LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = 331U;
	uint8_t x166 = 50U;
	uint32_t x167 = 1365632767U;

	t34 = ((x165*(x166|x167))*x168);

	if (t34 != 3242087499U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = INT8_MIN;
	uint16_t x170 = 414U;
	uint64_t x172 = 43771878349LLU;
	volatile uint64_t t35 = 4960751265175LLU;

	t35 = ((x169*(x170|x171))*x172);

	if (t35 != 18263157112063256192LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x177 = -432095646353LL;
	int32_t x178 = INT32_MAX;
	static volatile uint64_t x179 = 8721LLU;
	uint64_t x180 = UINT64_MAX;

	t36 = ((x177*(x178|x179))*x180);

	if (t36 != 5581130797485108591LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x182 = UINT8_MAX;
	int8_t x183 = 1;
	static int32_t x184 = -1;

	t37 = ((x181*(x182|x183))*x184);

	if (t37 != -5610) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x185 = -1LL;
	int8_t x187 = INT8_MAX;
	static volatile int64_t t38 = 362115469388LL;

	t38 = ((x185*(x186|x187))*x188);

	if (t38 != 17303671LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = INT8_MAX;
	static volatile int8_t x190 = INT8_MAX;
	static int16_t x191 = 44;
	int8_t x192 = 0;
	volatile int32_t t39 = 1384;

	t39 = ((x189*(x190|x191))*x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x193 = -213;
	int8_t x194 = INT8_MIN;
	volatile int8_t x195 = INT8_MIN;
	uint32_t x196 = 357U;
	uint32_t t40 = 20315U;

	t40 = ((x193*(x194|x195))*x196);

	if (t40 != 9733248U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = INT16_MIN;
	uint64_t x198 = 30792649888995591LLU;
	static volatile int32_t x199 = -1;
	static int8_t x200 = 2;

	t41 = ((x197*(x198|x199))*x200);

	if (t41 != 65536LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x209 = UINT32_MAX;
	uint8_t x210 = UINT8_MAX;
	static uint32_t x211 = UINT32_MAX;
	uint16_t x212 = 29605U;
	static volatile uint32_t t42 = 0U;

	t42 = ((x209*(x210|x211))*x212);

	if (t42 != 29605U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x213 = 10101U;
	uint16_t x214 = 48U;
	int32_t t43 = 1015;

	t43 = ((x213*(x214|x215))*x216);

	if (t43 != -505050) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x217 = UINT8_MAX;
	int32_t x218 = -1;
	volatile int16_t x219 = -1;
	int16_t x220 = INT16_MIN;

	t44 = ((x217*(x218|x219))*x220);

	if (t44 != 8355840) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x225 = UINT8_MAX;
	volatile int16_t x226 = 716;
	static int32_t t45 = -9;

	t45 = ((x225*(x226|x227))*x228);

	if (t45 != -2295) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x238 = -1040212;
	static volatile uint64_t x239 = 7713LLU;
	int32_t x240 = INT32_MAX;
	uint64_t t46 = 285270552LLU;

	t46 = ((x237*(x238|x239))*x240);

	if (t46 != 11086717187602785LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x241 = -15;
	int16_t x242 = INT16_MAX;
	static volatile int64_t x243 = -172526LL;
	int32_t x244 = INT32_MAX;
	int64_t t47 = 909959251LL;

	t47 = ((x241*(x242|x243))*x244);

	if (t47 != 5277688023121905LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x246 = -1LL;
	static int64_t x247 = INT64_MIN;
	int64_t x248 = -1LL;
	volatile int64_t t48 = 49664LL;

	t48 = ((x245*(x246|x247))*x248);

	if (t48 != -283LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x249 = INT16_MIN;
	volatile uint64_t x250 = 13132LLU;
	int8_t x251 = -1;
	uint16_t x252 = 5U;
	volatile uint64_t t49 = 239827379LLU;

	t49 = ((x249*(x250|x251))*x252);

	if (t49 != 163840LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x265 = INT32_MAX;
	int32_t x268 = INT32_MIN;

	t50 = ((x265*(x266|x267))*x268);

	if (t50 != 4611686016279904256LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x269 = 381827517169684LLU;
	uint32_t x270 = 1973636U;
	volatile uint64_t x271 = 1LLU;
	int32_t x272 = -1;
	uint64_t t51 = 3675531LLU;

	t51 = ((x269*(x270|x271))*x272);

	if (t51 != 2727591517867995548LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x275 = 380645932965LLU;
	uint32_t x276 = 68U;
	uint64_t t52 = 742890698054LLU;

	t52 = ((x273*(x274|x275))*x276);

	if (t52 != 18446730202943062572LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x277 = -1;
	int32_t x278 = 1;
	static uint32_t x279 = 58514854U;
	uint64_t x280 = 3920346375643478880LLU;
	uint64_t t53 = 431389LLU;

	t53 = ((x277*(x278|x279))*x280);

	if (t53 != 7361895802510206048LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x282 = INT8_MIN;
	int16_t x283 = -5877;
	volatile int64_t t54 = 7040LL;

	t54 = ((x281*(x282|x283))*x284);

	if (t54 != -117LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x287 = 679734683998840023LL;
	int64_t t55 = 2089548784LL;

	t55 = ((x285*(x286|x287))*x288);

	if (t55 != -66283738LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x289 = UINT16_MAX;
	int8_t x291 = -52;

	t56 = ((x289*(x290|x291))*x292);

	if (t56 != -8322945) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = INT64_MAX;
	volatile uint64_t x295 = 1585545581111LLU;
	static int32_t x296 = INT32_MIN;
	static volatile uint64_t t57 = 4115905259569793977LLU;

	t57 = ((x293*(x294|x295))*x296);

	if (t57 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x297 = -4;
	int32_t x299 = INT32_MAX;
	int16_t x300 = -1;
	volatile int32_t t58 = 7086;

	t58 = ((x297*(x298|x299))*x300);

	if (t58 != -4) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x305 = UINT16_MAX;
	volatile int64_t x306 = -950348630225063LL;
	int64_t x307 = -1LL;
	uint64_t t59 = 6951719LLU;

	t59 = ((x305*(x306|x307))*x308);

	if (t59 != 2379810490292886749LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x309 = 31U;
	uint64_t x312 = 62550LLU;
	uint64_t t60 = 340720LLU;

	t60 = ((x309*(x310|x311))*x312);

	if (t60 != 268650202425750LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x314 = INT8_MIN;
	uint8_t x315 = 93U;
	uint8_t x316 = 2U;
	int32_t t61 = 32689244;

	t61 = ((x313*(x314|x315))*x316);

	if (t61 != 70) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x317 = INT8_MAX;
	int64_t x318 = -357470LL;
	volatile uint8_t x319 = 1U;
	volatile int8_t x320 = 1;
	volatile int64_t t62 = -219LL;

	t62 = ((x317*(x318|x319))*x320);

	if (t62 != -45398563LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x321 = INT8_MIN;
	volatile uint16_t x322 = 1394U;
	volatile int64_t x323 = 6373799606LL;
	int16_t x324 = INT16_MIN;
	volatile int64_t t63 = -318592807307659163LL;

	t63 = ((x321*(x322|x323))*x324);

	if (t63 != 26733654524821504LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x325 = 39956915604788LLU;
	volatile int8_t x326 = INT8_MAX;
	int64_t x327 = -28122253LL;
	static int32_t x328 = -158345221;
	static uint64_t t64 = 12099266047LLU;

	t64 = ((x325*(x326|x327))*x328);

	if (t64 != 3895804791357150212LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x329 = -19LL;
	uint32_t x330 = 322133U;
	int64_t x332 = -1LL;
	int64_t t65 = -8985632804612LL;

	t65 = ((x329*(x330|x331))*x332);

	if (t65 != 81604273231LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x334 = UINT32_MAX;
	int64_t t66 = 11338755246LL;

	t66 = ((x333*(x334|x335))*x336);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x345 = 34245382479640033LLU;
	static uint8_t x346 = 12U;
	uint32_t x347 = UINT32_MAX;
	uint64_t x348 = UINT64_MAX;
	uint64_t t67 = 521869623831267LLU;

	t67 = ((x345*(x346|x347))*x348);

	if (t67 != 10273893951008503265LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x353 = 114U;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = 4654LLU;
	static volatile int64_t x356 = 40931LL;
	volatile uint64_t t68 = 5574LLU;

	t68 = ((x353*(x354|x355))*x356);

	if (t68 != 18436723648961362420LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = -232;
	int32_t x359 = 49465;
	uint64_t x360 = 2344791133307LLU;
	volatile uint64_t t69 = 4032435511886670282LLU;

	t69 = ((x357*(x358|x359))*x360);

	if (t69 != 59726519747595904LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x361 = INT8_MIN;
	static int64_t x363 = INT64_MIN;
	volatile uint8_t x364 = 3U;
	volatile int64_t t70 = 1912824290LL;

	t70 = ((x361*(x362|x363))*x364);

	if (t70 != 384LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x365 = -1;
	int16_t x366 = -1;
	int8_t x367 = INT8_MIN;
	int32_t x368 = INT32_MIN;

	t71 = ((x365*(x366|x367))*x368);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x369 = INT32_MIN;
	int64_t x370 = -1LL;
	uint8_t x371 = 2U;
	int8_t x372 = 28;
	volatile int64_t t72 = -1164552LL;

	t72 = ((x369*(x370|x371))*x372);

	if (t72 != 60129542144LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x374 = -1LL;
	int16_t x375 = -8112;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = ((x373*(x374|x375))*x376);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x377 = 0;
	int8_t x379 = INT8_MAX;
	int64_t t74 = 3235487703423251LL;

	t74 = ((x377*(x378|x379))*x380);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x381 = 499U;
	int8_t x382 = INT8_MIN;
	int16_t x383 = 25;
	static uint32_t t75 = 501751842U;

	t75 = ((x381*(x382|x383))*x384);

	if (t75 != 6578816U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x385 = UINT64_MAX;
	int32_t x386 = 158242;
	int32_t x387 = INT32_MIN;
	int64_t x388 = INT64_MAX;
	uint64_t t76 = 114LLU;

	t76 = ((x385*(x386|x387))*x388);

	if (t76 != 18446744071562226210LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x393 = 68U;
	static int16_t x394 = -1;
	uint32_t x396 = 14U;
	uint32_t t77 = 406318937U;

	t77 = ((x393*(x394|x395))*x396);

	if (t77 != 4294966344U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x397 = 0LL;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	static volatile int64_t t78 = -76LL;

	t78 = ((x397*(x398|x399))*x400);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x403 = 6LLU;
	uint64_t t79 = 5592536LLU;

	t79 = ((x401*(x402|x403))*x404);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MAX;
	static uint32_t x407 = 46920802U;

	t80 = ((x405*(x406|x407))*x408);

	if (t80 != 8355840U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x409 = 825;
	static int64_t x410 = -2378607LL;
	static int8_t x411 = -1;
	int16_t x412 = -1;
	int64_t t81 = -27834919537LL;

	t81 = ((x409*(x410|x411))*x412);

	if (t81 != 825LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x413 = INT8_MIN;
	static uint8_t x414 = UINT8_MAX;
	volatile uint64_t x415 = 8949382929633LLU;
	int64_t x416 = -1LL;
	volatile uint64_t t82 = 6222983945LLU;

	t82 = ((x413*(x414|x415))*x416);

	if (t82 != 1145521014996864LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x417 = 21919LLU;
	uint64_t x420 = 9LLU;
	uint64_t t83 = 119112809969LLU;

	t83 = ((x417*(x418|x419))*x420);

	if (t83 != 18446744073709354345LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x421 = -36;
	uint32_t x423 = UINT32_MAX;
	static uint32_t t84 = 144U;

	t84 = ((x421*(x422|x423))*x424);

	if (t84 != 1179612U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x429 = UINT32_MAX;
	static volatile uint32_t x430 = 201U;
	int16_t x431 = -1;
	uint16_t x432 = 3U;
	volatile uint32_t t85 = 116987365U;

	t85 = ((x429*(x430|x431))*x432);

	if (t85 != 3U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x433 = 15401U;
	int16_t x434 = INT16_MIN;
	volatile uint8_t x435 = 3U;
	static int8_t x436 = -1;
	volatile int32_t t86 = -1;

	t86 = ((x433*(x434|x435))*x436);

	if (t86 != 504613765) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x437 = UINT64_MAX;
	uint32_t x438 = 202216U;
	volatile uint64_t t87 = 397LLU;

	t87 = ((x437*(x438|x439))*x440);

	if (t87 != 18446744059023000736LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x448 = -41305972;
	int64_t t88 = 115039350353601868LL;

	t88 = ((x445*(x446|x447))*x448);

	if (t88 != 88703899393439884LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x449 = 49LLU;
	volatile int64_t x450 = 6495537LL;
	int16_t x451 = -3859;
	uint64_t t89 = 1626599830230LLU;

	t89 = ((x449*(x450|x451))*x452);

	if (t89 != 18446744073709475911LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x457 = -1;
	int16_t x458 = -80;
	volatile int8_t x459 = 61;
	uint64_t x460 = 63740409890370702LLU;
	volatile uint64_t t90 = 11609LLU;

	t90 = ((x457*(x458|x459))*x460);

	if (t90 != 4270607462654837034LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x465 = UINT64_MAX;
	int32_t x466 = 2997827;
	volatile uint64_t t91 = 367LLU;

	t91 = ((x465*(x466|x467))*x468);

	if (t91 != 2997851LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x474 = -4;
	uint16_t x475 = 322U;
	int64_t x476 = -3761451LL;

	t92 = ((x473*(x474|x475))*x476);

	if (t92 != 1918340010LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x477 = -1LL;
	static volatile int8_t x479 = INT8_MIN;
	volatile uint16_t x480 = UINT16_MAX;
	int64_t t93 = 3494746017844682LL;

	t93 = ((x477*(x478|x479))*x480);

	if (t93 != 1703910LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x485 = 25U;
	static int16_t x486 = -1;
	uint32_t x487 = 9861781U;
	uint8_t x488 = 1U;
	uint32_t t94 = 397380344U;

	t94 = ((x485*(x486|x487))*x488);

	if (t94 != 4294967271U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x489 = 452268512365455LLU;
	uint16_t x492 = UINT16_MAX;
	static uint64_t t95 = 8076113392987LLU;

	t95 = ((x489*(x490|x491))*x492);

	if (t95 != 7254071189549009807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x497 = -1;
	int64_t x499 = -1LL;
	int32_t x500 = INT32_MIN;
	static volatile int64_t t96 = -30828LL;

	t96 = ((x497*(x498|x499))*x500);

	if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x505 = UINT64_MAX;
	volatile int16_t x506 = INT16_MIN;
	int64_t x507 = INT64_MAX;
	uint64_t x508 = UINT64_MAX;

	t97 = ((x505*(x506|x507))*x508);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x517 = -1;
	uint64_t x518 = 2LLU;
	volatile int64_t x519 = INT64_MIN;
	int32_t x520 = INT32_MAX;
	static volatile uint64_t t98 = 5598328LLU;

	t98 = ((x517*(x518|x519))*x520);

	if (t98 != 9223372032559808514LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x521 = -1895LL;
	volatile int64_t x522 = INT64_MIN;
	volatile int32_t x523 = -2018;
	int32_t x524 = INT32_MAX;
	volatile int64_t t99 = -6857LL;

	t99 = ((x521*(x522|x523))*x524);

	if (t99 != 8212213689329170LL) { NG(); } else { ; }
	
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

