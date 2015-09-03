#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = 27U;
static int32_t x11 = INT32_MIN;
int8_t x13 = INT8_MIN;
volatile int16_t x14 = INT16_MIN;
volatile uint64_t t5 = 405148390478LLU;
uint64_t t6 = 8760686414222487LLU;
int64_t x35 = INT64_MIN;
static int64_t x41 = INT64_MAX;
int8_t x42 = -1;
int16_t x45 = 1778;
uint64_t t11 = 3953LLU;
int16_t x53 = -80;
static uint16_t x65 = 11489U;
int16_t x68 = -1;
uint64_t x71 = 243LLU;
uint64_t x72 = UINT64_MAX;
static volatile int32_t x75 = 7;
int8_t x79 = INT8_MIN;
uint64_t x80 = 830307838809464LLU;
int16_t x81 = INT16_MAX;
int8_t x86 = -1;
static uint64_t t21 = 21234914829276LLU;
int32_t x102 = INT32_MIN;
int64_t t26 = INT64_MIN;
int8_t x109 = INT8_MAX;
int32_t x110 = INT32_MIN;
uint64_t x112 = 9LLU;
uint64_t t27 = 207895296LLU;
volatile uint8_t x113 = 0U;
int8_t x116 = INT8_MIN;
int8_t x118 = 2;
static volatile int64_t x120 = INT64_MIN;
uint64_t t30 = 56LLU;
int16_t x131 = 352;
uint32_t t32 = 93789U;
static int64_t t33 = -11182349046615LL;
volatile uint64_t t35 = 735338145LLU;
static int64_t x146 = INT64_MIN;
uint32_t x150 = UINT32_MAX;
static volatile int64_t t37 = -139593LL;
volatile uint8_t x155 = 5U;
int64_t x157 = INT64_MIN;
int8_t x158 = INT8_MAX;
static int16_t x165 = -1;
static int32_t x166 = -20239151;
volatile uint64_t x167 = UINT64_MAX;
static volatile int8_t x171 = INT8_MIN;
volatile uint64_t t44 = 43908225901938LLU;
volatile int16_t x181 = INT16_MIN;
volatile int64_t x185 = -45029038LL;
int16_t x190 = INT16_MIN;
int8_t x196 = 0;
uint32_t t48 = 5374U;
volatile int8_t x197 = INT8_MIN;
uint64_t t50 = 10947LLU;
int32_t x206 = INT32_MIN;
static volatile int64_t t51 = -3081719793440358352LL;
volatile uint64_t t52 = 3868573490340LLU;
int16_t x213 = INT16_MAX;
int16_t x214 = INT16_MAX;
uint32_t x215 = 470052U;
static uint64_t t54 = 1670232LLU;
static int32_t x223 = -1;
uint64_t t55 = 1802436304830484LLU;
volatile uint64_t t56 = 544196LLU;
int8_t x229 = 1;
static int32_t x230 = INT32_MAX;
static uint16_t x233 = 649U;
static uint32_t x236 = 242U;
int32_t x248 = -39444775;
uint64_t t60 = 81660606396593553LLU;
uint8_t x255 = UINT8_MAX;
static int16_t x270 = INT16_MIN;
uint64_t x275 = 34042186812559LLU;
int64_t x278 = INT64_MIN;
volatile uint32_t x281 = 1244U;
static volatile int64_t x282 = INT64_MIN;
int64_t x283 = 1223960631LL;
int64_t t68 = 15614661163LL;
uint32_t x305 = 159U;
volatile uint64_t x311 = 851110604594217870LLU;
volatile int32_t x323 = -1;
int8_t x326 = INT8_MAX;
static volatile uint32_t t78 = 235U;
uint8_t x339 = 0U;
int64_t x344 = INT64_MIN;
volatile int64_t x346 = INT64_MIN;
static uint64_t x347 = 88602LLU;
volatile int32_t x355 = INT32_MIN;
static int32_t x362 = 5379042;
static int32_t x364 = INT32_MAX;
uint8_t x372 = 85U;
int32_t t88 = 313914;
uint16_t x386 = 938U;
volatile int8_t x400 = -1;
static uint8_t x403 = UINT8_MAX;
volatile int64_t t95 = 782570332485LL;
int32_t x405 = -200136194;
static uint8_t x406 = UINT8_MAX;
volatile int32_t t96 = -38858990;
int16_t x410 = INT16_MIN;
int8_t x414 = -1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint64_t x2 = UINT64_MAX;
	int8_t x3 = 1;
	int16_t x4 = -1;
	volatile uint64_t t0 = 877LLU;

	t0 = (((x1/x2)+x3)&x4);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile int32_t x7 = -189;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = INT64_MIN;

	t1 = (((x5/x6)+x7)&x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint32_t x10 = 2U;
	int8_t x12 = 1;
	volatile uint32_t t2 = 161685U;

	t2 = (((x9/x10)+x11)&x12);

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = INT8_MIN;
	static volatile uint16_t x16 = 0U;
	int32_t t3 = -1216;

	t3 = (((x13/x14)+x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	static uint8_t x18 = 105U;
	int64_t x19 = -1LL;
	uint32_t x20 = 3U;
	static int64_t t4 = 3697309808134581LL;

	t4 = (((x17/x18)+x19)&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile uint64_t x22 = UINT64_MAX;
	uint16_t x23 = UINT16_MAX;
	static int8_t x24 = 0;

	t5 = (((x21/x22)+x23)&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	uint64_t x26 = 84LLU;
	int16_t x27 = INT16_MIN;
	int8_t x28 = -47;

	t6 = (((x25/x26)+x27)&x28);

	if (t6 != 219604096115557120LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	uint64_t x30 = 111177507121LLU;
	volatile int8_t x31 = 1;
	uint32_t x32 = UINT32_MAX;
	volatile uint64_t t7 = 3380LLU;

	t7 = (((x29/x30)+x31)&x32);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	volatile int16_t x34 = -27;
	int64_t x36 = -127011LL;
	int64_t t8 = INT64_MIN;

	t8 = (((x33/x34)+x35)&x36);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MIN;
	int16_t x39 = -1875;
	static uint8_t x40 = 35U;
	int64_t t9 = 60LL;

	t9 = (((x37/x38)+x39)&x40);

	if (t9 != 33LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x43 = 23;
	int32_t x44 = -1388;
	static int64_t t10 = -32893467508301854LL;

	t10 = (((x41/x42)+x43)&x44);

	if (t10 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -1LL;
	uint64_t x47 = 233176885LLU;
	int32_t x48 = INT32_MIN;

	t11 = (((x45/x46)+x47)&x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 1LLU;
	uint8_t x50 = 88U;
	uint32_t x51 = UINT32_MAX;
	static int64_t x52 = 3300866LL;
	uint64_t t12 = 17906777733LLU;

	t12 = (((x49/x50)+x51)&x52);

	if (t12 != 3300866LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	uint32_t x55 = 2U;
	static int8_t x56 = -39;
	volatile uint32_t t13 = 1679970527U;

	t13 = (((x53/x54)+x55)&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile int32_t x58 = INT32_MAX;
	int16_t x59 = INT16_MIN;
	static int8_t x60 = -1;
	volatile int32_t t14 = 7828725;

	t14 = (((x57/x58)+x59)&x60);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int64_t x62 = -10LL;
	int16_t x63 = INT16_MIN;
	uint8_t x64 = 57U;
	volatile int64_t t15 = 292033194366842237LL;

	t15 = (((x61/x62)+x63)&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = 8042230225714831LL;
	int64_t x67 = 273159382830LL;
	int64_t t16 = -701566685353LL;

	t16 = (((x65/x66)+x67)&x68);

	if (t16 != 273159382830LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint64_t x70 = 29065963159LLU;
	uint64_t t17 = 10825451LLU;

	t17 = (((x69/x70)+x71)&x72);

	if (t17 != 634651294LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = INT32_MIN;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t18 = 1819971492811LLU;

	t18 = (((x73/x74)+x75)&x76);

	if (t18 != 7LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	int16_t x78 = -340;
	volatile uint64_t t19 = 41881058865180234LLU;

	t19 = (((x77/x78)+x79)&x80);

	if (t19 != 830307838809344LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x82 = INT16_MAX;
	uint64_t x83 = 77413956LLU;
	int32_t x84 = INT32_MAX;
	uint64_t t20 = 81884934698951035LLU;

	t20 = (((x81/x82)+x83)&x84);

	if (t20 != 77413957LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MAX;
	static uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MAX;

	t21 = (((x85/x86)+x87)&x88);

	if (t21 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 4333385521207LL;
	volatile uint64_t x90 = 221LLU;
	uint32_t x91 = 26045U;
	static uint8_t x92 = 31U;
	static uint64_t t22 = 486515806LLU;

	t22 = (((x89/x90)+x91)&x92);

	if (t22 != 14LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = 764934077;
	volatile int8_t x94 = 3;
	static uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MAX;
	volatile uint32_t t23 = 789424U;

	t23 = (((x93/x94)+x95)&x96);

	if (t23 != 104U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	int64_t x98 = INT64_MIN;
	int8_t x99 = -1;
	uint32_t x100 = 764627U;
	int64_t t24 = 16376013LL;

	t24 = (((x97/x98)+x99)&x100);

	if (t24 != 764627LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 1;
	int16_t x103 = -1;
	uint32_t x104 = UINT32_MAX;
	static volatile uint32_t t25 = UINT32_MAX;

	t25 = (((x101/x102)+x103)&x104);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	uint32_t x106 = 39408664U;
	int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MIN;

	t26 = (((x105/x106)+x107)&x108);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x111 = INT32_MIN;

	t27 = (((x109/x110)+x111)&x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = UINT16_MAX;
	uint8_t x115 = 28U;
	int32_t t28 = 77;

	t28 = (((x113/x114)+x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -25580370138870LL;
	volatile int16_t x119 = INT16_MAX;
	volatile int64_t t29 = INT64_MIN;

	t29 = (((x117/x118)+x119)&x120);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	volatile uint64_t x122 = 4717689603520LLU;
	int64_t x123 = 756829LL;
	int8_t x124 = INT8_MIN;

	t30 = (((x121/x122)+x123)&x124);

	if (t30 != 4666880LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x125 = INT64_MAX;
	int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MAX;
	static volatile uint32_t x128 = 88576041U;
	int64_t t31 = 499281734463761LL;

	t31 = (((x125/x126)+x127)&x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = 279374U;
	uint32_t x130 = 94308787U;
	int16_t x132 = INT16_MAX;

	t32 = (((x129/x130)+x131)&x132);

	if (t32 != 352U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 20;
	static int16_t x134 = INT16_MAX;
	int64_t x135 = -1LL;
	volatile int8_t x136 = 3;

	t33 = (((x133/x134)+x135)&x136);

	if (t33 != 3LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int16_t x138 = INT16_MIN;
	volatile int8_t x139 = -20;
	int32_t x140 = -15671529;
	static volatile int32_t t34 = -26;

	t34 = (((x137/x138)+x139)&x140);

	if (t34 != -15671548) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -53340582;
	volatile int64_t x142 = INT64_MAX;
	volatile uint64_t x143 = 496230925432544611LLU;
	int64_t x144 = INT64_MIN;

	t35 = (((x141/x142)+x143)&x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -68480583259685LL;
	int16_t x147 = 2;
	uint8_t x148 = 1U;
	volatile int64_t t36 = -3233731727295LL;

	t36 = (((x145/x146)+x147)&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = 0;
	int64_t x151 = -1LL;
	uint8_t x152 = 2U;

	t37 = (((x149/x150)+x151)&x152);

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MIN;
	uint16_t x154 = 3U;
	volatile uint32_t x156 = 3U;
	uint32_t t38 = 1958U;

	t38 = (((x153/x154)+x155)&x156);

	if (t38 != 3U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x159 = -1LL;
	int16_t x160 = INT16_MAX;
	int64_t t39 = -10146528876930959LL;

	t39 = (((x157/x158)+x159)&x160);

	if (t39 != 16254LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 22916661U;
	int16_t x162 = INT16_MIN;
	volatile int64_t x163 = 5394595LL;
	int32_t x164 = INT32_MAX;
	volatile int64_t t40 = 20LL;

	t40 = (((x161/x162)+x163)&x164);

	if (t40 != 5394595LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x168 = UINT32_MAX;
	volatile uint64_t t41 = 6393410LLU;

	t41 = (((x165/x166)+x167)&x168);

	if (t41 != 4294967295LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MIN;
	int64_t x172 = INT64_MIN;
	volatile int64_t t42 = -2379685726312202996LL;

	t42 = (((x169/x170)+x171)&x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 14U;
	int8_t x174 = -1;
	int64_t x175 = 1691294689187LL;
	static int64_t x176 = -1LL;
	int64_t t43 = 2LL;

	t43 = (((x173/x174)+x175)&x176);

	if (t43 != 1691294689173LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MIN;
	int32_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MIN;

	t44 = (((x177/x178)+x179)&x180);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x182 = UINT16_MAX;
	int64_t x183 = 1552355891964118LL;
	uint8_t x184 = 4U;
	static volatile int64_t t45 = 264264924142LL;

	t45 = (((x181/x182)+x183)&x184);

	if (t45 != 4LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = -1;
	int8_t x187 = -12;
	static int64_t x188 = 214434312586LL;
	volatile int64_t t46 = 3LL;

	t46 = (((x185/x186)+x187)&x188);

	if (t46 != 462978LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MIN;
	uint8_t x191 = 16U;
	volatile int64_t x192 = -1LL;
	static int64_t t47 = 13535293387417953LL;

	t47 = (((x189/x190)+x191)&x192);

	if (t47 != 65552LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -424;
	uint32_t x194 = 746U;
	int32_t x195 = -5492525;

	t48 = (((x193/x194)+x195)&x196);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = -1;
	int8_t x199 = INT8_MAX;
	int16_t x200 = 2;
	static int32_t t49 = -25564893;

	t49 = (((x197/x198)+x199)&x200);

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int8_t x202 = 50;
	int8_t x203 = -2;
	uint64_t x204 = UINT64_MAX;

	t50 = (((x201/x202)+x203)&x204);

	if (t50 != 85899343LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 116816679;
	static int64_t x207 = -1LL;
	uint16_t x208 = UINT16_MAX;

	t51 = (((x205/x206)+x207)&x208);

	if (t51 != 65535LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -6;
	int64_t x210 = INT64_MAX;
	int16_t x211 = INT16_MAX;
	uint64_t x212 = UINT64_MAX;

	t52 = (((x209/x210)+x211)&x212);

	if (t52 != 32767LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x216 = -2;
	static volatile uint32_t t53 = 893384321U;

	t53 = (((x213/x214)+x215)&x216);

	if (t53 != 470052U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	uint16_t x218 = 2438U;
	int16_t x219 = INT16_MIN;
	static volatile int32_t x220 = -1;

	t54 = (((x217/x218)+x219)&x220);

	if (t54 != 7566342934220534LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 130293780LLU;
	static int64_t x222 = INT64_MIN;
	int16_t x224 = 7810;

	t55 = (((x221/x222)+x223)&x224);

	if (t55 != 7810LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 96U;
	int64_t x226 = INT64_MAX;
	uint8_t x227 = UINT8_MAX;
	volatile uint64_t x228 = 61833LLU;

	t56 = (((x225/x226)+x227)&x228);

	if (t56 != 137LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x231 = 3945U;
	int64_t x232 = INT64_MAX;
	volatile int64_t t57 = 0LL;

	t57 = (((x229/x230)+x231)&x232);

	if (t57 != 3945LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MIN;
	int64_t x235 = -32880384727997LL;
	int64_t t58 = -693270031525443LL;

	t58 = (((x233/x234)+x235)&x236);

	if (t58 != 66LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x241 = 43U;
	int16_t x242 = INT16_MIN;
	int64_t x243 = 168637LL;
	volatile int8_t x244 = INT8_MIN;
	int64_t t59 = -5332138732LL;

	t59 = (((x241/x242)+x243)&x244);

	if (t59 != 168576LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MAX;
	static uint64_t x247 = 133LLU;

	t60 = (((x245/x246)+x247)&x248);

	if (t60 != 128LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = -4902672284488383LL;
	int8_t x250 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	int16_t x252 = -1;
	static int64_t t61 = -40516151537LL;

	t61 = (((x249/x250)+x251)&x252);

	if (t61 != 38302127222437LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MIN;
	volatile int16_t x254 = INT16_MAX;
	static uint32_t x256 = 180584068U;
	static volatile int64_t t62 = -1870354522663743LL;

	t62 = (((x253/x254)+x255)&x256);

	if (t62 != 180355204LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -126;
	int32_t x258 = INT32_MAX;
	uint8_t x259 = 0U;
	uint64_t x260 = 1LLU;
	volatile uint64_t t63 = 2476448476361322435LLU;

	t63 = (((x257/x258)+x259)&x260);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x265 = INT8_MAX;
	int8_t x266 = INT8_MIN;
	volatile int64_t x267 = -1LL;
	volatile int32_t x268 = -1;
	int64_t t64 = -6090LL;

	t64 = (((x265/x266)+x267)&x268);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x269 = 25;
	static int64_t x271 = INT64_MAX;
	int16_t x272 = -1;
	volatile int64_t t65 = INT64_MAX;

	t65 = (((x269/x270)+x271)&x272);

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x273 = 85U;
	int32_t x274 = INT32_MAX;
	volatile int64_t x276 = INT64_MIN;
	static volatile uint64_t t66 = 286745341779116LLU;

	t66 = (((x273/x274)+x275)&x276);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x277 = INT16_MIN;
	int32_t x279 = INT32_MAX;
	static int16_t x280 = -1;
	int64_t t67 = -114265LL;

	t67 = (((x277/x278)+x279)&x280);

	if (t67 != 2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x284 = 5U;

	t68 = (((x281/x282)+x283)&x284);

	if (t68 != 5LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = INT16_MIN;
	uint64_t x286 = 370LLU;
	static int64_t x287 = -1LL;
	uint16_t x288 = 10U;
	volatile uint64_t t69 = 11LLU;

	t69 = (((x285/x286)+x287)&x288);

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MAX;
	static int16_t x290 = INT16_MIN;
	int8_t x291 = -1;
	int8_t x292 = INT8_MIN;
	int32_t t70 = -2090340;

	t70 = (((x289/x290)+x291)&x292);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = INT64_MIN;
	volatile int8_t x294 = INT8_MAX;
	uint8_t x295 = 1U;
	int8_t x296 = 6;
	volatile int64_t t71 = -254162437163LL;

	t71 = (((x293/x294)+x295)&x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = 25;
	static volatile int32_t x298 = -49903951;
	int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MAX;
	int32_t t72 = 5334754;

	t72 = (((x297/x298)+x299)&x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x301 = INT16_MIN;
	static int16_t x302 = -1;
	int8_t x303 = 1;
	static volatile uint32_t x304 = UINT32_MAX;
	uint32_t t73 = 5321U;

	t73 = (((x301/x302)+x303)&x304);

	if (t73 != 32769U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x306 = UINT32_MAX;
	int32_t x307 = 0;
	int8_t x308 = -1;
	volatile uint32_t t74 = 12U;

	t74 = (((x305/x306)+x307)&x308);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x309 = INT8_MIN;
	uint32_t x310 = 1408U;
	int8_t x312 = INT8_MIN;
	volatile uint64_t t75 = 67489615490611LLU;

	t75 = (((x309/x310)+x311)&x312);

	if (t75 != 851110604597268224LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = 505LLU;
	int8_t x322 = -1;
	int64_t x324 = 3123LL;
	uint64_t t76 = 264056968757LLU;

	t76 = (((x321/x322)+x323)&x324);

	if (t76 != 3123LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MAX;
	static int32_t x327 = -1;
	int32_t x328 = INT32_MAX;
	int64_t t77 = -2057016504114758LL;

	t77 = (((x325/x326)+x327)&x328);

	if (t77 != 270549120LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x329 = 2598U;
	static uint32_t x330 = 6886U;
	volatile int32_t x331 = INT32_MAX;
	int8_t x332 = INT8_MIN;

	t78 = (((x329/x330)+x331)&x332);

	if (t78 != 2147483520U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = -16867396LL;
	uint8_t x334 = 28U;
	uint8_t x335 = 0U;
	int64_t x336 = INT64_MIN;
	int64_t t79 = INT64_MIN;

	t79 = (((x333/x334)+x335)&x336);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x337 = 134U;
	uint32_t x338 = UINT32_MAX;
	static int32_t x340 = INT32_MIN;
	volatile uint32_t t80 = 247257U;

	t80 = (((x337/x338)+x339)&x340);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = 1U;
	int8_t x342 = INT8_MIN;
	volatile uint8_t x343 = UINT8_MAX;
	volatile int64_t t81 = -20041309701954LL;

	t81 = (((x341/x342)+x343)&x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x345 = INT16_MIN;
	static int8_t x348 = -2;
	uint64_t t82 = 58981281009418863LLU;

	t82 = (((x345/x346)+x347)&x348);

	if (t82 != 88602LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = -1;
	int64_t x351 = INT64_MIN;
	int64_t x352 = -44679140LL;
	volatile int64_t t83 = INT64_MIN;

	t83 = (((x349/x350)+x351)&x352);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x353 = UINT8_MAX;
	uint8_t x354 = 19U;
	int32_t x356 = INT32_MIN;
	static int32_t t84 = INT32_MIN;

	t84 = (((x353/x354)+x355)&x356);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x357 = -2647;
	static int8_t x358 = INT8_MIN;
	static int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MAX;
	int32_t t85 = -1;

	t85 = (((x357/x358)+x359)&x360);

	if (t85 != 20) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 5665760870251825471LLU;
	int64_t x363 = -1LL;
	volatile uint64_t t86 = 8343270415444821LLU;

	t86 = (((x361/x362)+x363)&x364);

	if (t86 != 1035974279LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x365 = INT32_MAX;
	int64_t x366 = 46LL;
	int16_t x367 = INT16_MIN;
	int16_t x368 = -1;
	int64_t t87 = 149775146898145939LL;

	t87 = (((x365/x366)+x367)&x368);

	if (t87 != 46651659LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x369 = INT16_MIN;
	static int8_t x370 = 32;
	int32_t x371 = INT32_MAX;

	t88 = (((x369/x370)+x371)&x372);

	if (t88 != 85) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x377 = INT16_MIN;
	int8_t x378 = 3;
	uint8_t x379 = 4U;
	int32_t x380 = -1;
	int32_t t89 = -84314462;

	t89 = (((x377/x378)+x379)&x380);

	if (t89 != -10918) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = INT16_MIN;
	volatile int8_t x382 = INT8_MAX;
	int32_t x383 = -1;
	int64_t x384 = INT64_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = (((x381/x382)+x383)&x384);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = -1;
	uint16_t x387 = UINT16_MAX;
	volatile uint32_t x388 = UINT32_MAX;
	static volatile uint32_t t91 = 14855194U;

	t91 = (((x385/x386)+x387)&x388);

	if (t91 != 65535U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = 1;
	uint8_t x390 = 11U;
	int32_t x391 = INT32_MIN;
	int32_t x392 = 9656;
	static int32_t t92 = -5592;

	t92 = (((x389/x390)+x391)&x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = INT8_MIN;
	uint16_t x394 = 749U;
	int8_t x395 = INT8_MAX;
	int16_t x396 = -1;
	volatile int32_t t93 = 0;

	t93 = (((x393/x394)+x395)&x396);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = 10;
	int16_t x398 = INT16_MIN;
	uint64_t x399 = UINT64_MAX;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (((x397/x398)+x399)&x400);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x401 = INT8_MIN;
	uint16_t x402 = 19U;
	int64_t x404 = INT64_MIN;

	t95 = (((x401/x402)+x403)&x404);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x407 = -53;
	int16_t x408 = INT16_MIN;

	t96 = (((x405/x406)+x407)&x408);

	if (t96 != -786432) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x409 = 27;
	uint64_t x411 = 9LLU;
	int8_t x412 = 6;
	static volatile uint64_t t97 = 11196892548LLU;

	t97 = (((x409/x410)+x411)&x412);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = INT8_MAX;
	int8_t x415 = INT8_MAX;
	uint8_t x416 = UINT8_MAX;
	int32_t t98 = -137;

	t98 = (((x413/x414)+x415)&x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = INT32_MIN;
	static int64_t x418 = INT64_MIN;
	int64_t x419 = INT64_MAX;
	int32_t x420 = 2;
	int64_t t99 = -1856396189923765LL;

	t99 = (((x417/x418)+x419)&x420);

	if (t99 != 2LL) { NG(); } else { ; }
	
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

