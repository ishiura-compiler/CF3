#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 1U;
int64_t x2 = -1LL;
static int16_t x9 = -374;
uint8_t x22 = 0U;
int64_t t4 = -14375544635823LL;
int64_t t5 = -555545LL;
int64_t x29 = INT64_MIN;
int8_t x31 = INT8_MIN;
int16_t x39 = 51;
volatile int64_t t7 = -7207LL;
volatile int64_t t8 = -89701011674LL;
uint64_t x52 = 22251879314LLU;
uint64_t x57 = 441LLU;
int8_t x58 = 1;
uint64_t x61 = 10033790689LLU;
int32_t x66 = -31864362;
int32_t x67 = 9;
static int16_t x68 = INT16_MAX;
int64_t x77 = -32390604LL;
int64_t x78 = INT64_MIN;
volatile uint64_t x80 = 1996LLU;
int8_t x84 = INT8_MIN;
int64_t x86 = INT64_MIN;
volatile int64_t x88 = INT64_MIN;
int64_t x91 = -1LL;
int64_t x105 = INT64_MIN;
int64_t t20 = 31632181LL;
int32_t x121 = 0;
int16_t x123 = INT16_MIN;
int32_t x124 = INT32_MIN;
int8_t x127 = INT8_MAX;
int16_t x128 = -10;
int16_t x132 = -2;
int16_t x133 = -44;
int64_t x134 = 45236497924706384LL;
int32_t x143 = INT32_MIN;
int64_t x144 = 170904376617240LL;
int32_t x148 = INT32_MIN;
volatile int64_t t30 = -1466LL;
int16_t x153 = -1;
static volatile uint32_t x155 = 6U;
static int64_t x157 = INT64_MIN;
uint32_t x159 = UINT32_MAX;
int32_t x161 = -2;
uint32_t x164 = 16U;
int8_t x165 = INT8_MIN;
uint64_t t35 = 283656314469646093LLU;
int32_t x174 = INT32_MAX;
int16_t x175 = INT16_MIN;
static int32_t x178 = INT32_MAX;
static int64_t x179 = -6LL;
uint64_t x183 = 813LLU;
uint64_t x189 = UINT64_MAX;
int32_t x190 = -1;
int64_t x194 = -3407458532475LL;
uint16_t x195 = UINT16_MAX;
int32_t x196 = INT32_MIN;
uint64_t x197 = 99804175461LLU;
int64_t x198 = -8537097176241LL;
uint8_t x207 = 2U;
int64_t x208 = INT64_MIN;
uint32_t x212 = 0U;
uint32_t t47 = 1719629547U;
volatile int64_t x221 = -1LL;
int8_t x223 = INT8_MIN;
uint16_t x234 = 1U;
volatile uint64_t t51 = 853493884LLU;
uint16_t x243 = 0U;
uint8_t x246 = 0U;
int8_t x250 = INT8_MIN;
int64_t x252 = -256632153003731548LL;
volatile uint32_t t56 = 0U;
int64_t x266 = INT64_MIN;
int64_t t58 = 243429032249723415LL;
int8_t x269 = INT8_MIN;
int32_t t59 = -5478010;
static uint32_t x276 = UINT32_MAX;
static uint16_t x285 = 13U;
int16_t x288 = INT16_MIN;
uint64_t t61 = 2381027943395206784LLU;
static int32_t x309 = 667421629;
int64_t x316 = 67024504439185LL;
int16_t x317 = 7;
volatile uint16_t x324 = 0U;
uint16_t x333 = 8191U;
uint8_t x336 = 27U;
int64_t t70 = 102178390342LL;
uint8_t x338 = 1U;
volatile int16_t x339 = INT16_MIN;
int16_t x343 = INT16_MAX;
uint8_t x345 = 3U;
int64_t t73 = 51895LL;
volatile int32_t t74 = 4;
uint64_t x360 = 13084LLU;
static int64_t x365 = 4427767909310759LL;
uint32_t x366 = 11683948U;
uint16_t x367 = UINT16_MAX;
volatile uint64_t t81 = 550806245482110LLU;
static int64_t x382 = INT64_MAX;
int64_t x396 = -201404565402728LL;
volatile int8_t x397 = INT8_MIN;
int16_t x414 = -1;
static int32_t x415 = INT32_MAX;
int32_t x434 = 49439908;
int16_t x436 = INT16_MAX;
uint64_t t92 = 172732810856LLU;
uint16_t x442 = 0U;
int32_t x444 = -157;
static int8_t x445 = INT8_MIN;
volatile int32_t x453 = 0;
volatile int16_t x454 = -1;
uint64_t x456 = 3949LLU;
uint64_t t97 = 58690771LLU;
volatile uint8_t x458 = UINT8_MAX;
int64_t x462 = -1LL;
uint16_t x464 = 1U;
uint64_t t99 = 146699LLU;


