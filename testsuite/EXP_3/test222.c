#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
volatile int64_t t0 = 83227121LL;
volatile uint64_t t1 = 22446478870LLU;
volatile int16_t x18 = INT16_MIN;
int64_t x20 = -1LL;
int16_t x21 = 132;
volatile uint32_t x22 = 11U;
int64_t t3 = -5507617769LL;
static int16_t x28 = INT16_MIN;
int32_t x29 = -1;
int32_t x32 = INT32_MAX;
int32_t t5 = 96;
int64_t t7 = 17LL;
uint64_t x42 = UINT64_MAX;
volatile int16_t x43 = INT16_MIN;
static uint32_t x46 = 54431U;
int16_t x53 = 1197;
uint64_t x62 = 7363000968327039839LLU;
static volatile int32_t t15 = 0;
volatile uint8_t x80 = 1U;
static uint16_t x87 = 426U;
uint8_t x98 = 5U;
uint16_t x99 = 199U;
int16_t x102 = -15380;
int64_t x117 = -172012LL;
int64_t x120 = INT64_MIN;
int64_t x121 = -732179LL;
volatile int64_t t28 = 23311330219218503LL;
static volatile int8_t x131 = -1;
int32_t x133 = -1;
int16_t x154 = INT16_MIN;
int16_t x156 = INT16_MAX;
int32_t x160 = INT32_MIN;
int8_t x167 = INT8_MIN;
uint32_t x169 = 129068477U;
uint32_t t41 = 11U;
volatile uint32_t t42 = 1058466390U;
volatile int16_t x205 = 13;
static int64_t x216 = -118930641621LL;
static volatile uint16_t x217 = UINT16_MAX;
int32_t x219 = -1;
static int32_t x220 = 61;
int8_t x224 = INT8_MAX;
static uint64_t t50 = 24716760442960589LLU;
static int8_t x227 = -57;
uint8_t x228 = 1U;
uint8_t x230 = 112U;
int64_t x237 = -2027885721355LL;
int16_t x239 = INT16_MIN;
uint64_t x246 = 106603626693LLU;
int64_t x247 = 7300792370670551LL;
uint64_t x248 = 85736LLU;
uint32_t x258 = 14634484U;
volatile uint32_t x269 = UINT32_MAX;
volatile int16_t x271 = INT16_MAX;
uint16_t x273 = UINT16_MAX;
uint64_t x274 = 14678305366787LLU;
uint64_t t63 = 482478483160561958LLU;
static int32_t x297 = INT32_MIN;
static int16_t x308 = INT16_MAX;
int32_t t66 = 1729085;
volatile int32_t x311 = -50;
volatile int32_t x328 = 1399;
volatile uint32_t t69 = 454638U;
static int16_t x330 = 1;
int32_t t71 = -227;
static uint64_t x339 = 184096382LLU;
volatile int16_t x344 = -28;
static uint16_t x350 = 16827U;
volatile int8_t x352 = INT8_MIN;
int64_t x359 = 831026814LL;
uint16_t x361 = 415U;
uint32_t x363 = UINT32_MAX;
uint16_t x368 = 5U;
volatile uint16_t x370 = 2900U;
int32_t x372 = INT32_MIN;
static volatile int64_t t80 = 3948LL;
int32_t x375 = INT32_MIN;
volatile int64_t t81 = -4997520347LL;
static volatile uint64_t t82 = 2LLU;
static int32_t x401 = INT32_MIN;
volatile uint64_t x403 = UINT64_MAX;
uint32_t x416 = 15721U;
uint32_t t91 = 1778519495U;
int32_t x422 = INT32_MIN;
uint64_t x424 = 408262588362200LLU;
int32_t x431 = INT32_MIN;
int32_t x443 = -1;
static int64_t t97 = 20065489452LL;
uint64_t x445 = UINT64_MAX;


