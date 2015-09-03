#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x5 = 4U;
int8_t x6 = -1;
volatile uint64_t t1 = 1LLU;
uint8_t x25 = UINT8_MAX;
uint64_t x26 = UINT64_MAX;
int8_t x28 = INT8_MIN;
int16_t x30 = INT16_MAX;
static int64_t x32 = INT64_MIN;
static int64_t t6 = 227030152LL;
uint16_t x37 = 2364U;
int32_t x42 = -35780;
static int32_t x44 = -401244968;
uint16_t x59 = 61U;
static uint16_t x62 = UINT16_MAX;
uint8_t x81 = 96U;
int8_t x98 = 3;
volatile uint32_t t20 = UINT32_MAX;
int32_t x105 = -356332703;
int8_t x106 = INT8_MIN;
uint8_t x108 = UINT8_MAX;
uint32_t t23 = 19751683U;
int64_t x117 = -559828812LL;
int32_t x119 = INT32_MIN;
static volatile int64_t t24 = 2LL;
int8_t x123 = INT8_MIN;
uint8_t x124 = 7U;
static int32_t x128 = -1;
volatile uint16_t x132 = 19U;
int16_t x138 = -1;
int8_t x146 = -1;
static volatile int32_t x153 = -54293;
uint32_t x154 = 1531094016U;
static uint32_t x155 = 6082378U;
uint32_t x156 = UINT32_MAX;
uint8_t x164 = 19U;
static uint32_t t34 = 1640506555U;
volatile uint32_t x166 = UINT32_MAX;
uint16_t x167 = 1U;
uint32_t t35 = UINT32_MAX;
int8_t x187 = 12;
static uint8_t x190 = 3U;
volatile int64_t t39 = 3568805401736882LL;
static int32_t x198 = -2;
static volatile int64_t x200 = INT64_MIN;
static volatile uint8_t x202 = UINT8_MAX;
int16_t x209 = INT16_MAX;
uint32_t t45 = 1189U;
uint8_t x226 = 9U;
uint64_t x232 = 101749633769677LLU;
int64_t x234 = 67607713295624649LL;
int16_t x237 = 51;
int32_t x242 = INT32_MAX;
int8_t x243 = INT8_MIN;
int32_t x244 = INT32_MIN;
volatile uint64_t x246 = UINT64_MAX;
int64_t x248 = -1LL;
volatile int32_t x250 = -1;
int8_t x255 = -1;
static int16_t x280 = INT16_MAX;
static int64_t x284 = INT64_MAX;
int64_t t58 = INT64_MAX;
int16_t x290 = 15636;
int64_t t60 = -1999835034939746LL;
int8_t x296 = -1;
int8_t x297 = INT8_MAX;
int64_t t62 = -34123141251475LL;
int32_t x306 = -3678237;
int64_t t64 = -4063967LL;
volatile uint32_t x314 = 226U;
int32_t x320 = INT32_MIN;
uint64_t x321 = 59852LLU;
int8_t x322 = INT8_MIN;
int64_t x323 = INT64_MAX;
static int64_t x327 = 30391091461464811LL;
uint8_t x328 = 12U;
uint64_t t68 = 1369921801362LLU;
uint8_t x336 = UINT8_MAX;
int64_t t69 = 4643481LL;
uint32_t x339 = UINT32_MAX;
static uint64_t t71 = UINT64_MAX;
uint64_t x345 = UINT64_MAX;
uint64_t x346 = 19055947333706LLU;
static uint64_t t73 = 35087173LLU;
volatile int64_t t74 = 23516098LL;
static uint32_t x362 = 15514496U;
int8_t x364 = INT8_MIN;
uint32_t t75 = 5779U;
int8_t x368 = INT8_MIN;
int32_t x372 = -517;
static volatile int64_t x378 = 260LL;
int64_t x387 = INT64_MIN;
int32_t x394 = -10;
int8_t x396 = INT8_MIN;
static int8_t x398 = INT8_MIN;
int16_t x423 = -29;
int64_t t88 = -157797850583531540LL;
int64_t x429 = INT64_MIN;
int8_t x433 = 6;
uint64_t x435 = 38118648528627LLU;
static uint32_t x443 = 5791U;
static uint16_t x445 = 8430U;
int32_t x446 = INT32_MIN;
int16_t x447 = INT16_MIN;
volatile int8_t x449 = 5;
int16_t x450 = -32;
static int32_t t95 = -53109188;
int8_t x458 = 0;
volatile uint8_t x469 = 17U;


