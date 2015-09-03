#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
static uint64_t x2 = 8894610299401676947LLU;
static volatile uint32_t x4 = UINT32_MAX;
volatile int32_t t0 = 16860633;
int8_t x7 = 11;
volatile int64_t x11 = 9430617280LL;
static int32_t t2 = -1;
int16_t x15 = -8731;
volatile int32_t x18 = INT32_MAX;
uint32_t x20 = UINT32_MAX;
int32_t t4 = -367037943;
uint16_t x21 = UINT16_MAX;
static int16_t x26 = INT16_MIN;
volatile int64_t x28 = INT64_MAX;
uint32_t x30 = 126U;
volatile int64_t x32 = -24500LL;
static int32_t t8 = -917;
static int16_t x43 = INT16_MAX;
uint8_t x47 = UINT8_MAX;
volatile uint16_t x51 = 37U;
volatile uint16_t x52 = UINT16_MAX;
int8_t x55 = -1;
uint32_t x56 = 3416U;
int32_t t13 = -3038;
int16_t x62 = INT16_MAX;
static int64_t x76 = 30231LL;
volatile int32_t t18 = 0;
int64_t x92 = 2582297151LL;
static int32_t x102 = INT32_MIN;
volatile int32_t t25 = -1936;
uint64_t x105 = 759121LLU;
int16_t x112 = -13226;
volatile int32_t x124 = 59054;
static uint16_t x128 = 1U;
volatile int32_t t31 = 707;
int32_t t32 = 685687;
uint8_t x136 = 8U;
int32_t x137 = 1;
volatile int32_t t35 = 13;
int64_t x148 = 278089177408814LL;
uint64_t x149 = 495LLU;
int16_t x151 = INT16_MIN;
static volatile uint32_t x152 = 1748U;
int16_t x153 = INT16_MIN;
uint64_t x160 = 1129LLU;
int64_t x165 = 10194422699023LL;
uint32_t x168 = 1542060231U;
int32_t t41 = -897;
static volatile int32_t t42 = -56784253;
int8_t x173 = -1;
uint32_t x181 = UINT32_MAX;
int64_t x183 = 475914296LL;
int32_t t45 = 2112880;
uint64_t x186 = 1745LLU;
static volatile int32_t t46 = 164749661;
static int16_t x189 = -8;
static int64_t x192 = -1LL;
static int32_t x196 = 30;
int8_t x200 = -59;
static int8_t x201 = INT8_MAX;
int8_t x202 = INT8_MAX;
int32_t t50 = 0;
int8_t x218 = -1;
static uint64_t x228 = 7879803869862237507LLU;
volatile int32_t t57 = 5;
int8_t x234 = INT8_MIN;
volatile int32_t t58 = 477;
uint32_t x240 = 35137U;
volatile int8_t x245 = INT8_MAX;
int8_t x254 = -1;
int64_t x255 = 71LL;
uint8_t x258 = 2U;
volatile int32_t t64 = 22206;
uint8_t x261 = UINT8_MAX;
int16_t x262 = INT16_MIN;
static int8_t x267 = 6;
int32_t t66 = -117128;
static uint16_t x272 = 4673U;
uint16_t x275 = 5108U;
int16_t x286 = INT16_MIN;
int8_t x287 = INT8_MIN;
int16_t x293 = -1;
int32_t t74 = 304102;
volatile int16_t x301 = INT16_MAX;
int16_t x302 = INT16_MIN;
uint16_t x304 = 236U;
int64_t x309 = INT64_MAX;
static uint64_t x312 = 68815919115457LLU;
int16_t x315 = INT16_MIN;
int64_t x316 = -1LL;
uint32_t x324 = 1188307051U;
int32_t x326 = INT32_MAX;
int16_t x334 = -1;
static int64_t x340 = 80355304LL;
int16_t x341 = 14419;
int32_t t85 = -26;
static int16_t x350 = INT16_MIN;
uint8_t x354 = UINT8_MAX;
static int64_t x357 = 1LL;
static int16_t x360 = INT16_MIN;
volatile int8_t x362 = -1;
uint64_t x366 = UINT64_MAX;
int64_t x369 = INT64_MIN;
uint64_t x388 = UINT64_MAX;
uint16_t x389 = 10U;
volatile int8_t x393 = -1;


