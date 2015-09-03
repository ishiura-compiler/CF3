#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = 52;
uint8_t x14 = 2U;
volatile uint8_t x21 = 4U;
static uint16_t x26 = 0U;
int8_t x36 = INT8_MIN;
volatile int64_t t8 = INT64_MIN;
uint32_t x44 = 60U;
volatile uint32_t t9 = 1987U;
volatile uint32_t x48 = 1253184U;
volatile int32_t x49 = 52010913;
int64_t x67 = 798788941778680019LL;
int16_t x69 = -1;
static int64_t x70 = 330LL;
static volatile uint64_t x71 = 2373234520069LLU;
int16_t x74 = -1503;
volatile int8_t x76 = 19;
uint8_t x81 = UINT8_MAX;
volatile int64_t x85 = INT64_MAX;
int16_t x96 = INT16_MIN;
int8_t x98 = INT8_MAX;
int32_t t23 = -453698;
volatile int64_t x105 = INT64_MIN;
uint16_t x107 = 1U;
volatile int32_t x110 = 273184366;
int32_t t27 = -14567;
int8_t x120 = INT8_MIN;
int8_t x122 = INT8_MIN;
volatile uint32_t x126 = 22U;
volatile uint16_t x127 = 40U;
volatile int16_t x128 = INT16_MAX;
volatile int8_t x129 = -2;
static int64_t x131 = -1LL;
volatile uint32_t t32 = 202U;
int64_t x138 = -42168713LL;
uint64_t x145 = 3037LLU;
int8_t x146 = INT8_MAX;
uint16_t x154 = UINT16_MAX;
volatile int8_t x164 = INT8_MIN;
static volatile int32_t t39 = 27667266;
int64_t x165 = -1LL;
static volatile int32_t t42 = -1;
volatile uint32_t t43 = UINT32_MAX;
int32_t x186 = INT32_MIN;
volatile uint64_t t45 = 1022623252400297LLU;
volatile int64_t x196 = 133171244019513607LL;
volatile int64_t t47 = -2985LL;
volatile uint32_t x202 = UINT32_MAX;
int32_t t49 = 313191775;
int64_t t51 = -11121LL;
int64_t x213 = INT64_MIN;
uint64_t x219 = UINT64_MAX;
static uint8_t x220 = UINT8_MAX;
int32_t x225 = INT32_MAX;
int16_t x229 = -3;
volatile uint64_t x234 = UINT64_MAX;
static uint16_t x245 = UINT16_MAX;
uint8_t x248 = UINT8_MAX;
static volatile int64_t t61 = INT64_MIN;
static volatile int32_t x257 = INT32_MAX;
static volatile int32_t t63 = 56526;
static int8_t x262 = 1;
volatile int32_t t66 = 47;
int16_t x273 = -1;
int32_t t67 = -214315;
static uint64_t x280 = UINT64_MAX;
uint32_t x282 = 31289290U;
static volatile int32_t t71 = 198695;
uint32_t x293 = 5154382U;
volatile int32_t t72 = -84843;
int32_t x298 = -1;
static int64_t x318 = INT64_MIN;
int16_t x322 = -1;
int64_t t79 = 1LL;
static int32_t x328 = -1;
int32_t t81 = 29205;
static int16_t x333 = 1159;
int8_t x340 = 0;
int16_t x345 = 6;
static int16_t x348 = INT16_MAX;
static uint16_t x352 = 21U;
static int32_t x356 = -1;
int32_t t87 = 185618098;
static volatile int64_t t90 = INT64_MIN;
volatile int32_t t91 = 343276985;
int64_t x373 = INT64_MAX;
volatile uint16_t x383 = UINT16_MAX;
int64_t x390 = INT64_MIN;
int32_t x394 = -1;
static uint32_t x396 = UINT32_MAX;
volatile int32_t t98 = -187634;


