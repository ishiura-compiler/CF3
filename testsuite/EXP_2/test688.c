#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -107880;
int64_t x5 = -1LL;
uint8_t x7 = 3U;
int32_t x8 = INT32_MAX;
static volatile uint32_t t3 = 1U;
int8_t x17 = INT8_MIN;
uint64_t t6 = 493885LLU;
volatile uint64_t x40 = UINT64_MAX;
uint64_t t9 = 187LLU;
volatile int64_t t10 = INT64_MAX;
int32_t x50 = INT32_MIN;
int32_t t11 = 52539;
int64_t x53 = -614366LL;
static int8_t x55 = INT8_MAX;
int64_t x64 = INT64_MIN;
uint64_t t14 = 3300LLU;
int16_t x72 = -1;
uint32_t t15 = UINT32_MAX;
static uint16_t x76 = 82U;
int16_t x86 = -1;
static int64_t x87 = INT64_MAX;
uint16_t x91 = UINT16_MAX;
volatile int64_t t20 = 14189106LL;
static uint32_t t21 = 370717U;
int8_t x101 = INT8_MIN;
int16_t x102 = INT16_MIN;
static volatile uint64_t t22 = 8373909278063LLU;
int32_t x107 = 1563408;
static int16_t x109 = INT16_MIN;
int16_t x117 = -1;
int32_t x118 = INT32_MIN;
uint16_t x129 = 4556U;
static int8_t x130 = INT8_MIN;
static int64_t x131 = 1267273658086384442LL;
uint8_t x132 = UINT8_MAX;
volatile int32_t t29 = -134;
int16_t x137 = -1688;
volatile uint64_t t31 = 1785354182LLU;
volatile int16_t x161 = INT16_MIN;
volatile int32_t x164 = -117;
volatile uint64_t t35 = 221659828LLU;
int8_t x165 = 12;
int32_t t36 = -322011720;
static volatile uint8_t x172 = UINT8_MAX;
int8_t x177 = INT8_MAX;
static volatile int32_t x178 = INT32_MIN;
uint64_t x181 = UINT64_MAX;
int32_t x183 = 311;
volatile uint8_t x189 = 28U;
int8_t x191 = INT8_MIN;
uint32_t x196 = 53776155U;
uint16_t x197 = 105U;
static int64_t x202 = -1LL;
static volatile int64_t t45 = 21035405LL;
static int8_t x205 = INT8_MAX;
uint8_t x206 = 62U;
uint64_t x209 = 20587561LLU;
volatile int16_t x218 = -1;
volatile int64_t x219 = -10LL;
uint64_t x224 = 3568LLU;
static int8_t x227 = INT8_MIN;
int8_t x234 = 8;
int8_t x238 = -1;
static volatile uint32_t t54 = 29292U;
volatile int64_t t57 = -49LL;
volatile int64_t x262 = INT64_MIN;
uint64_t x269 = 98606558057LLU;
volatile int32_t x276 = INT32_MIN;
int64_t t60 = -4149211964052210LL;
static volatile int64_t x281 = INT64_MIN;
static uint32_t x282 = UINT32_MAX;
uint16_t x288 = 1501U;
uint32_t x295 = UINT32_MAX;
volatile int8_t x301 = INT8_MIN;
volatile uint16_t x302 = UINT16_MAX;
uint16_t x303 = 1U;
volatile int64_t t68 = 652215212341074LL;
volatile int16_t x309 = INT16_MIN;
volatile int16_t x334 = -570;
uint8_t x348 = 1U;
static uint32_t x359 = 1241709U;
static volatile uint8_t x365 = 24U;
int32_t x366 = -12141437;
volatile int64_t t80 = 14948232510LL;
uint32_t x369 = 183286742U;
volatile uint8_t x373 = UINT8_MAX;
int64_t x381 = INT64_MIN;
int64_t t86 = -85957663029005LL;
uint64_t x395 = UINT64_MAX;
int64_t x438 = -1LL;
uint32_t x440 = 1543019270U;
uint64_t x443 = 815431LLU;
static int8_t x446 = -1;


