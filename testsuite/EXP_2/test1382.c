#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = 120;
int16_t x9 = INT16_MIN;
volatile int32_t t2 = 4;
volatile int16_t x13 = INT16_MIN;
volatile int32_t t3 = -1;
uint8_t x20 = 11U;
int32_t x25 = -276;
volatile uint32_t x29 = 1U;
uint64_t x35 = 204LLU;
volatile int64_t t7 = 159627370864LL;
uint64_t x43 = 2843LLU;
int8_t x48 = 7;
static int16_t x49 = -1;
static uint16_t x59 = 3U;
int64_t x62 = INT64_MAX;
int8_t x64 = 27;
int16_t x70 = -1;
int32_t x72 = 21223;
volatile int64_t t16 = -262226495LL;
uint8_t x82 = 5U;
static volatile uint64_t t18 = 165155471LLU;
int64_t x90 = -1LL;
uint16_t x91 = UINT16_MAX;
uint64_t t21 = 4658001527LLU;
volatile uint16_t x102 = 7246U;
volatile int32_t t22 = 707755;
uint8_t x105 = 7U;
int16_t x106 = INT16_MIN;
volatile int32_t t23 = 9;
volatile int16_t x110 = -21;
int8_t x113 = INT8_MAX;
static int32_t x116 = -1;
volatile int32_t x117 = INT32_MAX;
volatile int64_t x124 = INT64_MIN;
uint32_t x127 = 849987U;
int32_t x129 = 24;
volatile int16_t x130 = INT16_MIN;
volatile int64_t x131 = INT64_MIN;
volatile uint64_t x132 = 8758154018571LLU;
volatile int32_t x133 = INT32_MAX;
volatile uint64_t t30 = 999991LLU;
int64_t x139 = INT64_MIN;
volatile uint32_t x144 = UINT32_MAX;
static int32_t x149 = -38;
int32_t x158 = INT32_MAX;
int64_t x164 = INT64_MIN;
int32_t x165 = INT32_MIN;
uint32_t x166 = UINT32_MAX;
int16_t x170 = INT16_MAX;
static int32_t x174 = INT32_MAX;
int8_t x176 = INT8_MAX;
int16_t x178 = INT16_MAX;
int16_t x190 = -1;
int8_t x194 = 5;
volatile int32_t x199 = 36188808;
static volatile uint64_t x201 = 60940713584LLU;
int16_t x207 = -1;
int16_t x215 = INT16_MAX;
static volatile uint64_t x221 = UINT64_MAX;
volatile uint64_t t51 = 1690570046834858790LLU;
uint8_t x227 = UINT8_MAX;
int8_t x229 = 1;
static int32_t t53 = 2653164;
int64_t x237 = -1LL;
volatile int16_t x240 = INT16_MIN;
int64_t x243 = INT64_MIN;
int64_t x253 = INT64_MAX;
static int32_t x254 = INT32_MAX;
int64_t x265 = -1LL;
volatile uint32_t x268 = 2795U;
volatile int32_t t63 = -101731257;
int16_t x273 = INT16_MAX;
int16_t x282 = INT16_MIN;
int64_t x283 = -28LL;
static uint64_t t66 = 4629992631172398938LLU;
int64_t x285 = 263404914314428673LL;
uint64_t t67 = 12266573544390527LLU;
int64_t x293 = 11928269316442961LL;
volatile uint32_t x294 = 288682U;
int8_t x300 = INT8_MIN;
volatile int32_t t69 = -43873;
volatile int16_t x303 = 0;
volatile uint32_t x304 = 18162U;
volatile uint16_t x308 = 550U;
int64_t x310 = -2446549LL;
static volatile int8_t x323 = INT8_MIN;
volatile uint16_t x325 = 1U;
int64_t x330 = INT64_MAX;
volatile int8_t x331 = INT8_MIN;
uint32_t x338 = UINT32_MAX;
int32_t x344 = INT32_MIN;
uint32_t x348 = UINT32_MAX;
int8_t x352 = -44;
volatile int32_t t82 = -16731;
uint64_t x357 = 7678231LLU;
static int16_t x360 = 117;
uint64_t t84 = 1637132190314LLU;
volatile int16_t x364 = 3;
static uint64_t x367 = 18073878413LLU;
volatile int32_t t87 = 80897;
uint16_t x375 = UINT16_MAX;
uint16_t x388 = 344U;
int64_t x390 = 52997LL;
static int32_t x395 = INT32_MAX;
uint8_t x399 = 1U;
int32_t x400 = -350730527;
static int32_t x403 = -1;
int16_t x405 = INT16_MIN;
int64_t x418 = -1LL;
int32_t t98 = 494352627;
static int32_t x422 = 775228448;


