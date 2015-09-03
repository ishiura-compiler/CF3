#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x6 = -1;
static int64_t x16 = -1LL;
int64_t x17 = INT64_MAX;
uint64_t x19 = UINT64_MAX;
static int8_t x20 = INT8_MIN;
uint16_t x22 = 6U;
uint8_t x29 = 41U;
volatile int16_t x41 = -1;
static int32_t x44 = INT32_MIN;
int32_t x48 = -1;
int64_t x53 = INT64_MIN;
int32_t x55 = INT32_MAX;
uint64_t t13 = 23548161521738932LLU;
int8_t x65 = INT8_MAX;
volatile int32_t x67 = 1968;
volatile uint64_t t18 = 1667319LLU;
static int32_t t19 = 20;
volatile int64_t x82 = INT64_MAX;
int8_t x84 = 3;
volatile int64_t t20 = 3765725953LL;
static volatile int16_t x85 = INT16_MIN;
uint32_t x87 = 2U;
volatile uint32_t t21 = 255932751U;
int16_t x93 = INT16_MIN;
static int32_t x99 = INT32_MAX;
uint16_t x100 = UINT16_MAX;
int32_t x108 = INT32_MIN;
volatile int64_t t25 = 6076LL;
int8_t x111 = INT8_MAX;
static volatile int64_t t26 = -22911LL;
int8_t x113 = INT8_MIN;
static int8_t x116 = -1;
volatile int64_t t27 = 2558125333LL;
int32_t x124 = INT32_MAX;
volatile int64_t x126 = INT64_MIN;
volatile uint64_t t32 = 54706867128983844LLU;
uint64_t x139 = 964435LLU;
volatile int64_t x141 = -1LL;
int8_t x147 = -36;
volatile int64_t t35 = -674434LL;
int32_t x154 = INT32_MIN;
uint16_t x160 = 20U;
volatile int8_t x161 = 0;
int8_t x165 = -1;
static int16_t x178 = INT16_MAX;
volatile int32_t x180 = INT32_MAX;
int64_t x185 = INT64_MIN;
volatile uint8_t x192 = 112U;
int64_t x198 = 191LL;
volatile int32_t x199 = INT32_MIN;
int16_t x213 = -1;
volatile uint64_t x216 = 717179131985966LLU;
volatile uint64_t t51 = 45LLU;
uint32_t x219 = 1778004U;
uint64_t x220 = 459LLU;
uint32_t x223 = 845037822U;
volatile uint32_t t54 = 189087U;
uint8_t x238 = 1U;
int64_t t56 = 24598394LL;
uint32_t x242 = 18282556U;
uint8_t x243 = 10U;
uint32_t x247 = UINT32_MAX;
volatile int8_t x258 = 1;
static uint16_t x259 = 1281U;
volatile uint32_t t62 = 5U;
int8_t x268 = -1;
uint8_t x270 = 1U;
int16_t x272 = INT16_MAX;
int16_t x276 = -1;
int32_t x286 = INT32_MAX;
int32_t x294 = -521333;
volatile uint64_t x300 = UINT64_MAX;
volatile uint32_t t72 = 61588U;
static uint32_t t74 = 0U;
static uint32_t x317 = 0U;
uint64_t x319 = 539082147LLU;
int8_t x320 = 3;
volatile uint64_t t76 = 3LLU;
volatile uint64_t x324 = UINT64_MAX;
int16_t x330 = -686;
uint64_t x341 = 6707905478109LLU;
volatile uint64_t t82 = 106858LLU;
uint32_t x353 = 41096501U;
int8_t x354 = INT8_MIN;
volatile uint16_t x360 = 451U;
volatile int64_t x363 = INT64_MIN;
int16_t x366 = INT16_MIN;
volatile int8_t x373 = 1;
static int32_t x376 = INT32_MAX;
int32_t t90 = -4863244;
static uint64_t t91 = 4521999023793LLU;
int8_t x386 = -13;
static uint8_t x393 = 2U;
volatile int8_t x394 = -1;
volatile int32_t t95 = 49026802;
static int16_t x398 = -515;
uint64_t x406 = UINT64_MAX;
int64_t x408 = -1LL;


