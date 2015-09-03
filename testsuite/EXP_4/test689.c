#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
int32_t x7 = INT32_MIN;
uint16_t x9 = 3U;
static uint32_t x14 = UINT32_MAX;
int8_t x16 = -1;
int64_t x20 = INT64_MIN;
int64_t t4 = 4512574LL;
int64_t x21 = INT64_MIN;
uint64_t x22 = 3417LLU;
uint16_t x24 = 47U;
uint8_t x29 = 29U;
int16_t x31 = INT16_MIN;
int8_t x32 = INT8_MIN;
volatile uint32_t t8 = 12U;
uint32_t x38 = 1447U;
static volatile uint32_t t9 = 61U;
static int8_t x47 = INT8_MIN;
volatile int8_t x48 = -51;
volatile int8_t x52 = -1;
volatile int64_t t14 = -9LL;
static int32_t x70 = INT32_MIN;
uint64_t x72 = UINT64_MAX;
static volatile uint16_t x83 = UINT16_MAX;
volatile int64_t t21 = -6LL;
volatile int8_t x101 = INT8_MAX;
static int8_t x103 = 1;
static volatile uint8_t x105 = 1U;
volatile int32_t x112 = INT32_MIN;
int32_t x115 = INT32_MIN;
int32_t x117 = INT32_MIN;
static int16_t x125 = -1;
int32_t t31 = 3274;
uint16_t x132 = UINT16_MAX;
int64_t x133 = INT64_MIN;
int64_t x136 = INT64_MIN;
uint64_t t34 = 106377129147331LLU;
int16_t x145 = -1;
static int32_t x148 = INT32_MIN;
uint16_t x155 = UINT16_MAX;
int8_t x159 = -1;
int32_t x164 = INT32_MIN;
int8_t x166 = INT8_MAX;
int32_t x167 = INT32_MIN;
int16_t x175 = INT16_MIN;
int16_t x176 = INT16_MIN;
static uint16_t x194 = 5721U;
static volatile uint32_t x221 = 0U;
static uint64_t x231 = UINT64_MAX;
int16_t x236 = -6868;
int64_t x238 = 875659565141LL;
int32_t x239 = 114;
volatile uint64_t t56 = 25LLU;
static int32_t x241 = INT32_MIN;
volatile int64_t x254 = INT64_MIN;
int8_t x257 = INT8_MAX;
uint64_t x267 = UINT64_MAX;
uint8_t x270 = 2U;
int8_t x271 = -1;
volatile uint32_t t66 = 365273U;
volatile int16_t x286 = -1;
static volatile int32_t t67 = -384737;
uint8_t x290 = UINT8_MAX;
uint64_t x292 = UINT64_MAX;
uint64_t x297 = 1310021654247LLU;
uint16_t x301 = 2305U;
uint64_t x308 = 8758307431134LLU;
static uint64_t t72 = 2245440079059635LLU;
uint64_t x311 = UINT64_MAX;
static int32_t x312 = INT32_MAX;
volatile uint32_t x325 = 58669040U;
int32_t x331 = INT32_MIN;
uint64_t x334 = 260620455403325LLU;
int16_t x340 = INT16_MIN;
int64_t t79 = 497094073278LL;
static int16_t x350 = INT16_MIN;
uint16_t x352 = 21U;
int8_t x353 = -1;
int8_t x355 = 2;
static int8_t x358 = INT8_MAX;
uint64_t x359 = 38508317709177555LLU;
int16_t x367 = INT16_MIN;
int64_t t85 = 30855828LL;
int32_t x377 = INT32_MIN;
int64_t x395 = -26LL;
static volatile int64_t t92 = -1LL;
int16_t x399 = INT16_MIN;
int32_t x401 = -1;
int32_t x410 = INT32_MAX;
uint8_t x418 = UINT8_MAX;
int32_t x420 = INT32_MIN;
int32_t x422 = INT32_MIN;