void f0(void) {
	uint32_t x1 = 101229743U;
	volatile int32_t x2 = INT32_MAX;
	int8_t x3 = -1;
	int64_t x4 = -1LL;
	volatile int64_t t0 = 105255152401430LL;

	t0 = ((x1*(x2<x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 29;
	int8_t x6 = 14;
	uint32_t x7 = 7U;
	volatile int32_t t1 = -10827922;

	t1 = ((x5*(x6<x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = 1483;
	int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MIN;

	t2 = ((x9*(x10<x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = UINT8_MAX;
	static int16_t x15 = -4;
	int8_t x16 = INT8_MAX;

	t3 = ((x13*(x14<x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	volatile int32_t t4 = -1433;

	t4 = ((x17*(x18<x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x26 = INT16_MIN;
	volatile int64_t x27 = INT64_MIN;
	int8_t x28 = -2;
	int32_t t5 = 426446999;

	t5 = ((x25*(x26<x27))/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = 92928980880964114LL;
	uint32_t x31 = 239U;
	int32_t x32 = INT32_MAX;
	volatile uint32_t t6 = 83U;

	t6 = ((x29*(x30<x31))/x32);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 296164LL;
	static uint32_t x34 = 231U;
	uint8_t x36 = UINT8_MAX;

	t7 = ((x33*(x34<x35))/x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = -1;
	int8_t x38 = 4;
	volatile int64_t x39 = INT64_MIN;
	static uint64_t x40 = 57184LLU;
	volatile uint64_t t8 = 297LLU;

	t8 = ((x37*(x38<x39))/x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 6373U;
	int64_t x42 = -27LL;
	volatile int64_t x44 = INT64_MAX;
	static int64_t t9 = 149LL;

	t9 = ((x41*(x42<x43))/x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	int16_t x46 = -15431;
	volatile int8_t x47 = 45;
	int32_t t10 = 483;

	t10 = ((x45*(x46<x47))/x48);

	if (t10 != 4681) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x50 = 2U;
	int32_t x51 = 464968167;
	uint32_t x52 = 6936571U;
	uint32_t t11 = 675U;

	t11 = ((x49*(x50<x51))/x52);

	if (t11 != 619U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 30964301415474426LL;
	static volatile int32_t x54 = 62;
	volatile uint32_t x55 = 2786U;
	volatile int64_t x56 = INT64_MAX;
	int64_t t12 = -1LL;

	t12 = ((x53*(x54<x55))/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 1;
	volatile int8_t x58 = -1;
	int16_t x60 = -1;
	int32_t t13 = -514980;

	t13 = ((x57*(x58<x59))/x60);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = UINT32_MAX;
	int64_t x63 = INT64_MAX;
	uint32_t t14 = 3088362U;

	t14 = ((x61*(x62<x63))/x64);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 12U;
	volatile int64_t x71 = INT64_MAX;
	volatile int32_t t15 = 224669;

	t15 = ((x69*(x70<x71))/x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -1LL;
	static int16_t x78 = 141;
	int64_t x79 = INT64_MIN;
	volatile int64_t x80 = INT64_MAX;

	t16 = ((x77*(x78<x79))/x80);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	int64_t x83 = 832848LL;
	int16_t x84 = INT16_MIN;
	static int32_t t17 = -1960842;

	t17 = ((x81*(x82<x83))/x84);

	if (t17 != 65536) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MAX;
	static uint8_t x86 = 25U;
	int8_t x87 = 0;
	static uint64_t x88 = 25109319770LLU;

	t18 = ((x85*(x86<x87))/x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 1852695881100LLU;
	uint64_t x92 = 1484842115504622873LLU;
	uint64_t t19 = 341832LLU;

	t19 = ((x89*(x90<x91))/x92);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = -1;
	uint32_t x94 = 5762U;
	int8_t x95 = 30;
	int8_t x96 = -2;
	int32_t t20 = -1036472715;

	t20 = ((x93*(x94<x95))/x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x97 = INT64_MIN;
	int32_t x98 = 801811347;
	uint16_t x99 = 2429U;
	uint64_t x100 = 1975206247LLU;

	t21 = ((x97*(x98<x99))/x100);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x101 = INT16_MIN;
	int64_t x103 = INT64_MIN;
	volatile int8_t x104 = INT8_MIN;

	t22 = ((x101*(x102<x103))/x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x107 = -1;
	static int16_t x108 = 152;

	t23 = ((x105*(x106<x107))/x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MAX;
	static int8_t x111 = INT8_MIN;
	uint64_t x112 = UINT64_MAX;
	uint64_t t24 = 8LLU;

	t24 = ((x109*(x110<x111))/x112);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x114 = 19299848190432LL;
	uint16_t x115 = UINT16_MAX;
	int32_t t25 = -89;

	t25 = ((x113*(x114<x115))/x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x118 = INT64_MAX;
	uint16_t x119 = 1U;
	int64_t x120 = 8039184LL;
	volatile int64_t t26 = -28910LL;

	t26 = ((x117*(x118<x119))/x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = UINT64_MAX;
	uint32_t x122 = UINT32_MAX;
	int16_t x123 = INT16_MAX;
	uint64_t t27 = 1406047LLU;

	t27 = ((x121*(x122<x123))/x124);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -902;
	static int8_t x126 = INT8_MAX;
	uint8_t x128 = 16U;
	int32_t t28 = 299;

	t28 = ((x125*(x126<x127))/x128);

	if (t28 != -56) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t t29 = 555778507LLU;

	t29 = ((x129*(x130<x131))/x132);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = INT16_MAX;
	volatile uint64_t x136 = 530417663554495585LLU;

	t30 = ((x133*(x134<x135))/x136);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x137 = 1U;
	int16_t x138 = -13;
	int32_t x140 = INT32_MIN;
	int32_t t31 = -99186144;

	t31 = ((x137*(x138<x139))/x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = 2;
	int16_t x142 = INT16_MIN;
	uint64_t x143 = 7LLU;
	static volatile uint32_t t32 = 130153926U;

	t32 = ((x141*(x142<x143))/x144);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x145 = 1U;
	static uint16_t x146 = UINT16_MAX;
	int32_t x147 = -1;
	static int16_t x148 = -1;
	int32_t t33 = -964;

	t33 = ((x145*(x146<x147))/x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x150 = 0U;
	volatile int64_t x151 = 14571184559086075LL;
	static int8_t x152 = -1;
	int32_t t34 = 841983;

	t34 = ((x149*(x150<x151))/x152);

	if (t34 != 38) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = -1;
	volatile int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MIN;
	uint8_t x156 = 4U;
	volatile int32_t t35 = 1;

	t35 = ((x153*(x154<x155))/x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x157 = -1LL;
	int64_t x159 = -1LL;
	int16_t x160 = INT16_MIN;
	int64_t t36 = -1881855198175LL;

	t36 = ((x157*(x158<x159))/x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x161 = INT8_MAX;
	int64_t x162 = INT64_MAX;
	int32_t x163 = INT32_MIN;
	int64_t t37 = -775191229249LL;

	t37 = ((x161*(x162<x163))/x164);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x167 = -5883702;
	uint64_t x168 = 181616863211LLU;
	static uint64_t t38 = 41534520014968LLU;

	t38 = ((x165*(x166<x167))/x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x169 = 2U;
	int8_t x171 = -1;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t39 = -477370880;

	t39 = ((x169*(x170<x171))/x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = -4;
	volatile int16_t x175 = -4149;
	int32_t t40 = 147890;

	t40 = ((x173*(x174<x175))/x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 2U;
	uint64_t x179 = 25615484691361390LLU;
	volatile uint64_t x180 = UINT64_MAX;
	volatile uint64_t t41 = 485944LLU;

	t41 = ((x177*(x178<x179))/x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = 4U;
	int16_t x182 = 46;
	static uint32_t x183 = 59956U;
	int32_t x184 = INT32_MIN;
	volatile int32_t t42 = -14928242;

	t42 = ((x181*(x182<x183))/x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x185 = 646740LLU;
	uint64_t x186 = 4393868760283406930LLU;
	int64_t x187 = -1LL;
	uint32_t x188 = 4483U;
	uint64_t t43 = 357LLU;

	t43 = ((x185*(x186<x187))/x188);

	if (t43 != 144LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = 0;
	volatile int64_t x191 = INT64_MAX;
	uint64_t x192 = UINT64_MAX;
	static uint64_t t44 = 125216479LLU;

	t44 = ((x189*(x190<x191))/x192);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x193 = 0;
	static int32_t x195 = INT32_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t45 = -43;

	t45 = ((x193*(x194<x195))/x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = 1LL;
	int16_t x198 = 1899;
	int16_t x200 = -1;
	static int64_t t46 = -14680557313022851LL;

	t46 = ((x197*(x198<x199))/x200);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x202 = INT16_MIN;
	int32_t x203 = 426;
	int64_t x204 = INT64_MAX;
	volatile uint64_t t47 = 39476656189467LLU;

	t47 = ((x201*(x202<x203))/x204);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x205 = -1LL;
	int32_t x206 = -1;
	int8_t x208 = -1;
	static volatile int64_t t48 = 2125602320699027LL;

	t48 = ((x205*(x206<x207))/x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 13178461U;
	int32_t x214 = -1;
	int32_t x216 = INT32_MAX;
	uint32_t t49 = 164344295U;

	t49 = ((x213*(x214<x215))/x216);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x217 = INT32_MAX;
	static volatile uint16_t x218 = 1018U;
	int8_t x219 = -1;
	int16_t x220 = -10069;
	volatile int32_t t50 = 15645498;

	t50 = ((x217*(x218<x219))/x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MIN;
	volatile int16_t x224 = 1414;

	t51 = ((x221*(x222<x223))/x224);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = 91821561478LL;
	volatile int8_t x226 = INT8_MAX;
	uint64_t x228 = 617705445978LLU;
	uint64_t t52 = 31425506921089806LLU;

	t52 = ((x225*(x226<x227))/x228);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x230 = UINT16_MAX;
	volatile int8_t x231 = -1;
	static int8_t x232 = -1;

	t53 = ((x229*(x230<x231))/x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x233 = 475U;
	int64_t x234 = INT64_MAX;
	uint16_t x235 = UINT16_MAX;
	static volatile uint16_t x236 = UINT16_MAX;
	int32_t t54 = -6;

	t54 = ((x233*(x234<x235))/x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x238 = INT32_MAX;
	static int32_t x239 = INT32_MIN;
	static volatile int64_t t55 = -6193197507887LL;

	t55 = ((x237*(x238<x239))/x240);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x241 = INT32_MIN;
	static uint16_t x242 = UINT16_MAX;
	uint16_t x244 = 2U;
	static int32_t t56 = -6840402;

	t56 = ((x241*(x242<x243))/x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 237612U;
	uint16_t x246 = UINT16_MAX;
	static int8_t x247 = -1;
	uint32_t x248 = 212401U;
	static volatile uint32_t t57 = 2970U;

	t57 = ((x245*(x246<x247))/x248);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = INT16_MAX;
	volatile uint16_t x250 = UINT16_MAX;
	static int8_t x251 = INT8_MAX;
	uint64_t x252 = 430976677LLU;
	uint64_t t58 = 4931866055378714342LLU;

	t58 = ((x249*(x250<x251))/x252);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x255 = -1;
	static volatile int64_t x256 = 891LL;
	volatile int64_t t59 = -2445451991578388LL;

	t59 = ((x253*(x254<x255))/x256);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x257 = UINT32_MAX;
	volatile uint16_t x258 = 25U;
	static uint16_t x259 = 198U;
	int64_t x260 = -1LL;
	volatile int64_t t60 = 5LL;

	t60 = ((x257*(x258<x259))/x260);

	if (t60 != -4294967295LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x261 = -1473023;
	uint64_t x262 = 39064LLU;
	int32_t x263 = INT32_MIN;
	volatile int8_t x264 = 3;
	volatile int32_t t61 = -188;

	t61 = ((x261*(x262<x263))/x264);

	if (t61 != -491007) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MIN;
	int64_t t62 = -25036LL;

	t62 = ((x265*(x266<x267))/x268);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x269 = 6U;
	uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	uint8_t x272 = UINT8_MAX;

	t63 = ((x269*(x270<x271))/x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x274 = 7108LLU;
	int8_t x275 = 54;
	volatile int64_t x276 = INT64_MIN;
	static volatile int64_t t64 = -5655464633849489LL;

	t64 = ((x273*(x274<x275))/x276);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x277 = 0;
	int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MIN;
	static uint64_t x280 = UINT64_MAX;
	static volatile uint64_t t65 = 60980LLU;

	t65 = ((x277*(x278<x279))/x280);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x281 = -8047366861233LL;
	static uint64_t x284 = 1708LLU;

	t66 = ((x281*(x282<x283))/x284);

	if (t66 != 10800196736734596LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x286 = 10474U;
	int32_t x287 = -1;
	uint64_t x288 = UINT64_MAX;

	t67 = ((x285*(x286<x287))/x288);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x295 = -1;
	volatile int16_t x296 = INT16_MIN;
	volatile int64_t t68 = 257198611563596629LL;

	t68 = ((x293*(x294<x295))/x296);

	if (t68 != -364021890760LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = -1;
	int16_t x298 = 6;
	int64_t x299 = INT64_MAX;

	t69 = ((x297*(x298<x299))/x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = INT16_MIN;
	volatile uint16_t x302 = 4U;
	volatile uint32_t t70 = 3845528U;

	t70 = ((x301*(x302<x303))/x304);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x305 = -1;
	static int8_t x306 = 14;
	uint16_t x307 = 13146U;
	volatile int32_t t71 = -130435210;

	t71 = ((x305*(x306<x307))/x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x309 = UINT16_MAX;
	uint8_t x311 = UINT8_MAX;
	volatile int64_t x312 = 28554728897LL;
	static int64_t t72 = -44112394276368LL;

	t72 = ((x309*(x310<x311))/x312);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = 11291;
	static volatile int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	int64_t x316 = -1LL;
	int64_t t73 = -3356323648524185LL;

	t73 = ((x313*(x314<x315))/x316);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = -327LL;
	static int32_t x318 = INT32_MAX;
	int32_t x319 = -1;
	volatile int8_t x320 = -1;
	volatile int64_t t74 = 29943925325153414LL;

	t74 = ((x317*(x318<x319))/x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = INT64_MIN;
	static int8_t x322 = INT8_MIN;
	uint8_t x324 = UINT8_MAX;
	int64_t t75 = -28102287LL;

	t75 = ((x321*(x322<x323))/x324);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x326 = UINT8_MAX;
	int32_t x327 = 562;
	int16_t x328 = INT16_MIN;
	volatile int32_t t76 = 18;

	t76 = ((x325*(x326<x327))/x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x329 = 11;
	int64_t x332 = -1LL;
	static int64_t t77 = -3352818939623998LL;

	t77 = ((x329*(x330<x331))/x332);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = UINT64_MAX;
	static int16_t x334 = 0;
	uint64_t x335 = 53310562LLU;
	int32_t x336 = INT32_MAX;
	static uint64_t t78 = 7723107LLU;

	t78 = ((x333*(x334<x335))/x336);

	if (t78 != 8589934596LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x337 = UINT16_MAX;
	uint64_t x339 = 13300773205754LLU;
	volatile int16_t x340 = INT16_MAX;
	static volatile int32_t t79 = 421738;

	t79 = ((x337*(x338<x339))/x340);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = INT16_MAX;
	int64_t x342 = INT64_MAX;
	uint64_t x343 = 56LLU;
	volatile int32_t t80 = 49;

	t80 = ((x341*(x342<x343))/x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x345 = -1LL;
	int16_t x346 = -1;
	int32_t x347 = -1;
	volatile int64_t t81 = -30422125LL;

	t81 = ((x345*(x346<x347))/x348);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MIN;
	uint8_t x350 = 1U;
	int16_t x351 = INT16_MIN;

	t82 = ((x349*(x350<x351))/x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x353 = UINT8_MAX;
	uint64_t x354 = 1133064956420813506LLU;
	volatile int64_t x355 = 400LL;
	int8_t x356 = INT8_MAX;
	volatile int32_t t83 = -2;

	t83 = ((x353*(x354<x355))/x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x358 = 1160405062194LLU;
	int32_t x359 = INT32_MIN;

	t84 = ((x357*(x358<x359))/x360);

	if (t84 != 65625LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x361 = -1;
	static uint64_t x362 = UINT64_MAX;
	static uint16_t x363 = 925U;
	static volatile int32_t t85 = 133532;

	t85 = ((x361*(x362<x363))/x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = INT32_MIN;
	volatile uint32_t x366 = 3731646U;
	volatile int32_t x368 = INT32_MAX;
	volatile int32_t t86 = -32356623;

	t86 = ((x365*(x366<x367))/x368);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MIN;

	t87 = ((x369*(x370<x371))/x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x373 = INT64_MIN;
	uint8_t x374 = 6U;
	uint32_t x376 = UINT32_MAX;
	volatile int64_t t88 = 186246353LL;

	t88 = ((x373*(x374<x375))/x376);

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x377 = -28180271;
	static int8_t x378 = INT8_MAX;
	int32_t x379 = -1;
	volatile uint8_t x380 = 127U;
	int32_t t89 = 16;

	t89 = ((x377*(x378<x379))/x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x381 = UINT8_MAX;
	volatile uint32_t x382 = UINT32_MAX;
	uint16_t x383 = 1U;
	uint8_t x384 = UINT8_MAX;
	int32_t t90 = -3889;

	t90 = ((x381*(x382<x383))/x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = 398297641U;
	int32_t x386 = 60882026;
	static volatile uint32_t x387 = UINT32_MAX;
	uint32_t t91 = 19679724U;

	t91 = ((x385*(x386<x387))/x388);

	if (t91 != 1157841U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = -1;
	uint32_t x391 = 1038U;
	int32_t x392 = INT32_MIN;
	volatile int32_t t92 = -948;

	t92 = ((x389*(x390<x391))/x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x393 = 140U;
	volatile int16_t x394 = 1;
	volatile int8_t x396 = INT8_MIN;
	int32_t t93 = -128157;

	t93 = ((x393*(x394<x395))/x396);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x397 = -4242542LL;
	int64_t x398 = INT64_MIN;
	int64_t t94 = -10559552LL;

	t94 = ((x397*(x398<x399))/x400);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = -1LL;
	int16_t x402 = INT16_MIN;
	uint8_t x404 = UINT8_MAX;
	volatile int64_t t95 = -55723LL;

	t95 = ((x401*(x402<x403))/x404);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x406 = 132437152665641594LLU;
	volatile uint8_t x407 = 1U;
	static uint16_t x408 = UINT16_MAX;
	volatile int32_t t96 = -34497;

	t96 = ((x405*(x406<x407))/x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = INT64_MAX;
	int64_t x414 = INT64_MIN;
	volatile uint8_t x415 = 5U;
	int8_t x416 = INT8_MIN;
	int64_t t97 = -296689151LL;

	t97 = ((x413*(x414<x415))/x416);

	if (t97 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x417 = 138202;
	volatile int32_t x419 = INT32_MAX;
	int16_t x420 = -2646;

	t98 = ((x417*(x418<x419))/x420);

	if (t98 != -52) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x421 = 2311988900293LLU;
	int32_t x423 = -5;
	int16_t x424 = INT16_MAX;
	volatile uint64_t t99 = 3660804614507LLU;

	t99 = ((x421*(x422<x423))/x424);

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