void f0(void) {
	uint16_t x1 = 4U;
	int32_t x2 = INT32_MIN;
	int32_t x3 = INT32_MAX;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = 1856325;

	t0 = ((x1|x2)^(x3%x4));

	if (t0 != -2147450885) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile uint8_t x7 = 14U;
	static volatile int64_t x8 = INT64_MAX;
	int64_t t1 = -187735LL;

	t1 = ((x5|x6)^(x7%x8));

	if (t1 != -15LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int32_t x10 = -1;
	uint16_t x11 = 30362U;
	uint16_t x12 = 721U;
	int32_t t2 = -55894419;

	t2 = ((x9|x10)^(x11%x12));

	if (t2 != -81) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 7522;
	static uint32_t x14 = 29243U;
	int16_t x15 = INT16_MAX;
	int64_t t3 = 21707639391923780LL;

	t3 = ((x13|x14)^(x15%x16));

	if (t3 != 32635LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	uint64_t t4 = 14014147949LLU;

	t4 = ((x17|x18)^(x19%x20));

	if (t4 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 5728;
	uint32_t x23 = 0U;
	static int64_t x24 = 2348366LL;
	static int64_t t5 = 447LL;

	t5 = ((x21|x22)^(x23%x24));

	if (t5 != 5734LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	volatile uint16_t x26 = UINT16_MAX;
	uint8_t x27 = UINT8_MAX;
	int64_t x28 = -20989070341951981LL;
	static volatile int64_t t6 = 49533933933769331LL;

	t6 = ((x25|x26)^(x27%x28));

	if (t6 != 4294967040LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = 2U;
	static int8_t x31 = INT8_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 886027759;

	t7 = ((x29|x30)^(x31%x32));

	if (t7 != 84) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 2U;
	static int16_t x34 = -1;
	uint32_t x35 = UINT32_MAX;
	int8_t x36 = INT8_MIN;
	volatile uint32_t t8 = 55U;

	t8 = ((x33|x34)^(x35%x36));

	if (t8 != 4294967168U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = 10;
	static uint8_t x38 = 0U;
	uint32_t x39 = UINT32_MAX;
	static uint8_t x40 = 6U;
	volatile uint32_t t9 = 165379U;

	t9 = ((x37|x38)^(x39%x40));

	if (t9 != 9U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 654716U;
	static int16_t x43 = INT16_MIN;
	uint32_t t10 = 39730U;

	t10 = ((x41|x42)^(x43%x44));

	if (t10 != 32767U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 19U;
	uint8_t x46 = 17U;
	volatile int8_t x47 = -1;
	volatile int32_t t11 = 0;

	t11 = ((x45|x46)^(x47%x48));

	if (t11 != 19) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = 2LL;
	volatile int16_t x51 = 3545;
	int8_t x52 = INT8_MIN;
	int64_t t12 = 22967LL;

	t12 = ((x49|x50)^(x51%x52));

	if (t12 != 2147483558LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = 7804598662LL;
	uint64_t x56 = 13706803LLU;

	t13 = ((x53|x54)^(x55%x56));

	if (t13 != 9223372044668502381LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	uint16_t x58 = 25644U;
	volatile uint32_t x59 = UINT32_MAX;
	static int64_t x60 = -1LL;
	int64_t t14 = 24527LL;

	t14 = ((x57|x58)^(x59%x60));

	if (t14 != 25855LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 5437U;
	int32_t x62 = -3787740;
	static uint64_t x63 = 142470129LLU;
	uint64_t x64 = UINT64_MAX;
	uint64_t t15 = 5842608673693410LLU;

	t15 = ((x61|x62)^(x63%x64));

	if (t15 != 4156284620LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MIN;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 172298551;

	t16 = ((x65|x66)^(x67%x68));

	if (t16 != -2147481649) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	int32_t x70 = 4750;
	int16_t x71 = -1;
	int16_t x72 = INT16_MAX;
	int64_t t17 = INT64_MIN;

	t17 = ((x69|x70)^(x71%x72));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = 6367;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = UINT64_MAX;
	int32_t x76 = -1;

	t18 = ((x73|x74)^(x75%x76));

	if (t18 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = -4;
	int8_t x79 = -3;
	volatile int32_t x80 = 9;

	t19 = ((x77|x78)^(x79%x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = 30840011822743LL;
	int64_t x83 = INT64_MIN;

	t20 = ((x81|x82)^(x83%x84));

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = 0;
	uint16_t x88 = UINT16_MAX;

	t21 = ((x85|x86)^(x87%x88));

	if (t21 != 4294934530U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	int32_t x96 = -1;
	int64_t t22 = 367465031LL;

	t22 = ((x93|x94)^(x95%x96));

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MAX;
	volatile int64_t t23 = INT64_MIN;

	t23 = ((x97|x98)^(x99%x100));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = 23182269;
	int64_t x102 = INT64_MAX;
	int32_t x103 = INT32_MAX;
	static volatile int16_t x104 = INT16_MIN;
	volatile int64_t t24 = 157071761LL;

	t24 = ((x101|x102)^(x103%x104));

	if (t24 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = INT8_MIN;
	int16_t x106 = 1;
	static int64_t x107 = INT64_MIN;

	t25 = ((x105|x106)^(x107%x108));

	if (t25 != -127LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = INT64_MAX;
	int64_t x110 = INT64_MIN;
	uint32_t x112 = 2U;

	t26 = ((x109|x110)^(x111%x112));

	if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x114 = -1LL;
	uint32_t x115 = UINT32_MAX;

	t27 = ((x113|x114)^(x115%x116));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -59;
	int32_t x118 = 85;
	int64_t x119 = INT64_MIN;
	int8_t x120 = 1;
	int64_t t28 = -256857572920021LL;

	t28 = ((x117|x118)^(x119%x120));

	if (t28 != -43LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x121 = 2U;
	volatile int64_t x122 = -1LL;
	uint64_t x123 = UINT64_MAX;
	volatile uint64_t t29 = 128113462010195LLU;

	t29 = ((x121|x122)^(x123%x124));

	if (t29 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = INT16_MIN;
	static int64_t x127 = INT64_MIN;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t30 = 65331012413LLU;

	t30 = ((x125|x126)^(x127%x128));

	if (t30 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x129 = 0U;
	int16_t x130 = INT16_MIN;
	volatile uint16_t x131 = 22668U;
	int16_t x132 = -1;
	int32_t t31 = 23458783;

	t31 = ((x129|x130)^(x131%x132));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = -1;
	uint64_t x134 = 1749526700631549005LLU;
	int16_t x135 = 34;
	volatile uint32_t x136 = 3U;

	t32 = ((x133|x134)^(x135%x136));

	if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -1;
	volatile int32_t x138 = INT32_MAX;
	static int16_t x140 = 6;
	volatile uint64_t t33 = 7LLU;

	t33 = ((x137|x138)^(x139%x140));

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x142 = -1LL;
	volatile int32_t x143 = -23125;
	int16_t x144 = INT16_MIN;
	static volatile int64_t t34 = -3575906827996956LL;

	t34 = ((x141|x142)^(x143%x144));

	if (t34 != 23124LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MAX;
	int64_t x146 = 97808000430418548LL;
	int64_t x148 = INT64_MAX;

	t35 = ((x145|x146)^(x147%x148));

	if (t35 != -97808001741619165LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 0U;
	static volatile int32_t x150 = INT32_MIN;
	int8_t x151 = -1;
	int64_t x152 = 6670933662793LL;
	int64_t t36 = -6263177549LL;

	t36 = ((x149|x150)^(x151%x152));

	if (t36 != 2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x153 = UINT8_MAX;
	static int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MAX;
	volatile int32_t t37 = 3192201;

	t37 = ((x153|x154)^(x155%x156));

	if (t37 != 2147483392) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = 0;
	static volatile int8_t x158 = INT8_MAX;
	volatile int16_t x159 = INT16_MIN;
	int32_t t38 = -30;

	t38 = ((x157|x158)^(x159%x160));

	if (t38 != -121) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x162 = -1;
	int8_t x163 = -6;
	volatile int32_t x164 = -2;
	static volatile int32_t t39 = 211685972;

	t39 = ((x161|x162)^(x163%x164));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x166 = 176806095063LL;
	int32_t x167 = -1;
	int32_t x168 = -5;
	int64_t t40 = -226955170LL;

	t40 = ((x165|x166)^(x167%x168));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 431817U;
	volatile uint8_t x170 = 1U;
	int16_t x171 = INT16_MIN;
	int64_t x172 = INT64_MAX;
	int64_t t41 = 1LL;

	t41 = ((x169|x170)^(x171%x172));

	if (t41 != -452919LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = 32976LL;
	uint16_t x174 = 2U;
	uint64_t x175 = 8866595082112103LLU;
	static int32_t x176 = INT32_MIN;
	uint64_t t42 = 916LLU;

	t42 = ((x173|x174)^(x175%x176));

	if (t42 != 8866595082079413LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x177 = 147067LLU;
	static int8_t x179 = 1;
	volatile uint64_t t43 = 859LLU;

	t43 = ((x177|x178)^(x179%x180));

	if (t43 != 163838LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = -189;
	int64_t x182 = -1LL;
	int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MIN;
	int64_t t44 = -32LL;

	t44 = ((x181|x182)^(x183%x184));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x186 = 1505U;
	static int8_t x187 = INT8_MAX;
	volatile int32_t x188 = -1;
	volatile int64_t t45 = 1LL;

	t45 = ((x185|x186)^(x187%x188));

	if (t45 != -9223372036854774303LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 103U;
	int32_t x190 = -1;
	uint32_t x191 = 1535562047U;
	volatile uint32_t t46 = 1U;

	t46 = ((x189|x190)^(x191%x192));

	if (t46 != 4294967248U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x197 = UINT16_MAX;
	int64_t x200 = -1LL;
	volatile int64_t t47 = -84028404799280LL;

	t47 = ((x197|x198)^(x199%x200));

	if (t47 != 65535LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = 3828725689612LLU;
	uint16_t x202 = 1U;
	uint16_t x203 = 268U;
	uint16_t x204 = 3739U;
	volatile uint64_t t48 = 257085598421562718LLU;

	t48 = ((x201|x202)^(x203%x204));

	if (t48 != 3828725689345LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	static int64_t x206 = 2273405914LL;
	int32_t x207 = 0;
	uint32_t x208 = 1705083U;
	volatile int64_t t49 = 19294036177370LL;

	t49 = ((x205|x206)^(x207%x208));

	if (t49 != -9223372034581369894LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x209 = -44;
	int32_t x210 = -1;
	uint8_t x211 = UINT8_MAX;
	int64_t x212 = INT64_MIN;
	int64_t t50 = 1LL;

	t50 = ((x209|x210)^(x211%x212));

	if (t50 != -256LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x214 = INT64_MIN;
	uint16_t x215 = UINT16_MAX;

	t51 = ((x213|x214)^(x215%x216));

	if (t51 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x217 = -1;
	volatile int32_t x218 = -4002;
	volatile uint64_t t52 = 417804846795LLU;

	t52 = ((x217|x218)^(x219%x220));

	if (t52 != 18446744073709551318LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MAX;
	int8_t x224 = -1;
	volatile uint32_t t53 = 4U;

	t53 = ((x221|x222)^(x223%x224));

	if (t53 != 3449929857U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -1;
	volatile int8_t x226 = INT8_MIN;
	static int32_t x227 = -490269224;
	static volatile uint32_t x228 = UINT32_MAX;

	t54 = ((x225|x226)^(x227%x228));

	if (t54 != 490269223U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 1005U;
	int32_t x230 = 38261562;
	int64_t x231 = -1LL;
	int8_t x232 = INT8_MIN;
	static volatile int64_t t55 = -378LL;

	t55 = ((x229|x230)^(x231%x232));

	if (t55 != -38261760LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x237 = INT64_MIN;
	static int64_t x239 = INT64_MIN;
	volatile int64_t x240 = INT64_MIN;

	t56 = ((x237|x238)^(x239%x240));

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x241 = INT64_MIN;
	volatile uint32_t x244 = 111054U;
	int64_t t57 = 120LL;

	t57 = ((x241|x242)^(x243%x244));

	if (t57 != -9223372036836493258LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MIN;
	volatile uint32_t x246 = 1314146U;
	static int64_t x248 = -1LL;
	int64_t t58 = -8527797029406LL;

	t58 = ((x245|x246)^(x247%x248));

	if (t58 != 4294937954LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = 12854U;
	volatile int8_t x250 = INT8_MIN;
	int8_t x251 = 0;
	static int16_t x252 = INT16_MIN;
	static int32_t t59 = -251710985;

	t59 = ((x249|x250)^(x251%x252));

	if (t59 != -74) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MAX;
	int32_t x254 = 247226826;
	int16_t x255 = 3;
	static uint64_t x256 = 4133LLU;
	uint64_t t60 = 16568419499590LLU;

	t60 = ((x253|x254)^(x255%x256));

	if (t60 != 247226876LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x257 = -1;
	volatile int16_t x260 = INT16_MIN;
	int32_t t61 = 597;

	t61 = ((x257|x258)^(x259%x260));

	if (t61 != -1282) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x261 = 304;
	int8_t x262 = 1;
	int8_t x263 = -19;
	uint32_t x264 = UINT32_MAX;

	t62 = ((x261|x262)^(x263%x264));

	if (t62 != 4294967004U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x265 = INT16_MAX;
	volatile uint64_t x266 = UINT64_MAX;
	int16_t x267 = INT16_MAX;
	uint64_t t63 = UINT64_MAX;

	t63 = ((x265|x266)^(x267%x268));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MIN;
	int8_t x271 = INT8_MAX;
	static volatile int32_t t64 = -441765;

	t64 = ((x269|x270)^(x271%x272));

	if (t64 != -2147483522) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = 350998481897148LLU;
	int64_t x274 = INT64_MIN;
	static uint32_t x275 = UINT32_MAX;
	volatile uint64_t t65 = 324LLU;

	t65 = ((x273|x274)^(x275%x276));

	if (t65 != 9223723035336672956LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MIN;
	static int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = UINT64_MAX;
	uint64_t t66 = 1771283846137026LLU;

	t66 = ((x277|x278)^(x279%x280));

	if (t66 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x281 = 1448U;
	int64_t x282 = 18LL;
	static int32_t x283 = INT32_MIN;
	uint16_t x284 = 1115U;
	static int64_t t67 = 11LL;

	t67 = ((x281|x282)^(x283%x284));

	if (t67 != -1260LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x285 = UINT64_MAX;
	volatile int64_t x287 = INT64_MAX;
	volatile int32_t x288 = 1022564302;
	uint64_t t68 = 216225LLU;

	t68 = ((x285|x286)^(x287%x288));

	if (t68 != 18446744073116274244LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MAX;
	uint16_t x290 = 893U;
	uint16_t x291 = UINT16_MAX;
	uint8_t x292 = UINT8_MAX;
	int32_t t69 = INT32_MAX;

	t69 = ((x289|x290)^(x291%x292));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x293 = INT8_MIN;
	int32_t x295 = INT32_MAX;
	volatile int32_t x296 = INT32_MIN;
	static volatile int32_t t70 = -4920676;

	t70 = ((x293|x294)^(x295%x296));

	if (t70 != -2147483532) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = -4669LL;
	uint8_t x298 = 83U;
	int16_t x299 = -1;
	volatile uint64_t t71 = 177710701LLU;

	t71 = ((x297|x298)^(x299%x300));

	if (t71 != 18446744073709546963LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = -1;
	int32_t x302 = -1;
	uint32_t x303 = 257822U;
	int8_t x304 = -13;

	t72 = ((x301|x302)^(x303%x304));

	if (t72 != 4294709473U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	static int16_t x307 = INT16_MIN;
	volatile int8_t x308 = -7;
	int64_t t73 = -4530126943968145450LL;

	t73 = ((x305|x306)^(x307%x308));

	if (t73 != 32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = -67;
	uint32_t x310 = 15888303U;
	volatile int16_t x311 = -352;
	static uint8_t x312 = UINT8_MAX;

	t74 = ((x309|x310)^(x311%x312));

	if (t74 != 32U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = -15;
	volatile int64_t x314 = 8LL;
	static volatile int16_t x315 = INT16_MIN;
	uint64_t x316 = UINT64_MAX;
	static uint64_t t75 = 438417702588LLU;

	t75 = ((x313|x314)^(x315%x316));

	if (t75 != 32761LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x318 = INT8_MAX;

	t76 = ((x317|x318)^(x319%x320));

	if (t76 != 127LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = 8466U;
	uint32_t x322 = UINT32_MAX;
	static int64_t x323 = INT64_MIN;
	uint64_t t77 = 9956937LLU;

	t77 = ((x321|x322)^(x323%x324));

	if (t77 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = INT64_MIN;
	uint32_t x326 = UINT32_MAX;
	static uint8_t x327 = 1U;
	volatile int16_t x328 = -1;
	volatile int64_t t78 = 68353478034LL;

	t78 = ((x325|x326)^(x327%x328));

	if (t78 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = INT64_MIN;
	int32_t x331 = -1937382;
	volatile int8_t x332 = INT8_MAX;
	int64_t t79 = -170393767132516LL;

	t79 = ((x329|x330)^(x331%x332));

	if (t79 != 726LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x333 = UINT8_MAX;
	volatile int8_t x334 = INT8_MIN;
	int32_t x335 = -1;
	static uint32_t x336 = 25172U;
	volatile uint32_t t80 = 2600846U;

	t80 = ((x333|x334)^(x335%x336));

	if (t80 != 4294947328U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = INT16_MAX;
	uint64_t x338 = UINT64_MAX;
	static int64_t x339 = INT64_MAX;
	static uint64_t x340 = 117782LLU;
	uint64_t t81 = 260682249597498583LLU;

	t81 = ((x337|x338)^(x339%x340));

	if (t81 != 18446744073709470646LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x342 = 893275U;
	int64_t x343 = INT64_MAX;
	int64_t x344 = 177312693512278893LL;

	t82 = ((x341|x342)^(x343%x344));

	if (t82 != 3105343964557316LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x346 = 454U;
	int16_t x347 = INT16_MAX;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t83 = -102129071;

	t83 = ((x345|x346)^(x347%x348));

	if (t83 != -455) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = 75383;
	static int32_t x350 = INT32_MAX;
	volatile uint32_t x351 = 1U;
	int64_t x352 = INT64_MAX;
	int64_t t84 = -455LL;

	t84 = ((x349|x350)^(x351%x352));

	if (t84 != 2147483646LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x355 = -1;
	int64_t x356 = INT64_MIN;
	int64_t t85 = -112101518255LL;

	t85 = ((x353|x354)^(x355%x356));

	if (t85 != -4294967222LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x357 = 85806U;
	static int64_t x358 = -1LL;
	uint8_t x359 = 3U;
	int64_t t86 = 72963162131559955LL;

	t86 = ((x357|x358)^(x359%x360));

	if (t86 != -4LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MAX;
	int16_t x362 = 4124;
	int64_t x364 = INT64_MAX;
	int64_t t87 = 4903LL;

	t87 = ((x361|x362)^(x363%x364));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x365 = -1;
	static volatile int64_t x367 = -545962822460083LL;
	int64_t x368 = -1LL;
	int64_t t88 = -269636LL;

	t88 = ((x365|x366)^(x367%x368));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x369 = UINT32_MAX;
	int8_t x370 = 0;
	uint32_t x371 = 4U;
	int32_t x372 = -127;
	uint32_t t89 = 91368U;

	t89 = ((x369|x370)^(x371%x372));

	if (t89 != 4294967291U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x374 = -1;
	int32_t x375 = 18693;

	t90 = ((x373|x374)^(x375%x376));

	if (t90 != -18694) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x377 = 31U;
	static uint64_t x378 = 134715393LLU;
	int32_t x379 = INT32_MIN;
	int64_t x380 = INT64_MAX;

	t91 = ((x377|x378)^(x379%x380));

	if (t91 != 18446744071696783391LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = INT64_MAX;
	volatile int32_t x383 = INT32_MIN;
	static int8_t x384 = INT8_MIN;
	int64_t t92 = 21LL;

	t92 = ((x381|x382)^(x383%x384));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x385 = 21879228215LLU;
	int16_t x387 = -1;
	static int8_t x388 = INT8_MIN;
	uint64_t t93 = 3247072827403LLU;

	t93 = ((x385|x386)^(x387%x388));

	if (t93 != 8LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = 3;
	uint16_t x390 = 26569U;
	uint32_t x391 = UINT32_MAX;
	uint64_t x392 = 19871551539901LLU;
	volatile uint64_t t94 = 6453934069LLU;

	t94 = ((x389|x390)^(x391%x392));

	if (t94 != 4294940724LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MAX;

	t95 = ((x393|x394)^(x395%x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = 960;
	volatile int32_t x399 = -3;
	int16_t x400 = -15;
	volatile int32_t t96 = 23;

	t96 = ((x397|x398)^(x399%x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = 130045194438204LL;
	int16_t x402 = 867;
	volatile uint16_t x403 = 2198U;
	int8_t x404 = INT8_MAX;
	int64_t t97 = 1888271585423LL;

	t97 = ((x401|x402)^(x403%x404));

	if (t97 != 130045194438488LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = 76;
	int32_t x407 = INT32_MAX;
	static uint64_t t98 = UINT64_MAX;

	t98 = ((x405|x406)^(x407%x408));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = -76864077170830439LL;
	int16_t x410 = INT16_MIN;
	int16_t x411 = INT16_MIN;
	static uint16_t x412 = 60U;
	int64_t t99 = 11410203072522565LL;

	t99 = ((x409|x410)^(x411%x412));

	if (t99 != 27745LL) { NG(); } else { ; }
	
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