void f0(void) {
	static int32_t x1 = -1;
	uint16_t x2 = 0U;
	uint16_t x3 = 2219U;
	volatile int32_t x4 = -1;
	volatile int32_t t0 = 6;

	t0 = (((x1==x2)==x3)+x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	volatile uint64_t x6 = 2LLU;
	static uint16_t x7 = 9045U;
	int32_t t1 = -34378439;

	t1 = (((x5==x6)==x7)+x8);

	if (t1 != 52) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = 0;
	int64_t x15 = -1LL;
	int8_t x16 = INT8_MAX;
	volatile int32_t t2 = 3059685;

	t2 = (((x13==x14)==x15)+x16);

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = 94U;
	uint8_t x18 = 22U;
	int32_t x19 = INT32_MIN;
	volatile int64_t x20 = INT64_MIN;
	int64_t t3 = INT64_MIN;

	t3 = (((x17==x18)==x19)+x20);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x22 = INT8_MIN;
	static volatile int16_t x23 = -1;
	static volatile int32_t x24 = INT32_MIN;
	static int32_t t4 = INT32_MIN;

	t4 = (((x21==x22)==x23)+x24);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = -1;
	int8_t x27 = INT8_MAX;
	volatile int16_t x28 = 31;
	static volatile int32_t t5 = -1;

	t5 = (((x25==x26)==x27)+x28);

	if (t5 != 31) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	uint32_t x30 = 445772984U;
	uint32_t x31 = 496797U;
	int8_t x32 = INT8_MIN;
	volatile int32_t t6 = 37735;

	t6 = (((x29==x30)==x31)+x32);

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 0LLU;
	int64_t x34 = 938368351952164838LL;
	int8_t x35 = -1;
	volatile int32_t t7 = 89254875;

	t7 = (((x33==x34)==x35)+x36);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MIN;
	static volatile int32_t x38 = INT32_MAX;
	int64_t x39 = INT64_MIN;
	volatile int64_t x40 = INT64_MIN;

	t8 = (((x37==x38)==x39)+x40);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	int32_t x42 = 55989;
	uint32_t x43 = UINT32_MAX;

	t9 = (((x41==x42)==x43)+x44);

	if (t9 != 60U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = UINT64_MAX;
	volatile int8_t x46 = INT8_MIN;
	static int64_t x47 = 81517647579256LL;
	uint32_t t10 = 465U;

	t10 = (((x45==x46)==x47)+x48);

	if (t10 != 1253184U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = INT16_MAX;
	static volatile int64_t x51 = -1LL;
	int32_t x52 = 7867;
	static int32_t t11 = -90;

	t11 = (((x49==x50)==x51)+x52);

	if (t11 != 7867) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x53 = UINT32_MAX;
	uint8_t x54 = 15U;
	int32_t x55 = INT32_MIN;
	static int8_t x56 = -4;
	volatile int32_t t12 = -224441;

	t12 = (((x53==x54)==x55)+x56);

	if (t12 != -4) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x57 = 3441900U;
	int16_t x58 = 1989;
	uint16_t x59 = 1U;
	int32_t x60 = INT32_MIN;
	volatile int32_t t13 = INT32_MIN;

	t13 = (((x57==x58)==x59)+x60);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MAX;
	uint16_t x62 = 1U;
	int8_t x63 = INT8_MIN;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t14 = 5;

	t14 = (((x61==x62)==x63)+x64);

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 1742U;
	int64_t x66 = -1LL;
	int64_t x68 = INT64_MIN;
	static int64_t t15 = INT64_MIN;

	t15 = (((x65==x66)==x67)+x68);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x72 = INT8_MAX;
	volatile int32_t t16 = -52535343;

	t16 = (((x69==x70)==x71)+x72);

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = UINT8_MAX;
	int16_t x75 = 14;
	int32_t t17 = 1;

	t17 = (((x73==x74)==x75)+x76);

	if (t17 != 19) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -1;
	static int8_t x78 = INT8_MIN;
	volatile uint16_t x79 = UINT16_MAX;
	static int16_t x80 = 0;
	static volatile int32_t t18 = -12316925;

	t18 = (((x77==x78)==x79)+x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = 1;
	int32_t x83 = -1;
	static int8_t x84 = INT8_MIN;
	int32_t t19 = -1290193;

	t19 = (((x81==x82)==x83)+x84);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x86 = 22U;
	int8_t x87 = INT8_MAX;
	int32_t x88 = INT32_MAX;
	volatile int32_t t20 = INT32_MAX;

	t20 = (((x85==x86)==x87)+x88);

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x89 = INT8_MAX;
	static int8_t x90 = INT8_MAX;
	static int32_t x91 = -1023941475;
	static volatile int32_t x92 = INT32_MIN;
	volatile int32_t t21 = INT32_MIN;

	t21 = (((x89==x90)==x91)+x92);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MAX;
	static int32_t x94 = -381818292;
	static volatile int16_t x95 = -40;
	int32_t t22 = -16;

	t22 = (((x93==x94)==x95)+x96);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = 5316;
	uint8_t x99 = 3U;
	volatile int16_t x100 = -1;

	t23 = (((x97==x98)==x99)+x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = UINT8_MAX;
	volatile int64_t x102 = -1884699294775366597LL;
	int32_t x103 = INT32_MIN;
	int16_t x104 = -1;
	volatile int32_t t24 = 729;

	t24 = (((x101==x102)==x103)+x104);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x106 = 179626602;
	int64_t x108 = -1LL;
	static volatile int64_t t25 = 17155236LL;

	t25 = (((x105==x106)==x107)+x108);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = 71;
	static uint16_t x111 = 800U;
	int32_t x112 = INT32_MIN;
	int32_t t26 = INT32_MIN;

	t26 = (((x109==x110)==x111)+x112);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = 24;
	int64_t x114 = INT64_MIN;
	static int64_t x115 = 352846253LL;
	int32_t x116 = 164;

	t27 = (((x113==x114)==x115)+x116);

	if (t27 != 164) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -1LL;
	volatile int8_t x118 = -1;
	volatile int8_t x119 = INT8_MIN;
	int32_t t28 = 71;

	t28 = (((x117==x118)==x119)+x120);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MAX;
	uint32_t x123 = 50460U;
	int32_t x124 = INT32_MAX;
	int32_t t29 = INT32_MAX;

	t29 = (((x121==x122)==x123)+x124);

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x125 = INT8_MIN;
	volatile int32_t t30 = -190114;

	t30 = (((x125==x126)==x127)+x128);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = INT8_MIN;
	uint8_t x132 = 56U;
	int32_t t31 = -3340976;

	t31 = (((x129==x130)==x131)+x132);

	if (t31 != 56) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 742186104998800LLU;
	int64_t x134 = INT64_MIN;
	static int16_t x135 = INT16_MAX;
	uint32_t x136 = 17101U;

	t32 = (((x133==x134)==x135)+x136);

	if (t32 != 17101U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = -2554LL;
	static volatile int64_t x139 = 124LL;
	volatile int8_t x140 = INT8_MIN;
	int32_t t33 = 0;

	t33 = (((x137==x138)==x139)+x140);

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	int8_t x142 = 1;
	static int16_t x143 = INT16_MAX;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = 5;

	t34 = (((x141==x142)==x143)+x144);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x147 = 6150584U;
	volatile int32_t x148 = INT32_MAX;
	volatile int32_t t35 = INT32_MAX;

	t35 = (((x145==x146)==x147)+x148);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x149 = -15;
	uint16_t x150 = UINT16_MAX;
	uint16_t x151 = UINT16_MAX;
	uint8_t x152 = 45U;
	int32_t t36 = -217978778;

	t36 = (((x149==x150)==x151)+x152);

	if (t36 != 45) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x153 = INT32_MIN;
	volatile uint8_t x155 = UINT8_MAX;
	int16_t x156 = INT16_MAX;
	volatile int32_t t37 = -116896525;

	t37 = (((x153==x154)==x155)+x156);

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MIN;
	int64_t x158 = INT64_MIN;
	volatile int8_t x159 = -1;
	uint16_t x160 = 61U;
	int32_t t38 = -14;

	t38 = (((x157==x158)==x159)+x160);

	if (t38 != 61) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x161 = 4707U;
	int32_t x162 = INT32_MIN;
	static int32_t x163 = INT32_MIN;

	t39 = (((x161==x162)==x163)+x164);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x166 = 34U;
	static int16_t x167 = -222;
	int8_t x168 = -4;
	volatile int32_t t40 = -1;

	t40 = (((x165==x166)==x167)+x168);

	if (t40 != -4) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = 2006;
	uint64_t x170 = 12681400533168414LLU;
	int8_t x171 = INT8_MIN;
	int64_t x172 = 206104621805166196LL;
	int64_t t41 = -24767955241LL;

	t41 = (((x169==x170)==x171)+x172);

	if (t41 != 206104621805166196LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = 0;
	int8_t x174 = 25;
	int32_t x175 = INT32_MAX;
	static uint8_t x176 = 40U;

	t42 = (((x173==x174)==x175)+x176);

	if (t42 != 40) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = UINT64_MAX;
	int64_t x178 = INT64_MAX;
	int16_t x179 = INT16_MIN;
	uint32_t x180 = UINT32_MAX;

	t43 = (((x177==x178)==x179)+x180);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MIN;
	volatile int32_t x182 = -1;
	uint8_t x183 = 77U;
	int8_t x184 = INT8_MAX;
	int32_t t44 = -1409897;

	t44 = (((x181==x182)==x183)+x184);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -26891684275873LL;
	volatile uint16_t x187 = 119U;
	uint64_t x188 = 119448831LLU;

	t45 = (((x185==x186)==x187)+x188);

	if (t45 != 119448831LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x189 = INT8_MIN;
	volatile int8_t x190 = INT8_MIN;
	uint8_t x191 = 96U;
	int32_t x192 = -1;
	int32_t t46 = -2;

	t46 = (((x189==x190)==x191)+x192);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = -1;
	static uint16_t x194 = 12U;
	static int64_t x195 = -1LL;

	t47 = (((x193==x194)==x195)+x196);

	if (t47 != 133171244019513607LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MAX;
	int16_t x198 = INT16_MAX;
	static int64_t x199 = INT64_MIN;
	int16_t x200 = INT16_MIN;
	volatile int32_t t48 = -1536868;

	t48 = (((x197==x198)==x199)+x200);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x201 = 1U;
	static int64_t x203 = -220441834453905716LL;
	static int8_t x204 = -16;

	t49 = (((x201==x202)==x203)+x204);

	if (t49 != -16) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x205 = 87727U;
	int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t50 = INT32_MIN;

	t50 = (((x205==x206)==x207)+x208);

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x209 = 88U;
	int64_t x210 = -8LL;
	static int32_t x211 = 107425;
	static int64_t x212 = -1LL;

	t51 = (((x209==x210)==x211)+x212);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x214 = INT32_MAX;
	int8_t x215 = 61;
	int32_t x216 = 886568777;
	static volatile int32_t t52 = 123014207;

	t52 = (((x213==x214)==x215)+x216);

	if (t52 != 886568777) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = -529;
	static int32_t t53 = 1;

	t53 = (((x217==x218)==x219)+x220);

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x221 = 2;
	volatile int8_t x222 = -1;
	uint8_t x223 = UINT8_MAX;
	int32_t x224 = INT32_MIN;
	int32_t t54 = INT32_MIN;

	t54 = (((x221==x222)==x223)+x224);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x226 = 32U;
	volatile uint32_t x227 = 26U;
	int8_t x228 = -19;
	volatile int32_t t55 = -3464;

	t55 = (((x225==x226)==x227)+x228);

	if (t55 != -19) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x230 = INT16_MAX;
	static int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MIN;
	volatile int32_t t56 = INT32_MIN;

	t56 = (((x229==x230)==x231)+x232);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MAX;
	uint64_t x235 = 40213441455LLU;
	int64_t x236 = INT64_MIN;
	volatile int64_t t57 = INT64_MIN;

	t57 = (((x233==x234)==x235)+x236);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x237 = -36315;
	int8_t x238 = -28;
	int16_t x239 = -1960;
	int16_t x240 = INT16_MAX;
	int32_t t58 = 204943116;

	t58 = (((x237==x238)==x239)+x240);

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x241 = INT8_MIN;
	uint16_t x242 = 593U;
	volatile uint32_t x243 = UINT32_MAX;
	int32_t x244 = INT32_MIN;
	static int32_t t59 = INT32_MIN;

	t59 = (((x241==x242)==x243)+x244);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x246 = -5;
	volatile int32_t x247 = INT32_MAX;
	int32_t t60 = 328094349;

	t60 = (((x245==x246)==x247)+x248);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x249 = 7LLU;
	volatile uint64_t x250 = UINT64_MAX;
	int8_t x251 = -1;
	static volatile int64_t x252 = INT64_MIN;

	t61 = (((x249==x250)==x251)+x252);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = 14;
	int32_t x254 = INT32_MAX;
	int8_t x255 = 28;
	volatile int32_t x256 = 965;
	static volatile int32_t t62 = 125;

	t62 = (((x253==x254)==x255)+x256);

	if (t62 != 965) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x258 = INT16_MIN;
	volatile uint16_t x259 = UINT16_MAX;
	int8_t x260 = INT8_MIN;

	t63 = (((x257==x258)==x259)+x260);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	uint8_t x263 = 4U;
	int16_t x264 = INT16_MIN;
	int32_t t64 = -254;

	t64 = (((x261==x262)==x263)+x264);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = -151112541118LL;
	static int8_t x266 = INT8_MAX;
	volatile uint16_t x267 = UINT16_MAX;
	int64_t x268 = 94612941542329LL;
	volatile int64_t t65 = -9695448595LL;

	t65 = (((x265==x266)==x267)+x268);

	if (t65 != 94612941542329LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = INT64_MAX;
	int64_t x270 = 255LL;
	static volatile int8_t x271 = -1;
	uint16_t x272 = UINT16_MAX;

	t66 = (((x269==x270)==x271)+x272);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x274 = UINT8_MAX;
	volatile int8_t x275 = INT8_MIN;
	int8_t x276 = 2;

	t67 = (((x273==x274)==x275)+x276);

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = UINT8_MAX;
	uint32_t x278 = 145U;
	int64_t x279 = INT64_MIN;
	static volatile uint64_t t68 = UINT64_MAX;

	t68 = (((x277==x278)==x279)+x280);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x281 = 74U;
	volatile int64_t x283 = -1615181863229LL;
	int64_t x284 = INT64_MAX;
	static volatile int64_t t69 = INT64_MAX;

	t69 = (((x281==x282)==x283)+x284);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = 37U;
	int8_t x286 = 1;
	static uint16_t x287 = 309U;
	volatile int32_t x288 = INT32_MIN;
	static volatile int32_t t70 = INT32_MIN;

	t70 = (((x285==x286)==x287)+x288);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x289 = INT32_MAX;
	int8_t x290 = -1;
	static uint16_t x291 = 6U;
	volatile uint8_t x292 = UINT8_MAX;

	t71 = (((x289==x290)==x291)+x292);

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x294 = INT16_MAX;
	static int32_t x295 = INT32_MAX;
	int16_t x296 = INT16_MAX;

	t72 = (((x293==x294)==x295)+x296);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = 10;
	uint16_t x299 = 0U;
	int8_t x300 = INT8_MAX;
	volatile int32_t t73 = -1279817;

	t73 = (((x297==x298)==x299)+x300);

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = -1;
	int32_t x302 = 58;
	volatile int16_t x303 = 44;
	int64_t x304 = INT64_MIN;
	static int64_t t74 = INT64_MIN;

	t74 = (((x301==x302)==x303)+x304);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x305 = 1741U;
	static int32_t x306 = -815;
	static int8_t x307 = -1;
	static int64_t x308 = INT64_MIN;
	volatile int64_t t75 = INT64_MIN;

	t75 = (((x305==x306)==x307)+x308);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x309 = INT64_MIN;
	int64_t x310 = INT64_MIN;
	int8_t x311 = -3;
	volatile int64_t x312 = -1LL;
	volatile int64_t t76 = 217317873381264338LL;

	t76 = (((x309==x310)==x311)+x312);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x313 = -4331;
	int64_t x314 = INT64_MAX;
	uint16_t x315 = UINT16_MAX;
	static volatile int64_t x316 = INT64_MAX;
	static volatile int64_t t77 = INT64_MAX;

	t77 = (((x313==x314)==x315)+x316);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = -115341;
	volatile uint16_t x319 = UINT16_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t78 = 15110493;

	t78 = (((x317==x318)==x319)+x320);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x321 = 2853886LLU;
	static uint64_t x323 = 16560623LLU;
	volatile int64_t x324 = 1LL;

	t79 = (((x321==x322)==x323)+x324);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = 94375774;
	static int32_t x326 = -1;
	int32_t x327 = -1;
	int32_t t80 = -347;

	t80 = (((x325==x326)==x327)+x328);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MIN;
	volatile int64_t x330 = -1LL;
	uint64_t x331 = 406026800LLU;
	int16_t x332 = INT16_MIN;

	t81 = (((x329==x330)==x331)+x332);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x334 = -1;
	int16_t x335 = -1;
	int32_t x336 = -6990;
	int32_t t82 = -1;

	t82 = (((x333==x334)==x335)+x336);

	if (t82 != -6990) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x337 = 43980U;
	static int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	int32_t t83 = 0;

	t83 = (((x337==x338)==x339)+x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = -10546;
	int16_t x342 = INT16_MIN;
	uint8_t x343 = UINT8_MAX;
	static int64_t x344 = 58778041375755LL;
	int64_t t84 = 1812848LL;

	t84 = (((x341==x342)==x343)+x344);

	if (t84 != 58778041375755LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x346 = -3522627028LL;
	volatile int64_t x347 = -559939530177384LL;
	int32_t t85 = 492919;

	t85 = (((x345==x346)==x347)+x348);

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x349 = -15;
	int32_t x350 = INT32_MIN;
	uint8_t x351 = 3U;
	int32_t t86 = -9149248;

	t86 = (((x349==x350)==x351)+x352);

	if (t86 != 21) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MIN;
	volatile int64_t x354 = INT64_MAX;
	int8_t x355 = INT8_MIN;

	t87 = (((x353==x354)==x355)+x356);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = INT8_MIN;
	static int64_t x358 = INT64_MAX;
	int64_t x359 = 1139641956141LL;
	static int64_t x360 = INT64_MIN;
	static int64_t t88 = INT64_MIN;

	t88 = (((x357==x358)==x359)+x360);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = INT64_MIN;
	static int32_t x362 = 180816;
	int32_t x363 = INT32_MIN;
	uint16_t x364 = UINT16_MAX;
	static volatile int32_t t89 = 249219;

	t89 = (((x361==x362)==x363)+x364);

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = INT8_MAX;
	uint32_t x366 = 5668U;
	uint8_t x367 = 60U;
	int64_t x368 = INT64_MIN;

	t90 = (((x365==x366)==x367)+x368);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x369 = 43U;
	volatile uint32_t x370 = UINT32_MAX;
	volatile int32_t x371 = INT32_MAX;
	uint16_t x372 = 31434U;

	t91 = (((x369==x370)==x371)+x372);

	if (t91 != 31434) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x374 = UINT32_MAX;
	static int16_t x375 = -3;
	volatile uint32_t x376 = 6025U;
	uint32_t t92 = 14996744U;

	t92 = (((x373==x374)==x375)+x376);

	if (t92 != 6025U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x377 = -1462743;
	int16_t x378 = INT16_MIN;
	volatile int32_t x379 = INT32_MIN;
	uint8_t x380 = UINT8_MAX;
	int32_t t93 = 0;

	t93 = (((x377==x378)==x379)+x380);

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = INT64_MIN;
	int16_t x382 = INT16_MIN;
	int64_t x384 = -1LL;
	int64_t t94 = -3567378038380LL;

	t94 = (((x381==x382)==x383)+x384);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x385 = INT32_MAX;
	int16_t x386 = -1;
	static uint8_t x387 = 1U;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t95 = 14;

	t95 = (((x385==x386)==x387)+x388);

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x389 = INT64_MIN;
	uint16_t x391 = 1583U;
	static uint32_t x392 = UINT32_MAX;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = (((x389==x390)==x391)+x392);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x393 = INT64_MIN;
	volatile int32_t x395 = 13304146;
	static uint32_t t97 = UINT32_MAX;

	t97 = (((x393==x394)==x395)+x396);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = INT32_MIN;
	uint64_t x399 = 684602173691904LLU;
	uint8_t x400 = 1U;

	t98 = (((x397==x398)==x399)+x400);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = -3451874026LL;
	int64_t x402 = -1LL;
	static volatile uint64_t x403 = 9571573161364875LLU;
	int64_t x404 = 1LL;
	volatile int64_t t99 = 468354089423LL;

	t99 = (((x401==x402)==x403)+x404);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