void f0(void) {
	volatile uint8_t x7 = 1U;
	int16_t x8 = INT16_MAX;
	int32_t t0 = -1765191;

	t0 = (((x5+x6)^x7)|x8);

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 217460151LLU;
	volatile int16_t x10 = 0;
	static uint64_t x11 = UINT64_MAX;
	uint64_t x12 = 201941692260772LLU;

	t1 = (((x9+x10)^x11)|x12);

	if (t1 != 18446744073573102572LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = INT64_MAX;
	int32_t x14 = INT32_MIN;
	int16_t x15 = 101;
	int64_t x16 = -1LL;
	int64_t t2 = 0LL;

	t2 = (((x13+x14)^x15)|x16);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 236;
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 160823184775171LLU;
	int32_t x20 = 22;
	volatile uint64_t t3 = 100LLU;

	t3 = (((x17+x18)^x19)|x20);

	if (t3 != 160823184775295LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = -1;
	int8_t x22 = 15;
	static int32_t x23 = INT32_MAX;
	uint16_t x24 = 1U;
	int32_t t4 = -124;

	t4 = (((x21+x22)^x23)|x24);

	if (t4 != 2147483633) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x27 = -15;
	static volatile uint64_t t5 = 11329020138391987LLU;

	t5 = (((x25+x26)^x27)|x28);

	if (t5 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 340;
	int32_t x31 = INT32_MAX;

	t6 = (((x29+x30)^x31)|x32);

	if (t6 != -9223372034707325268LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	volatile uint64_t x34 = UINT64_MAX;
	int32_t x35 = INT32_MAX;
	int32_t x36 = -1;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (((x33+x34)^x35)|x36);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x38 = 1416817U;
	volatile int16_t x39 = INT16_MIN;
	uint64_t x40 = 92421337710235LLU;
	static uint64_t t8 = 25456413212LLU;

	t8 = (((x37+x38)^x39)|x40);

	if (t8 != 92423399866303LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int8_t x43 = -1;
	static volatile int32_t t9 = -2276851;

	t9 = (((x41+x42)^x43)|x44);

	if (t9 != -401211428) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 3911878533047LL;
	volatile int8_t x46 = 0;
	int64_t x47 = 12783746045540111LL;
	int16_t x48 = INT16_MIN;
	volatile int64_t t10 = -40LL;

	t10 = (((x45+x46)^x47)|x48);

	if (t10 != -22344LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x49 = 7LLU;
	volatile int32_t x50 = 1508843;
	volatile int8_t x51 = -1;
	volatile int64_t x52 = INT64_MIN;
	volatile uint64_t t11 = 1864267779LLU;

	t11 = (((x49+x50)^x51)|x52);

	if (t11 != 18446744073708042765LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 194U;
	static int64_t x54 = 260411992LL;
	uint8_t x55 = 2U;
	int8_t x56 = -1;
	volatile int64_t t12 = 848307LL;

	t12 = (((x53+x54)^x55)|x56);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x57 = -1;
	int32_t x58 = -1897382;
	uint32_t x60 = 154857648U;
	volatile uint32_t t13 = 3279U;

	t13 = (((x57+x58)^x59)|x60);

	if (t13 != 4294704372U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	int32_t x63 = 604;
	uint64_t x64 = 1064101233989352700LLU;
	uint64_t t14 = 1521756961LLU;

	t14 = (((x61+x62)^x63)|x64);

	if (t14 != 1064101233989385727LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -5854145LL;
	int64_t x66 = -3590LL;
	uint64_t x67 = UINT64_MAX;
	int16_t x68 = INT16_MAX;
	uint64_t t15 = 251563362LLU;

	t15 = (((x65+x66)^x67)|x68);

	if (t15 != 5865471LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -472598;
	uint16_t x78 = UINT16_MAX;
	int8_t x79 = INT8_MAX;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t16 = -864108082;

	t16 = (((x77+x78)^x79)|x80);

	if (t16 != -407146) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x82 = 389U;
	uint32_t x83 = UINT32_MAX;
	int8_t x84 = INT8_MIN;
	uint32_t t17 = 7U;

	t17 = (((x81+x82)^x83)|x84);

	if (t17 != 4294967194U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 268866110041573263LLU;
	static int16_t x86 = -42;
	int64_t x87 = INT64_MAX;
	int16_t x88 = -1;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (((x85+x86)^x87)|x88);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x89 = INT8_MIN;
	static int32_t x90 = -3;
	static int64_t x91 = INT64_MAX;
	static int16_t x92 = INT16_MIN;
	int64_t t19 = 2316481248LL;

	t19 = (((x89+x90)^x91)|x92);

	if (t19 != -32638LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x97 = 1U;
	static int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MAX;

	t20 = (((x97+x98)^x99)|x100);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -2743799671LL;
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = 5287999129318LL;
	int64_t x104 = INT64_MIN;
	int64_t t21 = 63440237719LL;

	t21 = (((x101+x102)^x103)|x104);

	if (t21 != -5289634187410LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x107 = INT64_MIN;
	volatile int64_t t22 = -81696740003953916LL;

	t22 = (((x105+x106)^x107)|x108);

	if (t22 != 9223372036498443007LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = 0U;
	uint32_t x114 = UINT32_MAX;
	uint32_t x115 = 262882146U;
	int8_t x116 = INT8_MIN;

	t23 = (((x113+x114)^x115)|x116);

	if (t23 != 4294967197U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x118 = INT64_MAX;
	int64_t x120 = INT64_MIN;

	t24 = (((x117+x118)^x119)|x120);

	if (t24 != -9223372035267120973LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = INT64_MAX;
	int32_t x122 = -1;
	int64_t t25 = -2007948290778657LL;

	t25 = (((x121+x122)^x123)|x124);

	if (t25 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x125 = 16782906U;
	int32_t x126 = -1;
	volatile int32_t x127 = INT32_MIN;
	uint32_t t26 = UINT32_MAX;

	t26 = (((x125+x126)^x127)|x128);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = -3323131903882890279LL;
	int32_t x130 = INT32_MIN;
	volatile uint16_t x131 = UINT16_MAX;
	int64_t t27 = 489247689556545LL;

	t27 = (((x129+x130)^x131)|x132);

	if (t27 != -3323131906030433225LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x133 = 103743309757LL;
	int32_t x134 = -4042844;
	int32_t x135 = -17193979;
	volatile int16_t x136 = INT16_MIN;
	volatile int64_t t28 = -645LL;

	t28 = (((x133+x134)^x135)|x136);

	if (t28 != -19612LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x137 = -1;
	static uint64_t x139 = 4410973434024119LLU;
	int16_t x140 = INT16_MIN;
	volatile uint64_t t29 = 6LLU;

	t29 = (((x137+x138)^x139)|x140);

	if (t29 != 18446744073709547337LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = 28;
	static int32_t x147 = INT32_MIN;
	static int8_t x148 = 52;
	volatile int32_t t30 = 1;

	t30 = (((x145+x146)^x147)|x148);

	if (t30 != -2147483585) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 52U;
	uint64_t x150 = 156176036161811LLU;
	int8_t x151 = INT8_MIN;
	volatile int16_t x152 = INT16_MIN;
	static uint64_t t31 = 184LLU;

	t31 = (((x149+x150)^x151)|x152);

	if (t31 != 18446744073709524679LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (((x153+x154)^x155)|x156);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = UINT16_MAX;
	uint64_t x158 = UINT64_MAX;
	uint32_t x159 = 1414754U;
	int8_t x160 = INT8_MIN;
	volatile uint64_t t33 = 22571020348LLU;

	t33 = (((x157+x158)^x159)|x160);

	if (t33 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = 1;
	static int8_t x162 = 0;
	volatile uint32_t x163 = 1223045U;

	t34 = (((x161+x162)^x163)|x164);

	if (t34 != 1223063U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = 725;
	volatile uint32_t x168 = UINT32_MAX;

	t35 = (((x165+x166)^x167)|x168);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = 6;
	static uint32_t x174 = 602130223U;
	int64_t x175 = INT64_MIN;
	static int8_t x176 = INT8_MAX;
	int64_t t36 = -102LL;

	t36 = (((x173+x174)^x175)|x176);

	if (t36 != -9223372036252645505LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x181 = INT32_MIN;
	volatile uint16_t x182 = UINT16_MAX;
	int8_t x183 = -1;
	static int32_t x184 = INT32_MIN;
	int32_t t37 = -153;

	t37 = (((x181+x182)^x183)|x184);

	if (t37 != -65536) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x185 = 3260249U;
	int16_t x186 = INT16_MAX;
	volatile int64_t x188 = INT64_MIN;
	static int64_t t38 = -759798LL;

	t38 = (((x185+x186)^x187)|x188);

	if (t38 != -9223372036851482796LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x189 = 0U;
	volatile int32_t x191 = 103057;
	int64_t x192 = -1LL;

	t39 = (((x189+x190)^x191)|x192);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = 276264U;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	uint32_t x196 = 67U;
	uint32_t t40 = 6U;

	t40 = (((x193+x194)^x195)|x196);

	if (t40 != 4294719339U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x197 = UINT8_MAX;
	uint8_t x199 = UINT8_MAX;
	static int64_t t41 = 6633564398758LL;

	t41 = (((x197+x198)^x199)|x200);

	if (t41 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = -1;
	int64_t x203 = INT64_MIN;
	uint64_t x204 = UINT64_MAX;
	uint64_t t42 = UINT64_MAX;

	t42 = (((x201+x202)^x203)|x204);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x210 = 2;
	int32_t x211 = 414099236;
	uint8_t x212 = 5U;
	static int32_t t43 = -186617;

	t43 = (((x209+x210)^x211)|x212);

	if (t43 != 414066469) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x213 = 410579151541599LLU;
	int64_t x214 = -117LL;
	uint32_t x215 = 6834808U;
	uint16_t x216 = 292U;
	volatile uint64_t t44 = 16LLU;

	t44 = (((x213+x214)^x215)|x216);

	if (t44 != 410579144712118LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = 1381;
	uint32_t x219 = 0U;
	volatile int32_t x220 = INT32_MIN;

	t45 = (((x217+x218)^x219)|x220);

	if (t45 != 4294935909U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x221 = 1;
	int32_t x222 = INT32_MIN;
	volatile uint32_t x223 = 29369112U;
	int16_t x224 = INT16_MAX;
	volatile uint32_t t46 = 141306U;

	t46 = (((x221+x222)^x223)|x224);

	if (t46 != 2176876543U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x225 = -1;
	static uint64_t x227 = 1084156915178549760LLU;
	uint8_t x228 = 0U;
	uint64_t t47 = 65426032LLU;

	t47 = (((x225+x226)^x227)|x228);

	if (t47 != 1084156915178549768LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x229 = -2998352;
	int8_t x230 = INT8_MAX;
	volatile uint8_t x231 = 1U;
	static volatile uint64_t t48 = 971013523319280LLU;

	t48 = (((x229+x230)^x231)|x232);

	if (t48 != 18446744073706856687LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x233 = -1;
	uint16_t x235 = 1U;
	volatile int64_t x236 = -1LL;
	int64_t t49 = 82544096848LL;

	t49 = (((x233+x234)^x235)|x236);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x238 = 112621175911080LL;
	int8_t x239 = INT8_MIN;
	int16_t x240 = -1;
	static int64_t t50 = 37495620LL;

	t50 = (((x237+x238)^x239)|x240);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x241 = INT64_MIN;
	int64_t t51 = 1562137757869LL;

	t51 = (((x241+x242)^x243)|x244);

	if (t51 != -2147483521LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = -6;
	uint64_t x247 = UINT64_MAX;
	uint64_t t52 = UINT64_MAX;

	t52 = (((x245+x246)^x247)|x248);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = INT16_MAX;
	int8_t x251 = INT8_MIN;
	static int64_t x252 = 15053LL;
	int64_t t53 = 121355644202559LL;

	t53 = (((x249+x250)^x251)|x252);

	if (t53 != -17665LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x253 = UINT8_MAX;
	int16_t x254 = INT16_MAX;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (((x253+x254)^x255)|x256);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x261 = -111024874398LL;
	int32_t x262 = -4272619;
	volatile int64_t x263 = INT64_MIN;
	uint32_t x264 = 0U;
	static volatile int64_t t55 = -218231190854632938LL;

	t55 = (((x261+x262)^x263)|x264);

	if (t55 != 9223371925825628791LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x265 = 2074LL;
	static int16_t x266 = -1;
	volatile int32_t x267 = 0;
	uint32_t x268 = 196174167U;
	static int64_t t56 = 4528LL;

	t56 = (((x265+x266)^x267)|x268);

	if (t56 != 196176223LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x277 = 6258U;
	static int32_t x278 = -988;
	uint32_t x279 = 10U;
	uint32_t t57 = 0U;

	t57 = (((x277+x278)^x279)|x280);

	if (t57 != 32767U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x281 = 45250U;
	int64_t x282 = 458LL;
	uint16_t x283 = 3U;

	t58 = (((x281+x282)^x283)|x284);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x285 = INT16_MAX;
	int32_t x286 = INT32_MIN;
	int64_t x287 = -1LL;
	uint16_t x288 = UINT16_MAX;
	static int64_t t59 = 3598917LL;

	t59 = (((x285+x286)^x287)|x288);

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x289 = -596;
	static int64_t x291 = -1LL;
	uint32_t x292 = 301948515U;

	t60 = (((x289+x290)^x291)|x292);

	if (t60 != -8321LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x293 = 0U;
	static uint32_t x294 = 0U;
	static volatile int8_t x295 = 0;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = (((x293+x294)^x295)|x296);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x298 = 0U;
	volatile int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MIN;

	t62 = (((x297+x298)^x299)|x300);

	if (t62 != -32641LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x305 = 43527097LLU;
	int16_t x307 = INT16_MIN;
	int64_t x308 = -1LL;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (((x305+x306)^x307)|x308);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x309 = -26;
	int8_t x310 = INT8_MAX;
	static volatile int64_t x311 = INT64_MIN;
	volatile int64_t x312 = 466765563772384693LL;

	t64 = (((x309+x310)^x311)|x312);

	if (t64 != -8756606473082391051LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x313 = -2;
	uint8_t x315 = 2U;
	volatile int8_t x316 = INT8_MAX;
	static volatile uint32_t t65 = 5922509U;

	t65 = (((x313+x314)^x315)|x316);

	if (t65 != 255U) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x317 = -1LL;
	int32_t x318 = INT32_MAX;
	int32_t x319 = INT32_MIN;
	static volatile int64_t t66 = -183LL;

	t66 = (((x317+x318)^x319)|x320);

	if (t66 != -2LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x324 = INT16_MAX;
	volatile uint64_t t67 = 6LLU;

	t67 = (((x321+x322)^x323)|x324);

	if (t67 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x325 = UINT32_MAX;
	static uint64_t x326 = 291508634712219102LLU;

	t68 = (((x325+x326)^x327)|x328);

	if (t68 != 315354337719009086LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x333 = -1LL;
	int64_t x334 = 1LL;
	uint16_t x335 = 706U;

	t69 = (((x333+x334)^x335)|x336);

	if (t69 != 767LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x337 = -1;
	int16_t x338 = INT16_MIN;
	int8_t x340 = INT8_MIN;
	static uint32_t t70 = 0U;

	t70 = (((x337+x338)^x339)|x340);

	if (t70 != 4294967168U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x341 = 0U;
	int8_t x342 = 18;
	int16_t x343 = INT16_MIN;
	uint64_t x344 = UINT64_MAX;

	t71 = (((x341+x342)^x343)|x344);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x347 = -1LL;
	static int16_t x348 = 9365;
	volatile uint64_t t72 = 5474LLU;

	t72 = (((x345+x346)^x347)|x348);

	if (t72 != 18446725017762217911LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x349 = 143766215712386LLU;
	int8_t x350 = INT8_MAX;
	int8_t x351 = 2;
	volatile uint32_t x352 = UINT32_MAX;

	t73 = (((x349+x350)^x351)|x352);

	if (t73 != 143769735266303LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x353 = UINT32_MAX;
	int8_t x354 = -7;
	int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MIN;

	t74 = (((x353+x354)^x355)|x356);

	if (t74 != -8LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x361 = 3425796;
	int8_t x363 = INT8_MIN;

	t75 = (((x361+x362)^x363)|x364);

	if (t75 != 4294967172U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x365 = INT32_MAX;
	volatile int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	int32_t t76 = 0;

	t76 = (((x365+x366)^x367)|x368);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x369 = -1LL;
	int8_t x370 = -1;
	static uint16_t x371 = 417U;
	volatile int64_t t77 = -47669LL;

	t77 = (((x369+x370)^x371)|x372);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x373 = INT16_MAX;
	int64_t x374 = -3387272LL;
	uint64_t x375 = 13066394LLU;
	uint8_t x376 = 0U;
	uint64_t t78 = 71289878LLU;

	t78 = (((x373+x374)^x375)|x376);

	if (t78 != 18446744073693540589LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x377 = -48;
	int8_t x379 = -5;
	volatile uint32_t x380 = 252280710U;
	volatile int64_t t79 = -333688114LL;

	t79 = (((x377+x378)^x379)|x380);

	if (t79 != -81LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x385 = INT16_MAX;
	int8_t x386 = INT8_MAX;
	uint8_t x388 = 1U;
	volatile int64_t t80 = 98012351390LL;

	t80 = (((x385+x386)^x387)|x388);

	if (t80 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = -1;
	int64_t x391 = 36001411LL;
	int32_t x392 = -1;
	volatile int64_t t81 = -24137455LL;

	t81 = (((x389+x390)^x391)|x392);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x393 = INT16_MIN;
	uint64_t x395 = 41939473661106LLU;
	static uint64_t t82 = 518979LLU;

	t82 = (((x393+x394)^x395)|x396);

	if (t82 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x397 = 29U;
	uint16_t x399 = 0U;
	int8_t x400 = INT8_MIN;
	volatile int32_t t83 = 1025;

	t83 = (((x397+x398)^x399)|x400);

	if (t83 != -99) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MIN;
	int64_t x403 = INT64_MIN;
	int64_t x404 = INT64_MAX;
	int64_t t84 = INT64_MAX;

	t84 = (((x401+x402)^x403)|x404);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x405 = 22194U;
	int64_t x406 = -29LL;
	int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MIN;
	volatile int64_t t85 = -62234614LL;

	t85 = (((x405+x406)^x407)|x408);

	if (t85 != -107LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x413 = 7;
	static int32_t x414 = 257;
	static int32_t x415 = -1;
	int8_t x416 = INT8_MAX;
	int32_t t86 = 1;

	t86 = (((x413+x414)^x415)|x416);

	if (t86 != -257) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x417 = 121LLU;
	static int32_t x418 = 11;
	uint16_t x419 = 1176U;
	int8_t x420 = INT8_MIN;
	static volatile uint64_t t87 = 1074474965672159LLU;

	t87 = (((x417+x418)^x419)|x420);

	if (t87 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x421 = INT64_MIN;
	int16_t x422 = 0;
	int8_t x424 = INT8_MIN;

	t88 = (((x421+x422)^x423)|x424);

	if (t88 != -29LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x425 = 898855U;
	uint8_t x426 = 12U;
	int32_t x427 = INT32_MIN;
	int16_t x428 = INT16_MIN;
	uint32_t t89 = 108449U;

	t89 = (((x425+x426)^x427)|x428);

	if (t89 != 4294948659U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x430 = INT8_MAX;
	static uint32_t x431 = UINT32_MAX;
	int64_t x432 = 1326587LL;
	int64_t t90 = 18117274491573LL;

	t90 = (((x429+x430)^x431)|x432);

	if (t90 != -9223372032559808517LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x434 = INT64_MIN;
	int64_t x436 = -1LL;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (((x433+x434)^x435)|x436);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = INT16_MIN;
	uint64_t x439 = 376700LLU;
	int64_t x440 = -125907094841LL;
	uint64_t t92 = 8360051333102056087LLU;

	t92 = (((x437+x438)^x439)|x440);

	if (t92 != 18446744073709220607LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x441 = 33U;
	static int8_t x442 = INT8_MIN;
	int64_t x444 = -22872LL;
	volatile int64_t t93 = 3461461LL;

	t93 = (((x441+x442)^x443)|x444);

	if (t93 != -4162LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x448 = INT8_MAX;
	int32_t t94 = 913792;

	t94 = (((x445+x446)^x447)|x448);

	if (t94 != 2147459327) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x451 = 1;
	int8_t x452 = INT8_MIN;

	t95 = (((x449+x450)^x451)|x452);

	if (t95 != -28) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x457 = -1;
	int8_t x459 = INT8_MIN;
	uint8_t x460 = UINT8_MAX;
	volatile int32_t t96 = -7486410;

	t96 = (((x457+x458)^x459)|x460);

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x461 = INT64_MIN;
	int8_t x462 = 1;
	static int64_t x463 = 64LL;
	int64_t x464 = 17090LL;
	volatile int64_t t97 = -680417805LL;

	t97 = (((x461+x462)^x463)|x464);

	if (t97 != -9223372036854758717LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x465 = -1;
	int8_t x466 = INT8_MAX;
	int64_t x467 = INT64_MIN;
	int32_t x468 = 13354390;
	int64_t t98 = 6496761016LL;

	t98 = (((x465+x466)^x467)|x468);

	if (t98 != -9223372036841421314LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x470 = UINT32_MAX;
	volatile int64_t x471 = 238870076371LL;
	uint16_t x472 = UINT16_MAX;
	volatile int64_t t99 = -1125494582425191550LL;

	t99 = (((x469+x470)^x471)|x472);

	if (t99 != 238870134783LL) { NG(); } else { ; }
	
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

