#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = 75614157460608LL;
uint16_t x9 = 1U;
uint8_t x10 = 0U;
static int16_t x11 = -1;
int16_t x14 = 0;
static uint16_t x23 = 19119U;
int32_t x32 = INT32_MAX;
uint64_t x34 = 409817LLU;
int32_t x36 = INT32_MAX;
int64_t x38 = -4LL;
uint8_t x43 = 57U;
int16_t x45 = -1575;
volatile uint32_t x46 = UINT32_MAX;
uint64_t x47 = UINT64_MAX;
uint16_t x50 = 12U;
volatile uint32_t t13 = 7U;
volatile uint16_t x63 = 7339U;
int64_t x71 = INT64_MIN;
static volatile int8_t x72 = INT8_MIN;
volatile uint16_t x73 = UINT16_MAX;
uint16_t x86 = 4259U;
int16_t x94 = -7874;
static int64_t x95 = INT64_MIN;
volatile int16_t x96 = -1;
static uint32_t x102 = 24U;
volatile int64_t t22 = -186LL;
int32_t x107 = -197195230;
int64_t t23 = 1884495996448LL;
uint16_t x120 = 28948U;
volatile uint32_t t28 = 141095U;
int64_t x133 = -7LL;
int32_t x138 = -13633;
int8_t x144 = -1;
int8_t x145 = -1;
static int64_t x152 = -1LL;
int8_t x159 = INT8_MAX;
int64_t t36 = 126LL;
volatile int64_t t37 = 15LL;
int16_t x173 = -1;
int64_t x174 = INT64_MAX;
static int64_t x178 = -1LL;
int16_t x182 = INT16_MIN;
volatile int64_t t41 = 12419850400425137LL;
volatile int16_t x185 = -9458;
int8_t x195 = INT8_MIN;
static volatile int8_t x196 = INT8_MAX;
int16_t x204 = 431;
int64_t x205 = 111235711LL;
static int16_t x208 = INT16_MAX;
int64_t t46 = 2076098813394LL;
int16_t x212 = INT16_MIN;
volatile int32_t x222 = 494022;
volatile int8_t x223 = -1;
volatile int64_t t50 = -64831148712LL;
int32_t x226 = -4328159;
uint64_t x231 = 31783747506LLU;
static uint32_t x239 = UINT32_MAX;
int8_t x240 = 10;
volatile uint16_t x247 = 475U;
uint32_t x248 = UINT32_MAX;
int64_t t56 = -2997079LL;
int8_t x257 = INT8_MIN;
volatile int64_t x258 = -773888LL;
volatile int32_t t58 = -2;
int32_t x272 = -1;
volatile uint64_t x290 = UINT64_MAX;
static int32_t x293 = -1;
int64_t x307 = INT64_MIN;
volatile int8_t x318 = 0;
volatile int32_t x319 = INT32_MIN;
uint64_t t68 = 3LLU;
volatile int32_t t69 = -9754;
volatile int16_t x336 = 304;
static int8_t x337 = INT8_MIN;
int16_t x340 = 5499;
int8_t x360 = INT8_MIN;
volatile uint8_t x366 = UINT8_MAX;
volatile uint32_t x368 = 440786417U;
volatile uint32_t t76 = 6371986U;
int16_t x371 = INT16_MIN;
volatile int64_t t77 = -1LL;
int64_t x384 = -2233LL;
static int64_t t80 = -2882770655595090591LL;
int16_t x385 = -2;
int8_t x399 = INT8_MIN;
uint64_t x403 = 40670373323LLU;
volatile uint64_t t84 = 14431499313LLU;
static int64_t x415 = INT64_MIN;
int16_t x423 = INT16_MAX;
int64_t x427 = INT64_MIN;
volatile int64_t x428 = 332LL;
static volatile int64_t t89 = 50893154189099LL;
static volatile uint64_t t90 = 2056383706880611LLU;
static int8_t x434 = -7;
int32_t x437 = INT32_MIN;
volatile int16_t x439 = INT16_MIN;
static int8_t x442 = INT8_MAX;
int64_t x443 = INT64_MIN;
uint8_t x444 = UINT8_MAX;
int64_t x456 = INT64_MIN;
uint64_t t96 = 19613LLU;
uint16_t x461 = 108U;
uint32_t x462 = 18U;
volatile int8_t x464 = 8;
uint32_t t98 = 3476484U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int8_t x2 = INT8_MIN;
	static int16_t x3 = INT16_MIN;
	volatile int64_t t0 = 0LL;

	t0 = (((x1+x2)%x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	volatile uint64_t x6 = UINT64_MAX;
	volatile int32_t x7 = INT32_MIN;
	static int16_t x8 = -1;
	static uint64_t t1 = 1489684LLU;

	t1 = (((x5+x6)%x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 93478077;

	t2 = (((x9+x10)%x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 940397164653LLU;
	volatile uint16_t x15 = UINT16_MAX;
	int8_t x16 = -1;
	volatile uint64_t t3 = 4LLU;

	t3 = (((x13+x14)%x15)/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	int16_t x18 = 5;
	int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 0;

	t4 = (((x17+x18)%x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint8_t x22 = 3U;
	int16_t x24 = INT16_MAX;
	int32_t t5 = 61171;

	t5 = (((x21+x22)%x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	uint64_t x30 = UINT64_MAX;
	uint8_t x31 = 2U;
	uint64_t t6 = 2912691475714LLU;

	t6 = (((x29+x30)%x31)/x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int64_t x35 = INT64_MIN;
	volatile uint64_t t7 = 5012365731LLU;

	t7 = (((x33+x34)%x35)/x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int64_t x39 = 8357787423900792LL;
	static volatile uint64_t x40 = UINT64_MAX;
	static uint64_t t8 = 48LLU;

	t8 = (((x37+x38)%x39)/x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	static volatile int16_t x42 = INT16_MIN;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = -121302069769914LL;

	t9 = (((x41+x42)%x43)/x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x48 = 5026U;
	uint64_t t10 = 136505214006820747LLU;

	t10 = (((x45+x46)%x47)/x48);

	if (t10 != 854549LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MIN;
	static int32_t x51 = INT32_MAX;
	volatile int16_t x52 = -1;
	volatile int32_t t11 = -469;

	t11 = (((x49+x50)%x51)/x52);

	if (t11 != 116) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	uint8_t x54 = UINT8_MAX;
	int32_t x55 = 1075;
	int16_t x56 = -26;
	int32_t t12 = -2700;

	t12 = (((x53+x54)%x55)/x56);

	if (t12 != -29) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x57 = UINT32_MAX;
	int16_t x58 = -1;
	volatile uint16_t x59 = UINT16_MAX;
	int16_t x60 = INT16_MIN;

	t13 = (((x57+x58)%x59)/x60);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = INT8_MIN;
	volatile int16_t x62 = INT16_MIN;
	static int16_t x64 = 31;
	volatile int32_t t14 = -567;

	t14 = (((x61+x62)%x63)/x64);

	if (t14 != -114) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 0U;
	static int64_t x70 = INT64_MAX;
	volatile int64_t t15 = 15393902403639220LL;

	t15 = (((x69+x70)%x71)/x72);

	if (t15 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MAX;
	int32_t x76 = INT32_MAX;
	volatile int32_t t16 = 14269;

	t16 = (((x73+x74)%x75)/x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 15U;
	volatile int16_t x78 = -78;
	volatile int8_t x79 = INT8_MIN;
	static uint32_t x80 = UINT32_MAX;
	uint32_t t17 = 18U;

	t17 = (((x77+x78)%x79)/x80);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	static uint8_t x82 = 0U;
	volatile int64_t x83 = INT64_MAX;
	static volatile int32_t x84 = INT32_MIN;
	volatile int64_t t18 = -1LL;

	t18 = (((x81+x82)%x83)/x84);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x85 = 83U;
	uint16_t x87 = UINT16_MAX;
	int64_t x88 = -142477822LL;
	volatile int64_t t19 = 6653LL;

	t19 = (((x85+x86)%x87)/x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 10715LLU;
	static int16_t x90 = 10013;
	uint32_t x91 = UINT32_MAX;
	volatile int8_t x92 = 58;
	static volatile uint64_t t20 = 100260878916LLU;

	t20 = (((x89+x90)%x91)/x92);

	if (t20 != 357LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x93 = INT64_MAX;
	volatile int64_t t21 = -1015LL;

	t21 = (((x93+x94)%x95)/x96);

	if (t21 != -9223372036854767933LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x101 = -1;
	int64_t x103 = -63149LL;
	int64_t x104 = -1LL;

	t22 = (((x101+x102)%x103)/x104);

	if (t22 != -23LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = -1LL;
	int8_t x106 = INT8_MIN;
	static uint8_t x108 = 2U;

	t23 = (((x105+x106)%x107)/x108);

	if (t23 != -64LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x109 = UINT64_MAX;
	uint64_t x110 = 64347693LLU;
	uint8_t x111 = 11U;
	static int32_t x112 = INT32_MAX;
	static volatile uint64_t t24 = 43295327620595525LLU;

	t24 = (((x109+x110)%x111)/x112);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 411U;
	int16_t x118 = -1369;
	uint64_t x119 = 268585382939555LLU;
	uint64_t t25 = 73977416515LLU;

	t25 = (((x117+x118)%x119)/x120);

	if (t25 != 1084290381LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x121 = 2479;
	int32_t x122 = INT32_MIN;
	volatile uint16_t x123 = 1U;
	int32_t x124 = 184751;
	int32_t t26 = 31754685;

	t26 = (((x121+x122)%x123)/x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x125 = -1;
	int64_t x126 = -707924670475LL;
	volatile int16_t x127 = -228;
	int32_t x128 = -116;
	volatile int64_t t27 = -36472LL;

	t27 = (((x125+x126)%x127)/x128);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 21161U;
	int16_t x130 = -50;
	uint32_t x131 = UINT32_MAX;
	uint16_t x132 = 12U;

	t28 = (((x129+x130)%x131)/x132);

	if (t28 != 1759U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x134 = 24512U;
	int8_t x135 = -19;
	static volatile int8_t x136 = INT8_MAX;
	volatile int64_t t29 = 19LL;

	t29 = (((x133+x134)%x135)/x136);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = 11;
	int16_t x139 = INT16_MAX;
	int8_t x140 = INT8_MIN;
	volatile int32_t t30 = -4;

	t30 = (((x137+x138)%x139)/x140);

	if (t30 != 106) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = -4LL;
	int8_t x142 = 1;
	int64_t x143 = INT64_MAX;
	int64_t t31 = 56799110660LL;

	t31 = (((x141+x142)%x143)/x144);

	if (t31 != 3LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x146 = 13U;
	static int16_t x147 = -1;
	int8_t x148 = -4;
	uint32_t t32 = 3U;

	t32 = (((x145+x146)%x147)/x148);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x149 = INT64_MIN;
	int64_t x150 = 343LL;
	uint8_t x151 = 50U;
	static int64_t t33 = 2893703872LL;

	t33 = (((x149+x150)%x151)/x152);

	if (t33 != 15LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x153 = 1;
	volatile int8_t x154 = -1;
	static volatile int64_t x155 = -1LL;
	static int16_t x156 = -1;
	volatile int64_t t34 = 1996504LL;

	t34 = (((x153+x154)%x155)/x156);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x157 = INT16_MAX;
	int8_t x158 = -17;
	int8_t x160 = INT8_MIN;
	volatile int32_t t35 = 66470825;

	t35 = (((x157+x158)%x159)/x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = 205U;
	int32_t x162 = INT32_MIN;
	static uint16_t x163 = UINT16_MAX;
	int64_t x164 = INT64_MIN;

	t36 = (((x161+x162)%x163)/x164);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x165 = 19;
	static int64_t x166 = 99LL;
	uint8_t x167 = 1U;
	int8_t x168 = INT8_MAX;

	t37 = (((x165+x166)%x167)/x168);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x169 = -1;
	static uint32_t x170 = UINT32_MAX;
	int64_t x171 = INT64_MAX;
	int32_t x172 = 930;
	volatile int64_t t38 = -13438LL;

	t38 = (((x169+x170)%x171)/x172);

	if (t38 != 4618244LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x175 = 2U;
	int8_t x176 = INT8_MIN;
	volatile int64_t t39 = -22686409065158534LL;

	t39 = (((x173+x174)%x175)/x176);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = 34U;
	int64_t x179 = INT64_MAX;
	int32_t x180 = -55370726;
	int64_t t40 = -14111678LL;

	t40 = (((x177+x178)%x179)/x180);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = UINT32_MAX;
	static int64_t x183 = INT64_MAX;
	int32_t x184 = INT32_MAX;

	t41 = (((x181+x182)%x183)/x184);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x186 = 12291665U;
	uint64_t x187 = UINT64_MAX;
	uint32_t x188 = 10671794U;
	uint64_t t42 = 1826092LLU;

	t42 = (((x185+x186)%x187)/x188);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = UINT8_MAX;
	static int64_t x194 = -1LL;
	int64_t t43 = -70082036060949LL;

	t43 = (((x193+x194)%x195)/x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = -1;
	int16_t x198 = 2782;
	volatile int8_t x199 = -1;
	int8_t x200 = 13;
	volatile int32_t t44 = 483807;

	t44 = (((x197+x198)%x199)/x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x201 = 1609581506608000274LL;
	static int16_t x202 = -10110;
	int8_t x203 = INT8_MIN;
	static volatile int64_t t45 = -491460451777075LL;

	t45 = (((x201+x202)%x203)/x204);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x206 = 60;
	uint32_t x207 = 57U;

	t46 = (((x205+x206)%x207)/x208);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x209 = 82U;
	uint8_t x210 = 41U;
	int32_t x211 = -14834943;
	volatile int32_t t47 = 2;

	t47 = (((x209+x210)%x211)/x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x213 = -391292189821657LL;
	static int64_t x214 = -1281LL;
	uint64_t x215 = UINT64_MAX;
	static volatile int8_t x216 = -1;
	volatile uint64_t t48 = 515783105971138LLU;

	t48 = (((x213+x214)%x215)/x216);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x217 = 463048U;
	uint8_t x218 = 2U;
	uint32_t x219 = UINT32_MAX;
	volatile int16_t x220 = INT16_MIN;
	volatile uint32_t t49 = 3130U;

	t49 = (((x217+x218)%x219)/x220);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = -214036462897648492LL;
	static int16_t x224 = 1;

	t50 = (((x221+x222)%x223)/x224);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MIN;
	static uint32_t x227 = 1U;
	int8_t x228 = INT8_MAX;
	uint32_t t51 = 101796255U;

	t51 = (((x225+x226)%x227)/x228);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = -40LL;
	int32_t x230 = INT32_MIN;
	uint8_t x232 = 3U;
	uint64_t t52 = 1LLU;

	t52 = (((x229+x230)%x231)/x232);

	if (t52 != 4207353477LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = 21;
	int64_t x238 = 2627489647204LL;
	volatile int64_t t53 = -3227968054644287LL;

	t53 = (((x237+x238)%x239)/x240);

	if (t53 != 326462998LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x241 = UINT8_MAX;
	int16_t x242 = -18;
	uint32_t x243 = UINT32_MAX;
	int16_t x244 = -1;
	uint32_t t54 = 1U;

	t54 = (((x241+x242)%x243)/x244);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x245 = -7556;
	static uint16_t x246 = 1U;
	uint32_t t55 = 9922U;

	t55 = (((x245+x246)%x247)/x248);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = -1;
	int32_t x254 = -3275;
	volatile int64_t x255 = INT64_MAX;
	uint32_t x256 = 1U;

	t56 = (((x253+x254)%x255)/x256);

	if (t56 != -3276LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x259 = UINT8_MAX;
	uint16_t x260 = UINT16_MAX;
	int64_t t57 = 10353523LL;

	t57 = (((x257+x258)%x259)/x260);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = INT16_MAX;
	int32_t x262 = -1;
	static uint16_t x263 = UINT16_MAX;
	static uint8_t x264 = 5U;

	t58 = (((x261+x262)%x263)/x264);

	if (t58 != 6553) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = 212LL;
	uint64_t x270 = 5141112LLU;
	int64_t x271 = INT64_MAX;
	uint64_t t59 = 3707LLU;

	t59 = (((x269+x270)%x271)/x272);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = -227;
	int64_t x274 = -17312131710LL;
	int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MIN;
	int64_t t60 = -2081785262020388679LL;

	t60 = (((x273+x274)%x275)/x276);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = -1;
	int32_t x282 = -499;
	int64_t x283 = INT64_MIN;
	volatile uint16_t x284 = UINT16_MAX;
	int64_t t61 = -1724969112623511882LL;

	t61 = (((x281+x282)%x283)/x284);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = 284017583LL;
	int8_t x286 = INT8_MIN;
	int8_t x287 = INT8_MIN;
	int8_t x288 = INT8_MAX;
	int64_t t62 = 1755994612573101113LL;

	t62 = (((x285+x286)%x287)/x288);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x289 = -18;
	static volatile int16_t x291 = INT16_MAX;
	static volatile int32_t x292 = -2;
	volatile uint64_t t63 = 285102LLU;

	t63 = (((x289+x290)%x291)/x292);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x294 = -1;
	int64_t x295 = -1LL;
	int32_t x296 = INT32_MIN;
	volatile int64_t t64 = -936208LL;

	t64 = (((x293+x294)%x295)/x296);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = INT32_MAX;
	uint8_t x303 = 3U;
	uint64_t x304 = UINT64_MAX;
	uint64_t t65 = 1062LLU;

	t65 = (((x301+x302)%x303)/x304);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = 3;
	int64_t x306 = -664375288023278LL;
	int8_t x308 = INT8_MIN;
	volatile int64_t t66 = -4477044873746487366LL;

	t66 = (((x305+x306)%x307)/x308);

	if (t66 != 5190431937681LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x313 = 5U;
	static uint32_t x314 = 828658678U;
	int64_t x315 = INT64_MIN;
	volatile int8_t x316 = INT8_MIN;
	volatile int64_t t67 = 248593LL;

	t67 = (((x313+x314)%x315)/x316);

	if (t67 != -6473895LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x317 = UINT64_MAX;
	uint8_t x320 = 1U;

	t68 = (((x317+x318)%x319)/x320);

	if (t68 != 2147483647LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x321 = INT32_MIN;
	uint16_t x322 = 21341U;
	int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MIN;

	t69 = (((x321+x322)%x323)/x324);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x329 = INT16_MIN;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = -1;
	uint8_t x332 = 26U;
	volatile uint32_t t70 = 45710U;

	t70 = (((x329+x330)%x331)/x332);

	if (t70 != 165189789U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x333 = -50056295;
	static int64_t x334 = -1LL;
	static volatile uint32_t x335 = UINT32_MAX;
	static int64_t t71 = -106501713LL;

	t71 = (((x333+x334)%x335)/x336);

	if (t71 != -164658LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x338 = UINT16_MAX;
	int64_t x339 = INT64_MIN;
	volatile int64_t t72 = 15LL;

	t72 = (((x337+x338)%x339)/x340);

	if (t72 != 11LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = INT16_MAX;
	volatile uint8_t x346 = UINT8_MAX;
	int32_t x347 = INT32_MIN;
	uint64_t x348 = 128973LLU;
	static volatile uint64_t t73 = 170712972820777LLU;

	t73 = (((x345+x346)%x347)/x348);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x353 = INT64_MIN;
	uint8_t x354 = 0U;
	uint32_t x355 = 674U;
	int8_t x356 = INT8_MAX;
	int64_t t74 = -118LL;

	t74 = (((x353+x354)%x355)/x356);

	if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x357 = -3120638187039681056LL;
	static int32_t x358 = -1;
	int32_t x359 = -1;
	static int64_t t75 = 69417447508531416LL;

	t75 = (((x357+x358)%x359)/x360);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x367 = 506U;

	t76 = (((x365+x366)%x367)/x368);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x369 = -498097199057218LL;
	uint32_t x370 = UINT32_MAX;
	int16_t x372 = INT16_MIN;

	t77 = (((x369+x370)%x371)/x372);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x373 = 721033814LLU;
	int64_t x374 = -1LL;
	static uint32_t x375 = 61U;
	static uint64_t x376 = 4016193865594102577LLU;
	uint64_t t78 = 13432LLU;

	t78 = (((x373+x374)%x375)/x376);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x377 = UINT64_MAX;
	int64_t x378 = INT64_MIN;
	int16_t x379 = -1;
	int32_t x380 = 3146;
	volatile uint64_t t79 = 1425LLU;

	t79 = (((x377+x378)%x379)/x380);

	if (t79 != 2931777506946845LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x381 = -1;
	uint16_t x382 = UINT16_MAX;
	static uint8_t x383 = 3U;

	t80 = (((x381+x382)%x383)/x384);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x386 = 225U;
	int32_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile int32_t t81 = -252;

	t81 = (((x385+x386)%x387)/x388);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x389 = UINT64_MAX;
	volatile int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = 1035968606842473918LLU;
	uint64_t t82 = 16960573422LLU;

	t82 = (((x389+x390)%x391)/x392);

	if (t82 != 8LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x397 = INT32_MIN;
	static uint16_t x398 = 11722U;
	int32_t x400 = INT32_MAX;
	static volatile int32_t t83 = -25;

	t83 = (((x397+x398)%x399)/x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x401 = 64344385;
	int32_t x402 = 0;
	int16_t x404 = 5826;

	t84 = (((x401+x402)%x403)/x404);

	if (t84 != 11044LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x405 = UINT16_MAX;
	volatile uint16_t x406 = UINT16_MAX;
	static int64_t x407 = 134423LL;
	int64_t x408 = -1LL;
	int64_t t85 = -130586188LL;

	t85 = (((x405+x406)%x407)/x408);

	if (t85 != -131070LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x409 = INT64_MIN;
	int64_t x410 = INT64_MAX;
	static int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MAX;
	volatile int64_t t86 = -72LL;

	t86 = (((x409+x410)%x411)/x412);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x413 = INT8_MAX;
	static volatile int8_t x414 = -1;
	uint16_t x416 = 12127U;
	volatile int64_t t87 = 5554231LL;

	t87 = (((x413+x414)%x415)/x416);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x421 = INT16_MAX;
	int8_t x422 = 1;
	volatile int16_t x424 = -1;
	static int32_t t88 = -25;

	t88 = (((x421+x422)%x423)/x424);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x425 = INT32_MIN;
	static int32_t x426 = INT32_MAX;

	t89 = (((x425+x426)%x427)/x428);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x429 = 1154642LLU;
	int8_t x430 = INT8_MIN;
	static int8_t x431 = -1;
	volatile int32_t x432 = 2992482;

	t90 = (((x429+x430)%x431)/x432);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x433 = INT16_MAX;
	volatile int16_t x435 = INT16_MAX;
	int64_t x436 = -1LL;
	static volatile int64_t t91 = -415LL;

	t91 = (((x433+x434)%x435)/x436);

	if (t91 != -32760LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x438 = 3266061634040038368LLU;
	uint32_t x440 = UINT32_MAX;
	static volatile uint64_t t92 = 5788030LLU;

	t92 = (((x437+x438)%x439)/x440);

	if (t92 != 760439232LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x441 = 62864;
	static int64_t t93 = 20866908805145LL;

	t93 = (((x441+x442)%x443)/x444);

	if (t93 != 247LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x445 = 1;
	volatile int32_t x446 = -1;
	uint32_t x447 = 186689703U;
	int64_t x448 = INT64_MIN;
	static volatile int64_t t94 = -346732777431232LL;

	t94 = (((x445+x446)%x447)/x448);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x449 = INT64_MIN;
	uint64_t x450 = 16009888421986LLU;
	int16_t x451 = INT16_MIN;
	volatile int64_t x452 = INT64_MAX;
	uint64_t t95 = 22554LLU;

	t95 = (((x449+x450)%x451)/x452);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x453 = INT16_MIN;
	volatile int64_t x454 = -1LL;
	volatile uint64_t x455 = 28549449514814994LLU;

	t96 = (((x453+x454)%x455)/x456);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x457 = 7802131205598LLU;
	int8_t x458 = 10;
	static int32_t x459 = -1811;
	int16_t x460 = -1;
	static uint64_t t97 = 3980914595500LLU;

	t97 = (((x457+x458)%x459)/x460);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x463 = UINT32_MAX;

	t98 = (((x461+x462)%x463)/x464);

	if (t98 != 15U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = INT8_MIN;
	uint64_t x466 = 7276056639LLU;
	int32_t x467 = 95155703;
	int16_t x468 = -1;
	volatile uint64_t t99 = 314652658LLU;

	t99 = (((x465+x466)%x467)/x468);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