void f0(void) {
	int32_t x1 = -1;
	volatile int16_t x2 = 1221;
	int16_t x3 = 363;
	volatile int8_t x4 = -1;

	t0 = ((x1+(x2%x3))|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	int64_t t1 = -3341568378619LL;

	t1 = ((x5+(x6%x7))|x8);

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	volatile int64_t x10 = -7354499474LL;
	volatile int64_t x11 = INT64_MIN;
	static uint32_t x12 = UINT32_MAX;
	int64_t t2 = 4484901454082596LL;

	t2 = ((x9+(x10%x11))|x12);

	if (t2 != -4294967297LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	uint32_t x14 = 10768815U;
	uint8_t x15 = 2U;
	uint32_t x16 = 603525U;

	t3 = ((x13+(x14%x15))|x16);

	if (t3 != 603525U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x18 = INT32_MAX;
	int32_t x19 = -92105870;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = -1;

	t4 = ((x17+(x18%x19))|x20);

	if (t4 != 29097983) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 0U;
	volatile int32_t x26 = -21;
	static volatile int32_t x27 = INT32_MIN;
	static int64_t x28 = -1LL;
	int64_t t5 = -176581498861768746LL;

	t5 = ((x25+(x26%x27))|x28);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	volatile int16_t x30 = -11144;
	static uint64_t x31 = UINT64_MAX;
	int64_t x32 = INT64_MIN;

	t6 = ((x29+(x30%x31))|x32);

	if (t6 != 18446744073709507704LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = 1;
	int16_t x34 = INT16_MAX;
	int16_t x35 = INT16_MAX;
	int64_t x36 = -1083212729465LL;
	volatile int64_t t7 = -947060LL;

	t7 = ((x33+(x34%x35))|x36);

	if (t7 != -1083212729465LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 80188LLU;
	int16_t x38 = INT16_MIN;
	static volatile uint32_t x39 = 213692U;
	static uint64_t t8 = UINT64_MAX;

	t8 = ((x37+(x38%x39))|x40);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = 494LLU;
	uint8_t x42 = 1U;
	int8_t x43 = INT8_MAX;
	static uint64_t x44 = 47820536916372784LLU;

	t9 = ((x41+(x42%x43))|x44);

	if (t9 != 47820536916372991LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x45 = 91U;
	int16_t x46 = -4;
	int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MAX;

	t10 = ((x45+(x46%x47))|x48);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	int32_t x51 = -17972;
	int8_t x52 = INT8_MAX;

	t11 = ((x49+(x50%x51))|x52);

	if (t11 != 2147474303) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = INT64_MAX;
	static int32_t x56 = INT32_MIN;
	int64_t t12 = 397152969279709008LL;

	t12 = ((x53+(x54%x55))|x56);

	if (t12 != -614366LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = UINT8_MAX;
	static volatile int16_t x58 = -1;
	int64_t x59 = 32966109342834LL;
	int64_t x60 = -4468833507LL;
	static int64_t t13 = -26587LL;

	t13 = ((x57+(x58%x59))|x60);

	if (t13 != -4468833281LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = INT8_MIN;
	uint64_t x62 = 686601032LLU;
	uint8_t x63 = 1U;

	t14 = ((x61+(x62%x63))|x64);

	if (t14 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 176422U;
	int8_t x70 = INT8_MAX;
	static int8_t x71 = INT8_MIN;

	t15 = ((x69+(x70%x71))|x72);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	volatile int8_t x74 = INT8_MIN;
	static int16_t x75 = INT16_MIN;
	static volatile int32_t t16 = 727;

	t16 = ((x73+(x74%x75))|x76);

	if (t16 != -32814) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -9;
	int32_t x78 = INT32_MIN;
	int32_t x79 = 1;
	volatile int16_t x80 = -1;
	volatile int32_t t17 = 297170;

	t17 = ((x77+(x78%x79))|x80);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	volatile uint8_t x82 = 8U;
	int16_t x83 = -1;
	int8_t x84 = -21;
	static int32_t t18 = 459886370;

	t18 = ((x81+(x82%x83))|x84);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = 188914;
	int16_t x88 = INT16_MIN;
	volatile int64_t t19 = -105892704512077473LL;

	t19 = ((x85+(x86%x87))|x88);

	if (t19 != -7695LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -1;
	uint32_t x90 = 56U;
	int64_t x92 = INT64_MIN;

	t20 = ((x89+(x90%x91))|x92);

	if (t20 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x93 = 295U;
	uint16_t x94 = 667U;
	uint32_t x95 = 124515U;
	uint8_t x96 = 1U;

	t21 = ((x93+(x94%x95))|x96);

	if (t21 != 963U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x103 = 64LLU;
	int16_t x104 = 0;

	t22 = ((x101+(x102%x103))|x104);

	if (t22 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = 1786;
	static volatile int64_t x106 = 328974063622LL;
	int16_t x108 = INT16_MAX;
	volatile int64_t t23 = -4752345975128LL;

	t23 = ((x105+(x106%x107))|x108);

	if (t23 != 196607LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x110 = INT8_MAX;
	volatile int64_t x111 = INT64_MIN;
	int8_t x112 = 1;
	int64_t t24 = -1233645669150LL;

	t24 = ((x109+(x110%x111))|x112);

	if (t24 != -32641LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = 101780LL;
	uint64_t x114 = 37936331799406910LLU;
	int32_t x115 = 3317;
	int16_t x116 = INT16_MAX;
	uint64_t t25 = 29268509931LLU;

	t25 = ((x113+(x114%x115))|x116);

	if (t25 != 131071LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x119 = 2U;
	int64_t x120 = INT64_MIN;
	volatile int64_t t26 = -164523LL;

	t26 = ((x117+(x118%x119))|x120);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -4;
	static uint16_t x126 = 11553U;
	int16_t x127 = -12470;
	int64_t x128 = INT64_MIN;
	int64_t t27 = 1LL;

	t27 = ((x125+(x126%x127))|x128);

	if (t27 != -9223372036854764259LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t t28 = 3129385830LL;

	t28 = ((x129+(x130%x131))|x132);

	if (t28 != 4607LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = INT32_MIN;
	static uint8_t x134 = 1U;
	static volatile uint16_t x135 = UINT16_MAX;
	uint8_t x136 = UINT8_MAX;

	t29 = ((x133+(x134%x135))|x136);

	if (t29 != -2147483393) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x138 = -63;
	int16_t x139 = INT16_MAX;
	volatile int64_t x140 = -1LL;
	static int64_t t30 = -8006399873449798LL;

	t30 = ((x137+(x138%x139))|x140);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = 1009508234629LLU;
	static volatile int32_t x142 = -1;
	int32_t x143 = -598558961;
	int32_t x144 = INT32_MIN;

	t31 = ((x141+(x142%x143))|x144);

	if (t31 != 18446744071752988036LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 1418907549LLU;
	int64_t x146 = -345772113LL;
	uint32_t x147 = UINT32_MAX;
	int16_t x148 = INT16_MAX;
	volatile uint64_t t32 = 36LLU;

	t32 = ((x145+(x146%x147))|x148);

	if (t32 != 1073151999LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = 26;
	volatile int64_t x150 = INT64_MAX;
	int8_t x151 = INT8_MAX;
	int64_t x152 = -1594958LL;
	int64_t t33 = -1070276384LL;

	t33 = ((x149+(x150%x151))|x152);

	if (t33 != -1594950LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x153 = 27U;
	uint16_t x154 = 3084U;
	static int64_t x155 = -6521LL;
	uint32_t x156 = 224U;
	int64_t t34 = 248LL;

	t34 = ((x153+(x154%x155))|x156);

	if (t34 != 3303LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x162 = UINT32_MAX;
	uint64_t x163 = 29LLU;

	t35 = ((x161+(x162%x163))|x164);

	if (t35 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x166 = UINT8_MAX;
	volatile int32_t x167 = -1;
	uint16_t x168 = 1U;

	t36 = ((x165+(x166%x167))|x168);

	if (t36 != 13) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x169 = -8;
	int16_t x170 = INT16_MAX;
	static uint32_t x171 = UINT32_MAX;
	uint32_t t37 = 76623U;

	t37 = ((x169+(x170%x171))|x172);

	if (t37 != 32767U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = -1LL;
	int64_t x174 = -1LL;
	volatile int16_t x175 = INT16_MIN;
	int64_t x176 = -58017LL;
	int64_t t38 = -8899LL;

	t38 = ((x173+(x174%x175))|x176);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x179 = -1;
	uint16_t x180 = 713U;
	int32_t t39 = 94671;

	t39 = ((x177+(x178%x179))|x180);

	if (t39 != 767) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x182 = INT32_MIN;
	int16_t x184 = INT16_MIN;
	uint64_t t40 = 361422LLU;

	t40 = ((x181+(x182%x183))|x184);

	if (t40 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = -1;
	volatile int32_t x186 = INT32_MAX;
	int32_t x187 = -43;
	int64_t x188 = INT64_MIN;
	static int64_t t41 = 438454LL;

	t41 = ((x185+(x186%x187))|x188);

	if (t41 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x190 = INT16_MIN;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = ((x189+(x190%x191))|x192);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MIN;
	volatile int16_t x194 = INT16_MAX;
	int16_t x195 = INT16_MIN;
	static volatile uint32_t t43 = UINT32_MAX;

	t43 = ((x193+(x194%x195))|x196);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x198 = -1;
	uint32_t x199 = 4228108U;
	uint16_t x200 = 1U;
	volatile uint32_t t44 = 3U;

	t44 = ((x197+(x198%x199))|x200);

	if (t44 != 3437781U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = -1;
	static int64_t x203 = INT64_MIN;
	int16_t x204 = INT16_MIN;

	t45 = ((x201+(x202%x203))|x204);

	if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x207 = INT64_MAX;
	volatile uint64_t x208 = 9193399798LLU;
	volatile uint64_t t46 = 5027179334388449827LLU;

	t46 = ((x205+(x206%x207))|x208);

	if (t46 != 9193399807LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x210 = INT64_MIN;
	int16_t x211 = -30;
	int64_t x212 = INT64_MIN;
	static uint64_t t47 = 2702848541893LLU;

	t47 = ((x209+(x210%x211))|x212);

	if (t47 != 9223372036875363361LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = 96;
	volatile uint8_t x214 = 7U;
	int16_t x215 = INT16_MIN;
	static volatile int64_t x216 = -439653LL;
	static volatile int64_t t48 = 7424438LL;

	t48 = ((x213+(x214%x215))|x216);

	if (t48 != -439553LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x217 = 29;
	int16_t x220 = INT16_MIN;
	static int64_t t49 = -1422LL;

	t49 = ((x217+(x218%x219))|x220);

	if (t49 != -32740LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 25U;
	static uint32_t x222 = UINT32_MAX;
	int8_t x223 = INT8_MAX;
	volatile uint64_t t50 = 5426LLU;

	t50 = ((x221+(x222%x223))|x224);

	if (t50 != 3576LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x225 = INT16_MIN;
	volatile int8_t x226 = INT8_MIN;
	int32_t x228 = -1;
	int32_t t51 = -6803244;

	t51 = ((x225+(x226%x227))|x228);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = -5869631437LL;
	static uint16_t x235 = UINT16_MAX;
	static int8_t x236 = 40;
	volatile int64_t t52 = -1734425531614LL;

	t52 = ((x233+(x234%x235))|x236);

	if (t52 != -5869631429LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = INT64_MIN;
	volatile uint64_t x239 = UINT64_MAX;
	volatile uint64_t x240 = 485654661403041LLU;
	volatile uint64_t t53 = 2424434LLU;

	t53 = ((x237+(x238%x239))|x240);

	if (t53 != 9223857691516178849LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = INT8_MIN;
	static uint8_t x242 = 1U;
	int16_t x243 = -11253;
	volatile uint32_t x244 = 1701993189U;

	t54 = ((x241+(x242%x243))|x244);

	if (t54 != 4294967269U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = 9U;
	uint8_t x246 = 2U;
	uint16_t x247 = UINT16_MAX;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = ((x245+(x246%x247))|x248);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = UINT8_MAX;
	volatile int16_t x254 = -245;
	volatile int64_t x255 = INT64_MAX;
	uint16_t x256 = UINT16_MAX;
	static volatile int64_t t56 = 29960181LL;

	t56 = ((x253+(x254%x255))|x256);

	if (t56 != 65535LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x257 = INT8_MIN;
	static int32_t x258 = -735098410;
	int64_t x259 = -12LL;
	static int8_t x260 = INT8_MIN;

	t57 = ((x257+(x258%x259))|x260);

	if (t57 != -10LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x261 = 29U;
	volatile uint64_t x263 = UINT64_MAX;
	static int64_t x264 = INT64_MIN;
	volatile uint64_t t58 = 225578571364LLU;

	t58 = ((x261+(x262%x263))|x264);

	if (t58 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x270 = INT64_MIN;
	uint16_t x271 = 2962U;
	static int64_t x272 = INT64_MIN;
	volatile uint64_t t59 = 15720LLU;

	t59 = ((x269+(x270%x271))|x272);

	if (t59 != 9223372135461333007LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = INT64_MIN;
	int64_t x274 = INT64_MAX;
	volatile uint32_t x275 = 34U;

	t60 = ((x273+(x274%x275))|x276);

	if (t60 != -2147483623LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = 3;
	volatile uint32_t x278 = 225U;
	uint32_t x279 = 3U;
	int16_t x280 = 8;
	volatile uint32_t t61 = 464U;

	t61 = ((x277+(x278%x279))|x280);

	if (t61 != 11U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x283 = INT8_MIN;
	volatile uint8_t x284 = 0U;
	static volatile int64_t t62 = 1LL;

	t62 = ((x281+(x282%x283))|x284);

	if (t62 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x285 = -1LL;
	uint16_t x286 = 0U;
	uint64_t x287 = 63LLU;
	uint64_t t63 = UINT64_MAX;

	t63 = ((x285+(x286%x287))|x288);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = -1;
	static int32_t x290 = INT32_MIN;
	uint16_t x291 = 1U;
	volatile int16_t x292 = -1;
	volatile int32_t t64 = 184517113;

	t64 = ((x289+(x290%x291))|x292);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x293 = 243U;
	uint8_t x294 = UINT8_MAX;
	int8_t x296 = INT8_MIN;
	static uint32_t t65 = 174899U;

	t65 = ((x293+(x294%x295))|x296);

	if (t65 != 4294967282U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = INT8_MIN;
	volatile int32_t x298 = 6;
	uint8_t x299 = UINT8_MAX;
	uint32_t x300 = UINT32_MAX;
	uint32_t t66 = UINT32_MAX;

	t66 = ((x297+(x298%x299))|x300);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x304 = INT64_MIN;
	int64_t t67 = 69272340LL;

	t67 = ((x301+(x302%x303))|x304);

	if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MIN;
	static uint32_t x308 = UINT32_MAX;

	t68 = ((x305+(x306%x307))|x308);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x310 = 501558547U;
	int64_t x311 = -465890167551204307LL;
	int16_t x312 = -815;
	static int64_t t69 = -72667589181LL;

	t69 = ((x309+(x310%x311))|x312);

	if (t69 != -557LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x317 = 19;
	static uint32_t x318 = UINT32_MAX;
	int8_t x319 = -1;
	int32_t x320 = INT32_MIN;
	static volatile uint32_t t70 = 97U;

	t70 = ((x317+(x318%x319))|x320);

	if (t70 != 2147483667U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x321 = 1U;
	static int8_t x322 = -1;
	uint16_t x323 = UINT16_MAX;
	int32_t x324 = -4995604;
	volatile int32_t t71 = 53843;

	t71 = ((x321+(x322%x323))|x324);

	if (t71 != -4995604) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = 772606;
	int16_t x326 = -1;
	int8_t x327 = INT8_MIN;
	static int16_t x328 = INT16_MIN;
	int32_t t72 = 9633360;

	t72 = ((x325+(x326%x327))|x328);

	if (t72 != -13827) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = -1LL;
	int8_t x335 = INT8_MIN;
	uint16_t x336 = UINT16_MAX;
	volatile int64_t t73 = -6120120450LL;

	t73 = ((x333+(x334%x335))|x336);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x337 = -1;
	volatile uint32_t x338 = 3290U;
	static int64_t x339 = 529950526215507828LL;
	uint32_t x340 = 23U;
	volatile int64_t t74 = 2713218759898504523LL;

	t74 = ((x337+(x338%x339))|x340);

	if (t74 != 3295LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x341 = 29067LL;
	volatile int32_t x342 = INT32_MIN;
	uint16_t x343 = 2U;
	static int8_t x344 = -1;
	int64_t t75 = -497364LL;

	t75 = ((x341+(x342%x343))|x344);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = -1;
	int16_t x346 = INT16_MIN;
	static uint8_t x347 = 7U;
	int32_t t76 = 188033893;

	t76 = ((x345+(x346%x347))|x348);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = -1LL;
	volatile int32_t x354 = 159985348;
	int8_t x355 = INT8_MAX;
	uint8_t x356 = 113U;
	int64_t t77 = -37930216865868517LL;

	t77 = ((x353+(x354%x355))|x356);

	if (t77 != 115LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x357 = INT16_MAX;
	static int64_t x358 = 3311243436062LL;
	int32_t x360 = -1;
	int64_t t78 = 6680965676LL;

	t78 = ((x357+(x358%x359))|x360);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = -1LL;
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = -796;
	static uint8_t x364 = 102U;
	static int64_t t79 = 13915249875424LL;

	t79 = ((x361+(x362%x363))|x364);

	if (t79 != 894LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x367 = 924758954667115LL;
	static int64_t x368 = -3227615LL;

	t80 = ((x365+(x366%x367))|x368);

	if (t80 != -3212101LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x370 = -2277;
	static uint16_t x371 = 82U;
	int8_t x372 = INT8_MIN;
	volatile uint32_t t81 = 51U;

	t81 = ((x369+(x370%x371))|x372);

	if (t81 != 4294967191U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x374 = 3;
	uint16_t x375 = 510U;
	volatile uint32_t x376 = 2U;
	volatile uint32_t t82 = 1947307416U;

	t82 = ((x373+(x374%x375))|x376);

	if (t82 != 258U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x377 = -3;
	volatile int16_t x378 = INT16_MIN;
	int8_t x379 = -22;
	volatile int64_t x380 = -4447LL;
	int64_t t83 = -8597167822050108LL;

	t83 = ((x377+(x378%x379))|x380);

	if (t83 != -13LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x382 = INT32_MAX;
	int8_t x383 = INT8_MAX;
	uint32_t x384 = UINT32_MAX;
	int64_t t84 = 2432627480LL;

	t84 = ((x381+(x382%x383))|x384);

	if (t84 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = INT32_MIN;
	volatile int64_t x386 = -2794654756964180LL;
	int16_t x387 = -1;
	int64_t x388 = 1708811LL;
	int64_t t85 = 2207796503LL;

	t85 = ((x385+(x386%x387))|x388);

	if (t85 != -2145774837LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = 3U;
	int64_t x390 = INT64_MIN;
	uint32_t x391 = UINT32_MAX;
	static int64_t x392 = -1LL;

	t86 = ((x389+(x390%x391))|x392);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x393 = 16531306;
	int16_t x394 = -2875;
	int32_t x396 = -296081;
	static volatile uint64_t t87 = 64LLU;

	t87 = ((x393+(x394%x395))|x396);

	if (t87 != 18446744073709518703LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x397 = 97;
	uint16_t x398 = 0U;
	static int16_t x399 = INT16_MIN;
	volatile int8_t x400 = INT8_MAX;
	volatile int32_t t88 = 1;

	t88 = ((x397+(x398%x399))|x400);

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x401 = 6U;
	uint64_t x402 = 22606901214778845LLU;
	static volatile int32_t x403 = INT32_MIN;
	volatile int8_t x404 = 22;
	static volatile uint64_t t89 = 881LLU;

	t89 = ((x401+(x402%x403))|x404);

	if (t89 != 22606901214778871LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x405 = -1LL;
	static int8_t x406 = 0;
	int8_t x407 = INT8_MIN;
	volatile int64_t x408 = -1LL;
	volatile int64_t t90 = 0LL;

	t90 = ((x405+(x406%x407))|x408);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = -1LL;
	volatile uint32_t x410 = 6420U;
	int64_t x411 = INT64_MIN;
	uint16_t x412 = 27979U;
	int64_t t91 = -65619LL;

	t91 = ((x409+(x410%x411))|x412);

	if (t91 != 32091LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x413 = UINT64_MAX;
	int16_t x414 = -1;
	volatile int8_t x415 = INT8_MIN;
	uint8_t x416 = UINT8_MAX;
	uint64_t t92 = UINT64_MAX;

	t92 = ((x413+(x414%x415))|x416);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x417 = UINT32_MAX;
	int64_t x418 = INT64_MIN;
	uint32_t x419 = 193308U;
	static int16_t x420 = -395;
	volatile int64_t t93 = 10503055317831788LL;

	t93 = ((x417+(x418%x419))|x420);

	if (t93 != -129LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x425 = UINT32_MAX;
	static volatile int32_t x426 = -11171;
	static int64_t x427 = INT64_MIN;
	int8_t x428 = INT8_MAX;
	volatile int64_t t94 = -2445081440514278LL;

	t94 = ((x425+(x426%x427))|x428);

	if (t94 != 4294956159LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x429 = -16;
	uint8_t x430 = UINT8_MAX;
	volatile uint64_t x431 = 28973071077LLU;
	volatile int64_t x432 = -7807465816LL;
	static volatile uint64_t t95 = 233347949684146294LLU;

	t95 = ((x429+(x430%x431))|x432);

	if (t95 != 18446744065902085871LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = INT8_MIN;
	static int64_t x434 = -1LL;
	int16_t x435 = 20;
	int32_t x436 = INT32_MAX;
	int64_t t96 = 26811079998417531LL;

	t96 = ((x433+(x434%x435))|x436);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x437 = -1;
	int16_t x439 = 12336;
	int64_t t97 = -165886LL;

	t97 = ((x437+(x438%x439))|x440);

	if (t97 != -2LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = 17;
	int16_t x442 = INT16_MIN;
	int64_t x444 = INT64_MIN;
	volatile uint64_t t98 = 1953116171638528776LLU;

	t98 = ((x441+(x442%x443))|x444);

	if (t98 != 9223372036854957119LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x445 = 734489920125723764LLU;
	int8_t x447 = INT8_MIN;
	static int32_t x448 = INT32_MIN;
	static uint64_t t99 = 680646415951LLU;

	t99 = ((x445+(x446%x447))|x448);

	if (t99 != 18446744073108907123LLU) { NG(); } else { ; }
	
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

