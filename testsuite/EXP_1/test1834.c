#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 1;
int64_t x4 = 14269345319278961LL;
volatile int64_t t0 = -5977LL;
int8_t x13 = -1;
volatile int8_t x16 = 19;
volatile uint32_t x17 = UINT32_MAX;
uint32_t t4 = 74041155U;
volatile int32_t x21 = -6;
int8_t x23 = INT8_MAX;
int16_t x29 = INT16_MIN;
int8_t x31 = INT8_MAX;
static volatile int32_t t7 = 10300305;
int8_t x34 = 0;
volatile int16_t x36 = INT16_MIN;
int64_t x37 = 1272375860LL;
static int32_t x40 = -212417;
volatile int64_t t9 = 3133867607291LL;
static volatile int16_t x41 = -7;
int32_t x49 = -556;
uint8_t x54 = UINT8_MAX;
static int64_t t14 = 889402441920036LL;
volatile int16_t x65 = INT16_MIN;
static uint64_t x69 = 3184180817LLU;
int16_t x73 = -1;
uint32_t x74 = 15U;
uint8_t x78 = 51U;
volatile uint64_t t20 = 2072100LLU;
static int16_t x88 = 158;
int8_t x98 = 1;
volatile uint32_t x102 = 202758579U;
uint64_t x103 = 0LLU;
int16_t x116 = INT16_MAX;
int32_t t27 = 1;
volatile uint8_t x121 = 96U;
volatile uint32_t x130 = 1044652U;
static int32_t x135 = -1;
static uint32_t x137 = UINT32_MAX;
uint8_t x138 = 53U;
int16_t x142 = INT16_MIN;
int16_t x144 = -34;
static volatile int16_t x147 = 553;
int8_t x156 = -18;
int64_t t36 = 335147190629LL;
volatile int32_t t38 = -262;
uint16_t x174 = UINT16_MAX;
static volatile int64_t x179 = INT64_MIN;
volatile int64_t t41 = -1796093020506180LL;
int8_t x181 = INT8_MIN;
int64_t x191 = INT64_MAX;
int16_t x192 = -1;
int32_t x202 = INT32_MIN;
int32_t x203 = 39;
static volatile int8_t x215 = INT8_MIN;
int8_t x216 = INT8_MIN;
int16_t x220 = -1;
volatile int64_t t51 = -286447395292LL;
volatile int16_t x222 = -1;
int32_t x226 = INT32_MIN;
volatile uint64_t t53 = 2889178270407LLU;
volatile int32_t x230 = 517485;
uint16_t x236 = 68U;
static int64_t t56 = -546355LL;
static uint8_t x241 = 0U;
int64_t x243 = 3070LL;
int8_t x248 = INT8_MIN;
int8_t x254 = -1;
int32_t x257 = -1;
static int32_t x262 = 0;
uint8_t x287 = 13U;
volatile uint16_t x291 = UINT16_MAX;
uint64_t x292 = UINT64_MAX;
int32_t x297 = -1;
static int16_t x299 = INT16_MIN;
uint16_t x302 = 11U;
int32_t x309 = 27105107;
int32_t x313 = INT32_MIN;
static int32_t x315 = INT32_MIN;
int64_t x318 = -3434896330834LL;
volatile int32_t t76 = -2;
static uint32_t x340 = 9278U;
uint64_t x344 = 253191535505LLU;
volatile uint64_t t81 = 953965579315640LLU;
int32_t x358 = INT32_MAX;
int32_t t83 = 328760;
int8_t x366 = INT8_MIN;
int64_t x372 = -710861LL;
static uint8_t x374 = UINT8_MAX;
volatile int16_t x379 = INT16_MIN;
static int32_t x387 = -1;
static int8_t x393 = -2;
int64_t t91 = -753985LL;
volatile uint32_t x397 = 45U;
volatile int64_t x401 = -6949158253706LL;
static int32_t x403 = INT32_MAX;
int64_t t96 = 120LL;
uint64_t x427 = 443529LLU;
volatile uint64_t t98 = 19413125164LLU;
uint64_t x429 = 1622LLU;
volatile uint64_t t99 = 0LLU;