void f0(void) {
	int32_t x1 = -128360;
	static int32_t x3 = INT32_MAX;
	uint16_t x4 = UINT16_MAX;

	t0 = ((x1%x2)+(x3-x4));

	if (t0 != 2147289752LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MIN;
	uint64_t x14 = UINT64_MAX;
	volatile int16_t x15 = -1;
	int32_t x16 = INT32_MIN;

	t1 = ((x13%x14)+(x15-x16));

	if (t1 != 2147450879LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MAX;
	volatile int8_t x19 = INT8_MAX;
	int64_t t2 = 508523490386LL;

	t2 = ((x17%x18)+(x19-x20));

	if (t2 != 255LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x23 = INT64_MIN;
	int16_t x24 = -261;

	t3 = ((x21%x22)+(x23-x24));

	if (t3 != -9223372036854775547LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x25 = 22217U;
	int32_t x26 = INT32_MAX;
	volatile int8_t x27 = INT8_MAX;
	static volatile uint32_t t4 = 1436U;

	t4 = ((x25%x26)+(x27-x28));

	if (t4 != 55112U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x30 = UINT8_MAX;
	static uint16_t x31 = UINT16_MAX;

	t5 = ((x29%x30)+(x31-x32));

	if (t5 != -2147418113) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = 285003614841206611LL;
	volatile int16_t x34 = INT16_MIN;
	static int8_t x35 = INT8_MAX;
	volatile uint8_t x36 = UINT8_MAX;
	volatile int64_t t6 = 1418891524513LL;

	t6 = ((x33%x34)+(x35-x36));

	if (t6 != 30419LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x37 = 7U;
	volatile int32_t x38 = -1;
	static volatile uint16_t x39 = 5873U;
	static int64_t x40 = -1LL;

	t7 = ((x37%x38)+(x39-x40));

	if (t7 != 5874LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x41 = INT32_MAX;
	uint32_t x44 = UINT32_MAX;
	uint64_t t8 = 195698560916815489LLU;

	t8 = ((x41%x42)+(x43-x44));

	if (t8 != 6442418176LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	volatile int64_t x47 = INT64_MIN;
	static int16_t x48 = INT16_MIN;
	volatile int64_t t9 = 0LL;

	t9 = ((x45%x46)+(x47-x48));

	if (t9 != -9223372036854708358LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x49 = 24421;
	int8_t x50 = INT8_MIN;
	volatile int16_t x51 = INT16_MIN;
	int32_t x52 = -1;
	int32_t t10 = -123619012;

	t10 = ((x49%x50)+(x51-x52));

	if (t10 != -32666) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x54 = 245U;
	int32_t x55 = -1;
	int16_t x56 = -3;
	volatile int32_t t11 = 7436;

	t11 = ((x53%x54)+(x55-x56));

	if (t11 != 219) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -9026353438319719LL;
	uint16_t x58 = 207U;
	int8_t x59 = -1;
	int32_t x60 = 56;
	volatile int64_t t12 = -12425408LL;

	t12 = ((x57%x58)+(x59-x60));

	if (t12 != -211LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 8725655887452048LLU;
	int8_t x63 = -1;
	int32_t x64 = 35;
	uint64_t t13 = 271578745434LLU;

	t13 = ((x61%x62)+(x63-x64));

	if (t13 != 8725655887452012LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	volatile int32_t x66 = -23776534;
	int8_t x67 = -1;
	volatile int64_t x68 = -111300109LL;
	int64_t t14 = 529220334245282590LL;

	t14 = ((x65%x66)+(x67-x68));

	if (t14 != 103704520LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -1;
	int32_t x70 = INT32_MIN;
	uint8_t x71 = 16U;
	static uint8_t x72 = 21U;

	t15 = ((x69%x70)+(x71-x72));

	if (t15 != -6) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = -1;
	int32_t x74 = INT32_MIN;
	static int8_t x75 = INT8_MIN;
	uint8_t x76 = 23U;
	volatile int32_t t16 = 505;

	t16 = ((x73%x74)+(x75-x76));

	if (t16 != -152) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	int32_t x78 = -514646466;
	int64_t x79 = INT64_MAX;
	int64_t t17 = 72584302691LL;

	t17 = ((x77%x78)+(x79-x80));

	if (t17 != 9223372036765878022LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -1694932201381729442LL;
	int32_t x82 = INT32_MIN;
	int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MIN;
	volatile int64_t t18 = -14956LL;

	t18 = ((x81%x82)+(x83-x84));

	if (t18 != -1706726562LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = UINT8_MAX;
	volatile uint16_t x86 = 31468U;
	int32_t x88 = -1;
	int32_t t19 = 209;

	t19 = ((x85%x86)+(x87-x88));

	if (t19 != 682) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -232014051;
	int32_t x90 = INT32_MIN;
	uint32_t x91 = UINT32_MAX;
	uint8_t x92 = 13U;
	static volatile uint32_t t20 = 1U;

	t20 = ((x89%x90)+(x91-x92));

	if (t20 != 4062953231U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 7U;
	static int32_t x94 = INT32_MAX;
	uint8_t x95 = UINT8_MAX;
	volatile int8_t x96 = -1;
	uint32_t t21 = 7U;

	t21 = ((x93%x94)+(x95-x96));

	if (t21 != 263U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MAX;
	static uint32_t x100 = 236358068U;
	volatile int64_t t22 = 250091690LL;

	t22 = ((x97%x98)+(x99-x100));

	if (t22 != 4058609429LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = -36572540;
	uint8_t x103 = 0U;
	int16_t x104 = -36;
	int32_t t23 = -188;

	t23 = ((x101%x102)+(x103-x104));

	if (t23 != -14244) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = -15;
	static int64_t x106 = 7994016237LL;
	volatile int8_t x107 = INT8_MIN;
	uint32_t x108 = 11994U;
	static volatile int64_t t24 = 1144814LL;

	t24 = ((x105%x106)+(x107-x108));

	if (t24 != 4294955159LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x109 = UINT8_MAX;
	int64_t x110 = INT64_MIN;
	int32_t x111 = -7;
	static int32_t x112 = 2;
	int64_t t25 = 270156341653567731LL;

	t25 = ((x109%x110)+(x111-x112));

	if (t25 != 246LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -5378661LL;
	int8_t x114 = INT8_MAX;
	uint16_t x115 = 2U;
	int16_t x116 = INT16_MIN;
	int64_t t26 = -1203110570LL;

	t26 = ((x113%x114)+(x115-x116));

	if (t26 != 32686LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x118 = -1;
	volatile int16_t x119 = INT16_MIN;
	volatile int64_t t27 = -750982LL;

	t27 = ((x117%x118)+(x119-x120));

	if (t27 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x122 = -3311;
	int32_t x123 = -52920;
	int16_t x124 = 1;

	t28 = ((x121%x122)+(x123-x124));

	if (t28 != -53369LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x125 = 19187853U;
	volatile uint64_t x126 = 94340662LLU;
	volatile int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	static volatile uint64_t t29 = 153701539528763LLU;

	t29 = ((x125%x126)+(x127-x128));

	if (t29 != 19187853LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x129 = -157631686060691LL;
	static volatile int16_t x130 = INT16_MAX;
	int16_t x132 = INT16_MAX;
	volatile int64_t t30 = -64795269691LL;

	t30 = ((x129%x130)+(x131-x132));

	if (t30 != -57691LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x134 = INT64_MIN;
	static int32_t x135 = -1;
	uint64_t x136 = UINT64_MAX;
	static volatile uint64_t t31 = UINT64_MAX;

	t31 = ((x133%x134)+(x135-x136));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x141 = UINT8_MAX;
	int8_t x142 = INT8_MIN;
	static volatile int64_t x143 = 162760482562527LL;
	volatile uint8_t x144 = 12U;
	volatile int64_t t32 = 1LL;

	t32 = ((x141%x142)+(x143-x144));

	if (t32 != 162760482562642LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x145 = UINT64_MAX;
	int8_t x146 = -44;
	int32_t x147 = INT32_MAX;
	volatile int32_t x148 = INT32_MAX;
	uint64_t t33 = 34526678031995373LLU;

	t33 = ((x145%x146)+(x147-x148));

	if (t33 != 43LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	static int64_t x150 = -965LL;
	volatile uint64_t x151 = 1340LLU;
	int32_t x152 = -2;
	uint64_t t34 = 29605163LLU;

	t34 = ((x149%x150)+(x151-x152));

	if (t34 != 914LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	uint8_t x155 = 127U;
	static volatile int32_t t35 = -1;

	t35 = ((x153%x154)+(x155-x156));

	if (t35 != -32640) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	static int8_t x158 = -1;
	int16_t x159 = -405;
	volatile int64_t t36 = 1070LL;

	t36 = ((x157%x158)+(x159-x160));

	if (t36 != 2147483243LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	static int8_t x162 = INT8_MIN;
	uint16_t x163 = UINT16_MAX;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t37 = 3272229663LLU;

	t37 = ((x161%x162)+(x163-x164));

	if (t37 != 65663LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x165 = INT16_MAX;
	volatile int16_t x166 = INT16_MIN;
	int8_t x168 = INT8_MIN;
	volatile int32_t t38 = -255;

	t38 = ((x165%x166)+(x167-x168));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x170 = INT64_MIN;
	int16_t x171 = 1;
	static int16_t x172 = -219;
	static volatile int64_t t39 = 122283092LL;

	t39 = ((x169%x170)+(x171-x172));

	if (t39 != 129068697LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x173 = 5775831LLU;
	static int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	uint64_t t40 = 1209905384613LLU;

	t40 = ((x173%x174)+(x175-x176));

	if (t40 != 5775831LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x177 = 57U;
	static volatile uint32_t x178 = 776540739U;
	int8_t x179 = 0;
	int8_t x180 = -1;

	t41 = ((x177%x178)+(x179-x180));

	if (t41 != 58U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 393490159U;
	int32_t x182 = 927;
	uint16_t x183 = 890U;
	static volatile int32_t x184 = -1;

	t42 = ((x181%x182)+(x183-x184));

	if (t42 != 1798U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MIN;
	static volatile uint64_t x186 = 127942630015317023LLU;
	int32_t x187 = -1;
	int64_t x188 = INT64_MIN;
	volatile uint64_t t43 = 235708968LLU;

	t43 = ((x185%x186)+(x187-x188));

	if (t43 != 9246377388358643343LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = 5444083283272LL;
	int16_t x198 = -26;
	static int16_t x199 = INT16_MAX;
	volatile int16_t x200 = INT16_MIN;
	volatile int64_t t44 = 990854LL;

	t44 = ((x197%x198)+(x199-x200));

	if (t44 != 65545LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = 3;
	volatile int32_t x202 = 37;
	int16_t x203 = INT16_MIN;
	static int8_t x204 = INT8_MIN;
	volatile int32_t t45 = -7126;

	t45 = ((x201%x202)+(x203-x204));

	if (t45 != -32637) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x206 = INT16_MIN;
	uint32_t x207 = UINT32_MAX;
	int64_t x208 = INT64_MAX;
	static int64_t t46 = 8707420189820LL;

	t46 = ((x205%x206)+(x207-x208));

	if (t46 != -9223372032559808499LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MAX;
	uint64_t x210 = 813548890773998LLU;
	static uint64_t x211 = UINT64_MAX;
	uint64_t x212 = 36898949LLU;
	uint64_t t47 = 316023105140849120LLU;

	t47 = ((x209%x210)+(x211-x212));

	if (t47 != 18446744073672652793LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = -1LL;
	int16_t x214 = 1785;
	int64_t x215 = INT64_MIN;
	int64_t t48 = -44532893391349835LL;

	t48 = ((x213%x214)+(x215-x216));

	if (t48 != -9223371917924134188LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x218 = INT64_MIN;
	volatile int64_t t49 = 1854318204LL;

	t49 = ((x217%x218)+(x219-x220));

	if (t49 != 65473LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 2U;
	uint64_t x222 = 42071LLU;
	int8_t x223 = INT8_MIN;

	t50 = ((x221%x222)+(x223-x224));

	if (t50 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x225 = -6411;
	int16_t x226 = 1188;
	static int32_t t51 = -13840;

	t51 = ((x225%x226)+(x227-x228));

	if (t51 != -529) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MIN;
	static int16_t x231 = INT16_MIN;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t52 = 938653943;

	t52 = ((x229%x230)+(x231-x232));

	if (t52 != -33039) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = 11U;
	int8_t x234 = 12;
	static int64_t x235 = 11LL;
	uint16_t x236 = UINT16_MAX;
	volatile int64_t t53 = -380293LL;

	t53 = ((x233%x234)+(x235-x236));

	if (t53 != -65513LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x238 = INT64_MIN;
	volatile int64_t x240 = -627795LL;
	volatile int64_t t54 = -2741076LL;

	t54 = ((x237%x238)+(x239-x240));

	if (t54 != -2027885126328LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x245 = INT32_MIN;
	static volatile uint64_t t55 = 58725LLU;

	t55 = ((x245%x246)+(x247-x248));

	if (t55 != 7300851991599827LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x249 = INT64_MIN;
	static volatile int16_t x250 = INT16_MAX;
	static int16_t x251 = 6237;
	uint8_t x252 = UINT8_MAX;
	int64_t t56 = 2404252024748LL;

	t56 = ((x249%x250)+(x251-x252));

	if (t56 != 5974LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = INT32_MAX;
	static int8_t x254 = INT8_MIN;
	static volatile int8_t x255 = -1;
	volatile int32_t x256 = 0;
	static volatile int32_t t57 = 2;

	t57 = ((x253%x254)+(x255-x256));

	if (t57 != 126) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = INT8_MAX;
	int8_t x259 = 1;
	int64_t x260 = -1LL;
	volatile int64_t t58 = -33LL;

	t58 = ((x257%x258)+(x259-x260));

	if (t58 != 129LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x261 = INT8_MAX;
	volatile int32_t x262 = INT32_MAX;
	int64_t x263 = -1LL;
	int32_t x264 = -36;
	int64_t t59 = 1001513286265LL;

	t59 = ((x261%x262)+(x263-x264));

	if (t59 != 162LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x266 = -1;
	int64_t x267 = -1LL;
	int64_t x268 = INT64_MIN;
	volatile uint64_t t60 = 0LLU;

	t60 = ((x265%x266)+(x267-x268));

	if (t60 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x270 = UINT64_MAX;
	uint32_t x272 = 2260885U;
	static uint64_t t61 = 62786678690917187LLU;

	t61 = ((x269%x270)+(x271-x272));

	if (t61 != 8587706473LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x275 = -1;
	volatile uint8_t x276 = UINT8_MAX;
	uint64_t t62 = 6879256112940LLU;

	t62 = ((x273%x274)+(x275-x276));

	if (t62 != 65279LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = -6;
	int8_t x278 = 17;
	volatile uint64_t x279 = UINT64_MAX;
	static uint64_t x280 = 4LLU;

	t63 = ((x277%x278)+(x279-x280));

	if (t63 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x298 = UINT32_MAX;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = -1;
	uint32_t t64 = 2017006786U;

	t64 = ((x297%x298)+(x299-x300));

	if (t64 != 2147483648U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = INT16_MAX;
	static volatile int32_t x302 = -1;
	int64_t x303 = -1LL;
	static volatile int64_t x304 = INT64_MAX;
	int64_t t65 = INT64_MIN;

	t65 = ((x301%x302)+(x303-x304));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x305 = 3U;
	int32_t x306 = -1;
	static int16_t x307 = INT16_MIN;

	t66 = ((x305%x306)+(x307-x308));

	if (t66 != -65535) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x309 = INT64_MIN;
	uint64_t x310 = 10403086LLU;
	uint16_t x312 = 0U;
	uint64_t t67 = 782167LLU;

	t67 = ((x309%x310)+(x311-x312));

	if (t67 != 8536768LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = -1;
	volatile int64_t x318 = INT64_MIN;
	int8_t x319 = -1;
	uint32_t x320 = 36028U;
	int64_t t68 = 173LL;

	t68 = ((x317%x318)+(x319-x320));

	if (t68 != 4294931266LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x325 = INT16_MIN;
	static int32_t x326 = -191;
	uint32_t x327 = UINT32_MAX;

	t69 = ((x325%x326)+(x327-x328));

	if (t69 != 4294965789U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x329 = INT64_MIN;
	uint16_t x331 = 68U;
	volatile int64_t x332 = INT64_MAX;
	int64_t t70 = 360LL;

	t70 = ((x329%x330)+(x331-x332));

	if (t70 != -9223372036854775739LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = INT16_MIN;
	int8_t x334 = -1;
	int16_t x335 = INT16_MIN;
	static int32_t x336 = 11;

	t71 = ((x333%x334)+(x335-x336));

	if (t71 != -32779) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x337 = -9;
	int64_t x338 = INT64_MIN;
	static volatile int64_t x340 = -1LL;
	uint64_t t72 = 15948905090125LLU;

	t72 = ((x337%x338)+(x339-x340));

	if (t72 != 184096374LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x341 = 1711U;
	static uint8_t x342 = UINT8_MAX;
	static volatile int64_t x343 = -225991734LL;
	int64_t t73 = -58LL;

	t73 = ((x341%x342)+(x343-x344));

	if (t73 != -225991525LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = INT16_MIN;
	int64_t x346 = INT64_MIN;
	volatile uint64_t x347 = 698549809851698921LLU;
	static uint8_t x348 = 9U;
	volatile uint64_t t74 = 172941374057117LLU;

	t74 = ((x345%x346)+(x347-x348));

	if (t74 != 698549809851666144LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = 109U;
	int64_t x351 = INT64_MIN;
	volatile int64_t t75 = 71812691LL;

	t75 = ((x349%x350)+(x351-x352));

	if (t75 != -9223372036854775571LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x353 = INT8_MIN;
	static volatile uint32_t x354 = UINT32_MAX;
	uint64_t x355 = UINT64_MAX;
	uint8_t x356 = 4U;
	static uint64_t t76 = 216771LLU;

	t76 = ((x353%x354)+(x355-x356));

	if (t76 != 4294967163LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = INT16_MAX;
	int32_t x358 = 7;
	int8_t x360 = -1;
	volatile int64_t t77 = -4327263LL;

	t77 = ((x357%x358)+(x359-x360));

	if (t77 != 831026815LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x362 = 33U;
	int32_t x364 = -20272480;
	static volatile uint32_t t78 = 515U;

	t78 = ((x361%x362)+(x363-x364));

	if (t78 != 20272498U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x365 = 258776060U;
	volatile uint32_t x366 = 146U;
	static int32_t x367 = -232844;
	uint32_t t79 = 978747U;

	t79 = ((x365%x366)+(x367-x368));

	if (t79 != 4294734559U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x369 = INT64_MIN;
	int8_t x371 = INT8_MIN;

	t80 = ((x369%x370)+(x371-x372));

	if (t80 != 2147482812LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x373 = -1;
	volatile int8_t x374 = INT8_MAX;
	volatile int64_t x376 = 422LL;

	t81 = ((x373%x374)+(x375-x376));

	if (t81 != -2147484071LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x377 = 4864334132578LL;
	int32_t x378 = INT32_MIN;
	static uint64_t x379 = UINT64_MAX;
	volatile int16_t x380 = INT16_MAX;

	t82 = ((x377%x378)+(x379-x380));

	if (t82 != 283637090LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = INT8_MAX;
	int64_t x382 = INT64_MAX;
	volatile int16_t x383 = INT16_MAX;
	int16_t x384 = 4;
	int64_t t83 = -3920562451240423LL;

	t83 = ((x381%x382)+(x383-x384));

	if (t83 != 32890LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x385 = 2037U;
	uint64_t x386 = UINT64_MAX;
	static uint32_t x387 = UINT32_MAX;
	uint16_t x388 = 7217U;
	uint64_t t84 = 7249906002393040LLU;

	t84 = ((x385%x386)+(x387-x388));

	if (t84 != 4294962115LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = INT32_MAX;
	int64_t x390 = INT64_MIN;
	volatile int32_t x391 = -1;
	static int64_t x392 = 44028881501LL;
	int64_t t85 = 16416526263152LL;

	t85 = ((x389%x390)+(x391-x392));

	if (t85 != -41881397855LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x393 = INT64_MIN;
	volatile uint32_t x394 = 1460U;
	uint16_t x395 = 14297U;
	uint32_t x396 = UINT32_MAX;
	static int64_t t86 = 25945LL;

	t86 = ((x393%x394)+(x395-x396));

	if (t86 != 12910LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x397 = 1;
	static int64_t x398 = 330LL;
	int32_t x399 = 32;
	uint16_t x400 = UINT16_MAX;
	volatile int64_t t87 = -161561LL;

	t87 = ((x397%x398)+(x399-x400));

	if (t87 != -65502LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x402 = -1LL;
	volatile int8_t x404 = -1;
	static volatile uint64_t t88 = 1LLU;

	t88 = ((x401%x402)+(x403-x404));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	int64_t x407 = INT64_MAX;
	uint64_t x408 = 271475146012LLU;
	uint64_t t89 = 341216072LLU;

	t89 = ((x405%x406)+(x407-x408));

	if (t89 != 9223371765379629795LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x409 = 22U;
	int16_t x410 = INT16_MIN;
	uint64_t x411 = 849LLU;
	int8_t x412 = INT8_MAX;
	volatile uint64_t t90 = 60329LLU;

	t90 = ((x409%x410)+(x411-x412));

	if (t90 != 744LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x413 = 2601778;
	static int16_t x414 = INT16_MIN;
	int16_t x415 = INT16_MIN;

	t91 = ((x413%x414)+(x415-x416));

	if (t91 != 4294931913U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x417 = INT32_MIN;
	static int64_t x418 = -233164536017467538LL;
	static int16_t x419 = -12;
	int32_t x420 = 221429;
	volatile int64_t t92 = -204776594137167LL;

	t92 = ((x417%x418)+(x419-x420));

	if (t92 != -2147705089LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x421 = INT16_MAX;
	int32_t x423 = INT32_MIN;
	uint64_t t93 = 65382058799LLU;

	t93 = ((x421%x422)+(x423-x424));

	if (t93 != 18446335808973738535LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x425 = INT64_MIN;
	uint8_t x426 = 117U;
	static uint64_t x427 = UINT64_MAX;
	int32_t x428 = INT32_MAX;
	uint64_t t94 = 3362637LLU;

	t94 = ((x425%x426)+(x427-x428));

	if (t94 != 18446744071562067960LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x429 = -271479796182424LL;
	int8_t x430 = -14;
	int64_t x432 = -541717LL;
	static volatile int64_t t95 = -376881758779272LL;

	t95 = ((x429%x430)+(x431-x432));

	if (t95 != -2146941935LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x437 = 36U;
	static int16_t x438 = INT16_MIN;
	uint32_t x439 = UINT32_MAX;
	int16_t x440 = 6;
	uint32_t t96 = 7U;

	t96 = ((x437%x438)+(x439-x440));

	if (t96 != 29U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = INT64_MIN;
	uint32_t x442 = 907566686U;
	uint16_t x444 = UINT16_MAX;

	t97 = ((x441%x442)+(x443-x444));

	if (t97 != -158969068LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x446 = 28LLU;
	volatile int8_t x447 = 2;
	uint64_t x448 = 1424603290759643907LLU;
	volatile uint64_t t98 = 2750973383278LLU;

	t98 = ((x445%x446)+(x447-x448));

	if (t98 != 17022140782949907726LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x449 = INT32_MAX;
	uint8_t x450 = UINT8_MAX;
	int16_t x451 = INT16_MAX;
	volatile uint16_t x452 = UINT16_MAX;
	volatile int32_t t99 = 2883;

	t99 = ((x449%x450)+(x451-x452));

	if (t99 != -32641) { NG(); } else { ; }
	
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