void f0(void) {
	uint64_t x1 = 24877368761LLU;
	uint32_t x2 = 90589U;
	int64_t x3 = INT64_MIN;
	static int16_t x4 = -1;
	volatile uint64_t t0 = 4193LLU;

	t0 = (x1^(x2+(x3%x4)));

	if (t0 != 24877458532LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x6 = 91U;
	static int16_t x8 = INT16_MIN;
	static int32_t t1 = -1530;

	t1 = (x5^(x6+(x7%x8)));

	if (t1 != -37) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	int64_t x11 = INT64_MIN;
	volatile int8_t x12 = -1;
	int64_t t2 = 3LL;

	t2 = (x9^(x10+(x11%x12)));

	if (t2 != 124LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 300832086;
	int32_t x15 = 6;
	volatile uint32_t t3 = 4950804U;

	t3 = (x13^(x14+(x15%x16)));

	if (t3 != 3994135209U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 25U;
	int32_t x18 = -1;
	int8_t x19 = -1;

	t4 = (x17^(x18+(x19%x20)));

	if (t4 != -25LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x23 = INT16_MAX;
	volatile uint64_t t5 = 67433810363LLU;

	t5 = (x21^(x22+(x23%x24)));

	if (t5 != 9223372036854779233LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint64_t x26 = 9023369LLU;
	uint64_t x27 = 867538512119LLU;
	volatile uint32_t x28 = 6551U;
	uint64_t t6 = 2029107LLU;

	t6 = (x25^(x26+(x27%x28)));

	if (t6 != 18446744073700523425LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = -1;
	volatile int32_t t7 = -285591646;

	t7 = (x29^(x30+(x31%x32)));

	if (t7 != -30) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 31;
	uint32_t x34 = UINT32_MAX;
	int16_t x35 = 126;
	int32_t x36 = INT32_MAX;

	t8 = (x33^(x34+(x35%x36)));

	if (t8 != 98U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x39 = -1;
	volatile int16_t x40 = INT16_MIN;

	t9 = (x37^(x38+(x39%x40)));

	if (t9 != 4294935974U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -47;
	int16_t x42 = -1;
	int16_t x43 = INT16_MAX;
	volatile int8_t x44 = -1;
	int32_t t10 = 8;

	t10 = (x41^(x42+(x43%x44)));

	if (t10 != 46) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	static int16_t x46 = -1;
	volatile int64_t t11 = 0LL;

	t11 = (x45^(x46+(x47%x48)));

	if (t11 != 9223372036854775781LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -7681002LL;
	uint32_t x50 = 5302U;
	volatile int16_t x51 = INT16_MIN;
	volatile int64_t t12 = -122502146263882013LL;

	t12 = (x49^(x50+(x51%x52)));

	if (t12 != -7677792LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 68669408U;
	int8_t x54 = INT8_MIN;
	int8_t x55 = 0;
	uint16_t x56 = 2022U;
	uint32_t t13 = 4747211U;

	t13 = (x53^(x54+(x55%x56)));

	if (t13 != 4226297952U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = UINT16_MAX;
	int8_t x58 = INT8_MIN;
	volatile uint16_t x59 = UINT16_MAX;
	volatile int64_t x60 = INT64_MIN;

	t14 = (x57^(x58+(x59%x60)));

	if (t14 != 128LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	volatile int64_t x62 = 3599371915902966LL;
	static volatile int32_t x63 = -303;
	int32_t x64 = 7;
	static volatile int64_t t15 = 3246179253859283LL;

	t15 = (x61^(x62+(x63%x64)));

	if (t15 != -3599371915902965LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 25U;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	static uint16_t x68 = UINT16_MAX;
	int32_t t16 = 168;

	t16 = (x65^(x66+(x67%x68)));

	if (t16 != 32614) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 837;
	uint64_t x71 = UINT64_MAX;
	volatile uint64_t t17 = 2LLU;

	t17 = (x69^(x70+(x71%x72)));

	if (t17 != 18446744071562068805LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	static uint16_t x74 = 1551U;
	volatile uint32_t x75 = 220888279U;
	int16_t x76 = -2;
	static uint32_t t18 = 3U;

	t18 = (x73^(x74+(x75%x76)));

	if (t18 != 4074077465U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 16250;
	int8_t x78 = -1;
	volatile int8_t x79 = -1;
	volatile uint8_t x80 = 18U;
	volatile int32_t t19 = -1325;

	t19 = (x77^(x78+(x79%x80)));

	if (t19 != -16252) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	static int16_t x82 = -1;
	volatile int32_t x84 = 129860387;
	int32_t t20 = -1784;

	t20 = (x81^(x82+(x83%x84)));

	if (t20 != -32770) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	volatile int64_t x86 = INT64_MIN;
	uint32_t x87 = 158U;
	int64_t x88 = -1LL;

	t21 = (x85^(x86+(x87%x88)));

	if (t21 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int16_t x90 = 3761;
	static int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MAX;
	volatile int64_t t22 = -8398732297762LL;

	t22 = (x89^(x90+(x91%x92)));

	if (t22 != -2147421874LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static volatile uint32_t x94 = 8107610U;
	uint32_t x95 = 10432680U;
	int32_t x96 = INT32_MIN;
	uint32_t t23 = 737678U;

	t23 = (x93^(x94+(x95%x96)));

	if (t23 != 4276426882U) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	int8_t x98 = -1;
	uint16_t x99 = 1U;
	static int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 11;

	t24 = (x97^(x98+(x99%x100)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = -1;
	int64_t x104 = INT64_MAX;
	int64_t t25 = -32367464421787839LL;

	t25 = (x101^(x102+(x103%x104)));

	if (t25 != 127LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = -1;
	int16_t x107 = -1;
	static volatile uint8_t x108 = 82U;
	int32_t t26 = 2;

	t26 = (x105^(x106+(x107%x108)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MIN;
	int64_t x110 = -16284218259355164LL;
	uint16_t x111 = 33U;
	int64_t t27 = -2025258402601446060LL;

	t27 = (x109^(x110+(x111%x112)));

	if (t27 != 16284220245985797LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MAX;
	int64_t x116 = INT64_MAX;
	volatile int64_t t28 = -8272448130LL;

	t28 = (x113^(x114+(x115%x116)));

	if (t28 != 2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = UINT32_MAX;
	static int64_t x119 = -1LL;
	static int64_t x120 = -1LL;
	volatile int64_t t29 = 207LL;

	t29 = (x117^(x118+(x119%x120)));

	if (t29 != -2147483649LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = UINT8_MAX;
	static int32_t x122 = INT32_MIN;
	int64_t x123 = 91005392329051225LL;
	uint32_t x124 = 3U;
	volatile int64_t t30 = -3242333LL;

	t30 = (x121^(x122+(x123%x124)));

	if (t30 != -2147483394LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x126 = 1;
	int8_t x127 = -1;
	volatile uint16_t x128 = UINT16_MAX;

	t31 = (x125^(x126+(x127%x128)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -26LL;
	int16_t x130 = INT16_MIN;
	static int8_t x131 = INT8_MAX;
	volatile int64_t t32 = 1LL;

	t32 = (x129^(x130+(x131%x132)));

	if (t32 != 32665LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x134 = 4082U;
	static uint64_t x135 = 6792801LLU;
	static uint64_t t33 = 1976848LLU;

	t33 = (x133^(x134+(x135%x136)));

	if (t33 != 9223372036861572691LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	volatile int32_t x138 = INT32_MIN;
	int32_t x139 = -1;
	uint64_t x140 = 19783603LLU;

	t34 = (x137^(x138+(x139%x140)));

	if (t34 != 9223372038992312013LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint32_t x142 = 65U;
	uint16_t x143 = 14934U;
	int8_t x144 = -12;
	uint32_t t35 = 188760078U;

	t35 = (x141^(x142+(x143%x144)));

	if (t35 != 4294967239U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = INT64_MIN;
	volatile int8_t x147 = 15;
	volatile int64_t t36 = -253513390453650LL;

	t36 = (x145^(x146+(x147%x148)));

	if (t36 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MIN;
	int16_t x150 = -1;
	int16_t x151 = 0;
	int64_t x152 = INT64_MIN;
	volatile int64_t t37 = 941029444945LL;

	t37 = (x149^(x150+(x151%x152)));

	if (t37 != 32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x153 = -1;
	static volatile uint8_t x154 = 17U;
	static int16_t x156 = INT16_MAX;
	int32_t t38 = 1;

	t38 = (x153^(x154+(x155%x156)));

	if (t38 != -19) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int8_t x158 = -1;
	static volatile int32_t x160 = -1;
	volatile int32_t t39 = 3;

	t39 = (x157^(x158+(x159%x160)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	static int16_t x162 = INT16_MIN;
	int64_t x163 = INT64_MAX;
	static volatile int64_t t40 = 289492106718LL;

	t40 = (x161^(x162+(x163%x164)));

	if (t40 != -9223372034707324929LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 13942107U;
	static uint16_t x168 = 8888U;
	static uint32_t t41 = 30837U;

	t41 = (x165^(x166+(x167%x168)));

	if (t41 != 4281024676U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static int8_t x170 = 0;
	static volatile uint16_t x171 = 3U;
	volatile int64_t x172 = INT64_MIN;
	volatile int64_t t42 = -6665033LL;

	t42 = (x169^(x170+(x171%x172)));

	if (t42 != -32765LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x173 = UINT32_MAX;
	volatile uint64_t x174 = UINT64_MAX;
	volatile uint64_t t43 = 1582553504LLU;

	t43 = (x173^(x174+(x175%x176)));

	if (t43 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MIN;
	static volatile int64_t x179 = -1LL;
	volatile int8_t x180 = INT8_MIN;
	int64_t t44 = -42688783LL;

	t44 = (x177^(x178+(x179%x180)));

	if (t44 != 32639LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 2811842;
	int64_t x182 = INT64_MIN;
	static uint16_t x183 = 15190U;
	volatile uint32_t x184 = UINT32_MAX;
	static int64_t t45 = -506059823540259719LL;

	t45 = (x181^(x182+(x183%x184)));

	if (t45 != -9223372036851966828LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	static uint32_t x190 = 125170U;
	int64_t x191 = INT64_MIN;
	uint16_t x192 = 34U;
	int64_t t46 = 21LL;

	t46 = (x189^(x190+(x191%x192)));

	if (t46 != -125145LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = 0;
	int32_t x195 = -1;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t47 = 2;

	t47 = (x193^(x194+(x195%x196)));

	if (t47 != 5720) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x201 = 0;
	static volatile int16_t x202 = -1;
	int8_t x203 = INT8_MIN;
	uint16_t x204 = 3489U;
	volatile int32_t t48 = -36881906;

	t48 = (x201^(x202+(x203%x204)));

	if (t48 != -129) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x205 = INT32_MIN;
	int16_t x206 = -12;
	int16_t x207 = -1;
	static int32_t x208 = INT32_MIN;
	int32_t t49 = -11;

	t49 = (x205^(x206+(x207%x208)));

	if (t49 != 2147483635) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 707U;
	int64_t x210 = -1LL;
	static int16_t x211 = -1;
	int64_t x212 = 26486898548826629LL;
	static volatile int64_t t50 = 2LL;

	t50 = (x209^(x210+(x211%x212)));

	if (t50 != -707LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = INT32_MIN;
	volatile int32_t x214 = INT32_MIN;
	int32_t x215 = -261408;
	int32_t x216 = -2;
	int32_t t51 = -59;

	t51 = (x213^(x214+(x215%x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x222 = INT8_MIN;
	static int8_t x223 = INT8_MIN;
	int64_t x224 = -1LL;
	int64_t t52 = -121328LL;

	t52 = (x221^(x222+(x223%x224)));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MAX;
	uint64_t x226 = UINT64_MAX;
	static int16_t x227 = INT16_MIN;
	int64_t x228 = 28LL;
	uint64_t t53 = 1LLU;

	t53 = (x225^(x226+(x227%x228)));

	if (t53 != 9223372036854775816LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x229 = 51U;
	uint64_t x230 = UINT64_MAX;
	int32_t x232 = INT32_MIN;
	static uint64_t t54 = 345238LLU;

	t54 = (x229^(x230+(x231%x232)));

	if (t54 != 2147483597LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = -23;
	volatile int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	int32_t t55 = 2;

	t55 = (x233^(x234+(x235%x236)));

	if (t55 != 32873) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = 930200277928826712LLU;
	uint32_t x240 = UINT32_MAX;

	t56 = (x237^(x238+(x239%x240)));

	if (t56 != 930201073011543967LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x242 = 43U;
	volatile int32_t x243 = INT32_MIN;
	static uint32_t x244 = UINT32_MAX;
	static uint32_t t57 = 687699872U;

	t57 = (x241^(x242+(x243%x244)));

	if (t57 != 43U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = 1;
	int16_t x246 = 14;
	static uint32_t x247 = 238U;
	static int32_t x248 = INT32_MAX;
	uint32_t t58 = 37330U;

	t58 = (x245^(x246+(x247%x248)));

	if (t58 != 253U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = 47U;
	static volatile int32_t x250 = -1;
	int8_t x251 = INT8_MIN;
	uint8_t x252 = 45U;
	volatile int32_t t59 = 0;

	t59 = (x249^(x250+(x251%x252)));

	if (t59 != -10) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = 2U;
	static int8_t x255 = INT8_MIN;
	uint8_t x256 = 1U;
	volatile int64_t t60 = -1613994LL;

	t60 = (x253^(x254+(x255%x256)));

	if (t60 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x258 = INT16_MIN;
	volatile int32_t x259 = -48;
	uint8_t x260 = UINT8_MAX;
	int32_t t61 = -224945;

	t61 = (x257^(x258+(x259%x260)));

	if (t61 != -32849) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = -3;
	static int32_t x262 = -28314;
	int16_t x263 = INT16_MIN;
	int32_t x264 = -1;
	volatile int32_t t62 = 293469;

	t62 = (x261^(x262+(x263%x264)));

	if (t62 != 28315) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x265 = INT8_MIN;
	volatile int32_t x266 = INT32_MIN;
	uint64_t x268 = 3420LLU;
	uint64_t t63 = 66LLU;

	t63 = (x265^(x266+(x267%x268)));

	if (t63 != 2147480451LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = INT64_MAX;
	uint32_t x272 = 218U;
	static int64_t t64 = 440777803352793LL;

	t64 = (x269^(x270+(x271%x272)));

	if (t64 != 9223372036854775622LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = UINT16_MAX;
	int32_t x274 = 1;
	volatile uint32_t x275 = 0U;
	uint8_t x276 = 18U;
	uint32_t t65 = 168U;

	t65 = (x273^(x274+(x275%x276)));

	if (t65 != 65534U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x277 = INT16_MIN;
	volatile int32_t x278 = -1;
	int8_t x279 = INT8_MIN;
	uint32_t x280 = UINT32_MAX;

	t66 = (x277^(x278+(x279%x280)));

	if (t66 != 32639U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x285 = -225801;
	static uint16_t x287 = 130U;
	volatile int32_t x288 = -1;

	t67 = (x285^(x286+(x287%x288)));

	if (t67 != 225800) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x289 = UINT16_MAX;
	uint64_t x291 = UINT64_MAX;
	uint64_t t68 = 918LLU;

	t68 = (x289^(x290+(x291%x292)));

	if (t68 != 65280LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x293 = 24336U;
	int8_t x294 = -1;
	int8_t x295 = -1;
	int32_t x296 = -1;
	int32_t t69 = 8623486;

	t69 = (x293^(x294+(x295%x296)));

	if (t69 != -24337) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x298 = -1;
	uint16_t x299 = UINT16_MAX;
	uint64_t x300 = 4091919LLU;
	static volatile uint64_t t70 = 421451029131415176LLU;

	t70 = (x297^(x298+(x299%x300)));

	if (t70 != 1310021708057LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x302 = 244U;
	int8_t x303 = INT8_MIN;
	int16_t x304 = -30;
	int32_t t71 = -58;

	t71 = (x301^(x302+(x303%x304)));

	if (t71 != 2541) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x305 = INT8_MAX;
	int64_t x306 = -9370LL;
	uint32_t x307 = UINT32_MAX;

	t72 = (x305^(x306+(x307%x308)));

	if (t72 != 4294957850LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = -3;
	uint64_t t73 = 703350021631638LLU;

	t73 = (x309^(x310+(x311%x312)));

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x313 = -1;
	volatile uint16_t x314 = 52U;
	uint64_t x315 = UINT64_MAX;
	uint16_t x316 = 55U;
	uint64_t t74 = 1807516133LLU;

	t74 = (x313^(x314+(x315%x316)));

	if (t74 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x317 = -3;
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = INT16_MAX;
	int64_t x320 = INT64_MAX;
	int64_t t75 = -269323897LL;

	t75 = (x317^(x318+(x319%x320)));

	if (t75 != -33021LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x326 = 5951324603687789885LLU;
	uint32_t x327 = 9U;
	volatile uint64_t x328 = 377727902965094754LLU;
	static uint64_t t76 = 36140399304LLU;

	t76 = (x325^(x326+(x327%x328)));

	if (t76 != 5951324603701088950LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = -1;
	volatile uint8_t x330 = 13U;
	static volatile int32_t x332 = -1;
	volatile int32_t t77 = 909322353;

	t77 = (x329^(x330+(x331%x332)));

	if (t77 != -14) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = 56351;
	uint32_t x335 = 12125U;
	volatile int8_t x336 = INT8_MAX;
	volatile uint64_t t78 = 409891255LLU;

	t78 = (x333^(x334+(x335%x336)));

	if (t78 != 260620455412582LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = -1;
	int64_t x338 = -1LL;
	volatile int16_t x339 = INT16_MIN;

	t79 = (x337^(x338+(x339%x340)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x341 = -1LL;
	volatile uint32_t x342 = 43U;
	volatile int8_t x343 = INT8_MIN;
	uint8_t x344 = 7U;
	volatile int64_t t80 = -2772634228168LL;

	t80 = (x341^(x342+(x343%x344)));

	if (t80 != -42LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x349 = INT8_MAX;
	int16_t x351 = INT16_MIN;
	int32_t t81 = -17555861;

	t81 = (x349^(x350+(x351%x352)));

	if (t81 != -32889) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x354 = UINT16_MAX;
	uint64_t x356 = 3553LLU;
	volatile uint64_t t82 = 22LLU;

	t82 = (x353^(x354+(x355%x356)));

	if (t82 != 18446744073709486078LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x357 = 13889U;
	static int32_t x360 = INT32_MAX;
	volatile uint64_t t83 = 339LLU;

	t83 = (x357^(x358+(x359%x360)));

	if (t83 != 1728415691LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x361 = UINT8_MAX;
	uint16_t x362 = UINT16_MAX;
	int16_t x363 = 5606;
	static volatile uint8_t x364 = UINT8_MAX;
	int32_t t84 = -14487097;

	t84 = (x361^(x362+(x363%x364)));

	if (t84 != 65541) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x365 = 12987143U;
	int64_t x366 = -1LL;
	int32_t x368 = -1;

	t85 = (x365^(x366+(x367%x368)));

	if (t85 != -12987144LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x369 = INT16_MAX;
	uint16_t x370 = 6U;
	uint8_t x371 = UINT8_MAX;
	uint16_t x372 = 138U;
	static int32_t t86 = -1;

	t86 = (x369^(x370+(x371%x372)));

	if (t86 != 32644) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = INT64_MIN;
	static int64_t x374 = INT64_MAX;
	uint64_t x375 = 253305912594740794LLU;
	uint32_t x376 = UINT32_MAX;
	volatile uint64_t t87 = 3710154LLU;

	t87 = (x373^(x374+(x375%x376)));

	if (t87 != 2939888283LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x378 = INT8_MIN;
	static int32_t x379 = INT32_MIN;
	int32_t x380 = INT32_MIN;
	volatile int32_t t88 = -1935;

	t88 = (x377^(x378+(x379%x380)));

	if (t88 != 2147483520) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x381 = INT8_MAX;
	int64_t x382 = -134559399799437LL;
	uint32_t x383 = 2101055713U;
	int64_t x384 = 12LL;
	int64_t t89 = -4082330165LL;

	t89 = (x381^(x382+(x383%x384)));

	if (t89 != -134559399799541LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = INT8_MIN;
	static volatile int16_t x387 = 174;
	int16_t x388 = -4144;
	int32_t t90 = -3304398;

	t90 = (x385^(x386+(x387%x388)));

	if (t90 != -2147483602) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x389 = -1;
	static int8_t x390 = -9;
	static volatile uint8_t x391 = 1U;
	uint16_t x392 = UINT16_MAX;
	int32_t t91 = 0;

	t91 = (x389^(x390+(x391%x392)));

	if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = INT64_MIN;
	volatile int8_t x394 = INT8_MIN;
	int16_t x396 = INT16_MIN;

	t92 = (x393^(x394+(x395%x396)));

	if (t92 != 9223372036854775654LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x397 = -1;
	static volatile int64_t x398 = INT64_MAX;
	static uint16_t x400 = 462U;
	int64_t t93 = 32208383318132LL;

	t93 = (x397^(x398+(x399%x400)));

	if (t93 != -9223372036854775380LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x402 = 4U;
	uint8_t x403 = 1U;
	int8_t x404 = INT8_MIN;
	int32_t t94 = 6;

	t94 = (x401^(x402+(x403%x404)));

	if (t94 != -6) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = -1;
	int64_t x406 = INT64_MIN;
	volatile int16_t x407 = -1;
	uint32_t x408 = 21652U;
	int64_t t95 = -45831867LL;

	t95 = (x405^(x406+(x407%x408)));

	if (t95 != 9223372036854764188LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x409 = INT64_MIN;
	volatile int64_t x411 = INT64_MAX;
	uint32_t x412 = UINT32_MAX;
	static int64_t t96 = 1217492269989591210LL;

	t96 = (x409^(x410+(x411%x412)));

	if (t96 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MAX;
	int8_t x414 = -14;
	uint64_t x415 = UINT64_MAX;
	int8_t x416 = -1;
	uint64_t t97 = 2917424LLU;

	t97 = (x413^(x414+(x415%x416)));

	if (t97 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x417 = 7LLU;
	uint16_t x419 = UINT16_MAX;
	uint64_t t98 = 54799304687661LLU;

	t98 = (x417^(x418+(x419%x420)));

	if (t98 != 65785LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x421 = 3559893694LLU;
	int16_t x423 = INT16_MIN;
	uint32_t x424 = 13566U;
	volatile uint64_t t99 = 1100022754878431LLU;

	t99 = (x421^(x422+(x423%x424)));

	if (t99 != 1412411608LLU) { NG(); } else { ; }
	
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

