#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
uint16_t x5 = 12259U;
uint8_t x8 = UINT8_MAX;
int8_t x9 = 1;
int64_t x10 = -172472092LL;
uint32_t x11 = UINT32_MAX;
static volatile int8_t x14 = -1;
volatile int32_t t3 = 8048;
int64_t t4 = -309479312LL;
int8_t x21 = -1;
volatile int32_t x30 = 40256;
static int64_t x37 = INT64_MIN;
int64_t x40 = INT64_MAX;
volatile int64_t t9 = -65LL;
static int64_t x41 = INT64_MIN;
int16_t x45 = -1;
int8_t x47 = -1;
uint32_t x52 = 6178U;
uint64_t t12 = 1100005751LLU;
int8_t x54 = -55;
uint32_t x60 = UINT32_MAX;
static uint32_t x61 = 25U;
int64_t x64 = -3752LL;
int32_t x76 = INT32_MIN;
volatile int32_t t17 = -1;
volatile uint8_t x77 = UINT8_MAX;
int32_t x78 = 1;
uint32_t x83 = 12U;
volatile uint64_t t20 = 0LLU;
int8_t x93 = INT8_MIN;
int64_t x104 = 152LL;
static volatile int64_t t24 = -6687801LL;
int16_t x113 = 0;
int16_t x119 = -1;
volatile uint8_t x122 = UINT8_MAX;
int16_t x125 = INT16_MIN;
uint16_t x128 = UINT16_MAX;
uint8_t x135 = 6U;
volatile uint8_t x138 = 1U;
int64_t x139 = -1LL;
static int64_t x141 = -7279LL;
int32_t x143 = INT32_MAX;
int64_t t34 = -5332646184603LL;
volatile int64_t t38 = 69381308875356268LL;
int64_t x162 = 4317168593167614420LL;
volatile int16_t x164 = -1;
static volatile int8_t x167 = INT8_MIN;
int16_t x168 = -127;
int16_t x171 = 107;
uint32_t x180 = UINT32_MAX;
uint16_t x184 = 1U;
static int8_t x185 = -1;
volatile int8_t x188 = -1;
volatile int32_t t44 = 201475251;
volatile uint16_t x190 = 3524U;
int16_t x192 = INT16_MAX;
uint32_t x195 = 121814U;
int8_t x196 = 0;
int64_t t47 = -40817266783490LL;
volatile int16_t x203 = -63;
int8_t x206 = INT8_MIN;
static volatile uint64_t x228 = 43LLU;
uint8_t x233 = 3U;
int64_t x240 = INT64_MIN;
volatile uint8_t x251 = 0U;
volatile uint64_t t60 = 68608278345271LLU;
int64_t x263 = -1LL;
int64_t x268 = INT64_MIN;
int64_t t63 = -12611141345LL;
uint64_t t64 = 634904534772LLU;
int16_t x282 = -1;
uint64_t t66 = 4239LLU;
int64_t x292 = INT64_MAX;
uint64_t x294 = UINT64_MAX;
uint64_t x295 = 20479227982763395LLU;
static volatile uint64_t t69 = 108LLU;
static int8_t x297 = INT8_MAX;
volatile int16_t x298 = 2046;
int64_t x300 = INT64_MIN;
static uint8_t x311 = UINT8_MAX;
volatile uint32_t x312 = 1917323208U;
int64_t x314 = INT64_MIN;
uint32_t x317 = 34175399U;
int64_t x320 = INT64_MIN;
int64_t x324 = -13879272343932953LL;
static int64_t t76 = 2294891878595270855LL;
volatile uint32_t t81 = 1U;
static volatile int32_t x347 = INT32_MAX;
volatile int64_t t83 = 15970649896LL;
static uint16_t x368 = UINT16_MAX;
int64_t x369 = INT64_MIN;
static int32_t x371 = INT32_MIN;
volatile int64_t x379 = INT64_MIN;
uint64_t x384 = UINT64_MAX;
volatile uint64_t t90 = 416867LLU;
int16_t x386 = -1;
int8_t x396 = INT8_MAX;
volatile int64_t x401 = INT64_MIN;
static int16_t x410 = 3;
uint16_t x425 = 2U;
int32_t x427 = INT32_MIN;
int64_t t98 = -3821615922230234LL;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	int8_t x2 = INT8_MIN;
	volatile int8_t x3 = INT8_MIN;
	int32_t t0 = 6;

	t0 = (x1^(x2-(x3|x4)));

	if (t0 != -2147483522) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = INT16_MIN;
	uint8_t x7 = 5U;
	int32_t t1 = 106;

	t1 = (x5^(x6-(x7|x8)));

	if (t1 != -44830) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x12 = UINT32_MAX;
	volatile int64_t t2 = -28318LL;

	t2 = (x9^(x10-(x11|x12)));

	if (t2 != -4467439388LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x15 = INT8_MAX;
	int32_t x16 = -906984024;

	t3 = (x13^(x14-(x15|x16)));

	if (t3 != -1240499712) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = UINT32_MAX;
	int8_t x18 = 7;
	uint32_t x19 = 8162U;
	int64_t x20 = INT64_MIN;

	t4 = (x17^(x18-(x19|x20)));

	if (t4 != 9223372032559816666LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 2087092662LLU;
	static int8_t x23 = 47;
	int64_t x24 = -1LL;
	static volatile uint64_t t5 = 2188482753186938LLU;

	t5 = (x21^(x22-(x23|x24)));

	if (t5 != 18446744071622458952LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	volatile int64_t x26 = -1LL;
	static int16_t x27 = -12394;
	uint8_t x28 = UINT8_MAX;
	int64_t t6 = -245660LL;

	t6 = (x25^(x26-(x27|x28)));

	if (t6 != -12289LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	volatile int8_t x31 = -32;
	uint64_t x32 = 410218523203799LLU;
	volatile uint64_t t7 = 976LLU;

	t7 = (x29^(x30-(x31|x32)));

	if (t7 != 2147443382LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	static uint16_t x34 = UINT16_MAX;
	uint8_t x35 = 51U;
	int32_t x36 = -1;
	int32_t t8 = -3442;

	t8 = (x33^(x34-(x35|x36)));

	if (t8 != 131071) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = INT16_MIN;
	volatile int8_t x39 = -1;

	t9 = (x37^(x38-(x39|x40)));

	if (t9 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MAX;
	static uint32_t x43 = 2U;
	int16_t x44 = -1866;
	volatile int64_t t10 = -1558517528869082872LL;

	t10 = (x41^(x42-(x43|x44)));

	if (t10 != -4294965431LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	static int16_t x48 = INT16_MAX;
	volatile int32_t t11 = 0;

	t11 = (x45^(x46-(x47|x48)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	uint64_t x50 = 6468566073LLU;
	int16_t x51 = INT16_MIN;

	t12 = (x49^(x50-(x51|x52)));

	if (t12 != 2173606888LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	volatile uint16_t x55 = UINT16_MAX;
	int16_t x56 = 13557;
	int64_t t13 = -54LL;

	t13 = (x53^(x54-(x55|x56)));

	if (t13 != 65589LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MIN;
	int32_t x58 = -1;
	int32_t x59 = -1003338146;
	int64_t t14 = INT64_MIN;

	t14 = (x57^(x58-(x59|x60)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MIN;
	static int64_t x63 = 655335878416903028LL;
	static volatile int64_t t15 = -103082068181519105LL;

	t15 = (x61^(x62-(x63|x64)));

	if (t15 != -9223372036854774627LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = -1;
	int8_t x70 = -22;
	int8_t x71 = INT8_MAX;
	volatile uint16_t x72 = UINT16_MAX;
	int32_t t16 = 7752;

	t16 = (x69^(x70-(x71|x72)));

	if (t16 != 65556) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	volatile uint8_t x74 = 1U;
	int8_t x75 = INT8_MAX;

	t17 = (x73^(x74-(x75|x76)));

	if (t17 != -126) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x79 = 8;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t18 = 1678902;

	t18 = (x77^(x78-(x79|x80)));

	if (t18 != 134) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 62U;
	int32_t x82 = -1;
	int8_t x84 = INT8_MIN;
	uint32_t t19 = 76977126U;

	t19 = (x81^(x82-(x83|x84)));

	if (t19 != 77U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = UINT64_MAX;
	static int16_t x86 = -3;
	uint32_t x87 = 687U;
	int32_t x88 = INT32_MIN;

	t20 = (x85^(x86-(x87|x88)));

	if (t20 != 18446744071562068657LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MIN;
	int32_t x90 = INT32_MAX;
	static volatile uint16_t x91 = 27698U;
	uint16_t x92 = UINT16_MAX;
	int64_t t21 = -1LL;

	t21 = (x89^(x90-(x91|x92)));

	if (t21 != -9223372034707357696LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = INT32_MIN;
	volatile uint32_t x95 = 13952482U;
	volatile int32_t x96 = -1;
	static volatile uint32_t t22 = 102408221U;

	t22 = (x93^(x94-(x95|x96)));

	if (t22 != 2147483521U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	int32_t x98 = -1;
	int32_t x99 = 3;
	int64_t x100 = 4174506068LL;
	int64_t t23 = -591952642LL;

	t23 = (x97^(x98-(x99|x100)));

	if (t23 != -4174452649LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x101 = INT64_MIN;
	volatile int8_t x102 = INT8_MAX;
	int32_t x103 = 28;

	t24 = (x101^(x102-(x103|x104)));

	if (t24 != 9223372036854775779LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = INT16_MIN;
	volatile uint32_t x106 = UINT32_MAX;
	int32_t x107 = -1;
	int8_t x108 = -10;
	volatile uint32_t t25 = 11U;

	t25 = (x105^(x106-(x107|x108)));

	if (t25 != 4294934528U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x109 = UINT32_MAX;
	int8_t x110 = INT8_MAX;
	int16_t x111 = -15515;
	int32_t x112 = INT32_MAX;
	uint32_t t26 = 13U;

	t26 = (x109^(x110-(x111|x112)));

	if (t26 != 4294967167U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = INT16_MAX;
	int16_t x115 = INT16_MIN;
	uint32_t x116 = 260944U;
	volatile uint32_t t27 = 17U;

	t27 = (x113^(x114-(x115|x116)));

	if (t27 != 33967U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 1U;
	int8_t x118 = 1;
	volatile int64_t x120 = -1LL;
	static volatile int64_t t28 = 529456585443543LL;

	t28 = (x117^(x118-(x119|x120)));

	if (t28 != 3LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = UINT64_MAX;
	volatile uint16_t x123 = 3U;
	int16_t x124 = 31;
	uint64_t t29 = 546170699017LLU;

	t29 = (x121^(x122-(x123|x124)));

	if (t29 != 18446744073709551391LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x126 = INT16_MAX;
	int32_t x127 = INT32_MAX;
	int32_t t30 = -16004776;

	t30 = (x125^(x126-(x127|x128)));

	if (t30 != 2147418112) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 8U;
	uint64_t x130 = 1813182931072247773LLU;
	uint32_t x131 = UINT32_MAX;
	int32_t x132 = 845;
	uint64_t t31 = 250856977762487919LLU;

	t31 = (x129^(x130-(x131|x132)));

	if (t31 != 1813182926777280470LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = -1;
	uint64_t x134 = 3583939768849396119LLU;
	uint8_t x136 = UINT8_MAX;
	uint64_t t32 = 651753571314323LLU;

	t32 = (x133^(x134-(x135|x136)));

	if (t32 != 14862804304860155751LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MAX;
	volatile uint16_t x140 = 298U;
	volatile int64_t t33 = 141502130130028097LL;

	t33 = (x137^(x138-(x139|x140)));

	if (t33 != 32765LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x142 = -1;
	static int64_t x144 = -1LL;

	t34 = (x141^(x142-(x143|x144)));

	if (t34 != -7279LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = 5;
	uint8_t x146 = UINT8_MAX;
	int32_t x147 = -1;
	volatile int16_t x148 = INT16_MAX;
	volatile int32_t t35 = 223185129;

	t35 = (x145^(x146-(x147|x148)));

	if (t35 != 261) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = UINT16_MAX;
	int32_t x150 = 427393;
	int16_t x151 = INT16_MAX;
	int32_t x152 = INT32_MAX;
	int32_t t36 = 17859;

	t36 = (x149^(x150-(x151|x152)));

	if (t36 != -2147059075) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x153 = UINT8_MAX;
	int16_t x154 = INT16_MIN;
	int64_t x155 = INT64_MIN;
	uint32_t x156 = 6U;
	volatile int64_t t37 = -16816496665157LL;

	t37 = (x153^(x154-(x155|x156)));

	if (t37 != 9223372036854742789LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	uint16_t x158 = 207U;
	int8_t x159 = -1;
	uint32_t x160 = 1715U;

	t38 = (x157^(x158-(x159|x160)));

	if (t38 != -9223372036854775600LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 902U;
	volatile int32_t x163 = -1;
	static volatile int64_t t39 = 4LL;

	t39 = (x161^(x162-(x163|x164)));

	if (t39 != 4317168593167614547LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = INT64_MIN;
	int64_t x166 = 20LL;
	volatile int64_t t40 = -1881025LL;

	t40 = (x165^(x166-(x167|x168)));

	if (t40 != -9223372036854775661LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = 23;
	uint32_t x170 = 8957394U;
	int16_t x172 = 694;
	uint32_t t41 = 182570U;

	t41 = (x169^(x170-(x171|x172)));

	if (t41 != 8956612U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = -1LL;
	int8_t x178 = INT8_MAX;
	int16_t x179 = INT16_MAX;
	int64_t t42 = 376002630LL;

	t42 = (x177^(x178-(x179|x180)));

	if (t42 != -129LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x181 = 382667177U;
	int8_t x182 = INT8_MIN;
	static int8_t x183 = -1;
	static uint32_t t43 = 439U;

	t43 = (x181^(x182-(x183|x184)));

	if (t43 != 3912300072U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x186 = 1U;
	int32_t x187 = INT32_MIN;

	t44 = (x185^(x186-(x187|x188)));

	if (t44 != -3) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x189 = INT16_MIN;
	int32_t x191 = 12507549;
	int32_t t45 = 15;

	t45 = (x189^(x190-(x191|x192)));

	if (t45 != 12488133) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MAX;
	volatile int32_t x194 = INT32_MIN;
	volatile uint32_t t46 = 16U;

	t46 = (x193^(x194-(x195|x196)));

	if (t46 != 2147361877U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x197 = 74U;
	int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	volatile int64_t x200 = INT64_MIN;

	t47 = (x197^(x198-(x199|x200)));

	if (t47 != 74LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -1;
	int8_t x202 = -37;
	uint8_t x204 = 0U;
	static volatile int32_t t48 = -109924;

	t48 = (x201^(x202-(x203|x204)));

	if (t48 != -27) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -3LL;
	uint32_t x207 = 0U;
	int16_t x208 = INT16_MIN;
	int64_t t49 = -7145945LL;

	t49 = (x205^(x206-(x207|x208)));

	if (t49 != -32643LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = INT64_MIN;
	uint32_t x210 = UINT32_MAX;
	uint16_t x211 = 164U;
	uint8_t x212 = 2U;
	volatile int64_t t50 = -239452LL;

	t50 = (x209^(x210-(x211|x212)));

	if (t50 != -9223372032559808679LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = 1566;
	static int64_t x215 = INT64_MIN;
	int8_t x216 = -58;
	int64_t t51 = -461760LL;

	t51 = (x213^(x214-(x215|x216)));

	if (t51 != -2147482024LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 3U;
	uint8_t x222 = UINT8_MAX;
	uint32_t x223 = UINT32_MAX;
	int64_t x224 = INT64_MAX;
	static int64_t t52 = 24019330537233750LL;

	t52 = (x221^(x222-(x223|x224)));

	if (t52 != -9223372036854775549LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MAX;
	int64_t x226 = INT64_MIN;
	uint16_t x227 = UINT16_MAX;
	static uint64_t t53 = 1783035792381389LLU;

	t53 = (x225^(x226-(x227|x228)));

	if (t53 != 65534LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x229 = INT16_MIN;
	int64_t x230 = -1LL;
	int32_t x231 = INT32_MAX;
	static int8_t x232 = -1;
	int64_t t54 = -2854542359222LL;

	t54 = (x229^(x230-(x231|x232)));

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x234 = UINT8_MAX;
	uint32_t x235 = 389160U;
	uint32_t x236 = 368216032U;
	volatile uint32_t t55 = 1U;

	t55 = (x233^(x234-(x235|x236)));

	if (t55 != 3926395156U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x237 = -1LL;
	static int16_t x238 = -36;
	int8_t x239 = INT8_MIN;
	volatile int64_t t56 = 1666LL;

	t56 = (x237^(x238-(x239|x240)));

	if (t56 != -93LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = 19006U;
	int8_t x242 = INT8_MIN;
	uint16_t x243 = UINT16_MAX;
	uint32_t x244 = 233U;
	volatile uint32_t t57 = 414U;

	t57 = (x241^(x242-(x243|x244)));

	if (t57 != 4294882751U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x245 = INT64_MAX;
	int64_t x246 = -1LL;
	uint32_t x247 = 4747065U;
	uint16_t x248 = 4U;
	volatile int64_t t58 = -7882868LL;

	t58 = (x245^(x246-(x247|x248)));

	if (t58 != -9223372036850028739LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -1;
	static int64_t x250 = -386691268971390990LL;
	int16_t x252 = -1302;
	volatile int64_t t59 = 13731780713LL;

	t59 = (x249^(x250-(x251|x252)));

	if (t59 != 386691268971389687LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x253 = INT64_MIN;
	static int32_t x254 = INT32_MIN;
	static uint64_t x255 = UINT64_MAX;
	static int16_t x256 = INT16_MAX;

	t60 = (x253^(x254-(x255|x256)));

	if (t60 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x257 = 117U;
	static int16_t x258 = -5621;
	int8_t x259 = -5;
	int32_t x260 = INT32_MIN;
	int32_t t61 = -290;

	t61 = (x257^(x258-(x259|x260)));

	if (t61 != -5531) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = 2;
	int16_t x262 = INT16_MAX;
	int32_t x264 = INT32_MAX;
	volatile int64_t t62 = -580008554LL;

	t62 = (x261^(x262-(x263|x264)));

	if (t62 != 32770LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x265 = 12U;
	uint8_t x266 = 8U;
	static uint32_t x267 = UINT32_MAX;

	t63 = (x265^(x266-(x267|x268)));

	if (t63 != 9223372032559808517LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = 0;
	volatile int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MIN;
	uint64_t x272 = 175120080963043178LLU;

	t64 = (x269^(x270-(x271|x272)));

	if (t64 != 18271623992746508438LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x277 = INT16_MAX;
	uint8_t x278 = 43U;
	uint32_t x279 = UINT32_MAX;
	int32_t x280 = -6;
	uint32_t t65 = 63315U;

	t65 = (x277^(x278-(x279|x280)));

	if (t65 != 32723U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x281 = INT32_MIN;
	uint64_t x283 = UINT64_MAX;
	uint8_t x284 = 31U;

	t66 = (x281^(x282-(x283|x284)));

	if (t66 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = INT16_MAX;
	int32_t x286 = INT32_MIN;
	int16_t x287 = -1;
	int64_t x288 = INT64_MIN;
	static volatile int64_t t67 = -1787643051220LL;

	t67 = (x285^(x286-(x287|x288)));

	if (t67 != -2147450882LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = -1;
	int8_t x290 = -1;
	uint32_t x291 = 1191656U;
	int64_t t68 = INT64_MAX;

	t68 = (x289^(x290-(x291|x292)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = 231;
	volatile int16_t x296 = INT16_MAX;

	t69 = (x293^(x294-(x295|x296)));

	if (t69 != 18426264845726777575LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x299 = INT16_MIN;
	int64_t t70 = -139318062719922LL;

	t70 = (x297^(x298-(x299|x300)));

	if (t70 != 34689LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = INT8_MIN;
	uint16_t x302 = UINT16_MAX;
	static int8_t x303 = INT8_MIN;
	uint8_t x304 = UINT8_MAX;
	static int32_t t71 = -6054660;

	t71 = (x301^(x302-(x303|x304)));

	if (t71 != -65664) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = 2U;
	int16_t x306 = INT16_MAX;
	volatile int8_t x307 = -1;
	uint64_t x308 = UINT64_MAX;
	uint64_t t72 = 5LLU;

	t72 = (x305^(x306-(x307|x308)));

	if (t72 != 32770LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = -1;
	static int64_t x310 = -1LL;
	volatile int64_t t73 = -51LL;

	t73 = (x309^(x310-(x311|x312)));

	if (t73 != 1917323263LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = INT64_MIN;
	int32_t x315 = INT32_MAX;
	int32_t x316 = INT32_MIN;
	int64_t t74 = -691273498246LL;

	t74 = (x313^(x314-(x315|x316)));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x318 = 3U;
	uint32_t x319 = 10249U;
	int64_t t75 = 14422065LL;

	t75 = (x317^(x318-(x319|x320)));

	if (t75 != 9223372036820610653LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = INT16_MIN;
	volatile int32_t x322 = INT32_MIN;
	int16_t x323 = -1;

	t76 = (x321^(x322-(x323|x324)));

	if (t76 != 2147450881LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	int64_t x327 = 6652995065955LL;
	int64_t x328 = 284452207LL;
	int64_t t77 = -244039835044334LL;

	t77 = (x325^(x326-(x327|x328)));

	if (t77 != 6653273210257LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x329 = 180827848947LL;
	int16_t x330 = -1;
	int8_t x331 = INT8_MAX;
	int32_t x332 = 1133708;
	static volatile int64_t t78 = 1662475665115064LL;

	t78 = (x329^(x330-(x331|x332)));

	if (t78 != -180828982285LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x333 = 11085;
	static volatile int8_t x334 = INT8_MIN;
	volatile int32_t x335 = -84487978;
	volatile uint8_t x336 = 0U;
	static volatile int32_t t79 = -1291704;

	t79 = (x333^(x334-(x335|x336)));

	if (t79 != 84477415) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x337 = INT32_MIN;
	int64_t x338 = INT64_MIN;
	volatile int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MIN;
	volatile int64_t t80 = -44190220LL;

	t80 = (x337^(x338-(x339|x340)));

	if (t80 != 9223372034707324928LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = INT16_MIN;
	uint32_t x342 = 55U;
	uint16_t x343 = 1U;
	uint8_t x344 = UINT8_MAX;

	t81 = (x341^(x342-(x343|x344)));

	if (t81 != 32568U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x345 = UINT8_MAX;
	uint16_t x346 = 586U;
	int32_t x348 = -43798040;
	static int32_t t82 = 112;

	t82 = (x345^(x346-(x347|x348)));

	if (t82 != 692) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = INT64_MAX;
	uint16_t x350 = 65U;
	static int8_t x351 = INT8_MIN;
	static int32_t x352 = INT32_MAX;

	t83 = (x349^(x350-(x351|x352)));

	if (t83 != 9223372036854775741LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x353 = 14221895;
	int32_t x354 = INT32_MAX;
	uint64_t x355 = 1527999958LLU;
	volatile int64_t x356 = INT64_MIN;
	uint64_t t84 = 1LLU;

	t84 = (x353^(x354-(x355|x356)));

	if (t84 != 9223372037462265966LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x357 = -1;
	int64_t x358 = 442413889307LL;
	static int8_t x359 = -1;
	int8_t x360 = INT8_MAX;
	int64_t t85 = 3711279LL;

	t85 = (x357^(x358-(x359|x360)));

	if (t85 != -442413889309LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x361 = -1;
	uint16_t x362 = 656U;
	static volatile uint32_t x363 = 28789U;
	uint32_t x364 = 1427222800U;
	volatile uint32_t t86 = 9U;

	t86 = (x361^(x362-(x363|x364)));

	if (t86 != 1427238628U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x365 = 289U;
	static uint8_t x366 = UINT8_MAX;
	uint16_t x367 = 1574U;
	volatile int32_t t87 = 894;

	t87 = (x365^(x366-(x367|x368)));

	if (t87 != -65503) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x370 = UINT32_MAX;
	static volatile int32_t x372 = -1;
	volatile int64_t t88 = INT64_MIN;

	t88 = (x369^(x370-(x371|x372)));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = INT64_MIN;
	volatile int8_t x378 = -2;
	volatile int64_t x380 = INT64_MIN;
	int64_t t89 = -75130616LL;

	t89 = (x377^(x378-(x379|x380)));

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x381 = INT8_MIN;
	static uint8_t x382 = 3U;
	uint16_t x383 = 0U;

	t90 = (x381^(x382-(x383|x384)));

	if (t90 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x385 = 3U;
	static int16_t x387 = 1;
	static uint64_t x388 = UINT64_MAX;
	volatile uint64_t t91 = 5610762157165733LLU;

	t91 = (x385^(x386-(x387|x388)));

	if (t91 != 3LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x389 = INT8_MAX;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = 31;
	volatile uint64_t t92 = 10434LLU;

	t92 = (x389^(x390-(x391|x392)));

	if (t92 != 18446744071562068094LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x393 = -1LL;
	int64_t x394 = -3406981955267LL;
	int32_t x395 = INT32_MIN;
	volatile int64_t t93 = 1290LL;

	t93 = (x393^(x394-(x395|x396)));

	if (t93 != 3404834471745LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x402 = UINT32_MAX;
	static volatile uint64_t x403 = 5907918190204693598LLU;
	uint64_t x404 = UINT64_MAX;
	uint64_t t94 = 213360914988506238LLU;

	t94 = (x401^(x402-(x403|x404)));

	if (t94 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x409 = -1;
	int32_t x411 = -378655606;
	int16_t x412 = 4909;
	static volatile int32_t t95 = 5446;

	t95 = (x409^(x410-(x411|x412)));

	if (t95 != -378650709) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = INT8_MAX;
	uint32_t x418 = 36272018U;
	int16_t x419 = INT16_MIN;
	int32_t x420 = 2059400;
	uint32_t t96 = 352229557U;

	t96 = (x417^(x418-(x419|x420)));

	if (t96 != 36277109U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x421 = UINT8_MAX;
	uint64_t x422 = UINT64_MAX;
	static int64_t x423 = INT64_MAX;
	volatile int32_t x424 = INT32_MIN;
	static uint64_t t97 = 146417843169519LLU;

	t97 = (x421^(x422-(x423|x424)));

	if (t97 != 255LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x426 = -1LL;
	volatile uint32_t x428 = UINT32_MAX;

	t98 = (x425^(x426-(x427|x428)));

	if (t98 != -4294967294LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = -1;
	int16_t x430 = INT16_MIN;
	volatile int64_t x431 = INT64_MIN;
	int32_t x432 = INT32_MAX;
	static volatile int64_t t99 = -61865LL;

	t99 = (x429^(x430-(x431|x432)));

	if (t99 != -9223372034707259394LL) { NG(); } else { ; }
	
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