void f0(void) {
	int64_t x1 = -1LL;
	uint32_t x3 = 3U;

	t0 = (((x1&x2)|x3)+x4);

	if (t0 != 14269345319278964LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	int64_t x6 = INT64_MIN;
	uint32_t x7 = UINT32_MAX;
	int32_t x8 = INT32_MAX;
	volatile int64_t t1 = -128020523119LL;

	t1 = (((x5&x6)|x7)+x8);

	if (t1 != 6442450942LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	uint8_t x10 = 5U;
	int64_t x11 = INT64_MIN;
	volatile int16_t x12 = INT16_MIN;
	uint64_t t2 = 174LLU;

	t2 = (((x9&x10)|x11)+x12);

	if (t2 != 9223372036854743045LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x14 = 759929965942820892LLU;
	int16_t x15 = INT16_MIN;
	volatile uint64_t t3 = 8526486578LLU;

	t3 = (((x13&x14)|x15)+x16);

	if (t3 != 18446744073709539375LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = -1;
	int32_t x19 = INT32_MIN;
	volatile int32_t x20 = -1;

	t4 = (((x17&x18)|x19)+x20);

	if (t4 != 4294967294U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	volatile uint8_t x24 = 52U;
	volatile int32_t t5 = 56875;

	t5 = (((x21&x22)|x23)+x24);

	if (t5 != 51) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 3U;
	volatile int64_t x26 = -1LL;
	int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	int64_t t6 = -270509610LL;

	t6 = (((x25&x26)|x27)+x28);

	if (t6 != -2147516413LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	static uint8_t x32 = 2U;

	t7 = (((x29&x30)|x31)+x32);

	if (t7 != -32639) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static int16_t x35 = INT16_MIN;
	volatile int32_t t8 = -62467;

	t8 = (((x33&x34)|x35)+x36);

	if (t8 != -65536) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = INT32_MAX;
	volatile int32_t x39 = INT32_MIN;

	t9 = (((x37&x38)|x39)+x40);

	if (t9 != -875320205LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = 92;
	int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -12077;

	t10 = (((x41&x42)|x43)+x44);

	if (t10 != -32808) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 60U;
	volatile int8_t x46 = 1;
	volatile int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -252089853;

	t11 = (((x45&x46)|x47)+x48);

	if (t11 != -32896) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	int16_t x51 = 768;
	int16_t x52 = -31;
	volatile int32_t t12 = -4;

	t12 = (((x49&x50)|x51)+x52);

	if (t12 != -75) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile int8_t x55 = -2;
	uint8_t x56 = UINT8_MAX;
	volatile int64_t t13 = -27677900LL;

	t13 = (((x53&x54)|x55)+x56);

	if (t13 != 253LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	static uint8_t x58 = 96U;
	int32_t x59 = -1;
	uint32_t x60 = UINT32_MAX;

	t14 = (((x57&x58)|x59)+x60);

	if (t14 != 4294967294LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MAX;
	uint16_t x62 = UINT16_MAX;
	static int16_t x63 = -1;
	static volatile int16_t x64 = -1;
	int32_t t15 = -265543;

	t15 = (((x61&x62)|x63)+x64);

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x66 = UINT8_MAX;
	uint16_t x67 = UINT16_MAX;
	static int64_t x68 = INT64_MIN;
	volatile int64_t t16 = -1LL;

	t16 = (((x65&x66)|x67)+x68);

	if (t16 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x70 = 9;
	volatile int16_t x71 = INT16_MIN;
	uint16_t x72 = 64U;
	uint64_t t17 = 39961216893495LLU;

	t17 = (((x69&x70)|x71)+x72);

	if (t17 != 18446744073709518913LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x75 = UINT32_MAX;
	int16_t x76 = INT16_MAX;
	static volatile uint32_t t18 = 31722132U;

	t18 = (((x73&x74)|x75)+x76);

	if (t18 != 32766U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -1;
	int32_t x79 = 130;
	uint64_t x80 = 708LLU;
	volatile uint64_t t19 = 9480270LLU;

	t19 = (((x77&x78)|x79)+x80);

	if (t19 != 887LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	volatile uint8_t x82 = UINT8_MAX;
	int16_t x83 = 997;
	static int64_t x84 = INT64_MIN;

	t20 = (((x81&x82)|x83)+x84);

	if (t20 != 9223372036854776831LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 560051;
	static int8_t x86 = INT8_MIN;
	uint16_t x87 = 855U;
	int32_t t21 = 190;

	t21 = (((x85&x86)|x87)+x88);

	if (t21 != 560245) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = UINT16_MAX;
	static int32_t x94 = 1;
	int8_t x95 = -1;
	static int16_t x96 = -1;
	volatile int32_t t22 = 1600706;

	t22 = (((x93&x94)|x95)+x96);

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	int16_t x99 = -1;
	int8_t x100 = -1;
	volatile int32_t t23 = 49;

	t23 = (((x97&x98)|x99)+x100);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = -109157LL;
	int8_t x104 = 4;
	static uint64_t t24 = 1431082LLU;

	t24 = (((x101&x102)|x103)+x104);

	if (t24 != 202658199LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x105 = 6U;
	uint64_t x106 = 237LLU;
	volatile uint32_t x107 = 497005798U;
	static int8_t x108 = 18;
	static volatile uint64_t t25 = 12LLU;

	t25 = (((x105&x106)|x107)+x108);

	if (t25 != 497005816LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = UINT64_MAX;
	volatile uint16_t x110 = 14U;
	static int8_t x111 = -1;
	volatile int8_t x112 = INT8_MIN;
	static uint64_t t26 = 147LLU;

	t26 = (((x109&x110)|x111)+x112);

	if (t26 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = 32;
	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;

	t27 = (((x113&x114)|x115)+x116);

	if (t27 != 32639) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = -1;
	static uint16_t x119 = UINT16_MAX;
	static volatile uint32_t x120 = UINT32_MAX;
	uint32_t t28 = 296U;

	t28 = (((x117&x118)|x119)+x120);

	if (t28 != 65534U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x122 = INT32_MIN;
	static int64_t x123 = INT64_MAX;
	int64_t x124 = -1LL;
	int64_t t29 = -9376999232313668LL;

	t29 = (((x121&x122)|x123)+x124);

	if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = UINT32_MAX;
	int64_t x126 = -1LL;
	static volatile int8_t x127 = 0;
	uint64_t x128 = 15421LLU;
	volatile uint64_t t30 = 30049582LLU;

	t30 = (((x125&x126)|x127)+x128);

	if (t30 != 4294982716LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x129 = UINT64_MAX;
	static int8_t x131 = INT8_MIN;
	static uint16_t x132 = 10448U;
	volatile uint64_t t31 = 11LLU;

	t31 = (((x129&x130)|x131)+x132);

	if (t31 != 10364LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	static int16_t x134 = -6768;
	uint16_t x136 = UINT16_MAX;
	int64_t t32 = 1884555606293205475LL;

	t32 = (((x133&x134)|x135)+x136);

	if (t32 != 65534LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x139 = 1764869003U;
	int16_t x140 = 3;
	volatile uint32_t t33 = 12761413U;

	t33 = (((x137&x138)|x139)+x140);

	if (t33 != 1764869058U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MAX;
	static int32_t x143 = -1;
	static volatile int32_t t34 = 35633065;

	t34 = (((x141&x142)|x143)+x144);

	if (t34 != -35) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = UINT16_MAX;
	int32_t x146 = INT32_MAX;
	int8_t x148 = -1;
	static int32_t t35 = 101570;

	t35 = (((x145&x146)|x147)+x148);

	if (t35 != 65534) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = -27087;
	int16_t x155 = INT16_MIN;

	t36 = (((x153&x154)|x155)+x156);

	if (t36 != -32786LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = UINT16_MAX;
	uint8_t x158 = UINT8_MAX;
	volatile uint32_t x159 = 58010U;
	int32_t x160 = INT32_MIN;
	static uint32_t t37 = 3359270U;

	t37 = (((x157&x158)|x159)+x160);

	if (t37 != 2147541759U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x161 = INT8_MIN;
	volatile uint16_t x162 = 3506U;
	int8_t x163 = 1;
	static volatile int16_t x164 = -1;

	t38 = (((x161&x162)|x163)+x164);

	if (t38 != 3456) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MAX;
	static int16_t x166 = INT16_MIN;
	int64_t x167 = 24144896130LL;
	int64_t x168 = -1LL;
	volatile int64_t t39 = 12030756134874LL;

	t39 = (((x165&x166)|x167)+x168);

	if (t39 != 24144896129LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = 789;
	int32_t x175 = INT32_MIN;
	static int64_t x176 = -1LL;
	int64_t t40 = -423479168260LL;

	t40 = (((x173&x174)|x175)+x176);

	if (t40 != -2147482860LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x177 = -16384398;
	uint32_t x178 = 2089715594U;
	uint16_t x180 = 21U;

	t41 = (((x177&x178)|x179)+x180);

	if (t41 != -9223372034774104553LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x182 = 127U;
	volatile uint16_t x183 = UINT16_MAX;
	int64_t x184 = -1LL;
	static int64_t t42 = -85LL;

	t42 = (((x181&x182)|x183)+x184);

	if (t42 != 65534LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x185 = -152;
	uint16_t x186 = UINT16_MAX;
	uint64_t x187 = 12LLU;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t43 = 153939006698LLU;

	t43 = (((x185&x186)|x187)+x188);

	if (t43 != 65387LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	static int16_t x190 = 0;
	int64_t t44 = -6142026LL;

	t44 = (((x189&x190)|x191)+x192);

	if (t44 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MAX;
	int16_t x194 = -1;
	int16_t x195 = INT16_MAX;
	static int8_t x196 = -1;
	volatile int32_t t45 = -1479;

	t45 = (((x193&x194)|x195)+x196);

	if (t45 != 2147483646) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = -1LL;
	volatile uint32_t x198 = 13U;
	int16_t x199 = INT16_MIN;
	int8_t x200 = -1;
	int64_t t46 = -73LL;

	t46 = (((x197&x198)|x199)+x200);

	if (t46 != -32756LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = 3;
	volatile int16_t x204 = -1;
	int32_t t47 = -111;

	t47 = (((x201&x202)|x203)+x204);

	if (t47 != 38) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = 414U;
	volatile uint32_t x206 = 2575U;
	static int64_t x207 = INT64_MIN;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t48 = 1103988998186LLU;

	t48 = (((x205&x206)|x207)+x208);

	if (t48 != 9223372036854775821LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = 6U;
	static int64_t x210 = -60028665045LL;
	static int16_t x211 = INT16_MAX;
	uint64_t x212 = 43414376878459206LLU;
	static volatile uint64_t t49 = 1512110676651909108LLU;

	t49 = (((x209&x210)|x211)+x212);

	if (t49 != 43414376878491973LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = UINT8_MAX;
	volatile int8_t x214 = -1;
	int32_t t50 = 1;

	t50 = (((x213&x214)|x215)+x216);

	if (t50 != -129) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = 22U;
	int64_t x218 = -1LL;
	int16_t x219 = -1;

	t51 = (((x217&x218)|x219)+x220);

	if (t51 != -2LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = 1;
	static int8_t x223 = INT8_MAX;
	volatile uint32_t x224 = 246U;
	volatile uint32_t t52 = 909U;

	t52 = (((x221&x222)|x223)+x224);

	if (t52 != 373U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x225 = UINT16_MAX;
	static int32_t x227 = -1;
	static uint64_t x228 = 193LLU;

	t53 = (((x225&x226)|x227)+x228);

	if (t53 != 192LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	int8_t x231 = -22;
	uint16_t x232 = 41U;
	static volatile int64_t t54 = 14808902420240850LL;

	t54 = (((x229&x230)|x231)+x232);

	if (t54 != 19LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x233 = INT8_MAX;
	static int16_t x234 = INT16_MIN;
	int8_t x235 = 29;
	int32_t t55 = 21618975;

	t55 = (((x233&x234)|x235)+x236);

	if (t55 != 97) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = -770115744567LL;
	volatile uint8_t x238 = 12U;
	int8_t x239 = 43;
	volatile int16_t x240 = -1;

	t56 = (((x237&x238)|x239)+x240);

	if (t56 != 42LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x242 = 1959U;
	volatile int64_t x244 = -1LL;
	static int64_t t57 = 7102212356106LL;

	t57 = (((x241&x242)|x243)+x244);

	if (t57 != 3069LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = -1;
	static int16_t x246 = -270;
	static int32_t x247 = -1;
	int32_t t58 = 2744528;

	t58 = (((x245&x246)|x247)+x248);

	if (t58 != -129) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -1;
	uint16_t x250 = 38U;
	static volatile int32_t x251 = -1;
	int64_t x252 = INT64_MAX;
	int64_t t59 = 67697294076768406LL;

	t59 = (((x249&x250)|x251)+x252);

	if (t59 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x253 = 7U;
	static volatile int8_t x255 = 3;
	int32_t x256 = -1;
	int32_t t60 = 5758;

	t60 = (((x253&x254)|x255)+x256);

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x258 = 1;
	static uint8_t x259 = 16U;
	int16_t x260 = 467;
	int32_t t61 = -106331;

	t61 = (((x257&x258)|x259)+x260);

	if (t61 != 484) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x261 = 148U;
	static uint8_t x263 = UINT8_MAX;
	int64_t x264 = 39LL;
	volatile int64_t t62 = 0LL;

	t62 = (((x261&x262)|x263)+x264);

	if (t62 != 294LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = INT16_MAX;
	volatile int64_t x266 = 10954397032LL;
	static uint32_t x267 = 3U;
	uint8_t x268 = UINT8_MAX;
	volatile int64_t t63 = 304555929361675813LL;

	t63 = (((x265&x266)|x267)+x268);

	if (t63 != 22122LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x269 = 6100678LLU;
	int8_t x270 = INT8_MIN;
	static uint16_t x271 = 16170U;
	uint64_t x272 = 12901271561121302LLU;
	uint64_t t64 = 682797LLU;

	t64 = (((x269&x270)|x271)+x272);

	if (t64 != 12901271567232448LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x277 = UINT8_MAX;
	volatile int8_t x278 = INT8_MAX;
	uint16_t x279 = 2U;
	int32_t x280 = INT32_MIN;
	int32_t t65 = 11;

	t65 = (((x277&x278)|x279)+x280);

	if (t65 != -2147483521) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = 263453722769LL;
	int64_t x282 = INT64_MIN;
	int64_t x283 = -1LL;
	uint64_t x284 = 152273LLU;
	volatile uint64_t t66 = 384099421882995LLU;

	t66 = (((x281&x282)|x283)+x284);

	if (t66 != 152272LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x285 = INT16_MIN;
	int16_t x286 = 2;
	static uint16_t x288 = 3739U;
	int32_t t67 = -4060;

	t67 = (((x285&x286)|x287)+x288);

	if (t67 != 3752) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = 18U;
	int8_t x290 = INT8_MIN;
	uint64_t t68 = 950182160115LLU;

	t68 = (((x289&x290)|x291)+x292);

	if (t68 != 65534LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int8_t x294 = -2;
	int8_t x295 = INT8_MIN;
	int32_t x296 = -1;
	uint64_t t69 = 128663954161848983LLU;

	t69 = (((x293&x294)|x295)+x296);

	if (t69 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x298 = INT64_MIN;
	int64_t x300 = -1LL;
	volatile int64_t t70 = 1646LL;

	t70 = (((x297&x298)|x299)+x300);

	if (t70 != -32769LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x301 = 2U;
	uint16_t x303 = 215U;
	static volatile uint64_t x304 = 3752209LLU;
	uint64_t t71 = 8528781LLU;

	t71 = (((x301&x302)|x303)+x304);

	if (t71 != 3752424LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = INT8_MIN;
	uint32_t x306 = 10600U;
	uint64_t x307 = 225265LLU;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t72 = 1599970730271LLU;

	t72 = (((x305&x306)|x307)+x308);

	if (t72 != 225137LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x310 = -1LL;
	int64_t x311 = -60784LL;
	int8_t x312 = INT8_MIN;
	int64_t t73 = 3111LL;

	t73 = (((x309&x310)|x311)+x312);

	if (t73 != -26797LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x314 = -101771551948431LL;
	uint16_t x316 = 0U;
	volatile int64_t t74 = -4327442238422LL;

	t74 = (((x313&x314)|x315)+x316);

	if (t74 != -2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = -58377407804LL;
	uint16_t x319 = 608U;
	static volatile uint8_t x320 = UINT8_MAX;
	volatile int64_t t75 = -3572872366LL;

	t75 = (((x317&x318)|x319)+x320);

	if (t75 != -3434897382429LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x321 = 1U;
	static uint8_t x322 = 3U;
	int16_t x323 = INT16_MAX;
	int16_t x324 = INT16_MIN;

	t76 = (((x321&x322)|x323)+x324);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = -1;
	int32_t x330 = INT32_MAX;
	uint64_t x331 = 24091LLU;
	static int32_t x332 = 24636429;
	uint64_t t77 = 2192632784309362964LLU;

	t77 = (((x329&x330)|x331)+x332);

	if (t77 != 2172120076LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = INT16_MIN;
	uint32_t x334 = UINT32_MAX;
	volatile uint8_t x335 = 3U;
	volatile uint32_t x336 = UINT32_MAX;
	uint32_t t78 = 29U;

	t78 = (((x333&x334)|x335)+x336);

	if (t78 != 4294934530U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x337 = UINT64_MAX;
	int64_t x338 = 47079LL;
	uint8_t x339 = UINT8_MAX;
	static uint64_t t79 = 49024639276LLU;

	t79 = (((x337&x338)|x339)+x340);

	if (t79 != 56381LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = -14;
	uint32_t x342 = 120U;
	static volatile uint16_t x343 = UINT16_MAX;
	volatile uint64_t t80 = 9LLU;

	t80 = (((x341&x342)|x343)+x344);

	if (t80 != 253191601040LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x349 = UINT64_MAX;
	int32_t x350 = INT32_MIN;
	int8_t x351 = INT8_MAX;
	int8_t x352 = 1;

	t81 = (((x349&x350)|x351)+x352);

	if (t81 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x353 = UINT32_MAX;
	uint8_t x354 = 4U;
	uint64_t x355 = 8727154586106653LLU;
	int64_t x356 = INT64_MAX;
	uint64_t t82 = 7555792453LLU;

	t82 = (((x353&x354)|x355)+x356);

	if (t82 != 9232099191440882460LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x357 = 1;
	uint8_t x359 = 11U;
	int32_t x360 = 1058;

	t83 = (((x357&x358)|x359)+x360);

	if (t83 != 1069) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x361 = -1;
	int64_t x362 = 2025474103LL;
	int32_t x363 = -1;
	volatile int8_t x364 = INT8_MIN;
	int64_t t84 = -62201384733601LL;

	t84 = (((x361&x362)|x363)+x364);

	if (t84 != -129LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x365 = 50;
	uint64_t x367 = 64353718LLU;
	volatile int8_t x368 = INT8_MAX;
	volatile uint64_t t85 = 2LLU;

	t85 = (((x365&x366)|x367)+x368);

	if (t85 != 64353845LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x369 = -13;
	int64_t x370 = INT64_MAX;
	int8_t x371 = INT8_MIN;
	int64_t t86 = 256728310269LL;

	t86 = (((x369&x370)|x371)+x372);

	if (t86 != -710874LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 137168951U;
	uint16_t x375 = 1U;
	uint8_t x376 = UINT8_MAX;
	uint32_t t87 = 1469U;

	t87 = (((x373&x374)|x375)+x376);

	if (t87 != 310U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = 13;
	int8_t x378 = INT8_MIN;
	int16_t x380 = INT16_MIN;
	static volatile int32_t t88 = 1;

	t88 = (((x377&x378)|x379)+x380);

	if (t88 != -65536) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x385 = INT16_MIN;
	static int64_t x386 = -8111349428962232LL;
	static int8_t x388 = -1;
	int64_t t89 = 52LL;

	t89 = (((x385&x386)|x387)+x388);

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = -1;
	static volatile int64_t x390 = -4598945224661528354LL;
	int64_t x391 = -1LL;
	int64_t x392 = INT64_MAX;
	static int64_t t90 = 1538791553952635659LL;

	t90 = (((x389&x390)|x391)+x392);

	if (t90 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x394 = INT16_MAX;
	static int32_t x395 = -1;
	int64_t x396 = -208LL;

	t91 = (((x393&x394)|x395)+x396);

	if (t91 != -209LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x398 = 362090826U;
	int16_t x399 = 7127;
	int8_t x400 = INT8_MIN;
	volatile uint32_t t92 = 48307245U;

	t92 = (((x397&x398)|x399)+x400);

	if (t92 != 7007U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x402 = 3;
	static uint8_t x404 = UINT8_MAX;
	volatile int64_t t93 = 1932787847061751228LL;

	t93 = (((x401&x402)|x403)+x404);

	if (t93 != 2147483902LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x405 = UINT64_MAX;
	int16_t x406 = -1;
	int64_t x407 = -1LL;
	volatile int64_t x408 = INT64_MIN;
	volatile uint64_t t94 = 45720640627606141LLU;

	t94 = (((x405&x406)|x407)+x408);

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x409 = UINT16_MAX;
	int32_t x410 = -69503;
	int32_t x411 = 268709199;
	int16_t x412 = 5;
	int32_t t95 = 42;

	t95 = (((x409&x410)|x411)+x412);

	if (t95 != 268762580) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = INT64_MIN;
	volatile int8_t x414 = 0;
	uint8_t x415 = 61U;
	static int32_t x416 = INT32_MIN;

	t96 = (((x413&x414)|x415)+x416);

	if (t96 != -2147483587LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x417 = INT32_MIN;
	uint64_t x418 = UINT64_MAX;
	static int16_t x419 = INT16_MIN;
	int32_t x420 = INT32_MIN;
	uint64_t t97 = 46402LLU;

	t97 = (((x417&x418)|x419)+x420);

	if (t97 != 18446744071562035200LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x425 = 0;
	uint16_t x426 = 7217U;
	int16_t x428 = -1;

	t98 = (((x425&x426)|x427)+x428);

	if (t98 != 443528LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x430 = INT64_MIN;
	int8_t x431 = -1;
	volatile int8_t x432 = INT8_MIN;

	t99 = (((x429&x430)|x431)+x432);

	if (t99 != 18446744073709551487LLU) { NG(); } else { ; }
	
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