void f0(void) {
	int32_t x3 = -48289919;
	int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = -9725345138551LL;

	t0 = ((x1^(x2+x3))^x4);

	if (t0 != 9223372036806485889LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = INT8_MIN;
	uint8_t x11 = 2U;
	static int64_t x12 = INT64_MAX;
	int64_t t1 = -12LL;

	t1 = ((x9^(x10+x11))^x12);

	if (t1 != 9223372036854775543LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	int16_t x14 = INT16_MAX;
	uint8_t x15 = 105U;
	int8_t x16 = INT8_MIN;
	static volatile int32_t t2 = 272880234;

	t2 = ((x13^(x14+x15))^x16);

	if (t2 != -2147450857) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x17 = UINT8_MAX;
	static int64_t x18 = -37395LL;
	int64_t x19 = -1LL;
	volatile int32_t x20 = INT32_MIN;
	static int64_t t3 = -4LL;

	t3 = ((x17^(x18+x19))^x20);

	if (t3 != 2147446035LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -1;
	static uint16_t x23 = UINT16_MAX;
	int64_t x24 = INT64_MIN;

	t4 = ((x21^(x22+x23))^x24);

	if (t4 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = -1228;
	int16_t x26 = -1;
	static int32_t x27 = -1;
	static int64_t x28 = INT64_MIN;

	t5 = ((x25^(x26+x27))^x28);

	if (t5 != -9223372036854774582LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x30 = UINT8_MAX;
	volatile int8_t x32 = INT8_MAX;
	int64_t t6 = INT64_MIN;

	t6 = ((x29^(x30+x31))^x32);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x37 = 1U;
	int64_t x38 = -1LL;
	static int8_t x40 = INT8_MIN;

	t7 = ((x37^(x38+x39))^x40);

	if (t7 != -77LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	static int64_t x42 = 361LL;
	int32_t x43 = INT32_MIN;
	int32_t x44 = -1;

	t8 = ((x41^(x42+x43))^x44);

	if (t8 != -9223372034707292522LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MAX;
	static uint8_t x50 = 3U;
	static int16_t x51 = INT16_MIN;
	volatile uint64_t t9 = 42391456863717LLU;

	t9 = ((x49^(x50+x51))^x52);

	if (t9 != 18446744051457672302LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x59 = INT8_MIN;
	int16_t x60 = 0;
	volatile uint64_t t10 = 97LLU;

	t10 = ((x57^(x58+x59))^x60);

	if (t10 != 18446744073709551160LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x62 = 115188;
	static int8_t x63 = -4;
	volatile int16_t x64 = 3;
	volatile uint64_t t11 = 327525790456007LLU;

	t11 = ((x61^(x62+x63))^x64);

	if (t11 != 10033741586LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x65 = UINT16_MAX;
	static volatile int32_t t12 = -3;

	t12 = ((x65^(x66+x67))^x68);

	if (t12 != -31897121) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x73 = 180U;
	volatile uint8_t x74 = UINT8_MAX;
	uint32_t x75 = 199420513U;
	uint64_t x76 = 60423261727LLU;
	uint64_t t13 = 96134876LLU;

	t13 = ((x73^(x74+x75))^x76);

	if (t13 != 60572247499LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x79 = 56127670U;
	uint64_t t14 = 98910027843LLU;

	t14 = ((x77^(x78+x79))^x80);

	if (t14 != 9223372036809274702LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = 1U;
	uint64_t x82 = 2LLU;
	static uint16_t x83 = 7522U;
	volatile uint64_t t15 = 84350905172056662LLU;

	t15 = ((x81^(x82+x83))^x84);

	if (t15 != 18446744073709544165LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x85 = 27768582U;
	static uint8_t x87 = 6U;
	volatile int64_t t16 = -26738LL;

	t16 = ((x85^(x86+x87))^x88);

	if (t16 != 27768576LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = INT16_MIN;
	static int16_t x90 = -1;
	uint16_t x92 = 13424U;
	int64_t t17 = 20LL;

	t17 = ((x89^(x90+x91))^x92);

	if (t17 != 19342LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x93 = -1;
	uint32_t x94 = UINT32_MAX;
	int32_t x95 = INT32_MIN;
	static int16_t x96 = -11212;
	volatile uint32_t t18 = 22730874U;

	t18 = ((x93^(x94+x95))^x96);

	if (t18 != 2147472436U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x101 = INT16_MAX;
	int16_t x102 = INT16_MIN;
	static volatile uint64_t x103 = 994930391LLU;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t19 = 2926981080408374LLU;

	t19 = ((x101^(x102+x103))^x104);

	if (t19 != 18446744072714677975LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x106 = 45U;
	int64_t x107 = INT64_MIN;
	int32_t x108 = 1;

	t20 = ((x105^(x106+x107))^x108);

	if (t20 != 44LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x113 = 57;
	uint8_t x114 = 37U;
	static int8_t x115 = 58;
	static uint64_t x116 = 3200484856409298LLU;
	static volatile uint64_t t21 = 148127423611055LLU;

	t21 = ((x113^(x114+x115))^x116);

	if (t21 != 3200484856409268LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = INT16_MIN;
	uint32_t x118 = 1U;
	int8_t x119 = -61;
	static uint16_t x120 = UINT16_MAX;
	volatile uint32_t t22 = 4784167U;

	t22 = ((x117^(x118+x119))^x120);

	if (t22 != 32827U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x122 = 29283U;
	volatile uint32_t t23 = 19316228U;

	t23 = ((x121^(x122+x123))^x124);

	if (t23 != 2147480163U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x125 = 16110129LLU;
	int8_t x126 = INT8_MAX;
	uint64_t t24 = 529LLU;

	t24 = ((x125^(x126+x127))^x128);

	if (t24 != 18446744073693441337LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x129 = INT64_MAX;
	static volatile uint16_t x130 = 773U;
	uint64_t x131 = 3187LLU;
	volatile uint64_t t25 = 3791920594175LLU;

	t25 = ((x129^(x130+x131))^x132);

	if (t25 != 9223372036854779769LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x135 = 2U;
	int16_t x136 = 253;
	volatile int64_t t26 = -39284573542503LL;

	t26 = ((x133^(x134+x135))^x136);

	if (t26 != -45236497924706437LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x137 = -1;
	volatile int8_t x138 = INT8_MIN;
	uint8_t x139 = 60U;
	uint16_t x140 = UINT16_MAX;
	static volatile int32_t t27 = 74653;

	t27 = ((x137^(x138+x139))^x140);

	if (t27 != 65468) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x141 = 2U;
	uint64_t x142 = 529626218470LLU;
	volatile uint64_t t28 = 4585577182742691LLU;

	t28 = ((x141^(x142+x143))^x144);

	if (t28 != 170514874504956LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MIN;
	uint16_t x146 = 4U;
	uint32_t x147 = UINT32_MAX;
	volatile uint32_t t29 = 1U;

	t29 = ((x145^(x146+x147))^x148);

	if (t29 != 2147483523U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = INT64_MIN;
	static int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MAX;
	uint8_t x152 = UINT8_MAX;

	t30 = ((x149^(x150+x151))^x152);

	if (t30 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x154 = -1589;
	int32_t x156 = -99308;
	volatile uint32_t t31 = 573U;

	t31 = ((x153^(x154+x155))^x156);

	if (t31 != 4294867514U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x158 = -3;
	volatile int32_t x160 = 87;
	volatile int64_t t32 = 14686727520020714LL;

	t32 = ((x157^(x158+x159))^x160);

	if (t32 != -9223372032559808597LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x162 = 1U;
	int8_t x163 = 0;
	volatile uint32_t t33 = 5U;

	t33 = ((x161^(x162+x163))^x164);

	if (t33 != 4294967279U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x166 = -1LL;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = UINT32_MAX;
	int64_t t34 = 3330229LL;

	t34 = ((x165^(x166+x167))^x168);

	if (t34 != 4294967040LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x169 = 716704494U;
	static uint32_t x170 = UINT32_MAX;
	static int32_t x171 = INT32_MAX;
	volatile uint64_t x172 = 52698688488097309LLU;

	t35 = ((x169^(x170+x171))^x172);

	if (t35 != 52698689741894413LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = 251209864U;
	volatile int8_t x176 = -5;
	uint32_t t36 = 66414237U;

	t36 = ((x173^(x174+x175))^x176);

	if (t36 != 2398726284U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = -1LL;
	static uint16_t x180 = UINT16_MAX;
	volatile int64_t t37 = -3187643895LL;

	t37 = ((x177^(x178+x179))^x180);

	if (t37 != -2147418119LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = INT16_MAX;
	int64_t x182 = INT64_MIN;
	int64_t x184 = -1LL;
	volatile uint64_t t38 = 4597358022548LLU;

	t38 = ((x181^(x182+x183))^x184);

	if (t38 != 9223372036854743853LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x185 = 11U;
	volatile uint32_t x186 = 896676778U;
	int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MIN;
	uint32_t t39 = 31U;

	t39 = ((x185^(x186+x187))^x188);

	if (t39 != 896676769U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x191 = -1;
	uint64_t x192 = UINT64_MAX;
	static volatile uint64_t t40 = 677854LLU;

	t40 = ((x189^(x190+x191))^x192);

	if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = INT16_MIN;
	int64_t t41 = -2940349LL;

	t41 = ((x193^(x194+x195))^x196);

	if (t41 != -3406507179132LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x199 = UINT32_MAX;
	int8_t x200 = INT8_MIN;
	volatile uint64_t t42 = 115221313966LLU;

	t42 = ((x197^(x198+x199))^x200);

	if (t42 != 8613799123115LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MIN;
	volatile uint64_t x203 = 42242488252139LLU;
	volatile int16_t x204 = INT16_MIN;
	uint64_t t43 = 150762LLU;

	t43 = ((x201^(x202+x203))^x204);

	if (t43 != 42241665971947LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x205 = UINT32_MAX;
	volatile uint8_t x206 = 3U;
	int64_t t44 = -6LL;

	t44 = ((x205^(x206+x207))^x208);

	if (t44 != -9223372032559808518LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x209 = 1448U;
	static int8_t x210 = -1;
	static int16_t x211 = INT16_MAX;
	volatile uint32_t t45 = 65U;

	t45 = ((x209^(x210+x211))^x212);

	if (t45 != 31318U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x213 = 19541U;
	uint8_t x214 = 9U;
	uint8_t x215 = 7U;
	uint64_t x216 = UINT64_MAX;
	static uint64_t t46 = 0LLU;

	t46 = ((x213^(x214+x215))^x216);

	if (t46 != 18446744073709532090LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x217 = UINT32_MAX;
	int16_t x218 = -1;
	int32_t x219 = -397;
	volatile int16_t x220 = INT16_MAX;

	t47 = ((x217^(x218+x219))^x220);

	if (t47 != 32370U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x222 = 108;
	int32_t x224 = INT32_MIN;
	int64_t t48 = -26732999751807697LL;

	t48 = ((x221^(x222+x223))^x224);

	if (t48 != -2147483629LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x225 = 237093U;
	int64_t x226 = INT64_MIN;
	uint64_t x227 = UINT64_MAX;
	volatile int32_t x228 = -1;
	uint64_t t49 = 218633994199500106LLU;

	t49 = ((x225^(x226+x227))^x228);

	if (t49 != 9223372036855012901LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x229 = -1050793004339699LL;
	int16_t x230 = -1;
	volatile int16_t x231 = -10574;
	int32_t x232 = INT32_MIN;
	static volatile int64_t t50 = -4812587LL;

	t50 = ((x229^(x230+x231))^x232);

	if (t50 != -1050792475641668LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x233 = UINT8_MAX;
	static volatile int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;

	t51 = ((x233^(x234+x235))^x236);

	if (t51 != 32513LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x237 = UINT8_MAX;
	int8_t x238 = INT8_MAX;
	volatile int16_t x239 = 14713;
	int8_t x240 = -1;
	int32_t t52 = 100;

	t52 = ((x237^(x238+x239))^x240);

	if (t52 != -14600) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x241 = -1;
	volatile uint8_t x242 = UINT8_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t53 = 23;

	t53 = ((x241^(x242+x243))^x244);

	if (t53 != 2147483392) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = -1LL;
	int64_t x247 = INT64_MAX;
	volatile int16_t x248 = INT16_MIN;
	volatile int64_t t54 = 3936262273LL;

	t54 = ((x245^(x246+x247))^x248);

	if (t54 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x249 = -1;
	volatile int64_t x251 = INT64_MAX;
	int64_t t55 = -14LL;

	t55 = ((x249^(x250+x251))^x252);

	if (t55 != 8966739883851044132LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = INT16_MIN;
	uint16_t x254 = 27U;
	uint32_t x255 = UINT32_MAX;
	static int8_t x256 = INT8_MIN;

	t56 = ((x253^(x254+x255))^x256);

	if (t56 != 32666U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 1324669LLU;
	volatile uint64_t x258 = 28112256LLU;
	int64_t x259 = -979067401094091LL;
	volatile int8_t x260 = INT8_MIN;
	volatile uint64_t t57 = 316359735552LLU;

	t57 = ((x257^(x258+x259))^x260);

	if (t57 != 979067372206152LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = INT64_MAX;
	uint32_t x267 = 1329U;
	int8_t x268 = INT8_MIN;

	t58 = ((x265^(x266+x267))^x268);

	if (t58 != 1358LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x270 = 11105U;
	int8_t x271 = -1;
	int32_t x272 = -122065267;

	t59 = ((x269^(x270+x271))^x272);

	if (t59 != 122075757) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x273 = -1;
	static volatile uint16_t x274 = 173U;
	volatile int16_t x275 = -1;
	uint32_t t60 = 582873U;

	t60 = ((x273^(x274+x275))^x276);

	if (t60 != 172U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x286 = UINT64_MAX;
	int64_t x287 = INT64_MIN;

	t61 = ((x285^(x286+x287))^x288);

	if (t61 != 9223372036854808562LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x289 = 23850U;
	int32_t x290 = -1;
	int8_t x291 = INT8_MIN;
	static int8_t x292 = 1;
	static int32_t t62 = 1785769;

	t62 = ((x289^(x290+x291))^x292);

	if (t62 != -23980) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = INT16_MAX;
	uint8_t x299 = UINT8_MAX;
	static uint8_t x300 = 36U;
	int32_t t63 = -1;

	t63 = ((x297^(x298+x299))^x300);

	if (t63 != -2147450662) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x305 = 14U;
	int8_t x306 = 1;
	volatile int8_t x307 = INT8_MIN;
	int64_t x308 = 3294583LL;
	volatile int64_t t64 = -806LL;

	t64 = ((x305^(x306+x307))^x308);

	if (t64 != -3294472LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x310 = -1;
	uint32_t x311 = 0U;
	int32_t x312 = INT32_MIN;
	volatile uint32_t t65 = 113137045U;

	t65 = ((x309^(x310+x311))^x312);

	if (t65 != 1480062018U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = 3;
	int8_t x314 = 1;
	int16_t x315 = INT16_MIN;
	static int64_t t66 = -217676936029LL;

	t66 = ((x313^(x314+x315))^x316);

	if (t66 != -67024504438381LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x318 = 58603809946857419LL;
	uint64_t x319 = UINT64_MAX;
	int32_t x320 = -49;
	volatile uint64_t t67 = 14LLU;

	t67 = ((x317^(x318+x319))^x320);

	if (t67 != 18388140263762694146LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x321 = INT16_MAX;
	static int64_t x322 = 23319764469LL;
	uint64_t x323 = 200609LLU;
	static uint64_t t68 = 42639LLU;

	t68 = ((x321^(x322+x323))^x324);

	if (t68 != 23319941737LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x325 = INT32_MIN;
	int8_t x326 = -1;
	static int64_t x327 = -759109591077592LL;
	int16_t x328 = 1;
	volatile int64_t t69 = -64392LL;

	t69 = ((x325^(x326+x327))^x328);

	if (t69 != 759107660967206LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x334 = INT64_MIN;
	uint32_t x335 = UINT32_MAX;

	t70 = ((x333^(x334+x335))^x336);

	if (t70 != -9223372032559816677LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x337 = -1LL;
	static int64_t x340 = INT64_MAX;
	int64_t t71 = 1945551409514LL;

	t71 = ((x337^(x338+x339))^x340);

	if (t71 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x341 = 3U;
	volatile int64_t x342 = -870369882026LL;
	int8_t x344 = -1;
	volatile int64_t t72 = -139350332999898636LL;

	t72 = ((x341^(x342+x343))^x344);

	if (t72 != 870369849257LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x346 = INT16_MAX;
	volatile int64_t x347 = INT64_MIN;
	int8_t x348 = -53;

	t73 = ((x345^(x346+x347))^x348);

	if (t73 != 9223372036854743095LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x349 = 14239;
	volatile uint16_t x350 = 435U;
	static int8_t x351 = INT8_MIN;
	int8_t x352 = -1;

	t74 = ((x349^(x350+x351))^x352);

	if (t74 != -13997) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	volatile int64_t x355 = -1LL;
	static int16_t x356 = INT16_MIN;
	static int64_t t75 = -1012550953610602335LL;

	t75 = ((x353^(x354+x355))^x356);

	if (t75 != -65409LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = 1;
	int16_t x358 = INT16_MAX;
	int8_t x359 = INT8_MAX;
	volatile uint64_t t76 = 234126735LLU;

	t76 = ((x357^(x358+x359))^x360);

	if (t76 != 45923LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x361 = INT32_MIN;
	static int16_t x362 = INT16_MIN;
	static uint32_t x363 = 62651613U;
	int64_t x364 = INT64_MIN;
	volatile int64_t t77 = 24119LL;

	t77 = ((x361^(x362+x363))^x364);

	if (t77 != -9223372034644673315LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x368 = -9;
	volatile int64_t t78 = 132192LL;

	t78 = ((x365^(x366+x367))^x368);

	if (t78 != -4427767916702021LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x369 = INT16_MIN;
	int64_t x370 = -1LL;
	int32_t x371 = -1;
	int8_t x372 = INT8_MAX;
	static int64_t t79 = -4362332267512106LL;

	t79 = ((x369^(x370+x371))^x372);

	if (t79 != 32641LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x373 = INT16_MAX;
	volatile int16_t x374 = INT16_MIN;
	int8_t x375 = -11;
	uint16_t x376 = 123U;
	int32_t t80 = 3684992;

	t80 = ((x373^(x374+x375))^x376);

	if (t80 != -65423) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x377 = UINT64_MAX;
	int16_t x378 = 24;
	int32_t x379 = 4;
	int32_t x380 = -70225890;

	t81 = ((x377^(x378+x379))^x380);

	if (t81 != 70225917LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x381 = -1;
	int16_t x383 = -1;
	static int64_t x384 = -370753163LL;
	int64_t t82 = 1861028735202825228LL;

	t82 = ((x381^(x382+x383))^x384);

	if (t82 != 9223372036484022644LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x389 = INT32_MIN;
	uint16_t x390 = 6847U;
	volatile uint64_t x391 = 154926LLU;
	int32_t x392 = 1828;
	volatile uint64_t t83 = 348635LLU;

	t83 = ((x389^(x390+x391))^x392);

	if (t83 != 18446744071562227913LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x393 = INT64_MIN;
	int64_t x394 = -1LL;
	volatile int16_t x395 = INT16_MAX;
	volatile int64_t t84 = 413195LL;

	t84 = ((x393^(x394+x395))^x396);

	if (t84 != 9223170632289367142LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x398 = -1;
	static int16_t x399 = INT16_MIN;
	static uint16_t x400 = 414U;
	int32_t t85 = 14;

	t85 = ((x397^(x398+x399))^x400);

	if (t85 != 33249) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x401 = 20;
	volatile int16_t x402 = INT16_MIN;
	int64_t x403 = -1LL;
	uint8_t x404 = UINT8_MAX;
	static volatile int64_t t86 = -424LL;

	t86 = ((x401^(x402+x403))^x404);

	if (t86 != -33004LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x405 = INT16_MIN;
	volatile uint32_t x406 = 235682588U;
	uint16_t x407 = 1346U;
	uint8_t x408 = 28U;
	volatile uint32_t t87 = 171975U;

	t87 = ((x405^(x406+x407))^x408);

	if (t87 != 4059283522U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x409 = UINT8_MAX;
	int8_t x410 = -27;
	int32_t x411 = -1;
	volatile int8_t x412 = INT8_MIN;
	int32_t t88 = -26;

	t88 = ((x409^(x410+x411))^x412);

	if (t88 != 155) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x413 = INT8_MAX;
	static int32_t x416 = INT32_MAX;
	volatile int32_t t89 = 3;

	t89 = ((x413^(x414+x415))^x416);

	if (t89 != 126) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x417 = INT16_MAX;
	uint64_t x418 = 699722351LLU;
	int16_t x419 = -1;
	static int64_t x420 = -22750LL;
	uint64_t t90 = 1150184952990LLU;

	t90 = ((x417^(x418+x419))^x420);

	if (t90 != 18446744073009836723LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x425 = 1450137923U;
	volatile uint32_t x426 = UINT32_MAX;
	static int16_t x427 = -42;
	static int8_t x428 = INT8_MIN;
	static volatile uint32_t t91 = 1753587205U;

	t91 = ((x425^(x426+x427))^x428);

	if (t91 != 1450137878U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x433 = UINT32_MAX;
	uint64_t x435 = 110880776LLU;

	t92 = ((x433^(x434+x435))^x436);

	if (t92 != 4134653100LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x437 = INT16_MAX;
	int16_t x438 = -1;
	int8_t x439 = INT8_MAX;
	volatile int32_t x440 = INT32_MIN;
	volatile int32_t t93 = -5084965;

	t93 = ((x437^(x438+x439))^x440);

	if (t93 != -2147451007) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x441 = -1LL;
	uint16_t x443 = UINT16_MAX;
	volatile int64_t t94 = 61611758407LL;

	t94 = ((x441^(x442+x443))^x444);

	if (t94 != 65379LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x446 = -12;
	int32_t x447 = -5436;
	uint32_t x448 = 2558U;
	uint32_t t95 = 2U;

	t95 = ((x445^(x446+x447))^x448);

	if (t95 != 7366U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x449 = UINT32_MAX;
	static uint64_t x450 = UINT64_MAX;
	uint64_t x451 = 8271630LLU;
	uint64_t x452 = UINT64_MAX;
	uint64_t t96 = 7565260316112107LLU;

	t96 = ((x449^(x450+x451))^x452);

	if (t96 != 18446744069422855949LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x455 = -1;

	t97 = ((x453^(x454+x455))^x456);

	if (t97 != 18446744073709547667LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x457 = 243567964973708092LL;
	volatile uint8_t x459 = UINT8_MAX;
	int8_t x460 = INT8_MIN;
	static volatile int64_t t98 = 899364013LL;

	t98 = ((x457^(x458+x459))^x460);

	if (t98 != -243567964973707966LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x461 = 1;
	volatile uint64_t x463 = 460LLU;

	t99 = ((x461^(x462+x463))^x464);

	if (t99 != 459LLU) { NG(); } else { ; }
	
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