void f0(void) {
	int64_t x3 = INT64_MIN;

	t0 = ((x1%(x2|x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static uint64_t x6 = UINT64_MAX;
	uint64_t x8 = 122LLU;
	volatile int32_t t1 = 99;

	t1 = ((x5%(x6|x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -147;
	int32_t x10 = -60022284;
	uint32_t x12 = UINT32_MAX;

	t2 = ((x9%(x10|x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MIN;
	int64_t x16 = INT64_MAX;
	int32_t t3 = 3491618;

	t3 = ((x13%(x14|x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1LL;
	static int8_t x19 = 0;

	t4 = ((x17%(x18|x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x22 = 1U;
	static volatile uint32_t x23 = 869U;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -325;

	t5 = ((x21%(x22|x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	int32_t x27 = INT32_MIN;
	int32_t t6 = 236;

	t6 = ((x25%(x26|x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile uint32_t x31 = 29U;
	volatile int32_t t7 = 4;

	t7 = ((x29%(x30|x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	static int64_t x34 = -1LL;
	int32_t x35 = INT32_MIN;
	volatile int32_t x36 = -1;

	t8 = ((x33%(x34|x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1698462;
	volatile int8_t x38 = 2;
	int64_t x39 = INT64_MAX;
	int64_t x40 = -1LL;
	volatile int32_t t9 = 59900;

	t9 = ((x37%(x38|x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 355855;
	volatile int32_t x42 = 1890;
	int8_t x44 = INT8_MAX;
	static int32_t t10 = 1;

	t10 = ((x41%(x42|x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 1385087286555017471LL;
	int32_t x46 = -1;
	uint8_t x48 = UINT8_MAX;
	int32_t t11 = 438689759;

	t11 = ((x45%(x46|x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile int64_t x50 = 1LL;
	volatile int32_t t12 = 828472045;

	t12 = ((x49%(x50|x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x53 = UINT16_MAX;
	uint16_t x54 = UINT16_MAX;

	t13 = ((x53%(x54|x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = INT8_MIN;
	volatile int32_t x58 = 942809056;
	uint8_t x59 = UINT8_MAX;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t14 = -184;

	t14 = ((x57%(x58|x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	volatile uint16_t x63 = 31U;
	int8_t x64 = INT8_MAX;
	int32_t t15 = 0;

	t15 = ((x61%(x62|x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 43;
	static uint16_t x66 = 10275U;
	uint8_t x67 = UINT8_MAX;
	static uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = 254761;

	t16 = ((x65%(x66|x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -288;
	uint32_t x70 = 31556784U;
	int8_t x71 = 0;
	int64_t x72 = INT64_MIN;
	int32_t t17 = 19785;

	t17 = ((x69%(x70|x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = 34488440U;
	static int16_t x75 = -7590;

	t18 = ((x73%(x74|x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MIN;
	int64_t x79 = 6LL;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -4;

	t19 = ((x77%(x78|x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int64_t x82 = -1LL;
	volatile int8_t x83 = -1;
	uint8_t x84 = 19U;
	volatile int32_t t20 = -23909;

	t20 = ((x81%(x82|x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int8_t x86 = -1;
	uint16_t x87 = 4299U;
	uint64_t x88 = 1570LLU;
	volatile int32_t t21 = 1940;

	t21 = ((x85%(x86|x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	uint64_t x90 = UINT64_MAX;
	int32_t x91 = -46407005;
	int32_t t22 = -539;

	t22 = ((x89%(x90|x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -241642;
	volatile uint8_t x94 = UINT8_MAX;
	static volatile uint64_t x95 = 13260346LLU;
	uint8_t x96 = 6U;
	volatile int32_t t23 = 8;

	t23 = ((x93%(x94|x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	static uint16_t x98 = 3708U;
	int32_t x99 = INT32_MIN;
	static volatile uint64_t x100 = 116961346648690655LLU;
	static int32_t t24 = 22;

	t24 = ((x97%(x98|x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 136;
	static volatile uint16_t x103 = 31750U;
	int64_t x104 = INT64_MIN;

	t25 = ((x101%(x102|x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = 0U;
	static int8_t x107 = INT8_MIN;
	volatile int16_t x108 = 1;
	int32_t t26 = 1;

	t26 = ((x105%(x106|x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = -126;
	int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	static int32_t t27 = 0;

	t27 = ((x109%(x110|x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = 0;
	int32_t x116 = -8639;
	int32_t t28 = 16983046;

	t28 = ((x113%(x114|x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint8_t x118 = 3U;
	int8_t x119 = 47;
	volatile int32_t x120 = -1;
	volatile int32_t t29 = -30057374;

	t29 = ((x117%(x118|x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = 2;
	int64_t x123 = 4755126175591LL;
	int32_t t30 = 63;

	t30 = ((x121%(x122|x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = 1732;
	volatile uint8_t x126 = 0U;
	static uint16_t x127 = UINT16_MAX;

	t31 = ((x125%(x126|x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int8_t x130 = 0;
	int64_t x131 = 341180910268446720LL;
	int8_t x132 = INT8_MIN;

	t32 = ((x129%(x130|x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -1;
	int32_t x134 = INT32_MIN;
	volatile int32_t x135 = 170;
	int32_t t33 = 1609;

	t33 = ((x133%(x134|x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = 73U;
	uint32_t x139 = UINT32_MAX;
	static int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 68144487;

	t34 = ((x137%(x138|x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 367;
	uint64_t x142 = 148186805261371264LLU;
	static int8_t x143 = 14;
	uint32_t x144 = 418729U;

	t35 = ((x141%(x142|x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MIN;
	volatile int8_t x147 = INT8_MIN;
	volatile int32_t t36 = 142024;

	t36 = ((x145%(x146|x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = 28U;
	int32_t t37 = 199744;

	t37 = ((x149%(x150|x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x154 = -1;
	int16_t x155 = -1;
	int8_t x156 = 34;
	volatile int32_t t38 = -356547;

	t38 = ((x153%(x154|x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x157 = UINT64_MAX;
	int8_t x158 = 0;
	static uint16_t x159 = 15247U;
	static volatile int32_t t39 = -1962;

	t39 = ((x157%(x158|x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = UINT32_MAX;
	static int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MIN;
	int32_t x164 = -1;
	static int32_t t40 = -582809547;

	t40 = ((x161%(x162|x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = 62U;
	uint64_t x167 = UINT64_MAX;

	t41 = ((x165%(x166|x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 37U;
	int64_t x170 = INT64_MIN;
	uint16_t x171 = 2U;
	volatile int64_t x172 = -1LL;

	t42 = ((x169%(x170|x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x174 = INT16_MAX;
	static int32_t x175 = -3;
	static int32_t x176 = -4722229;
	int32_t t43 = -381152138;

	t43 = ((x173%(x174|x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 44432U;
	uint32_t x178 = UINT32_MAX;
	uint32_t x179 = 441194U;
	uint64_t x180 = 15501LLU;
	static volatile int32_t t44 = -505;

	t44 = ((x177%(x178|x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x182 = 88U;
	uint32_t x184 = 503154006U;

	t45 = ((x181%(x182|x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -220;
	volatile int32_t x187 = -1;
	int8_t x188 = INT8_MAX;

	t46 = ((x185%(x186|x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x190 = -1LL;
	int64_t x191 = INT64_MIN;
	volatile int32_t t47 = 0;

	t47 = ((x189%(x190|x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	static int8_t x194 = 9;
	int32_t x195 = 482;
	int32_t t48 = 144502;

	t48 = ((x193%(x194|x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 156268145911033730LL;
	int64_t x198 = INT64_MIN;
	uint8_t x199 = UINT8_MAX;
	int32_t t49 = 0;

	t49 = ((x197%(x198|x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x203 = 0;
	int32_t x204 = 1;

	t50 = ((x201%(x202|x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = INT64_MIN;
	int16_t x207 = -3;
	int32_t x208 = INT32_MIN;
	int32_t t51 = -221105049;

	t51 = ((x205%(x206|x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	static int16_t x210 = INT16_MAX;
	volatile uint16_t x211 = 1U;
	volatile uint32_t x212 = 17U;
	static int32_t t52 = -87712614;

	t52 = ((x209%(x210|x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -17;
	int64_t x214 = INT64_MAX;
	int64_t x215 = 64730183LL;
	static uint16_t x216 = 1894U;
	volatile int32_t t53 = -17664;

	t53 = ((x213%(x214|x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	int8_t x219 = 1;
	static int32_t x220 = INT32_MIN;
	static volatile int32_t t54 = 29;

	t54 = ((x217%(x218|x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int8_t x222 = INT8_MAX;
	static int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;
	int32_t t55 = 1002666189;

	t55 = ((x221%(x222|x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 1807241;
	int16_t x226 = 5810;
	static uint64_t x227 = 33128856LLU;
	int32_t t56 = 1240;

	t56 = ((x225%(x226|x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = UINT32_MAX;
	static int8_t x230 = INT8_MAX;
	volatile uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MAX;

	t57 = ((x229%(x230|x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 1167379355U;
	uint64_t x235 = 15035578185LLU;
	int64_t x236 = INT64_MIN;

	t58 = ((x233%(x234|x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	static int16_t x238 = INT16_MAX;
	uint64_t x239 = 5LLU;
	volatile int32_t t59 = -64;

	t59 = ((x237%(x238|x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 32929547074708292LLU;
	int16_t x242 = 2;
	volatile int64_t x243 = 24901LL;
	int16_t x244 = 61;
	volatile int32_t t60 = 1249715;

	t60 = ((x241%(x242|x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = -1;
	uint8_t x247 = UINT8_MAX;
	static uint16_t x248 = 12U;
	volatile int32_t t61 = -18113;

	t61 = ((x245%(x246|x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 3823219568655357LL;
	volatile uint8_t x250 = 29U;
	int32_t x251 = INT32_MIN;
	volatile uint64_t x252 = 473592939351228597LLU;
	int32_t t62 = -213;

	t62 = ((x249%(x250|x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -450;
	volatile int32_t x256 = 71064669;
	int32_t t63 = 106724;

	t63 = ((x253%(x254|x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint8_t x259 = UINT8_MAX;
	static int16_t x260 = INT16_MAX;

	t64 = ((x257%(x258|x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x263 = UINT8_MAX;
	static int64_t x264 = INT64_MIN;
	volatile int32_t t65 = 26;

	t65 = ((x261%(x262|x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	int32_t x266 = INT32_MAX;
	int64_t x268 = INT64_MIN;

	t66 = ((x265%(x266|x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -32602LL;
	static uint8_t x270 = UINT8_MAX;
	uint8_t x271 = 7U;
	static int32_t t67 = -37;

	t67 = ((x269%(x270|x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = INT64_MAX;
	static int32_t x274 = INT32_MIN;
	uint32_t x276 = UINT32_MAX;
	int32_t t68 = 127;

	t68 = ((x273%(x274|x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -142526LL;
	int8_t x278 = INT8_MAX;
	volatile uint64_t x279 = UINT64_MAX;
	int16_t x280 = INT16_MIN;
	static int32_t t69 = 31037949;

	t69 = ((x277%(x278|x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x281 = 1623017309893882LLU;
	static uint64_t x282 = 2457LLU;
	int8_t x283 = INT8_MAX;
	int8_t x284 = INT8_MAX;
	int32_t t70 = 387;

	t70 = ((x281%(x282|x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x285 = INT8_MAX;
	uint32_t x288 = 201U;
	static volatile int32_t t71 = -12;

	t71 = ((x285%(x286|x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	uint64_t x290 = UINT64_MAX;
	int16_t x291 = -1;
	int32_t x292 = INT32_MIN;
	static int32_t t72 = -72588474;

	t72 = ((x289%(x290|x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x294 = -1;
	int16_t x295 = INT16_MAX;
	volatile uint8_t x296 = 2U;
	volatile int32_t t73 = 244356836;

	t73 = ((x293%(x294|x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	int32_t x298 = INT32_MAX;
	int32_t x299 = 30;
	uint8_t x300 = UINT8_MAX;

	t74 = ((x297%(x298|x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x303 = INT64_MIN;
	volatile int32_t t75 = 10950;

	t75 = ((x301%(x302|x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 964452615U;
	static volatile int32_t x306 = INT32_MIN;
	static int32_t x307 = -2;
	static int8_t x308 = 32;
	volatile int32_t t76 = -44;

	t76 = ((x305%(x306|x307))<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = INT8_MIN;
	int16_t x311 = -648;
	int32_t t77 = 2804744;

	t77 = ((x309%(x310|x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	int64_t x314 = 29LL;
	volatile int32_t t78 = -1479;

	t78 = ((x313%(x314|x315))<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	uint16_t x318 = 750U;
	int8_t x319 = INT8_MIN;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t79 = -32372051;

	t79 = ((x317%(x318|x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MIN;
	int64_t x322 = -4269406301LL;
	static int32_t x323 = -22019;
	int32_t t80 = 807432;

	t80 = ((x321%(x322|x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	static int16_t x327 = 168;
	int64_t x328 = INT64_MIN;
	volatile int32_t t81 = -21942;

	t81 = ((x325%(x326|x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MAX;
	uint16_t x330 = 4143U;
	static int16_t x331 = -2310;
	int8_t x332 = 2;
	int32_t t82 = 17236540;

	t82 = ((x329%(x330|x331))<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x333 = 17918334U;
	int32_t x335 = -1;
	uint8_t x336 = 124U;
	int32_t t83 = 1;

	t83 = ((x333%(x334|x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	uint32_t x338 = 10053393U;
	volatile int8_t x339 = INT8_MIN;
	static volatile int32_t t84 = -49;

	t84 = ((x337%(x338|x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;
	uint64_t x344 = 8128LLU;

	t85 = ((x341%(x342|x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = 57;
	volatile uint64_t x347 = 4223282820953538LLU;
	volatile int8_t x348 = -1;
	volatile int32_t t86 = -113816461;

	t86 = ((x345%(x346|x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int16_t x351 = -8;
	int64_t x352 = INT64_MIN;
	int32_t t87 = -2;

	t87 = ((x349%(x350|x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MIN;
	int64_t x355 = INT64_MAX;
	int16_t x356 = INT16_MAX;
	static int32_t t88 = 6917;

	t88 = ((x353%(x354|x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x358 = 0U;
	volatile uint64_t x359 = 5379302204988LLU;
	volatile int32_t t89 = -2;

	t89 = ((x357%(x358|x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = -191;
	int32_t x363 = -1;
	uint16_t x364 = 13U;
	static int32_t t90 = -2;

	t90 = ((x361%(x362|x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -33798650656956LL;
	static int8_t x367 = 11;
	int16_t x368 = INT16_MIN;
	int32_t t91 = 3282;

	t91 = ((x365%(x366|x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;
	uint64_t x372 = 234741098LLU;
	volatile int32_t t92 = 403;

	t92 = ((x369%(x370|x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MAX;
	volatile int16_t x374 = INT16_MIN;
	int16_t x375 = -126;
	int16_t x376 = -3;
	volatile int32_t t93 = 5065;

	t93 = ((x373%(x374|x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x381 = 15U;
	uint64_t x382 = UINT64_MAX;
	volatile uint16_t x383 = 2U;
	int8_t x384 = 0;
	static int32_t t94 = -721649289;

	t94 = ((x381%(x382|x383))<=x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = 212;
	int64_t x386 = -1LL;
	int64_t x387 = 3961LL;
	int32_t t95 = -384;

	t95 = ((x385%(x386|x387))<=x388);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x390 = -3599;
	int32_t x391 = -283149;
	int64_t x392 = INT64_MIN;
	int32_t t96 = -1981;

	t96 = ((x389%(x390|x391))<=x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x394 = 8614;
	int64_t x395 = INT64_MAX;
	int16_t x396 = INT16_MIN;
	static int32_t t97 = -12765750;

	t97 = ((x393%(x394|x395))<=x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = -1;
	static int32_t x398 = INT32_MIN;
	int8_t x399 = -1;
	int32_t x400 = -1;
	int32_t t98 = 4108433;

	t98 = ((x397%(x398|x399))<=x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = 60;
	int64_t x402 = INT64_MIN;
	int32_t x403 = 0;
	uint16_t x404 = 119U;
	volatile int32_t t99 = 66;

	t99 = ((x401%(x402|x403))<=x404);

	if (t99 != 1) { NG(); } else { ; }
	
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

