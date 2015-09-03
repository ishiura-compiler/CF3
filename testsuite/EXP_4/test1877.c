#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
uint8_t x6 = 6U;
volatile int64_t x9 = INT64_MIN;
int8_t x18 = 38;
int8_t x21 = 0;
volatile uint64_t x22 = 143396549303487073LLU;
int64_t x25 = -1LL;
static volatile uint16_t x26 = UINT16_MAX;
int32_t t7 = 31326112;
int8_t x40 = INT8_MIN;
int32_t t8 = -2176;
static uint16_t x63 = 2U;
volatile uint64_t t11 = 28811190312349394LLU;
volatile int16_t x66 = 4;
int32_t x67 = INT32_MAX;
int16_t x71 = -1;
uint16_t x73 = 102U;
volatile uint64_t t14 = 330927393946716LLU;
uint64_t t16 = 131243217685135801LLU;
int8_t x88 = INT8_MIN;
int16_t x91 = INT16_MIN;
int32_t t18 = 854;
uint8_t x93 = 0U;
int64_t t20 = -6LL;
int64_t x107 = INT64_MIN;
volatile int8_t x110 = INT8_MAX;
volatile uint64_t t23 = 88006052485LLU;
volatile int32_t x116 = INT32_MIN;
volatile uint32_t t24 = 54U;
int8_t x121 = 0;
volatile int32_t t25 = 59431;
volatile uint8_t x127 = 60U;
uint32_t x133 = UINT32_MAX;
volatile int8_t x137 = INT8_MIN;
volatile int32_t x138 = INT32_MIN;
static int16_t x151 = -6374;
uint32_t x157 = 15U;
int64_t x169 = -14555633879LL;
static int64_t x178 = INT64_MIN;
int64_t t36 = -33565271774981955LL;
int16_t x182 = INT16_MAX;
int32_t x187 = -110;
int8_t x188 = 0;
uint64_t t38 = 1089774557813248075LLU;
uint64_t x190 = 8622LLU;
int64_t x204 = INT64_MIN;
static uint32_t x207 = 51466778U;
volatile uint64_t x213 = UINT64_MAX;
volatile uint16_t x215 = 241U;
volatile uint8_t x219 = UINT8_MAX;
int32_t x222 = -292;
static uint32_t x229 = 155067U;
uint8_t x233 = 8U;
int8_t x236 = INT8_MIN;
uint8_t x246 = 5U;
volatile int16_t x247 = 42;
static uint64_t t51 = 2876038575602073178LLU;
int64_t x255 = -1LL;
static volatile int64_t x257 = -1LL;
volatile int64_t t54 = -30LL;
int8_t x266 = INT8_MIN;
volatile int64_t x270 = -217508662LL;
uint64_t x278 = 458494500LLU;
static int16_t x282 = 184;
volatile uint64_t x286 = 0LLU;
static int32_t x294 = -9;
static uint8_t x307 = 7U;
static int16_t x308 = 0;
uint64_t x311 = 223117391426LLU;
int64_t x312 = 249152LL;
volatile int8_t x315 = -2;
int64_t x321 = -28457351880LL;
uint8_t x323 = UINT8_MAX;
int64_t x327 = INT64_MAX;
static uint16_t x329 = 13U;
static int16_t x331 = -1;
int64_t t71 = -309933795921276693LL;
volatile int8_t x333 = -1;
int32_t x334 = -1;
volatile int16_t x335 = INT16_MAX;
static uint64_t x340 = 173750647605098629LLU;
int64_t x341 = -1LL;
int16_t x344 = 1;
static uint64_t x346 = UINT64_MAX;
uint32_t x354 = UINT32_MAX;
static uint8_t x355 = 31U;
volatile uint64_t t77 = 432013LLU;
int16_t x362 = INT16_MIN;
int8_t x363 = INT8_MIN;
volatile int32_t t79 = -1029591635;
static int64_t t80 = 1155136LL;
int32_t x381 = INT32_MIN;
uint64_t t83 = 31050LLU;
static int32_t t84 = 125014;
uint16_t x394 = UINT16_MAX;
volatile uint64_t t87 = 4159761940177LLU;
volatile int16_t x418 = INT16_MAX;
static uint32_t x421 = UINT32_MAX;
uint64_t x423 = 673346268LLU;
int64_t x430 = -443635090033LL;
int16_t x432 = -13;
uint32_t x436 = UINT32_MAX;
uint8_t x451 = 1U;
int8_t x456 = -1;
static int8_t x460 = INT8_MAX;


