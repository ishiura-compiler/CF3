#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 182301499;
static int64_t x9 = INT64_MIN;
int32_t t2 = 1601900;
int32_t x15 = INT32_MIN;
volatile int32_t x21 = 529196422;
int8_t x24 = -3;
int16_t x32 = -1;
uint16_t x36 = 1597U;
static int32_t x40 = -1;
uint64_t x45 = UINT64_MAX;
static int16_t x50 = INT16_MIN;
static int16_t x52 = -1;
int32_t x57 = -1;
int32_t x59 = INT32_MIN;
int32_t t14 = 139;
static int64_t x61 = 3885035524186719LL;
volatile int32_t t15 = 1384;
int32_t x75 = -33;
int32_t x77 = INT32_MAX;
uint16_t x81 = 389U;
uint8_t x86 = UINT8_MAX;
volatile int32_t t21 = -42907269;
int8_t x92 = INT8_MIN;
int32_t x93 = INT32_MIN;
volatile int32_t x96 = 75781;
volatile int32_t t23 = 97507931;
volatile int32_t t25 = 318413;
static uint16_t x105 = 23215U;
static int8_t x107 = -2;
static int64_t x114 = INT64_MIN;
volatile int64_t x121 = INT64_MIN;
uint32_t x127 = 124278U;
int8_t x128 = -1;
int32_t t32 = 648;
uint64_t x135 = 35LLU;
uint8_t x137 = UINT8_MAX;
int8_t x143 = INT8_MAX;
int64_t x144 = INT64_MIN;
uint32_t x146 = 317930419U;
uint32_t x149 = 75U;
int32_t t38 = -4033882;
static int64_t x172 = INT64_MIN;
uint64_t x177 = 24337LLU;
int64_t x183 = INT64_MIN;
volatile int32_t t45 = -126903353;
int32_t x188 = INT32_MIN;
int32_t t46 = 160;
volatile uint32_t x189 = 1941U;
int32_t x193 = 193;
uint64_t x200 = UINT64_MAX;
int32_t x205 = -7;
int32_t t51 = 2;
volatile int64_t x209 = 13766200370110LL;
volatile int32_t x210 = INT32_MIN;
int64_t x215 = -1LL;
int64_t x218 = INT64_MIN;
int8_t x223 = -1;
uint32_t x227 = 1748276673U;
static volatile int32_t x232 = -7516036;
volatile int32_t t58 = -2537209;
static int32_t t61 = -5878;
uint16_t x260 = 57U;
int16_t x272 = -1;
volatile int32_t t70 = 450950;
int8_t x286 = -1;
static volatile uint32_t x287 = UINT32_MAX;
int64_t x289 = INT64_MIN;
int8_t x292 = INT8_MAX;
int32_t t72 = 14717;
int32_t x298 = -228;
static volatile int32_t t74 = 33035039;
static int8_t x308 = -1;
int32_t t79 = 356813481;
volatile uint64_t x321 = UINT64_MAX;
static int8_t x326 = -1;
volatile int32_t t81 = -675;
int32_t x331 = INT32_MIN;
static int32_t x335 = 3995;
uint16_t x339 = 15816U;
volatile int32_t t84 = 14285324;
int8_t x344 = INT8_MAX;
int32_t t86 = -47788951;
volatile uint8_t x351 = 1U;
uint64_t x352 = 14047514013LLU;
int32_t x354 = -1;
static int32_t t91 = 75260;
int16_t x384 = -54;
uint16_t x385 = 9108U;
static uint8_t x394 = 5U;
int16_t x400 = 25;


