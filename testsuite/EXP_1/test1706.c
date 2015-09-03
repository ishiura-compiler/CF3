#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
volatile uint16_t x12 = 15393U;
static uint32_t t1 = 105614U;
uint8_t x18 = 37U;
static int8_t x27 = 18;
static int16_t x33 = INT16_MIN;
static int16_t x41 = INT16_MAX;
static int64_t x46 = INT64_MIN;
uint64_t x54 = UINT64_MAX;
static volatile uint64_t t11 = 1807866805363LLU;
volatile int64_t t13 = 1LL;
int8_t x71 = INT8_MIN;
volatile int32_t x78 = -501;
uint8_t x79 = 3U;
uint16_t x83 = 31452U;
static volatile uint64_t x84 = 954607173489LLU;
int32_t x93 = -1;
volatile uint64_t x95 = 207945LLU;
volatile int32_t x97 = -1;
static int16_t x98 = -1;
int64_t t19 = 18836177315885LL;
int8_t x104 = INT8_MAX;
int8_t x110 = INT8_MIN;
int16_t x116 = -151;
uint8_t x120 = 2U;
volatile uint64_t t23 = 107685614LLU;
static int64_t x130 = 51LL;
int16_t x131 = INT16_MIN;
volatile int16_t x133 = -1;
int16_t x135 = INT16_MIN;
volatile int8_t x136 = -1;
uint64_t x152 = UINT64_MAX;
static uint64_t x154 = UINT64_MAX;
volatile uint64_t t30 = 97LLU;
volatile uint16_t x164 = 187U;
static uint64_t x170 = 32317194356928842LLU;
int64_t x177 = 23LL;
int16_t x178 = -19;
volatile uint64_t t36 = 577623LLU;
int32_t x192 = -1;
volatile int32_t t37 = 26770196;
static uint64_t t38 = 232743LLU;
static uint16_t x210 = UINT16_MAX;
int16_t x213 = INT16_MAX;
int8_t x231 = INT8_MIN;
volatile int64_t x238 = -1LL;
volatile uint64_t t53 = 1432357243LLU;
int32_t x270 = 0;
int8_t x281 = INT8_MAX;
uint16_t x286 = 14345U;
int16_t x288 = -1;
uint16_t x289 = UINT16_MAX;
int8_t x304 = -1;
uint16_t x322 = UINT16_MAX;
static volatile uint64_t x323 = UINT64_MAX;
static volatile int32_t t69 = 1;
uint64_t x357 = UINT64_MAX;
int64_t x361 = INT64_MIN;
int16_t x363 = 0;
uint32_t x380 = 440556U;
volatile int8_t x386 = INT8_MIN;
int8_t x387 = INT8_MAX;
uint32_t x400 = 47U;
static int64_t x403 = -1LL;
int16_t x414 = INT16_MIN;
volatile int64_t x418 = 8LL;
static int16_t x420 = INT16_MAX;
uint16_t x442 = 0U;
volatile int16_t x447 = -1;
int8_t x454 = INT8_MIN;
int8_t x464 = -1;
static int16_t x469 = INT16_MAX;
uint32_t t94 = 5995192U;
uint32_t x488 = 29184910U;
static int32_t x495 = 26861403;
int8_t x503 = -1;
static int8_t x505 = INT8_MIN;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	static int64_t x2 = -1LL;
	int16_t x3 = 6;
	volatile int64_t t0 = 8LL;

	t0 = (((x1&x2)-x3)*x4);

	if (t0 != -9223372021822390272LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 158263923U;
	static volatile uint16_t x10 = 1033U;
	static uint8_t x11 = 21U;

	t1 = (((x9&x10)-x11)*x12);

	if (t1 != 4294659436U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	static int8_t x14 = INT8_MAX;
	int64_t x15 = -1LL;
	int32_t x16 = -1;
	volatile int64_t t2 = -53225322283823434LL;

	t2 = (((x13&x14)-x15)*x16);

	if (t2 != -128LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 8300261180286LLU;
	uint64_t x19 = UINT64_MAX;
	volatile int16_t x20 = INT16_MAX;
	uint64_t t3 = 229772286685LLU;

	t3 = (((x17&x18)-x19)*x20);

	if (t3 != 1212379LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 498LLU;
	int32_t x22 = 505;
	static int64_t x23 = -1LL;
	int16_t x24 = -1;
	static volatile uint64_t t4 = 655129886128LLU;

	t4 = (((x21&x22)-x23)*x24);

	if (t4 != 18446744073709551119LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 6000695307514LLU;
	uint32_t x26 = 495782U;
	int64_t x28 = INT64_MIN;
	uint64_t t5 = 10247057LLU;

	t5 = (((x25&x26)-x27)*x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MIN;
	int8_t x30 = 1;
	uint32_t x31 = 54861574U;
	static volatile uint8_t x32 = 3U;
	static uint32_t t6 = 3U;

	t6 = (((x29&x30)-x31)*x32);

	if (t6 != 4130382574U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x34 = UINT16_MAX;
	static int8_t x35 = INT8_MIN;
	volatile int64_t x36 = 4277599891275LL;
	volatile int64_t t7 = 1065845646LL;

	t7 = (((x33&x34)-x35)*x36);

	if (t7 != 140715926023382400LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x37 = INT16_MAX;
	static int32_t x38 = INT32_MIN;
	int64_t x39 = -1808203940LL;
	static uint32_t x40 = UINT32_MAX;
	volatile int64_t t8 = -192969076574347997LL;

	t8 = (((x37&x38)-x39)*x40);

	if (t8 != 7766176784990142300LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x42 = INT32_MIN;
	volatile int64_t x43 = INT64_MAX;
	volatile int32_t x44 = -1;
	static volatile int64_t t9 = INT64_MAX;

	t9 = (((x41&x42)-x43)*x44);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = UINT64_MAX;
	static int16_t x47 = -1;
	int64_t x48 = -7158LL;
	volatile uint64_t t10 = 1LLU;

	t10 = (((x45&x46)-x47)*x48);

	if (t10 != 18446744073709544458LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 51U;
	uint8_t x55 = UINT8_MAX;
	static int32_t x56 = 55516;

	t11 = (((x53&x54)-x55)*x56);

	if (t11 != 18446744073698226352LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = 3735708680027029605LL;
	volatile uint32_t x62 = 60174417U;
	int16_t x63 = 0;
	static uint16_t x64 = 114U;
	int64_t t12 = -27531915LL;

	t12 = (((x61&x62)-x63)*x64);

	if (t12 != 2047089906LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = UINT32_MAX;
	static int16_t x66 = INT16_MIN;
	int64_t x67 = 13719LL;
	int32_t x68 = INT32_MIN;

	t13 = (((x65&x66)-x67)*x68);

	if (t13 != -9223272206782431232LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MAX;
	int32_t x72 = -1;
	int64_t t14 = -4093467601298LL;

	t14 = (((x69&x70)-x71)*x72);

	if (t14 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	uint8_t x74 = 13U;
	int64_t x75 = 188LL;
	uint32_t x76 = 21U;
	int64_t t15 = 2554003058LL;

	t15 = (((x73&x74)-x75)*x76);

	if (t15 != -3948LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x77 = -1;
	static int16_t x80 = -1;
	volatile int32_t t16 = 855;

	t16 = (((x77&x78)-x79)*x80);

	if (t16 != 504) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -4146;
	uint16_t x82 = 1054U;
	volatile uint64_t t17 = 243066922948LLU;

	t17 = (((x81&x82)-x83)*x84);

	if (t17 != 18417710651135057170LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x94 = -1;
	uint32_t x96 = 22392U;
	volatile uint64_t t18 = 6960656698634907LLU;

	t18 = (((x93&x94)-x95)*x96);

	if (t18 != 18446744069053224784LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x99 = 63010266959LL;
	volatile uint16_t x100 = UINT16_MAX;

	t19 = (((x97&x98)-x99)*x100);

	if (t19 != -4129377845223600LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x101 = INT32_MIN;
	uint32_t x102 = 120U;
	int16_t x103 = 3255;
	volatile uint32_t t20 = 806U;

	t20 = (((x101&x102)-x103)*x104);

	if (t20 != 4294553911U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = 0;
	volatile uint64_t x111 = UINT64_MAX;
	uint32_t x112 = 350925919U;
	static volatile uint64_t t21 = 13968473296LLU;

	t21 = (((x109&x110)-x111)*x112);

	if (t21 != 350925919LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x113 = INT8_MIN;
	volatile uint16_t x114 = 4495U;
	static int32_t x115 = -1;
	volatile int32_t t22 = 11;

	t22 = (((x113&x114)-x115)*x116);

	if (t22 != -676631) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = 14U;
	uint64_t x118 = 2LLU;
	uint16_t x119 = 13772U;

	t23 = (((x117&x118)-x119)*x120);

	if (t23 != 18446744073709524076LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x125 = 1852;
	static int8_t x126 = INT8_MAX;
	static uint32_t x127 = 7494958U;
	int32_t x128 = INT32_MIN;
	uint32_t t24 = 244838754U;

	t24 = (((x125&x126)-x127)*x128);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = INT8_MAX;
	int8_t x132 = INT8_MAX;
	volatile int64_t t25 = 7620071875898LL;

	t25 = (((x129&x130)-x131)*x132);

	if (t25 != 4168013LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x134 = INT16_MAX;
	static volatile int32_t t26 = 32;

	t26 = (((x133&x134)-x135)*x136);

	if (t26 != -65535) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = INT8_MAX;
	uint32_t x138 = UINT32_MAX;
	static volatile int32_t x139 = INT32_MAX;
	volatile int8_t x140 = 2;
	uint32_t t27 = 240803261U;

	t27 = (((x137&x138)-x139)*x140);

	if (t27 != 256U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x145 = INT32_MAX;
	volatile uint64_t x146 = 1LLU;
	int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MIN;
	volatile uint64_t t28 = 23LLU;

	t28 = (((x145&x146)-x147)*x148);

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x149 = 196101LLU;
	int16_t x150 = -1;
	static int16_t x151 = -1;
	uint64_t t29 = 24LLU;

	t29 = (((x149&x150)-x151)*x152);

	if (t29 != 18446744073709355514LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = -1LL;
	volatile uint8_t x155 = UINT8_MAX;
	int64_t x156 = INT64_MIN;

	t30 = (((x153&x154)-x155)*x156);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x157 = 52150183549488LLU;
	static uint8_t x158 = 6U;
	volatile uint16_t x159 = 2U;
	static int64_t x160 = INT64_MIN;
	uint64_t t31 = 542970077665243710LLU;

	t31 = (((x157&x158)-x159)*x160);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x161 = -1;
	volatile int8_t x162 = INT8_MAX;
	volatile int8_t x163 = -1;
	volatile int32_t t32 = -73241;

	t32 = (((x161&x162)-x163)*x164);

	if (t32 != 23936) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x169 = -1;
	int8_t x171 = 39;
	uint64_t x172 = 2811429LLU;
	volatile uint64_t t33 = 79LLU;

	t33 = (((x169&x170)-x171)*x172);

	if (t33 != 7282850686445980687LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x179 = INT8_MAX;
	uint16_t x180 = 41U;
	int64_t t34 = 5400604395161846LL;

	t34 = (((x177&x178)-x179)*x180);

	if (t34 != -5002LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = INT32_MIN;
	uint16_t x182 = 9566U;
	uint16_t x183 = 230U;
	int32_t x184 = -1;
	int32_t t35 = 6144738;

	t35 = (((x181&x182)-x183)*x184);

	if (t35 != 230) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = -1;
	volatile int16_t x187 = 107;
	uint64_t x188 = UINT64_MAX;

	t36 = (((x185&x186)-x187)*x188);

	if (t36 != 18446744071562068076LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = INT8_MIN;
	volatile uint16_t x190 = 88U;
	static volatile uint16_t x191 = 1U;

	t37 = (((x189&x190)-x191)*x192);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = -4198;
	int8_t x194 = -11;
	static uint64_t x195 = 60LLU;
	uint32_t x196 = 351467419U;

	t38 = (((x193&x194)-x195)*x196);

	if (t38 != 18446742573646607324LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x201 = 8U;
	int64_t x202 = INT64_MAX;
	int64_t x203 = -1LL;
	int32_t x204 = -9159;
	volatile int64_t t39 = 17LL;

	t39 = (((x201&x202)-x203)*x204);

	if (t39 != -82431LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = -1;
	int64_t x206 = -1LL;
	volatile uint32_t x207 = UINT32_MAX;
	int32_t x208 = -1;
	int64_t t40 = -12606LL;

	t40 = (((x205&x206)-x207)*x208);

	if (t40 != 4294967296LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = INT8_MIN;
	volatile uint8_t x211 = 2U;
	static int8_t x212 = 29;
	volatile int32_t t41 = 96262193;

	t41 = (((x209&x210)-x211)*x212);

	if (t41 != 1896774) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x214 = INT32_MIN;
	uint64_t x215 = 17030399347453458LLU;
	static int16_t x216 = INT16_MIN;
	volatile uint64_t t42 = 418329LLU;

	t42 = (((x213&x214)-x215)*x216);

	if (t42 != 4649803606068363264LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = 1;
	uint16_t x218 = 2U;
	int16_t x219 = -1;
	uint32_t x220 = 313891779U;
	static uint32_t t43 = 159U;

	t43 = (((x217&x218)-x219)*x220);

	if (t43 != 313891779U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x221 = 11;
	static int8_t x222 = INT8_MIN;
	uint8_t x223 = 4U;
	int16_t x224 = INT16_MIN;
	volatile int32_t t44 = -101320;

	t44 = (((x221&x222)-x223)*x224);

	if (t44 != 131072) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x225 = UINT8_MAX;
	int32_t x226 = INT32_MIN;
	uint32_t x227 = UINT32_MAX;
	int64_t x228 = -258654681199600LL;
	int64_t t45 = -770817744359717562LL;

	t45 = (((x225&x226)-x227)*x228);

	if (t45 != -258654681199600LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = 52;
	static volatile uint32_t x230 = 63520982U;
	int16_t x232 = -1;
	volatile uint32_t t46 = 2080022U;

	t46 = (((x229&x230)-x231)*x232);

	if (t46 != 4294967148U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = INT32_MIN;
	static uint64_t x234 = UINT64_MAX;
	int64_t x235 = INT64_MIN;
	int64_t x236 = -1LL;
	static uint64_t t47 = 1243664987268980LLU;

	t47 = (((x233&x234)-x235)*x236);

	if (t47 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x237 = -1LL;
	volatile int32_t x239 = 1;
	uint8_t x240 = 1U;
	static volatile int64_t t48 = 29646651LL;

	t48 = (((x237&x238)-x239)*x240);

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x245 = -1LL;
	int8_t x246 = -8;
	int16_t x247 = INT16_MIN;
	int8_t x248 = -1;
	int64_t t49 = 1584119489716358800LL;

	t49 = (((x245&x246)-x247)*x248);

	if (t49 != -32760LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x249 = 6194749LL;
	int64_t x250 = 0LL;
	uint8_t x251 = UINT8_MAX;
	int32_t x252 = -1;
	int64_t t50 = 24151LL;

	t50 = (((x249&x250)-x251)*x252);

	if (t50 != 255LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x253 = 0;
	int64_t x254 = INT64_MIN;
	volatile int64_t x255 = 1805748147081LL;
	int8_t x256 = INT8_MAX;
	int64_t t51 = -114LL;

	t51 = (((x253&x254)-x255)*x256);

	if (t51 != -229330014679287LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x258 = 2502U;
	uint32_t x259 = 3666U;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t52 = 243LLU;

	t52 = (((x257&x258)-x259)*x260);

	if (t52 != 18446744069414587986LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x261 = UINT32_MAX;
	int8_t x262 = -1;
	static int32_t x263 = INT32_MIN;
	uint64_t x264 = 135203388284LLU;

	t53 = (((x261&x262)-x263)*x264);

	if (t53 != 13645904253238117508LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = INT8_MIN;
	volatile int16_t x266 = INT16_MAX;
	int32_t x267 = -15;
	uint16_t x268 = UINT16_MAX;
	int32_t t54 = 2788765;

	t54 = (((x265&x266)-x267)*x268);

	if (t54 != 2140045425) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x269 = INT64_MAX;
	int32_t x271 = INT32_MIN;
	uint32_t x272 = 445U;
	int64_t t55 = -104271640474007696LL;

	t55 = (((x269&x270)-x271)*x272);

	if (t55 != 955630223360LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x273 = UINT16_MAX;
	static uint64_t x274 = 55LLU;
	volatile uint8_t x275 = UINT8_MAX;
	int32_t x276 = INT32_MIN;
	uint64_t t56 = 1LLU;

	t56 = (((x273&x274)-x275)*x276);

	if (t56 != 429496729600LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x277 = -1;
	int8_t x278 = 16;
	int16_t x279 = INT16_MAX;
	uint64_t x280 = 1208963336880LLU;
	static volatile uint64_t t57 = 6912LLU;

	t57 = (((x277&x278)-x279)*x280);

	if (t57 != 18407149315463394736LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x282 = 3822U;
	int64_t x283 = -1LL;
	uint16_t x284 = 63U;
	static int64_t t58 = -116347475022014132LL;

	t58 = (((x281&x282)-x283)*x284);

	if (t58 != 6993LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x285 = INT64_MIN;
	int8_t x287 = 1;
	static int64_t t59 = -3757942995236187LL;

	t59 = (((x285&x286)-x287)*x288);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x290 = 157U;
	int8_t x291 = -1;
	int16_t x292 = 65;
	int32_t t60 = 2;

	t60 = (((x289&x290)-x291)*x292);

	if (t60 != 10270) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x301 = INT16_MIN;
	uint64_t x302 = UINT64_MAX;
	int32_t x303 = 687856000;
	static volatile uint64_t t61 = 145019329542LLU;

	t61 = (((x301&x302)-x303)*x304);

	if (t61 != 687888768LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x305 = -1;
	uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 121503U;
	int64_t x308 = 1145LL;
	static volatile int64_t t62 = -253509904273409079LL;

	t62 = (((x305&x306)-x307)*x308);

	if (t62 != 4917598431840LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x309 = 18U;
	int64_t x310 = -118229819430004LL;
	int32_t x311 = INT32_MIN;
	int64_t x312 = 41033LL;
	int64_t t63 = -10866492651971LL;

	t63 = (((x309&x310)-x311)*x312);

	if (t63 != 88117696528384LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x313 = INT16_MIN;
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = INT8_MIN;
	static volatile uint8_t x316 = 56U;
	int32_t t64 = 78610;

	t64 = (((x313&x314)-x315)*x316);

	if (t64 != 7168) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x317 = INT16_MIN;
	volatile int8_t x318 = 0;
	uint32_t x319 = UINT32_MAX;
	int16_t x320 = INT16_MIN;
	volatile uint32_t t65 = 55U;

	t65 = (((x317&x318)-x319)*x320);

	if (t65 != 4294934528U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x321 = -1;
	int16_t x324 = 360;
	uint64_t t66 = 221856852LLU;

	t66 = (((x321&x322)-x323)*x324);

	if (t66 != 23592960LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x329 = -1;
	int8_t x330 = -4;
	uint32_t x331 = UINT32_MAX;
	volatile uint32_t x332 = 122768U;
	volatile uint32_t t67 = 3U;

	t67 = (((x329&x330)-x331)*x332);

	if (t67 != 4294598992U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x337 = 52;
	int32_t x338 = INT32_MAX;
	volatile uint16_t x339 = 2U;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t68 = 416393017;

	t68 = (((x337&x338)-x339)*x340);

	if (t68 != -6400) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x345 = 10U;
	int32_t x346 = 27139;
	int32_t x347 = -1;
	static uint16_t x348 = 417U;

	t69 = (((x345&x346)-x347)*x348);

	if (t69 != 1251) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x349 = INT16_MAX;
	int32_t x350 = 1;
	volatile int64_t x351 = -211767LL;
	volatile int16_t x352 = INT16_MAX;
	int64_t t70 = 3335LL;

	t70 = (((x349&x350)-x351)*x352);

	if (t70 != 6939002056LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x353 = UINT8_MAX;
	volatile int64_t x354 = INT64_MIN;
	int16_t x355 = -1;
	volatile int8_t x356 = INT8_MIN;
	int64_t t71 = 32496LL;

	t71 = (((x353&x354)-x355)*x356);

	if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x358 = 11;
	uint16_t x359 = UINT16_MAX;
	volatile uint8_t x360 = 39U;
	volatile uint64_t t72 = 21329041953LLU;

	t72 = (((x357&x358)-x359)*x360);

	if (t72 != 18446744073706996180LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x362 = UINT32_MAX;
	int8_t x364 = INT8_MIN;
	volatile int64_t t73 = -12906LL;

	t73 = (((x361&x362)-x363)*x364);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x377 = 2;
	int8_t x378 = 0;
	int8_t x379 = INT8_MIN;
	volatile uint32_t t74 = 33160271U;

	t74 = (((x377&x378)-x379)*x380);

	if (t74 != 56391168U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x381 = -1LL;
	int64_t x382 = 591LL;
	int16_t x383 = INT16_MAX;
	static int16_t x384 = -1;
	volatile int64_t t75 = -2631LL;

	t75 = (((x381&x382)-x383)*x384);

	if (t75 != 32176LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x385 = -3;
	static int8_t x388 = INT8_MIN;
	int32_t t76 = -59;

	t76 = (((x385&x386)-x387)*x388);

	if (t76 != 32640) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x389 = 5851;
	int16_t x390 = 8182;
	uint32_t x391 = 68213U;
	int32_t x392 = INT32_MIN;
	volatile uint32_t t77 = 42831760U;

	t77 = (((x389&x390)-x391)*x392);

	if (t77 != 2147483648U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x393 = 27U;
	uint64_t x394 = 63LLU;
	static volatile int64_t x395 = -890924084532874LL;
	static uint32_t x396 = 0U;
	volatile uint64_t t78 = 23690049801389680LLU;

	t78 = (((x393&x394)-x395)*x396);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x397 = INT16_MAX;
	int64_t x398 = INT64_MIN;
	volatile uint16_t x399 = 1120U;
	volatile int64_t t79 = -3707064400662254621LL;

	t79 = (((x397&x398)-x399)*x400);

	if (t79 != -52640LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x401 = UINT64_MAX;
	int32_t x402 = -3148758;
	static int64_t x404 = -3441LL;
	volatile uint64_t t80 = 13477204721128LLU;

	t80 = (((x401&x402)-x403)*x404);

	if (t80 != 10834872837LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x405 = 9863108LL;
	int32_t x406 = 332884;
	static uint32_t x407 = UINT32_MAX;
	int16_t x408 = -1;
	static volatile int64_t t81 = -14222343581LL;

	t81 = (((x405&x406)-x407)*x408);

	if (t81 != 4294699963LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x413 = -10;
	volatile uint16_t x415 = 121U;
	int32_t x416 = -1;
	static volatile int32_t t82 = -1;

	t82 = (((x413&x414)-x415)*x416);

	if (t82 != 32889) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x417 = 11585;
	static uint32_t x419 = 58820U;
	int64_t t83 = -5LL;

	t83 = (((x417&x418)-x419)*x420);

	if (t83 != -1927354940LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x425 = UINT8_MAX;
	int64_t x426 = INT64_MIN;
	int64_t x427 = -1034LL;
	uint16_t x428 = 40U;
	volatile int64_t t84 = -2271370007709522404LL;

	t84 = (((x425&x426)-x427)*x428);

	if (t84 != 41360LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x429 = 69U;
	uint32_t x430 = UINT32_MAX;
	int16_t x431 = -1;
	volatile uint32_t x432 = 71032562U;
	uint32_t t85 = 3246U;

	t85 = (((x429&x430)-x431)*x432);

	if (t85 != 677312044U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x441 = 1889U;
	static volatile int8_t x443 = INT8_MIN;
	uint8_t x444 = 12U;
	static volatile uint32_t t86 = 1096U;

	t86 = (((x441&x442)-x443)*x444);

	if (t86 != 1536U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x445 = 10747;
	static uint8_t x446 = 2U;
	int8_t x448 = -1;
	int32_t t87 = 950;

	t87 = (((x445&x446)-x447)*x448);

	if (t87 != -3) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x449 = UINT64_MAX;
	uint8_t x450 = 1U;
	uint32_t x451 = 565U;
	uint16_t x452 = 5U;
	static volatile uint64_t t88 = 22280LLU;

	t88 = (((x449&x450)-x451)*x452);

	if (t88 != 18446744073709548796LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x453 = 23873U;
	volatile int16_t x455 = 7603;
	static volatile int16_t x456 = INT16_MAX;
	int32_t t89 = 1;

	t89 = (((x453&x454)-x455)*x456);

	if (t89 != 530989235) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x457 = INT64_MIN;
	volatile uint32_t x458 = 7042588U;
	int64_t x459 = -755366462LL;
	int32_t x460 = 14947786;
	int64_t t90 = -3LL;

	t90 = (((x457&x458)-x459)*x460);

	if (t90 != 11291056225553132LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x461 = -78LL;
	uint8_t x462 = UINT8_MAX;
	uint16_t x463 = 5U;
	volatile int64_t t91 = 1236629914LL;

	t91 = (((x461&x462)-x463)*x464);

	if (t91 != -173LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x465 = 421LL;
	uint64_t x466 = 8473048878768256037LLU;
	static int64_t x467 = INT64_MAX;
	int32_t x468 = 1228;
	volatile uint64_t t92 = 4653746844868064LLU;

	t92 = (((x465&x466)-x467)*x468);

	if (t92 != 46664LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x470 = INT16_MIN;
	static int8_t x471 = INT8_MIN;
	uint64_t x472 = 65827384LLU;
	uint64_t t93 = 5700LLU;

	t93 = (((x469&x470)-x471)*x472);

	if (t93 != 8425905152LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x477 = 7324;
	int16_t x478 = -1;
	volatile uint32_t x479 = 733U;
	static volatile uint16_t x480 = UINT16_MAX;

	t94 = (((x477&x478)-x479)*x480);

	if (t94 != 431941185U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x485 = INT32_MAX;
	int32_t x486 = -1;
	volatile uint8_t x487 = 3U;
	static uint32_t t95 = 4755U;

	t95 = (((x485&x486)-x487)*x488);

	if (t95 != 4178227656U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x493 = 6966758833338608365LLU;
	int32_t x494 = INT32_MIN;
	int32_t x496 = -1552;
	uint64_t t96 = 17426LLU;

	t96 = (((x493&x494)-x495)*x496);

	if (t96 != 15829064284104169392LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x497 = -13;
	int16_t x498 = INT16_MIN;
	static uint8_t x499 = UINT8_MAX;
	volatile int32_t x500 = -1;
	volatile int32_t t97 = 417944;

	t97 = (((x497&x498)-x499)*x500);

	if (t97 != 33023) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x501 = -44LL;
	uint64_t x502 = 775569685LLU;
	int32_t x504 = INT32_MAX;
	volatile uint64_t t98 = 1038092LLU;

	t98 = (((x501&x502)-x503)*x504);

	if (t98 != 1665523215646441195LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x506 = 1LLU;
	static int8_t x507 = -1;
	volatile uint32_t x508 = 1U;
	volatile uint64_t t99 = 25810617512LLU;

	t99 = (((x505&x506)-x507)*x508);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