void f0(void) {
	uint8_t x1 = 46U;
	volatile uint64_t x2 = UINT64_MAX;
	static int16_t x3 = INT16_MAX;
	uint64_t t0 = 2112989996512940LLU;

	t0 = (x1%(x2-(x3|x4)));

	if (t0 != 46LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -40763414LL;
	uint16_t x7 = 396U;
	uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = 17832LL;

	t1 = (x5%(x6-(x7|x8)));

	if (t1 != -4376LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	uint8_t x11 = UINT8_MAX;
	int8_t x12 = 0;
	volatile int64_t t2 = 3094818550LL;

	t2 = (x9%(x10-(x11|x12)));

	if (t2 != -17732LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = -45379745374156LL;
	int8_t x15 = INT8_MIN;
	int16_t x16 = 938;
	int64_t t3 = 6802LL;

	t3 = (x13%(x14-(x15|x16)));

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -6;
	int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -3968;

	t4 = (x17%(x18-(x19|x20)));

	if (t4 != -6) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = INT32_MIN;
	uint32_t x24 = 1U;
	uint64_t t5 = 670LLU;

	t5 = (x21%(x22-(x23|x24)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x27 = -1;
	uint8_t x28 = 4U;
	int64_t t6 = 20234914923539490LL;

	t6 = (x25%(x26-(x27|x28)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -34;
	int16_t x30 = INT16_MIN;
	uint8_t x31 = 44U;
	volatile int16_t x32 = INT16_MIN;

	t7 = (x29%(x30-(x31|x32)));

	if (t7 != -34) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x37 = INT8_MIN;
	volatile uint8_t x38 = 1U;
	int16_t x39 = INT16_MIN;

	t8 = (x37%(x38-(x39|x40)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	static volatile int16_t x50 = -3;
	int32_t x51 = 14;
	int16_t x52 = -1;
	static volatile int32_t t9 = -41463;

	t9 = (x49%(x50-(x51|x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = 102444923U;
	volatile int32_t x58 = INT32_MIN;
	static volatile uint16_t x59 = 7U;
	volatile uint32_t x60 = UINT32_MAX;
	static uint32_t t10 = 29156U;

	t10 = (x57%(x58-(x59|x60)));

	if (t10 != 102444923U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x61 = 5864839LLU;
	uint64_t x62 = 243127020674590LLU;
	int16_t x64 = -1;

	t11 = (x61%(x62-(x63|x64)));

	if (t11 != 5864839LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -1;
	uint8_t x68 = 12U;
	int32_t t12 = 524834403;

	t12 = (x65%(x66-(x67|x68)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MIN;
	static int16_t x70 = 0;
	uint8_t x72 = 3U;
	int32_t t13 = -21;

	t13 = (x69%(x70-(x71|x72)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x74 = -1LL;
	int8_t x75 = INT8_MIN;
	volatile uint64_t x76 = 940973644661380LLU;

	t14 = (x73%(x74-(x75|x76)));

	if (t14 != 102LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MIN;
	uint32_t x78 = 322U;
	static uint8_t x79 = UINT8_MAX;
	int16_t x80 = INT16_MAX;
	volatile int64_t t15 = -960LL;

	t15 = (x77%(x78-(x79|x80)));

	if (t15 != -2673806438LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x81 = 27263394U;
	static int32_t x82 = -1;
	int64_t x83 = INT64_MAX;
	uint64_t x84 = 1280LLU;

	t16 = (x81%(x82-(x83|x84)));

	if (t16 != 27263394LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = INT16_MIN;
	static int16_t x86 = INT16_MIN;
	static volatile int64_t x87 = INT64_MIN;
	int64_t t17 = -26LL;

	t17 = (x85%(x86-(x87|x88)));

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MAX;
	static int16_t x90 = INT16_MAX;
	uint8_t x92 = 26U;

	t18 = (x89%(x90-(x91|x92)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x94 = INT16_MIN;
	volatile uint32_t x95 = 6003U;
	int8_t x96 = INT8_MIN;
	uint32_t t19 = 5559015U;

	t19 = (x93%(x94-(x95|x96)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x97 = UINT32_MAX;
	volatile uint16_t x98 = 25U;
	int64_t x99 = -1LL;
	static int8_t x100 = INT8_MIN;

	t20 = (x97%(x98-(x99|x100)));

	if (t20 != 21LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x101 = 8557U;
	volatile int32_t x102 = INT32_MAX;
	static int64_t x103 = INT64_MIN;
	int64_t x104 = -1LL;
	volatile int64_t t21 = 2LL;

	t21 = (x101%(x102-(x103|x104)));

	if (t21 != 8557LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MAX;
	int64_t x106 = INT64_MIN;
	uint32_t x108 = 17U;
	static volatile int64_t t22 = 203720281331026786LL;

	t22 = (x105%(x106-(x107|x108)));

	if (t22 != 8LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x109 = UINT8_MAX;
	uint64_t x111 = UINT64_MAX;
	int32_t x112 = INT32_MIN;

	t23 = (x109%(x110-(x111|x112)));

	if (t23 != 127LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = INT32_MAX;
	static int16_t x114 = INT16_MAX;
	static volatile uint32_t x115 = 34U;

	t24 = (x113%(x114-(x115|x116)));

	if (t24 != 2147483647U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x122 = INT8_MAX;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = INT16_MIN;

	t25 = (x121%(x122-(x123|x124)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x125 = INT32_MAX;
	int16_t x126 = -1;
	int32_t x128 = INT32_MAX;
	int32_t t26 = INT32_MAX;

	t26 = (x125%(x126-(x127|x128)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MAX;
	static int64_t x130 = -202LL;
	int32_t x131 = INT32_MIN;
	int8_t x132 = INT8_MIN;
	int64_t t27 = -238LL;

	t27 = (x129%(x130-(x131|x132)));

	if (t27 != 53LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x134 = UINT16_MAX;
	volatile uint32_t x135 = UINT32_MAX;
	int8_t x136 = -1;
	uint32_t t28 = 268U;

	t28 = (x133%(x134-(x135|x136)));

	if (t28 != 65535U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x139 = INT8_MIN;
	uint64_t x140 = 524093LLU;
	static volatile uint64_t t29 = 64258583974LLU;

	t29 = (x137%(x138-(x139|x140)));

	if (t29 != 2147483453LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 26233U;
	int16_t x142 = 727;
	int32_t x143 = INT32_MIN;
	volatile uint64_t x144 = UINT64_MAX;
	volatile uint64_t t30 = 15588LLU;

	t30 = (x141%(x142-(x143|x144)));

	if (t30 != 25LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x149 = INT8_MAX;
	static int32_t x150 = INT32_MIN;
	uint8_t x152 = 11U;
	int32_t t31 = 38;

	t31 = (x149%(x150-(x151|x152)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = INT8_MIN;
	uint32_t x155 = UINT32_MAX;
	int8_t x156 = INT8_MIN;
	volatile uint32_t t32 = 2131500U;

	t32 = (x153%(x154-(x155|x156)));

	if (t32 != 4294934528U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x158 = 2659998LLU;
	int8_t x159 = 2;
	int16_t x160 = INT16_MAX;
	uint64_t t33 = 1878169989LLU;

	t33 = (x157%(x158-(x159|x160)));

	if (t33 != 15LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = INT64_MAX;
	static uint64_t x162 = 4265LLU;
	int16_t x163 = 1;
	int64_t x164 = INT64_MIN;
	volatile uint64_t t34 = 5763100786165882LLU;

	t34 = (x161%(x162-(x163|x164)));

	if (t34 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x170 = 1552217242903LLU;
	int64_t x171 = -1LL;
	int16_t x172 = INT16_MIN;
	volatile uint64_t t35 = 3407742LLU;

	t35 = (x169%(x170-(x171|x172)));

	if (t35 != 317327418737LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int16_t x179 = INT16_MIN;
	static uint16_t x180 = 139U;

	t36 = (x177%(x178-(x179|x180)));

	if (t36 != 255LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x181 = 8;
	volatile int32_t x183 = -8318167;
	static uint16_t x184 = 1U;
	int32_t t37 = -14;

	t37 = (x181%(x182-(x183|x184)));

	if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x185 = UINT64_MAX;
	uint8_t x186 = 28U;

	t38 = (x185%(x186-(x187|x188)));

	if (t38 != 51LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x189 = INT32_MAX;
	uint8_t x191 = 6U;
	static int16_t x192 = 988;
	static uint64_t t39 = 74760592435LLU;

	t39 = (x189%(x190-(x191|x192)));

	if (t39 != 6751LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = -99;
	int8_t x198 = INT8_MAX;
	volatile int64_t x199 = -648040870562LL;
	int16_t x200 = INT16_MIN;
	volatile int64_t t40 = 67LL;

	t40 = (x197%(x198-(x199|x200)));

	if (t40 != -99LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = 1935;
	int64_t x202 = -1LL;
	static int32_t x203 = INT32_MAX;
	int64_t t41 = 206LL;

	t41 = (x201%(x202-(x203|x204)));

	if (t41 != 1935LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x205 = 1U;
	int32_t x206 = INT32_MAX;
	uint64_t x208 = UINT64_MAX;
	uint64_t t42 = 1250229LLU;

	t42 = (x205%(x206-(x207|x208)));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = INT64_MIN;
	int16_t x210 = 6539;
	int16_t x211 = -36;
	int8_t x212 = -3;
	int64_t t43 = 22937448LL;

	t43 = (x209%(x210-(x211|x212)));

	if (t43 != -3772LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x214 = INT8_MAX;
	int32_t x216 = INT32_MIN;
	uint64_t t44 = 124963LLU;

	t44 = (x213%(x214-(x215|x216)));

	if (t44 != 51983LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = -1;
	int8_t x218 = -22;
	volatile int16_t x220 = INT16_MIN;
	int32_t t45 = -403596779;

	t45 = (x217%(x218-(x219|x220)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x221 = 116LL;
	int8_t x223 = INT8_MAX;
	int16_t x224 = -1;
	int64_t t46 = -27309LL;

	t46 = (x221%(x222-(x223|x224)));

	if (t46 != 116LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x225 = 126982020U;
	int32_t x226 = 104835;
	volatile int8_t x227 = -1;
	static volatile uint8_t x228 = UINT8_MAX;
	static volatile uint32_t t47 = 16888288U;

	t47 = (x225%(x226-(x227|x228)));

	if (t47 != 25624U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x230 = INT8_MAX;
	volatile uint32_t x231 = 391651U;
	int32_t x232 = 27;
	uint32_t t48 = 1323168956U;

	t48 = (x229%(x230-(x231|x232)));

	if (t48 != 155067U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x234 = -1;
	int64_t x235 = INT64_MIN;
	int64_t t49 = 13760743603LL;

	t49 = (x233%(x234-(x235|x236)));

	if (t49 != 8LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = -1;
	int8_t x238 = -1;
	int16_t x239 = 1;
	int8_t x240 = INT8_MIN;
	int32_t t50 = -2802;

	t50 = (x237%(x238-(x239|x240)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x245 = 78002067908LLU;
	int64_t x248 = -1LL;

	t51 = (x245%(x246-(x247|x248)));

	if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = -855LL;
	uint8_t x250 = 5U;
	uint32_t x251 = 0U;
	static uint16_t x252 = 1437U;
	volatile int64_t t52 = -3431726LL;

	t52 = (x249%(x250-(x251|x252)));

	if (t52 != -855LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x253 = UINT16_MAX;
	static int64_t x254 = 8704835114127LL;
	volatile int64_t x256 = -131536179346060LL;
	int64_t t53 = -367088177950325LL;

	t53 = (x253%(x254-(x255|x256)));

	if (t53 != 65535LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x258 = 3470684U;
	int64_t x259 = -1LL;
	uint8_t x260 = 23U;

	t54 = (x257%(x258-(x259|x260)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = 6331481;
	static volatile int32_t x262 = INT32_MIN;
	volatile int32_t x263 = -163;
	int8_t x264 = 0;
	volatile int32_t t55 = -15216851;

	t55 = (x261%(x262-(x263|x264)));

	if (t55 != 6331481) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = 268;
	int64_t x267 = INT64_MIN;
	uint32_t x268 = UINT32_MAX;
	static int64_t t56 = 62757678165224163LL;

	t56 = (x265%(x266-(x267|x268)));

	if (t56 != 268LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x269 = 14U;
	int8_t x271 = INT8_MAX;
	int64_t x272 = 289LL;
	int64_t t57 = 73226289902757LL;

	t57 = (x269%(x270-(x271|x272)));

	if (t57 != 14LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x273 = 130U;
	int16_t x274 = -1;
	static int8_t x275 = INT8_MAX;
	uint64_t x276 = 68636115803033563LLU;
	static uint64_t t58 = 272LLU;

	t58 = (x273%(x274-(x275|x276)));

	if (t58 != 130LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = INT32_MIN;
	int32_t x279 = -1;
	volatile uint64_t x280 = 1LLU;
	uint64_t t59 = 115226049819LLU;

	t59 = (x277%(x278-(x279|x280)));

	if (t59 != 315455435LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x281 = UINT8_MAX;
	volatile int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MAX;
	int64_t t60 = 10LL;

	t60 = (x281%(x282-(x283|x284)));

	if (t60 != 70LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x285 = -467826620773863LL;
	volatile int32_t x287 = -11;
	volatile int32_t x288 = INT32_MIN;
	uint64_t t61 = 1420245611108373498LLU;

	t61 = (x285%(x286-(x287|x288)));

	if (t61 != 6LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x289 = UINT16_MAX;
	volatile uint16_t x290 = UINT16_MAX;
	uint32_t x291 = UINT32_MAX;
	int32_t x292 = INT32_MAX;
	uint32_t t62 = 22445283U;

	t62 = (x289%(x290-(x291|x292)));

	if (t62 != 65535U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = INT64_MIN;
	int8_t x295 = -1;
	volatile int32_t x296 = INT32_MIN;
	int64_t t63 = -15990243723LL;

	t63 = (x293%(x294-(x295|x296)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = INT64_MAX;
	static uint8_t x302 = UINT8_MAX;
	int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MIN;
	int64_t t64 = 0LL;

	t64 = (x301%(x302-(x303|x304)));

	if (t64 != 17731LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x305 = 107228644;
	uint16_t x306 = 7784U;
	int32_t t65 = -11546;

	t65 = (x305%(x306-(x307|x308)));

	if (t65 != 7145) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x309 = 127U;
	static int8_t x310 = INT8_MAX;
	uint64_t t66 = 435722591368889113LLU;

	t66 = (x309%(x310-(x311|x312)));

	if (t66 != 127LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x313 = INT16_MAX;
	uint8_t x314 = UINT8_MAX;
	int64_t x316 = -23958282564066LL;
	volatile int64_t t67 = 448320348LL;

	t67 = (x313%(x314-(x315|x316)));

	if (t67 != 128LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MIN;
	volatile int32_t x318 = -578175;
	int64_t x319 = -50316LL;
	volatile int32_t x320 = -175852516;
	int64_t t68 = 22LL;

	t68 = (x317%(x318-(x319|x320)));

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x322 = INT16_MIN;
	int8_t x324 = -6;
	int64_t t69 = -309368420530LL;

	t69 = (x321%(x322-(x323|x324)));

	if (t69 != -31555LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x325 = -1;
	volatile uint16_t x326 = 149U;
	uint64_t x328 = UINT64_MAX;
	uint64_t t70 = 141084636856LLU;

	t70 = (x325%(x326-(x327|x328)));

	if (t70 != 15LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x330 = INT64_MIN;
	int64_t x332 = INT64_MAX;

	t71 = (x329%(x330-(x331|x332)));

	if (t71 != 13LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x336 = 15201LL;
	int64_t t72 = 24587093101998723LL;

	t72 = (x333%(x334-(x335|x336)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x337 = INT32_MAX;
	int64_t x338 = INT64_MIN;
	static int16_t x339 = 1672;
	uint64_t t73 = 10353887838202388LLU;

	t73 = (x337%(x338-(x339|x340)));

	if (t73 != 2147483647LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x342 = INT16_MIN;
	static volatile int8_t x343 = INT8_MIN;
	int64_t t74 = -49346440186LL;

	t74 = (x341%(x342-(x343|x344)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = -61;
	int64_t x347 = INT64_MIN;
	int8_t x348 = 5;
	volatile uint64_t t75 = 4140213663197784421LLU;

	t75 = (x345%(x346-(x347|x348)));

	if (t75 != 9223372036854775753LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = INT8_MIN;
	uint64_t x356 = 8142744984LLU;
	static volatile uint64_t t76 = 16256115406785220LLU;

	t76 = (x353%(x354-(x355|x356)));

	if (t76 != 3847777568LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = -64;
	uint8_t x359 = 11U;
	volatile uint8_t x360 = 7U;

	t77 = (x357%(x358-(x359|x360)));

	if (t77 != 78LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x361 = UINT32_MAX;
	volatile uint8_t x364 = UINT8_MAX;
	volatile uint32_t t78 = 4039U;

	t78 = (x361%(x362-(x363|x364)));

	if (t78 != 32766U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x365 = UINT8_MAX;
	static int16_t x366 = 62;
	int8_t x367 = -1;
	int8_t x368 = -1;

	t79 = (x365%(x366-(x367|x368)));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x369 = 166349675;
	int64_t x370 = -1LL;
	volatile int32_t x371 = INT32_MIN;
	volatile uint32_t x372 = UINT32_MAX;

	t80 = (x369%(x370-(x371|x372)));

	if (t80 != 166349675LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x373 = UINT8_MAX;
	volatile int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MAX;
	int16_t x376 = -172;
	static volatile int32_t t81 = -7062514;

	t81 = (x373%(x374-(x375|x376)));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x377 = 79934U;
	int32_t x378 = INT32_MIN;
	volatile int16_t x379 = -1;
	uint16_t x380 = UINT16_MAX;
	uint32_t t82 = 839980666U;

	t82 = (x377%(x378-(x379|x380)));

	if (t82 != 79934U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x382 = UINT64_MAX;
	volatile int16_t x383 = INT16_MIN;
	uint16_t x384 = 8U;

	t83 = (x381%(x382-(x383|x384)));

	if (t83 != 6537LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x389 = -1;
	uint8_t x390 = 3U;
	static volatile uint8_t x391 = 4U;
	int32_t x392 = -8492;

	t84 = (x389%(x390-(x391|x392)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x393 = 2226;
	static int64_t x395 = INT64_MAX;
	uint16_t x396 = 12U;
	int64_t t85 = -2295437419618658LL;

	t85 = (x393%(x394-(x395|x396)));

	if (t85 != 2226LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x397 = INT32_MIN;
	uint16_t x398 = UINT16_MAX;
	int64_t x399 = INT64_MAX;
	static int8_t x400 = INT8_MIN;
	static int64_t t86 = 33701013LL;

	t86 = (x397%(x398-(x399|x400)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = -1;
	static volatile int8_t x402 = INT8_MIN;
	volatile uint64_t x403 = 2215684430682LLU;
	int64_t x404 = 861LL;

	t87 = (x401%(x402-(x403|x404)));

	if (t87 != 2215684430814LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x405 = 1212564LLU;
	int16_t x406 = 0;
	uint64_t x407 = 2999376606402LLU;
	int8_t x408 = -2;
	volatile uint64_t t88 = 28LLU;

	t88 = (x405%(x406-(x407|x408)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x409 = 432903353973LLU;
	uint8_t x410 = 6U;
	int32_t x411 = 7491300;
	static int16_t x412 = -1;
	static volatile uint64_t t89 = 268146606917LLU;

	t89 = (x409%(x410-(x411|x412)));

	if (t89 != 6LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = INT32_MIN;
	static int16_t x419 = INT16_MIN;
	static uint64_t x420 = 83705198913611LLU;
	static uint64_t t90 = 213878324LLU;

	t90 = (x417%(x418-(x419|x420)));

	if (t90 != 16448LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x422 = -1;
	static int8_t x424 = INT8_MIN;
	uint64_t t91 = 1LLU;

	t91 = (x421%(x422-(x423|x424)));

	if (t91 != 10LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x429 = INT16_MIN;
	uint8_t x431 = UINT8_MAX;
	volatile int64_t t92 = 83749733065563LL;

	t92 = (x429%(x430-(x431|x432)));

	if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x433 = -1;
	uint16_t x434 = 4U;
	static uint32_t x435 = UINT32_MAX;
	uint32_t t93 = 1U;

	t93 = (x433%(x434-(x435|x436)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x437 = 5U;
	int32_t x438 = 2;
	int8_t x439 = INT8_MIN;
	static int16_t x440 = INT16_MIN;
	int32_t t94 = -501162;

	t94 = (x437%(x438-(x439|x440)));

	if (t94 != 5) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x441 = 0U;
	int8_t x442 = -1;
	volatile int64_t x443 = -78595531574269LL;
	static volatile int32_t x444 = INT32_MAX;
	static int64_t t95 = -113LL;

	t95 = (x441%(x442-(x443|x444)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x449 = UINT8_MAX;
	int16_t x450 = 9;
	uint32_t x452 = UINT32_MAX;
	uint32_t t96 = 1U;

	t96 = (x449%(x450-(x451|x452)));

	if (t96 != 5U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = INT32_MIN;
	uint32_t x454 = UINT32_MAX;
	uint64_t x455 = 14193321474470837LLU;
	volatile uint64_t t97 = 1LLU;

	t97 = (x453%(x454-(x455|x456)));

	if (t97 != 2147483648LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x457 = 46U;
	static uint64_t x458 = UINT64_MAX;
	int8_t x459 = 47;
	volatile uint64_t t98 = 297479964155266LLU;

	t98 = (x457%(x458-(x459|x460)));

	if (t98 != 46LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x461 = -6714830;
	int32_t x462 = INT32_MAX;
	uint64_t x463 = 23997396628731LLU;
	int32_t x464 = -1;
	uint64_t t99 = 8212607915LLU;

	t99 = (x461%(x462-(x463|x464)));

	if (t99 != 2140768818LLU) { NG(); } else { ; }
	
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