void f0(void) {
	static uint8_t x1 = 0U;
	int8_t x2 = -1;
	static uint16_t x4 = 9443U;
	int32_t t0 = 35160646;

	t0 = (x1==((x2<=x3)==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	volatile int8_t x6 = 1;
	int64_t x7 = INT64_MAX;
	volatile uint8_t x8 = 57U;
	static int32_t t1 = -1;

	t1 = (x5==((x6<=x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = -1;
	int8_t x11 = INT8_MIN;
	volatile uint16_t x12 = 1U;

	t2 = (x9==((x10<=x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile uint8_t x14 = 62U;
	int64_t x16 = INT64_MIN;
	static volatile int32_t t3 = 34;

	t3 = (x13==((x14<=x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static int8_t x18 = -1;
	volatile int16_t x19 = INT16_MAX;
	int8_t x20 = -1;
	int32_t t4 = 225330361;

	t4 = (x17==((x18<=x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -1;
	int16_t x23 = INT16_MIN;
	static volatile int32_t t5 = 2;

	t5 = (x21==((x22<=x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static int64_t x26 = -1LL;
	int16_t x27 = 51;
	int64_t x28 = INT64_MAX;
	static int32_t t6 = 380128886;

	t6 = (x25==((x26<=x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -383;
	int16_t x30 = -1;
	uint32_t x31 = UINT32_MAX;
	static volatile int32_t t7 = -840881476;

	t7 = (x29==((x30<=x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 18U;
	int64_t x34 = -28737LL;
	uint8_t x35 = 30U;
	volatile int32_t t8 = -258385;

	t8 = (x33==((x34<=x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MAX;
	int64_t x38 = -1LL;
	int64_t x39 = -5LL;
	volatile int32_t t9 = -241983315;

	t9 = (x37==((x38<=x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -1LL;
	int16_t x42 = INT16_MIN;
	static int8_t x43 = INT8_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -1665616;

	t10 = (x41==((x42<=x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -1LL;
	int8_t x47 = -1;
	int32_t x48 = -1;
	static int32_t t11 = -5991;

	t11 = (x45==((x46<=x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x51 = -1;
	static int32_t t12 = 5947541;

	t12 = (x49==((x50<=x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int16_t x54 = -1;
	volatile int16_t x55 = -1;
	static uint64_t x56 = 187LLU;
	volatile int32_t t13 = 747348782;

	t13 = (x53==((x54<=x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	static int64_t x60 = INT64_MIN;

	t14 = (x57==((x58<=x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x62 = INT16_MIN;
	static int32_t x63 = INT32_MIN;
	static uint16_t x64 = UINT16_MAX;

	t15 = (x61==((x62<=x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	int64_t x66 = 1LL;
	int8_t x67 = -1;
	int32_t x68 = -240146737;
	static volatile int32_t t16 = 341;

	t16 = (x65==((x66<=x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -3900;
	volatile uint32_t x70 = 3U;
	volatile uint16_t x71 = UINT16_MAX;
	int64_t x72 = -1LL;
	int32_t t17 = 38;

	t17 = (x69==((x70<=x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	volatile int8_t x74 = INT8_MIN;
	volatile int16_t x76 = -3;
	volatile int32_t t18 = 942042386;

	t18 = (x73==((x74<=x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x78 = -3358725LL;
	static uint32_t x79 = 4U;
	static int8_t x80 = 1;
	int32_t t19 = 325;

	t19 = (x77==((x78<=x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MIN;
	int32_t x83 = INT32_MAX;
	static int8_t x84 = -7;
	volatile int32_t t20 = 1;

	t20 = (x81==((x82<=x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = UINT32_MAX;
	volatile int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MIN;

	t21 = (x85==((x86<=x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int8_t x90 = -2;
	uint64_t x91 = UINT64_MAX;
	int32_t t22 = -1;

	t22 = (x89==((x90<=x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MAX;
	uint16_t x95 = 8476U;

	t23 = (x93==((x94<=x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	uint64_t x98 = UINT64_MAX;
	static volatile uint32_t x99 = 510637642U;
	volatile int32_t x100 = -22;
	int32_t t24 = 179;

	t24 = (x97==((x98<=x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	static int32_t x102 = 24;
	int32_t x103 = INT32_MIN;
	uint16_t x104 = 14U;

	t25 = (x101==((x102<=x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x106 = 396870U;
	uint16_t x108 = 75U;
	static volatile int32_t t26 = 2;

	t26 = (x105==((x106<=x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x109 = 1880031664501LL;
	uint32_t x110 = UINT32_MAX;
	int32_t x111 = 3421;
	uint64_t x112 = 45374534LLU;
	volatile int32_t t27 = -21651672;

	t27 = (x109==((x110<=x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	uint16_t x115 = UINT16_MAX;
	uint32_t x116 = 12U;
	volatile int32_t t28 = -8211969;

	t28 = (x113==((x114<=x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	volatile int16_t x118 = INT16_MIN;
	static int8_t x119 = -1;
	static volatile uint16_t x120 = UINT16_MAX;
	int32_t t29 = 3606778;

	t29 = (x117==((x118<=x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	uint16_t x123 = UINT16_MAX;
	volatile int8_t x124 = INT8_MAX;
	int32_t t30 = -13;

	t30 = (x121==((x122<=x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	volatile uint64_t x126 = UINT64_MAX;
	int32_t t31 = 1;

	t31 = (x125==((x126<=x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x129 = 1;
	int64_t x130 = INT64_MIN;
	int32_t x131 = -1;
	int32_t x132 = -540;

	t32 = (x129==((x130<=x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 765889U;
	uint64_t x134 = UINT64_MAX;
	static uint8_t x136 = 6U;
	int32_t t33 = -1895640;

	t33 = (x133==((x134<=x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = -974817010;
	uint32_t x139 = UINT32_MAX;
	int32_t x140 = -1;
	volatile int32_t t34 = -1;

	t34 = (x137==((x138<=x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	uint64_t x142 = 1390616099553830LLU;
	static int32_t t35 = 0;

	t35 = (x141==((x142<=x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int32_t x147 = 15854;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t36 = 492552247;

	t36 = (x145==((x146<=x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = -4;
	uint8_t x151 = 8U;
	int32_t x152 = -1;
	volatile int32_t t37 = -115566737;

	t37 = (x149==((x150<=x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	int64_t x154 = 282935LL;
	static volatile uint64_t x155 = UINT64_MAX;
	uint32_t x156 = 14529U;

	t38 = (x153==((x154<=x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	volatile int16_t x158 = INT16_MIN;
	int32_t x159 = -2373142;
	int64_t x160 = INT64_MAX;
	int32_t t39 = 40767;

	t39 = (x157==((x158<=x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -31;
	static volatile int8_t x162 = -46;
	static int64_t x163 = INT64_MIN;
	uint64_t x164 = 30LLU;
	int32_t t40 = -908986552;

	t40 = (x161==((x162<=x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = UINT32_MAX;
	int16_t x166 = 0;
	int16_t x167 = INT16_MAX;
	static int64_t x168 = -30043LL;
	int32_t t41 = -967659272;

	t41 = (x165==((x166<=x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int64_t x170 = 31LL;
	int64_t x171 = INT64_MIN;
	volatile int32_t t42 = -960910892;

	t42 = (x169==((x170<=x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x174 = 13528U;
	int32_t x175 = INT32_MAX;
	volatile int64_t x176 = -1LL;
	volatile int32_t t43 = 57501;

	t43 = (x173==((x174<=x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x178 = -1LL;
	int8_t x179 = INT8_MAX;
	int32_t x180 = 1;
	int32_t t44 = 5;

	t44 = (x177==((x178<=x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -1;
	uint8_t x182 = UINT8_MAX;
	int16_t x184 = 111;

	t45 = (x181==((x182<=x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	int64_t x186 = 80531275591147207LL;
	volatile int8_t x187 = -19;

	t46 = (x185==((x186<=x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = 3;
	int16_t x191 = INT16_MAX;
	uint32_t x192 = 17670062U;
	static int32_t t47 = 2797;

	t47 = (x189==((x190<=x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MIN;
	static int16_t x196 = 93;
	static int32_t t48 = 282955;

	t48 = (x193==((x194<=x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = 15U;
	int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MAX;
	static volatile int32_t t49 = 3;

	t49 = (x197==((x198<=x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	static uint64_t x202 = UINT64_MAX;
	int64_t x203 = -15804680272402223LL;
	uint64_t x204 = 473193718583532265LLU;
	static int32_t t50 = -187858;

	t50 = (x201==((x202<=x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x206 = INT64_MIN;
	int16_t x207 = INT16_MIN;
	static int64_t x208 = -1LL;

	t51 = (x205==((x206<=x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x211 = -1;
	uint64_t x212 = UINT64_MAX;
	int32_t t52 = -1;

	t52 = (x209==((x210<=x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = 1;
	int64_t x214 = 3296924070LL;
	int32_t x216 = INT32_MIN;
	volatile int32_t t53 = -10899802;

	t53 = (x213==((x214<=x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int8_t x219 = 1;
	int8_t x220 = INT8_MIN;
	int32_t t54 = -53686;

	t54 = (x217==((x218<=x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -6;
	int8_t x222 = INT8_MIN;
	volatile int32_t x224 = -59113;
	volatile int32_t t55 = -1061166446;

	t55 = (x221==((x222<=x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	int32_t x228 = -1;
	volatile int32_t t56 = 2775;

	t56 = (x225==((x226<=x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -2700;
	int32_t x230 = INT32_MIN;
	int32_t x231 = INT32_MIN;
	static int32_t t57 = -81416;

	t57 = (x229==((x230<=x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MAX;
	static int32_t x235 = -1;
	int8_t x236 = 11;

	t58 = (x233==((x234<=x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	volatile int32_t x238 = -1;
	int32_t x239 = INT32_MAX;
	volatile uint32_t x240 = 9751200U;
	int32_t t59 = 1;

	t59 = (x237==((x238<=x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MIN;
	int32_t x243 = INT32_MIN;
	int16_t x244 = -1;
	int32_t t60 = -59909;

	t60 = (x241==((x242<=x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = 4;
	volatile uint32_t x246 = 1479485U;
	static int64_t x247 = 662LL;
	uint16_t x248 = 8U;

	t61 = (x245==((x246<=x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;
	uint8_t x251 = UINT8_MAX;
	volatile int8_t x252 = INT8_MAX;
	static volatile int32_t t62 = -2406626;

	t62 = (x249==((x250<=x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = -189557091770641LL;
	static uint16_t x255 = UINT16_MAX;
	uint64_t x256 = 2505546448293035216LLU;
	int32_t t63 = -37252645;

	t63 = (x253==((x254<=x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MIN;
	int64_t x259 = INT64_MAX;
	static volatile int32_t t64 = -4666;

	t64 = (x257==((x258<=x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	volatile int16_t x262 = INT16_MAX;
	int64_t x263 = INT64_MAX;
	int64_t x264 = INT64_MIN;
	volatile int32_t t65 = 2581;

	t65 = (x261==((x262<=x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = UINT8_MAX;
	static int16_t x266 = -1;
	uint8_t x267 = 14U;
	uint32_t x268 = 754011U;
	int32_t t66 = -7603721;

	t66 = (x265==((x266<=x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int16_t x270 = -1;
	int32_t x271 = -1;
	static volatile int32_t t67 = -7267;

	t67 = (x269==((x270<=x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = 51;
	volatile int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MAX;
	int8_t x276 = 55;
	volatile int32_t t68 = 1;

	t68 = (x273==((x274<=x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 168890825489220LLU;
	int8_t x278 = -1;
	uint8_t x279 = 8U;
	int64_t x280 = -1LL;
	static int32_t t69 = 86;

	t69 = (x277==((x278<=x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -6870;
	static int32_t x282 = INT32_MAX;
	static int8_t x283 = INT8_MAX;
	volatile uint16_t x284 = 1577U;

	t70 = (x281==((x282<=x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int32_t x288 = INT32_MIN;
	volatile int32_t t71 = 7899468;

	t71 = (x285==((x286<=x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = INT32_MAX;
	int64_t x291 = INT64_MIN;

	t72 = (x289==((x290<=x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 3LLU;
	static int16_t x294 = INT16_MAX;
	uint32_t x295 = 13U;
	volatile uint16_t x296 = UINT16_MAX;
	volatile int32_t t73 = -12050;

	t73 = (x293==((x294<=x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 179347889420483LL;
	uint64_t x299 = UINT64_MAX;
	int32_t x300 = -133;

	t74 = (x297==((x298<=x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 1U;
	int8_t x302 = INT8_MIN;
	int8_t x303 = 0;
	uint64_t x304 = UINT64_MAX;
	static volatile int32_t t75 = 15733;

	t75 = (x301==((x302<=x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 1U;
	volatile int64_t x306 = -230997593LL;
	uint64_t x307 = 196217423116210086LLU;
	volatile int32_t t76 = -117269853;

	t76 = (x305==((x306<=x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int64_t x310 = -1LL;
	volatile int8_t x311 = INT8_MIN;
	int64_t x312 = -275763LL;
	int32_t t77 = 5;

	t77 = (x309==((x310<=x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = 145U;
	volatile uint16_t x314 = 19U;
	static int32_t x315 = 1011949;
	static int64_t x316 = -1LL;
	static volatile int32_t t78 = -240;

	t78 = (x313==((x314<=x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MAX;
	volatile uint32_t x318 = 1381U;
	uint64_t x319 = 426263607819LLU;
	int8_t x320 = INT8_MIN;

	t79 = (x317==((x318<=x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x322 = UINT64_MAX;
	static uint16_t x323 = 4U;
	int8_t x324 = INT8_MIN;
	volatile int32_t t80 = -3;

	t80 = (x321==((x322<=x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 66554219885682LLU;
	int64_t x327 = -238337111LL;
	int32_t x328 = INT32_MAX;

	t81 = (x325==((x326<=x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	uint64_t x330 = UINT64_MAX;
	uint64_t x332 = 85600425885LLU;
	volatile int32_t t82 = -22564091;

	t82 = (x329==((x330<=x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int32_t x334 = -6704455;
	volatile int32_t x336 = INT32_MAX;
	volatile int32_t t83 = -30437209;

	t83 = (x333==((x334<=x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	volatile int16_t x338 = INT16_MIN;
	uint16_t x340 = 18791U;

	t84 = (x337==((x338<=x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	uint16_t x342 = 12U;
	static int8_t x343 = INT8_MIN;
	static int32_t t85 = -36595;

	t85 = (x341==((x342<=x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	volatile int16_t x346 = INT16_MAX;
	int8_t x347 = INT8_MAX;
	static int16_t x348 = -1;

	t86 = (x345==((x346<=x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -583;
	volatile int8_t x350 = 10;
	volatile int32_t t87 = 30980148;

	t87 = (x349==((x350<=x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = -23;
	int16_t x355 = INT16_MIN;
	volatile uint16_t x356 = 26U;
	int32_t t88 = 307358;

	t88 = (x353==((x354<=x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	uint64_t x358 = 1808764024695961268LLU;
	uint32_t x359 = 3U;
	volatile int64_t x360 = 345750724357378537LL;
	int32_t t89 = -13195348;

	t89 = (x357==((x358<=x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 10865U;
	uint16_t x362 = UINT16_MAX;
	volatile uint64_t x363 = 1490946938261603LLU;
	volatile int32_t x364 = -1;
	static volatile int32_t t90 = -29;

	t90 = (x361==((x362<=x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 3LL;
	uint16_t x366 = 1383U;
	volatile int32_t x367 = INT32_MIN;
	static uint16_t x368 = UINT16_MAX;

	t91 = (x365==((x366<=x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 459316U;
	uint64_t x370 = UINT64_MAX;
	uint32_t x371 = 0U;
	uint64_t x372 = 8825400720LLU;
	int32_t t92 = 14764341;

	t92 = (x369==((x370<=x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	int64_t x374 = INT64_MIN;
	int32_t x375 = INT32_MIN;
	volatile int64_t x376 = INT64_MAX;
	volatile int32_t t93 = 14198;

	t93 = (x373==((x374<=x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	static int8_t x378 = INT8_MAX;
	volatile uint32_t x379 = UINT32_MAX;
	static int8_t x380 = -1;
	volatile int32_t t94 = 0;

	t94 = (x377==((x378<=x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	volatile int16_t x382 = -1;
	int16_t x383 = 5029;
	volatile int32_t t95 = -982921063;

	t95 = (x381==((x382<=x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x386 = INT32_MAX;
	int16_t x387 = INT16_MIN;
	int16_t x388 = -1;
	volatile int32_t t96 = -13251;

	t96 = (x385==((x386<=x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MIN;
	int64_t x390 = -25LL;
	volatile uint32_t x391 = 77980U;
	int64_t x392 = -22852141888802591LL;
	static volatile int32_t t97 = -222;

	t97 = (x389==((x390<=x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MAX;
	int32_t t98 = -1035115;

	t98 = (x393==((x394<=x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	static volatile uint64_t x398 = 1808011822LLU;
	static int8_t x399 = -1;
	int32_t t99 = 11992;

	t99 = (x397==((x398<=x399)==x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

