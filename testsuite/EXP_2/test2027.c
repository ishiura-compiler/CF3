#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -463;
static volatile int8_t x11 = 1;
volatile uint64_t t7 = 104556LLU;
int32_t x37 = INT32_MIN;
uint16_t x38 = UINT16_MAX;
static volatile int64_t t9 = -3071LL;
volatile int64_t x45 = 14955736LL;
volatile int16_t x47 = -1;
static volatile int64_t x50 = -14040456LL;
int64_t x51 = INT64_MIN;
int32_t x57 = -150;
int64_t x64 = 599774LL;
static int64_t x66 = INT64_MIN;
volatile int16_t x69 = -1;
uint16_t x74 = UINT16_MAX;
int8_t x84 = -1;
static uint64_t t21 = 27591553574435LLU;
uint8_t x92 = UINT8_MAX;
int32_t t22 = 3893;
uint32_t x99 = 988U;
uint64_t x104 = UINT64_MAX;
int8_t x106 = -45;
uint16_t x111 = 6U;
int16_t x112 = INT16_MAX;
int16_t x114 = INT16_MIN;
int8_t x115 = INT8_MAX;
uint64_t t28 = 674635967873LLU;
volatile uint32_t x117 = 561U;
uint8_t x118 = 1U;
int32_t x123 = INT32_MIN;
volatile int32_t t32 = 0;
static uint16_t x133 = 3U;
uint16_t x140 = 115U;
int64_t x144 = INT64_MIN;
uint64_t t35 = 14316102263624572LLU;
int8_t x154 = INT8_MIN;
volatile int32_t x164 = -503;
int64_t x167 = -1LL;
int16_t x169 = -208;
volatile uint64_t t43 = 11846LLU;
volatile int64_t t46 = 1025597547682307LL;
uint64_t x192 = 678774113618388206LLU;
static volatile uint32_t x193 = 106426U;
uint16_t x195 = 0U;
int8_t x196 = INT8_MIN;
uint64_t t51 = 31LLU;
uint32_t x214 = 84631U;
int32_t x220 = -52020087;
int32_t t54 = -6771;
static int8_t x224 = INT8_MIN;
int16_t x225 = 3044;
static volatile uint16_t x229 = 34U;
static int32_t x237 = -4988;
uint32_t x238 = 27U;
volatile int32_t x248 = INT32_MAX;
int16_t x249 = 1;
uint32_t x253 = 8U;
static volatile int32_t x254 = -1125;
int64_t x260 = -6LL;
int8_t x263 = INT8_MIN;
int16_t x265 = 112;
volatile int32_t t66 = 672;
static uint64_t x269 = 882955907533LLU;
static int32_t x273 = 30014;
volatile int64_t t69 = -349331703690LL;
uint64_t x286 = 671558LLU;
uint64_t x294 = 361122437307359LLU;
int16_t x297 = INT16_MAX;
static int32_t x298 = 4095;
volatile int8_t x300 = -1;
uint8_t x306 = 53U;
uint64_t t76 = 313948148LLU;
int64_t x310 = -45590103565LL;
int64_t t78 = -53692263427525751LL;
static volatile uint16_t x318 = 2U;
static int32_t x319 = INT32_MIN;
volatile int32_t t79 = -130335414;
uint16_t x322 = UINT16_MAX;
int64_t x333 = INT64_MIN;
uint8_t x334 = 73U;
volatile uint64_t t83 = UINT64_MAX;
uint64_t t85 = UINT64_MAX;
static uint64_t x350 = UINT64_MAX;
int64_t x356 = INT64_MAX;
int8_t x359 = INT8_MIN;
static volatile int64_t x361 = -1LL;
static uint64_t x363 = 12524061315LLU;
int8_t x366 = 1;
uint16_t x367 = 82U;
int32_t x378 = 9452;
int64_t x380 = -6841541270531479LL;
int64_t x382 = 1LL;
int32_t x395 = -4582201;
uint8_t x399 = UINT8_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x2 = -8082;
	static int32_t x3 = -17471984;
	int32_t x4 = -14843428;

	t0 = ((x1^(x2|x3))|x4);

	if (t0 != -26147) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 7368;
	int64_t x6 = INT64_MAX;
	int8_t x7 = INT8_MAX;
	uint32_t x8 = 39982U;
	volatile int64_t t1 = -6334LL;

	t1 = ((x5^(x6|x7))|x8);

	if (t1 != 9223372036854775615LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int32_t x10 = INT32_MIN;
	static uint32_t x12 = 3814U;
	static uint32_t t2 = 563161U;

	t2 = ((x9^(x10|x11))|x12);

	if (t2 != 2147483646U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	uint64_t x14 = UINT64_MAX;
	uint16_t x15 = UINT16_MAX;
	int32_t x16 = 151386;
	uint64_t t3 = 66LLU;

	t3 = ((x13^(x14|x15))|x16);

	if (t3 != 151386LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 11;
	volatile int16_t x18 = INT16_MIN;
	int16_t x19 = 0;
	static uint16_t x20 = UINT16_MAX;
	static volatile int32_t t4 = 2542943;

	t4 = ((x17^(x18|x19))|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint32_t x22 = UINT32_MAX;
	volatile int16_t x23 = INT16_MIN;
	uint32_t x24 = UINT32_MAX;
	static volatile int64_t t5 = 10LL;

	t5 = ((x21^(x22|x23))|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1;
	volatile int64_t x26 = INT64_MIN;
	int32_t x27 = INT32_MIN;
	int8_t x28 = -1;
	volatile int64_t t6 = 16797312431448079LL;

	t6 = ((x25^(x26|x27))|x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	uint16_t x30 = 93U;
	int64_t x31 = INT64_MAX;
	uint8_t x32 = UINT8_MAX;

	t7 = ((x29^(x30|x31))|x32);

	if (t7 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x33 = 1U;
	int16_t x34 = -2995;
	static int8_t x35 = INT8_MIN;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = -758;

	t8 = ((x33^(x34|x35))|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x39 = 186862LL;
	static int32_t x40 = -1;

	t9 = ((x37^(x38|x39))|x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	int16_t x42 = -1;
	static int8_t x43 = -14;
	int64_t x44 = INT64_MIN;
	static volatile int64_t t10 = 1900LL;

	t10 = ((x41^(x42|x43))|x44);

	if (t10 != -256LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = 419401267LL;
	static int32_t x48 = INT32_MIN;
	int64_t t11 = -5LL;

	t11 = ((x45^(x46|x47))|x48);

	if (t11 != -14955737LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x49 = UINT32_MAX;
	int8_t x52 = INT8_MIN;
	static int64_t t12 = 4684007125189LL;

	t12 = ((x49^(x50|x51))|x52);

	if (t12 != -121LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	uint8_t x54 = 15U;
	volatile int32_t x55 = INT32_MIN;
	static uint8_t x56 = 2U;
	int32_t t13 = -368;

	t13 = ((x53^(x54|x55))|x56);

	if (t13 != 2147450895) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x58 = 17U;
	int32_t x59 = INT32_MIN;
	volatile int8_t x60 = 2;
	static volatile int32_t t14 = 11;

	t14 = ((x57^(x58|x59))|x60);

	if (t14 != 2147483515) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int64_t x62 = -1LL;
	int64_t x63 = -43333314808604282LL;
	int64_t t15 = -15430549439015766LL;

	t15 = ((x61^(x62|x63))|x64);

	if (t15 != 599774LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 3550911117LLU;
	uint64_t x67 = UINT64_MAX;
	uint8_t x68 = UINT8_MAX;
	volatile uint64_t t16 = 2010846LLU;

	t16 = ((x65^(x66|x67))|x68);

	if (t16 != 18446744070158640639LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x70 = UINT64_MAX;
	uint64_t x71 = 18615949877069LLU;
	uint16_t x72 = 7858U;
	uint64_t t17 = 1803501751632LLU;

	t17 = ((x69^(x70|x71))|x72);

	if (t17 != 7858LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	static uint16_t x75 = 1U;
	uint32_t x76 = 88476853U;
	uint32_t t18 = 89832462U;

	t18 = ((x73^(x74|x75))|x76);

	if (t18 != 4294905013U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 5740LL;
	uint16_t x78 = UINT16_MAX;
	volatile int8_t x79 = INT8_MAX;
	volatile int32_t x80 = 235653;
	int64_t t19 = 1515509LL;

	t19 = ((x77^(x78|x79))|x80);

	if (t19 != 260503LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = INT16_MIN;
	int32_t x82 = -1;
	static int32_t x83 = 3;
	int32_t t20 = -133;

	t20 = ((x81^(x82|x83))|x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	static uint64_t x86 = UINT64_MAX;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = INT8_MIN;

	t21 = ((x85^(x86|x87))|x88);

	if (t21 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = 0;
	static volatile int16_t x90 = INT16_MIN;
	volatile int32_t x91 = -96696;

	t22 = ((x89^(x90|x91))|x92);

	if (t22 != -30977) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -109;
	uint64_t x94 = 14225151010694LLU;
	uint32_t x95 = 376418U;
	volatile int16_t x96 = 1262;
	uint64_t t23 = 266243092852LLU;

	t23 = ((x93^(x94|x95))|x96);

	if (t23 != 18446729848558208255LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	uint16_t x98 = 12U;
	int64_t x100 = -1LL;
	volatile int64_t t24 = -106543LL;

	t24 = ((x97^(x98|x99))|x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	int16_t x102 = INT16_MIN;
	volatile int8_t x103 = INT8_MIN;
	static uint64_t t25 = UINT64_MAX;

	t25 = ((x101^(x102|x103))|x104);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int32_t x107 = INT32_MAX;
	int16_t x108 = -1;
	int32_t t26 = -152;

	t26 = ((x105^(x106|x107))|x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	uint32_t x110 = 7450U;
	uint32_t t27 = 32302722U;

	t27 = ((x109^(x110|x111))|x112);

	if (t27 != 32767U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	int32_t x116 = 3763285;

	t28 = ((x113^(x114|x115))|x116);

	if (t28 != 3768277LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x119 = INT64_MIN;
	static volatile int32_t x120 = INT32_MIN;
	int64_t t29 = -46506569584259LL;

	t29 = ((x117^(x118|x119))|x120);

	if (t29 != -2147483088LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 18923618;
	static int8_t x122 = INT8_MAX;
	uint64_t x124 = 7049929LLU;
	uint64_t t30 = 13974763630185LLU;

	t30 = ((x121^(x122|x123))|x124);

	if (t30 != 18446744071585911517LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 0U;
	int32_t x126 = 30129273;
	volatile int16_t x127 = INT16_MIN;
	uint8_t x128 = 14U;
	static volatile int32_t t31 = -20;

	t31 = ((x125^(x126|x127))|x128);

	if (t31 != -17281) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	uint8_t x130 = 3U;
	static volatile int16_t x131 = -1;
	int8_t x132 = 34;

	t32 = ((x129^(x130|x131))|x132);

	if (t32 != -32734) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x134 = UINT8_MAX;
	volatile uint64_t x135 = 2055863LLU;
	static int32_t x136 = -1;
	uint64_t t33 = UINT64_MAX;

	t33 = ((x133^(x134|x135))|x136);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 0;
	static uint8_t x138 = 8U;
	uint16_t x139 = 239U;
	volatile int32_t t34 = 0;

	t34 = ((x137^(x138|x139))|x140);

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	static int16_t x142 = 251;
	uint64_t x143 = 2185470726269LLU;

	t35 = ((x141^(x142|x143))|x144);

	if (t35 != 9223374222325502080LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -2;
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = INT8_MIN;
	uint32_t x148 = 1276244089U;
	uint64_t t36 = 0LLU;

	t36 = ((x145^(x146|x147))|x148);

	if (t36 != 1276244089LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -13404200;
	static uint64_t x150 = 31906LLU;
	int8_t x151 = INT8_MIN;
	volatile int8_t x152 = INT8_MAX;
	static volatile uint64_t t37 = 267492129774944439LLU;

	t37 = ((x149^(x150|x151))|x152);

	if (t37 != 13404287LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	static volatile int8_t x155 = 21;
	int8_t x156 = -1;
	int32_t t38 = 3;

	t38 = ((x153^(x154|x155))|x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MAX;
	int32_t x159 = -14892;
	uint8_t x160 = UINT8_MAX;
	volatile int64_t t39 = INT64_MAX;

	t39 = ((x157^(x158|x159))|x160);

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = 35LL;
	uint32_t x163 = 41U;
	static volatile int64_t t40 = -432525LL;

	t40 = ((x161^(x162|x163))|x164);

	if (t40 != -469LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 19LLU;
	int8_t x166 = INT8_MIN;
	int64_t x168 = -1LL;
	static uint64_t t41 = UINT64_MAX;

	t41 = ((x165^(x166|x167))|x168);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x170 = 3097U;
	uint8_t x171 = UINT8_MAX;
	int64_t x172 = -2LL;
	static volatile int64_t t42 = -50423777LL;

	t42 = ((x169^(x170|x171))|x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 99485LLU;
	int8_t x174 = INT8_MIN;
	int8_t x175 = -2;
	int16_t x176 = INT16_MIN;

	t43 = ((x173^(x174|x175))|x176);

	if (t43 != 18446744073709550435LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1696929;
	volatile int8_t x178 = INT8_MAX;
	uint64_t x179 = 1291386217LLU;
	uint8_t x180 = UINT8_MAX;
	uint64_t t44 = 12LLU;

	t44 = ((x177^(x178|x179))|x180);

	if (t44 != 18446744072419731199LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int16_t x182 = INT16_MAX;
	int32_t x183 = 1060506445;
	static int16_t x184 = -1;
	int32_t t45 = -62470;

	t45 = ((x181^(x182|x183))|x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 2U;
	int8_t x186 = INT8_MAX;
	static int64_t x187 = 1144756LL;
	int32_t x188 = -1;

	t46 = ((x185^(x186|x187))|x188);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static int64_t x190 = INT64_MIN;
	int32_t x191 = -377;
	uint64_t t47 = 32572304LLU;

	t47 = ((x189^(x190|x191))|x192);

	if (t47 != 678774113618388463LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MIN;
	uint32_t t48 = 1502962U;

	t48 = ((x193^(x194|x195))|x196);

	if (t48 != 4294967226U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MAX;
	int32_t x199 = -38940083;
	uint8_t x200 = 63U;
	volatile int64_t t49 = -15LL;

	t49 = ((x197^(x198|x199))|x200);

	if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x201 = INT64_MIN;
	int16_t x202 = -27;
	static uint16_t x203 = 1859U;
	int64_t x204 = INT64_MIN;
	static volatile int64_t t50 = 1760879616856771LL;

	t50 = ((x201^(x202|x203))|x204);

	if (t50 != -25LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	volatile int16_t x206 = -1;
	int8_t x207 = INT8_MIN;
	int32_t x208 = 116018;

	t51 = ((x205^(x206|x207))|x208);

	if (t51 != 116018LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 27U;
	uint32_t x210 = UINT32_MAX;
	static uint64_t x211 = 7LLU;
	volatile uint32_t x212 = 1048545456U;
	volatile uint64_t t52 = 0LLU;

	t52 = ((x209^(x210|x211))|x212);

	if (t52 != 4294967284LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 819U;
	static int32_t x215 = -925121;
	static uint64_t x216 = 68720242857609292LLU;
	uint64_t t53 = 23459399630LLU;

	t53 = ((x213^(x214|x215))|x216);

	if (t53 != 68720245534747084LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 0U;
	uint8_t x218 = UINT8_MAX;
	volatile int8_t x219 = INT8_MIN;

	t54 = ((x217^(x218|x219))|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = 26735LL;
	int32_t x223 = INT32_MIN;
	static volatile int64_t t55 = -1LL;

	t55 = ((x221^(x222|x223))|x224);

	if (t55 != -17LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x226 = INT16_MAX;
	volatile int32_t x227 = -1;
	int64_t x228 = 210LL;
	static int64_t t56 = -729356496341733581LL;

	t56 = ((x225^(x226|x227))|x228);

	if (t56 != -2853LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = 53445;
	volatile int32_t x231 = -40649896;
	int8_t x232 = -1;
	int32_t t57 = 65738173;

	t57 = ((x229^(x230|x231))|x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MAX;
	uint8_t x234 = UINT8_MAX;
	static uint64_t x235 = 3632905333542345847LLU;
	uint32_t x236 = 2U;
	static uint64_t t58 = 484444442694149LLU;

	t58 = ((x233^(x234|x235))|x236);

	if (t58 != 3632905333542345858LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x239 = 17U;
	uint32_t x240 = 12U;
	uint32_t t59 = 1100497U;

	t59 = ((x237^(x238|x239))|x240);

	if (t59 != 4294962335U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	int32_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	uint8_t x244 = UINT8_MAX;
	static volatile uint64_t t60 = 4504922994229646LLU;

	t60 = ((x241^(x242|x243))|x244);

	if (t60 != 255LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 1563784922LLU;
	uint64_t x246 = 8803326349LLU;
	uint8_t x247 = UINT8_MAX;
	static volatile uint64_t t61 = 228852212LLU;

	t61 = ((x245^(x246|x247))|x248);

	if (t61 != 10737418239LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x250 = -12;
	uint32_t x251 = 199567U;
	volatile int32_t x252 = -125;
	static volatile uint32_t t62 = UINT32_MAX;

	t62 = ((x249^(x250|x251))|x252);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x255 = INT16_MIN;
	static volatile int8_t x256 = INT8_MAX;
	static uint32_t t63 = 3675718U;

	t63 = ((x253^(x254|x255))|x256);

	if (t63 != 4294966271U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	static uint16_t x258 = UINT16_MAX;
	uint16_t x259 = UINT16_MAX;
	volatile int64_t t64 = -52LL;

	t64 = ((x257^(x258|x259))|x260);

	if (t64 != -6LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MIN;
	int64_t x262 = INT64_MAX;
	static int8_t x264 = 26;
	int64_t t65 = INT64_MAX;

	t65 = ((x261^(x262|x263))|x264);

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x266 = INT8_MAX;
	int32_t x267 = INT32_MIN;
	volatile int32_t x268 = INT32_MAX;

	t66 = ((x265^(x266|x267))|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x270 = 2U;
	int8_t x271 = INT8_MIN;
	volatile uint32_t x272 = 245U;
	uint64_t t67 = 833328LLU;

	t67 = ((x269^(x270|x271))|x272);

	if (t67 != 18446743190753644287LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x274 = UINT16_MAX;
	volatile int64_t x275 = INT64_MIN;
	uint32_t x276 = UINT32_MAX;
	static int64_t t68 = -1646509720375759LL;

	t68 = ((x273^(x274|x275))|x276);

	if (t68 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = -13754;
	int64_t x278 = 877738LL;
	uint8_t x279 = 47U;
	uint32_t x280 = 51U;

	t69 = ((x277^(x278|x279))|x280);

	if (t69 != -872709LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 39452862LL;
	uint32_t x282 = 363430356U;
	uint32_t x283 = 746U;
	static uint16_t x284 = 4U;
	volatile int64_t t70 = 681634845839623LL;

	t70 = ((x281^(x282|x283))|x284);

	if (t70 != 401834820LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	volatile int32_t x287 = INT32_MAX;
	int32_t x288 = -1;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x285^(x286|x287))|x288);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x289 = UINT64_MAX;
	int8_t x290 = INT8_MIN;
	int32_t x291 = INT32_MIN;
	int8_t x292 = INT8_MAX;
	uint64_t t72 = 6416521LLU;

	t72 = ((x289^(x290|x291))|x292);

	if (t72 != 127LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x293 = -110;
	int64_t x295 = INT64_MIN;
	uint32_t x296 = 1265U;
	static uint64_t t73 = 5LLU;

	t73 = ((x293^(x294|x295))|x296);

	if (t73 != 9223010914417468669LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x299 = -20;
	volatile int32_t t74 = 1;

	t74 = ((x297^(x298|x299))|x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;
	static volatile int32_t x303 = -1;
	int64_t x304 = INT64_MIN;
	volatile int64_t t75 = 834647185LL;

	t75 = ((x301^(x302|x303))|x304);

	if (t75 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 231112479770138260LLU;
	static int64_t x307 = INT64_MIN;
	uint64_t x308 = 108490529126255LLU;

	t76 = ((x305^(x306|x307))|x308);

	if (t76 != 9454590243689461743LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int16_t x311 = -821;
	static int64_t x312 = -1LL;
	volatile int64_t t77 = 26474LL;

	t77 = ((x309^(x310|x311))|x312);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 1176079LL;
	uint8_t x314 = UINT8_MAX;
	volatile int32_t x315 = INT32_MIN;
	uint8_t x316 = 6U;

	t78 = ((x313^(x314|x315))|x316);

	if (t78 != -2146307338LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 4813193;
	int32_t x320 = -316040;

	t79 = ((x317^(x318|x319))|x320);

	if (t79 != -295429) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	uint32_t x323 = 940454U;
	static volatile int32_t x324 = -190;
	uint32_t t80 = 229U;

	t80 = ((x321^(x322|x323))|x324);

	if (t80 != 4294967106U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 7U;
	uint64_t x326 = 14LLU;
	uint64_t x327 = 11173LLU;
	uint16_t x328 = UINT16_MAX;
	volatile uint64_t t81 = 498797336328733LLU;

	t81 = ((x325^(x326|x327))|x328);

	if (t81 != 65535LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MIN;
	static volatile int16_t x330 = INT16_MIN;
	static int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	int64_t t82 = 636389713759LL;

	t82 = ((x329^(x330|x331))|x332);

	if (t82 != -128LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x335 = UINT64_MAX;
	volatile int32_t x336 = INT32_MIN;

	t83 = ((x333^(x334|x335))|x336);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 3LLU;
	static int32_t x338 = -1;
	int32_t x339 = 1394;
	int16_t x340 = INT16_MIN;
	volatile uint64_t t84 = 770904LLU;

	t84 = ((x337^(x338|x339))|x340);

	if (t84 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	static uint16_t x342 = 1884U;
	static uint8_t x343 = 3U;
	uint64_t x344 = UINT64_MAX;

	t85 = ((x341^(x342|x343))|x344);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x345 = INT32_MIN;
	int8_t x346 = -1;
	int32_t x347 = INT32_MAX;
	volatile int8_t x348 = INT8_MIN;
	int32_t t86 = 58;

	t86 = ((x345^(x346|x347))|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	int64_t x352 = -45LL;
	uint64_t t87 = UINT64_MAX;

	t87 = ((x349^(x350|x351))|x352);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	static volatile int64_t x354 = -1LL;
	uint64_t x355 = 97419LLU;
	volatile uint64_t t88 = 64783653275559888LLU;

	t88 = ((x353^(x354|x355))|x356);

	if (t88 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	int64_t x358 = 11372133851094457LL;
	uint32_t x360 = 0U;
	volatile int64_t t89 = -646325812198897244LL;

	t89 = ((x357^(x358|x359))|x360);

	if (t89 != -58LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x362 = -1;
	int16_t x364 = INT16_MAX;
	static volatile uint64_t t90 = 976902354104733LLU;

	t90 = ((x361^(x362|x363))|x364);

	if (t90 != 32767LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int64_t x368 = INT64_MAX;
	int64_t t91 = -395273LL;

	t91 = ((x365^(x366|x367))|x368);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = 1;
	static int16_t x370 = -1;
	int8_t x371 = INT8_MIN;
	static int8_t x372 = -1;
	int32_t t92 = -1663099;

	t92 = ((x369^(x370|x371))|x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = INT32_MAX;
	int16_t x374 = -1;
	int64_t x375 = -1LL;
	int16_t x376 = INT16_MIN;
	volatile int64_t t93 = 25141937578599LL;

	t93 = ((x373^(x374|x375))|x376);

	if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x377 = 33U;
	int32_t x379 = INT32_MIN;
	int64_t t94 = -2093957839134508112LL;

	t94 = ((x377^(x378|x379))|x380);

	if (t94 != -1965377811LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x381 = UINT32_MAX;
	int32_t x383 = INT32_MAX;
	uint64_t x384 = 4248414LLU;
	volatile uint64_t t95 = 165266791061897LLU;

	t95 = ((x381^(x382|x383))|x384);

	if (t95 != 2151732062LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MAX;
	volatile int16_t x387 = INT16_MAX;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = -3872795;

	t96 = ((x385^(x386|x387))|x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -1;
	static int16_t x390 = -1;
	int8_t x391 = -1;
	volatile int16_t x392 = 6259;
	volatile int32_t t97 = 1887;

	t97 = ((x389^(x390|x391))|x392);

	if (t97 != 6259) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 1U;
	static int32_t x394 = 968912;
	static uint32_t x396 = UINT32_MAX;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = ((x393^(x394|x395))|x396);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	int64_t x398 = INT64_MAX;
	static int8_t x400 = -1;
	int64_t t99 = -3LL;

	t99 = ((x397^(x398|x399))|x400);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

