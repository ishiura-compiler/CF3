#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
volatile uint64_t t1 = 22119380898939LLU;
static uint16_t x10 = 8115U;
int32_t x11 = -1;
static int8_t x13 = 3;
volatile uint64_t x17 = 27838746995LLU;
int64_t x18 = INT64_MIN;
int64_t x26 = INT64_MAX;
static int32_t x33 = -1;
uint32_t x35 = 178552U;
volatile int64_t x38 = 0LL;
int8_t x42 = INT8_MAX;
int8_t x48 = 47;
int32_t x50 = INT32_MIN;
int32_t x55 = 16310;
volatile uint64_t t14 = 123736636LLU;
static uint64_t x69 = UINT64_MAX;
int32_t x83 = -1;
static uint32_t x105 = UINT32_MAX;
volatile int16_t x107 = -112;
volatile int64_t x110 = -1LL;
uint16_t x111 = 1213U;
int32_t x125 = -1;
static volatile uint64_t t33 = 47284LLU;
int16_t x140 = 1;
int32_t x152 = INT32_MIN;
int16_t x160 = INT16_MIN;
int8_t x164 = -1;
uint8_t x168 = 110U;
int64_t x174 = INT64_MIN;
static int64_t x178 = 107897502LL;
static uint32_t x183 = 43095824U;
volatile int32_t x186 = INT32_MIN;
uint32_t x189 = 0U;
uint64_t x195 = UINT64_MAX;
volatile uint64_t t48 = 7375446371195766LLU;
volatile uint32_t x198 = UINT32_MAX;
static int32_t x199 = 9;
uint64_t x204 = UINT64_MAX;
uint64_t x205 = UINT64_MAX;
int64_t x206 = INT64_MIN;
int16_t x207 = 1377;
int64_t x209 = 1LL;
volatile int8_t x216 = INT8_MIN;
volatile int64_t t55 = 3254269LL;
volatile uint64_t t57 = 2512LLU;
uint16_t x235 = 22U;
volatile int64_t x250 = INT64_MIN;
int32_t x254 = 315;
int16_t x258 = INT16_MIN;
int16_t x263 = INT16_MIN;
int64_t x265 = INT64_MIN;
uint8_t x268 = UINT8_MAX;
int16_t x283 = 7;
static int8_t x284 = INT8_MIN;
int32_t t72 = -69631971;
static uint8_t x302 = 45U;
int64_t x303 = INT64_MAX;
volatile int8_t x305 = INT8_MAX;
int8_t x309 = INT8_MAX;
volatile uint64_t t80 = 102268827LLU;
uint8_t x326 = 10U;
uint8_t x327 = 0U;
uint64_t x330 = 54496516884LLU;
volatile int64_t x340 = INT64_MIN;
static volatile uint32_t x341 = 30U;
static int8_t x342 = -38;
volatile int64_t t86 = -66089779676LL;
int8_t x352 = INT8_MIN;
static volatile uint64_t t88 = 143898797LLU;
uint8_t x359 = 29U;
int32_t x366 = 12476454;
int32_t x367 = INT32_MIN;
int8_t x369 = INT8_MIN;
uint8_t x375 = 27U;
uint16_t x376 = 4U;
volatile int32_t t93 = -3;
uint32_t x380 = UINT32_MAX;
volatile int32_t t98 = -254;


void f0(void) {
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MIN;
	static uint16_t x4 = 27125U;
	volatile int32_t t0 = 21361;

	t0 = (x1%((x2^x3)^x4));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = 425;
	uint64_t x7 = 10850LLU;
	volatile uint64_t x8 = 30571253LLU;

	t1 = (x5%((x6^x7)^x8));

	if (t1 != 19662405LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -258;
	int16_t x12 = -678;
	volatile int32_t t2 = 13101;

	t2 = (x9%((x10^x11)^x12));

	if (t2 != -258) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 24542U;
	static int64_t x15 = INT64_MAX;
	static uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 1774LLU;

	t3 = (x13%((x14^x15)^x16));

	if (t3 != 3LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x19 = -3;
	int32_t x20 = INT32_MIN;
	volatile uint64_t t4 = 0LLU;

	t4 = (x17%((x18^x19)^x20));

	if (t4 != 27838746995LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = INT64_MIN;
	int16_t x23 = -416;
	static uint32_t x24 = 1U;
	int64_t t5 = -184171701526896LL;

	t5 = (x21%((x22^x23)^x24));

	if (t5 != -415LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -17915177522096LL;
	int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	int64_t t6 = -1402LL;

	t6 = (x25%((x26^x27)^x28));

	if (t6 != -17915177522096LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	volatile uint8_t x30 = UINT8_MAX;
	int16_t x31 = INT16_MIN;
	uint8_t x32 = 20U;
	volatile int32_t t7 = -1762;

	t7 = (x29%((x30^x31)^x32));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -1;
	int64_t x36 = INT64_MAX;
	volatile int64_t t8 = 26626112528LL;

	t8 = (x33%((x34^x35)^x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 23709U;
	int8_t x39 = 1;
	volatile int32_t x40 = -1;
	int64_t t9 = 1LL;

	t9 = (x37%((x38^x39)^x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static int16_t x43 = INT16_MIN;
	volatile uint32_t x44 = 0U;
	volatile uint32_t t10 = 115001U;

	t10 = (x41%((x42^x43)^x44));

	if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -7717572315301LL;
	uint8_t x46 = UINT8_MAX;
	static int16_t x47 = INT16_MIN;
	volatile int64_t t11 = -12LL;

	t11 = (x45%((x46^x47)^x48));

	if (t11 != -24741LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 0U;
	static int64_t x51 = -1LL;
	uint64_t x52 = 20253174LLU;
	static uint64_t t12 = 3124751661LLU;

	t12 = (x49%((x50^x51)^x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 2U;
	static int16_t x54 = INT16_MAX;
	int64_t x56 = INT64_MIN;
	volatile int64_t t13 = 290653873344LL;

	t13 = (x53%((x54^x55)^x56));

	if (t13 != 2LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -5;
	int8_t x58 = -1;
	volatile int64_t x59 = INT64_MAX;
	uint64_t x60 = 122693306667373LLU;

	t14 = (x57%((x58^x59)^x60));

	if (t14 != 9223249343548108430LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int32_t x62 = -1;
	int32_t x63 = -1;
	static int32_t x64 = INT32_MIN;
	static int32_t t15 = -4644;

	t15 = (x61%((x62^x63)^x64));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = 59U;
	volatile uint16_t x66 = 25U;
	volatile uint32_t x67 = UINT32_MAX;
	static uint16_t x68 = UINT16_MAX;
	static uint32_t t16 = 7U;

	t16 = (x65%((x66^x67)^x68));

	if (t16 != 59U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x70 = 1U;
	static uint8_t x71 = UINT8_MAX;
	static uint16_t x72 = 7437U;
	uint64_t t17 = 223411643469506LLU;

	t17 = (x69%((x70^x71)^x72));

	if (t17 != 1819LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 3520464186LLU;
	int8_t x74 = INT8_MIN;
	static uint8_t x75 = 21U;
	static int16_t x76 = -66;
	volatile uint64_t t18 = 58688LLU;

	t18 = (x73%((x74^x75)^x76));

	if (t18 != 6LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	int64_t x78 = -13665439487LL;
	int8_t x79 = -1;
	int16_t x80 = 828;
	volatile int64_t t19 = -6468892667170LL;

	t19 = (x77%((x78^x79)^x80));

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 15U;
	uint64_t x82 = 1LLU;
	uint32_t x84 = 4064U;
	uint64_t t20 = 9536582LLU;

	t20 = (x81%((x82^x83)^x84));

	if (t20 != 15LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static uint64_t x86 = 123166915901489580LLU;
	volatile int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MAX;
	static volatile uint64_t t21 = 1829682LLU;

	t21 = (x85%((x86^x87)^x88));

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 246582U;
	static int64_t x90 = 1908869039922LL;
	int64_t x91 = 64788LL;
	int8_t x92 = 0;
	volatile int64_t t22 = -677670834439LL;

	t22 = (x89%((x90^x91)^x92));

	if (t22 != 246582LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 269855382527669LLU;
	static volatile int64_t x94 = -53258984849LL;
	uint8_t x95 = 103U;
	volatile int64_t x96 = -47824LL;
	uint64_t t23 = 1692873913041595020LLU;

	t23 = (x93%((x94^x95)^x96));

	if (t23 != 45518767237LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 445552594LLU;
	int16_t x98 = INT16_MIN;
	uint16_t x99 = 11744U;
	int16_t x100 = INT16_MIN;
	static volatile uint64_t t24 = 1450152761574838424LLU;

	t24 = (x97%((x98^x99)^x100));

	if (t24 != 8722LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	volatile int32_t x102 = -13;
	uint64_t x103 = 7935987600LLU;
	int32_t x104 = INT32_MIN;
	uint64_t t25 = 8033840LLU;

	t25 = (x101%((x102^x103)^x104));

	if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MIN;
	uint16_t x108 = UINT16_MAX;
	uint32_t t26 = 57U;

	t26 = (x105%((x106^x107)^x108));

	if (t26 != 16404U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MAX;
	volatile uint8_t x112 = 106U;
	volatile int64_t t27 = 493852103LL;

	t27 = (x109%((x110^x111)^x112));

	if (t27 != 127LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x113 = UINT64_MAX;
	int8_t x114 = -1;
	static volatile int16_t x115 = 12;
	uint32_t x116 = 30U;
	volatile uint64_t t28 = 1761208398856008LLU;

	t28 = (x113%((x114^x115)^x116));

	if (t28 != 360LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 6770975382856LLU;
	int8_t x118 = -1;
	uint64_t x119 = 1282623473444337003LLU;
	uint32_t x120 = 119360U;
	static volatile uint64_t t29 = 98674374051LLU;

	t29 = (x117%((x118^x119)^x120));

	if (t29 != 6770975382856LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = -1LL;
	int16_t x122 = -40;
	static volatile int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MIN;
	static int64_t t30 = -1LL;

	t30 = (x121%((x122^x123)^x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	volatile int8_t x127 = -6;
	uint8_t x128 = UINT8_MAX;
	int32_t t31 = 25746475;

	t31 = (x125%((x126^x127)^x128));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	uint64_t x130 = 6539813927457LLU;
	int64_t x131 = 108832240403LL;
	static int32_t x132 = INT32_MIN;
	volatile uint64_t t32 = 311771147563LLU;

	t32 = (x129%((x130^x131)^x132));

	if (t32 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 1U;
	uint64_t x134 = UINT64_MAX;
	uint64_t x135 = UINT64_MAX;
	uint32_t x136 = 5U;

	t33 = (x133%((x134^x135)^x136));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 65U;
	static int8_t x138 = -1;
	int8_t x139 = INT8_MAX;
	static int32_t t34 = 89;

	t34 = (x137%((x138^x139)^x140));

	if (t34 != 65) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x141 = UINT32_MAX;
	int32_t x142 = INT32_MIN;
	static uint32_t x143 = UINT32_MAX;
	volatile int16_t x144 = INT16_MIN;
	uint32_t t35 = 2158U;

	t35 = (x141%((x142^x143)^x144));

	if (t35 != 2147450880U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	uint32_t x146 = 1034494U;
	int16_t x147 = INT16_MAX;
	int32_t x148 = 168;
	volatile uint32_t t36 = 7149760U;

	t36 = (x145%((x146^x147)^x148));

	if (t36 != 659662U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = 6874;
	int32_t x150 = -7599421;
	int64_t x151 = INT64_MIN;
	int64_t t37 = -264624870221560LL;

	t37 = (x149%((x150^x151)^x152));

	if (t37 != 6874LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	static uint32_t x154 = 5695889U;
	int64_t x155 = INT64_MIN;
	uint8_t x156 = 2U;
	volatile int64_t t38 = -48865LL;

	t38 = (x153%((x154^x155)^x156));

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = -1;
	static uint8_t x158 = UINT8_MAX;
	uint8_t x159 = 1U;
	volatile int32_t t39 = -855570663;

	t39 = (x157%((x158^x159)^x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	int8_t x162 = -1;
	static int8_t x163 = INT8_MAX;
	int64_t t40 = -1530660655LL;

	t40 = (x161%((x162^x163)^x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	uint16_t x166 = UINT16_MAX;
	uint8_t x167 = 3U;
	int32_t t41 = -16;

	t41 = (x165%((x166^x167)^x168));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -6;
	int32_t x170 = INT32_MIN;
	int16_t x171 = -1;
	static volatile int8_t x172 = 1;
	int32_t t42 = -473;

	t42 = (x169%((x170^x171)^x172));

	if (t42 != -6) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	int16_t x175 = INT16_MAX;
	uint8_t x176 = UINT8_MAX;
	volatile int64_t t43 = 24565549LL;

	t43 = (x173%((x174^x175)^x176));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = UINT32_MAX;
	int64_t x179 = 677090912601LL;
	int16_t x180 = INT16_MIN;
	volatile int64_t t44 = -440LL;

	t44 = (x177%((x178^x179)^x180));

	if (t44 != 4294967295LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = -4478;
	uint32_t x182 = 251U;
	volatile uint64_t x184 = 4954559853995039LLU;
	static volatile uint64_t t45 = 136997649102LLU;

	t45 = (x181%((x182^x183)^x184));

	if (t45 != 917585386823942LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 27;
	volatile int32_t x187 = -1;
	int8_t x188 = -1;
	int32_t t46 = 46141;

	t46 = (x185%((x186^x187)^x188));

	if (t46 != 27) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = 400;
	uint32_t x191 = 4127655U;
	volatile int32_t x192 = -1;
	uint32_t t47 = 4671606U;

	t47 = (x189%((x190^x191)^x192));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 16U;
	uint16_t x194 = UINT16_MAX;
	int64_t x196 = INT64_MIN;

	t48 = (x193%((x194^x195)^x196));

	if (t48 != 16LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MAX;
	volatile int16_t x200 = -1;
	int64_t t49 = -15466957746182LL;

	t49 = (x197%((x198^x199)^x200));

	if (t49 != 7LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	static volatile int32_t x202 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	static volatile uint64_t t50 = 0LLU;

	t50 = (x201%((x202^x203)^x204));

	if (t50 != 2147483647LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x208 = INT8_MIN;
	uint64_t t51 = 68391978442898032LLU;

	t51 = (x205%((x206^x207)^x208));

	if (t51 != 2621LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = 3648;
	int64_t x211 = 42872902763116LL;
	uint64_t x212 = 884467892LLU;
	volatile uint64_t t52 = 379LLU;

	t52 = (x209%((x210^x211)^x212));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MIN;
	int64_t x214 = -2573306494414709LL;
	static int32_t x215 = INT32_MIN;
	volatile int64_t t53 = -782066666169LL;

	t53 = (x213%((x214^x215)^x216));

	if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	int64_t x218 = -7509890LL;
	volatile uint64_t x219 = 1565032755515104LLU;
	volatile int16_t x220 = -1;
	volatile uint64_t t54 = 224161758581742525LLU;

	t54 = (x217%((x218^x219)^x220));

	if (t54 != 1268101755442229LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x221 = INT8_MIN;
	static int64_t x222 = INT64_MAX;
	volatile int16_t x223 = INT16_MAX;
	int32_t x224 = INT32_MAX;

	t55 = (x221%((x222^x223)^x224));

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -328877008;
	int8_t x226 = -1;
	int64_t x227 = -1LL;
	int32_t x228 = -6500;
	int64_t t56 = -2956570407036352LL;

	t56 = (x225%((x226^x227)^x228));

	if (t56 != -3008LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = 13441311276569699LLU;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MAX;
	int32_t x232 = INT32_MIN;

	t57 = (x229%((x230^x231)^x232));

	if (t57 != 13441311276569699LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	static int32_t x234 = INT32_MAX;
	uint16_t x236 = UINT16_MAX;
	static volatile uint32_t t58 = 3931U;

	t58 = (x233%((x234^x235)^x236));

	if (t58 != 131027U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	int16_t x238 = 3777;
	static int16_t x239 = -885;
	int64_t x240 = -6LL;
	int64_t t59 = 56655184466LL;

	t59 = (x237%((x238^x239)^x240));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	volatile int64_t x242 = 24LL;
	static int32_t x243 = INT32_MIN;
	int64_t x244 = -1LL;
	volatile int64_t t60 = -16LL;

	t60 = (x241%((x242^x243)^x244));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 121U;
	volatile int32_t x246 = -2;
	volatile int64_t x247 = -1LL;
	static int64_t x248 = -104447207350928LL;
	int64_t t61 = 147LL;

	t61 = (x245%((x246^x247)^x248));

	if (t61 != 121LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x249 = 77U;
	int32_t x251 = -1;
	volatile uint16_t x252 = 422U;
	volatile int64_t t62 = -1646LL;

	t62 = (x249%((x250^x251)^x252));

	if (t62 != 77LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x253 = 5U;
	int16_t x255 = -118;
	int32_t x256 = INT32_MAX;
	volatile int32_t t63 = -27563438;

	t63 = (x253%((x254^x255)^x256));

	if (t63 != 5) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -124794639697084957LL;
	int64_t x259 = INT64_MIN;
	static int32_t x260 = INT32_MAX;
	volatile int64_t t64 = 28353687030645LL;

	t64 = (x257%((x258^x259)^x260));

	if (t64 != -124794639697084957LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = -1;
	int64_t x264 = -64676299443320LL;
	volatile int64_t t65 = -979220927LL;

	t65 = (x261%((x262^x263)^x264));

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x266 = 5088824347LL;
	volatile int32_t x267 = 759782143;
	static volatile int64_t t66 = 3174928668LL;

	t66 = (x265%((x266^x267)^x268));

	if (t66 != -3899991610LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -4;
	int32_t x270 = INT32_MAX;
	uint64_t x271 = 4764LLU;
	int8_t x272 = -7;
	volatile uint64_t t67 = 247LLU;

	t67 = (x269%((x270^x271)^x272));

	if (t67 != 2147478882LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = UINT64_MAX;
	int64_t x274 = 610579LL;
	int8_t x275 = INT8_MAX;
	uint32_t x276 = 4866U;
	uint64_t t68 = 65341LLU;

	t68 = (x273%((x274^x275)^x276));

	if (t68 != 359045LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 7U;
	int64_t x278 = INT64_MIN;
	static uint32_t x279 = 5825U;
	uint8_t x280 = 3U;
	int64_t t69 = 231121688149049LL;

	t69 = (x277%((x278^x279)^x280));

	if (t69 != 7LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = 2U;
	int32_t x282 = INT32_MIN;
	volatile int32_t t70 = 248092;

	t70 = (x281%((x282^x283)^x284));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = 37U;
	volatile int8_t x286 = 0;
	int8_t x287 = -4;
	uint16_t x288 = UINT16_MAX;
	int32_t t71 = -132023964;

	t71 = (x285%((x286^x287)^x288));

	if (t71 != 37) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	static int16_t x290 = -2;
	uint8_t x291 = 49U;
	uint16_t x292 = 48U;

	t72 = (x289%((x290^x291)^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	volatile uint32_t x294 = UINT32_MAX;
	uint32_t x295 = 38099U;
	volatile int64_t x296 = INT64_MAX;
	volatile int64_t t73 = 76LL;

	t73 = (x293%((x294^x295)^x296));

	if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 1;
	static volatile int64_t x298 = INT64_MIN;
	static int32_t x299 = INT32_MAX;
	int32_t x300 = INT32_MIN;
	static volatile int64_t t74 = -33552591791LL;

	t74 = (x297%((x298^x299)^x300));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 24U;
	int16_t x304 = INT16_MAX;
	static volatile int64_t t75 = -2204899543LL;

	t75 = (x301%((x302^x303)^x304));

	if (t75 != 24LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MAX;
	uint64_t x307 = 1927468528LLU;
	volatile uint64_t x308 = 94195063434750630LLU;
	uint64_t t76 = 1435106LLU;

	t76 = (x305%((x306^x307)^x308));

	if (t76 != 127LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = 1;
	volatile int8_t x311 = -19;
	uint32_t x312 = 94014U;
	uint32_t t77 = 52934716U;

	t77 = (x309%((x310^x311)^x312));

	if (t77 != 127U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x313 = -1;
	volatile int64_t x314 = INT64_MAX;
	static uint16_t x315 = 25U;
	static uint64_t x316 = 1640249613121845LLU;
	uint64_t t78 = 222005851832794LLU;

	t78 = (x313%((x314^x315)^x316));

	if (t78 != 3280499226243673LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MAX;
	int16_t x318 = INT16_MAX;
	int64_t x319 = 15LL;
	uint64_t x320 = UINT64_MAX;
	uint64_t t79 = 14LLU;

	t79 = (x317%((x318^x319)^x320));

	if (t79 != 32767LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 61U;
	uint64_t x322 = UINT64_MAX;
	static int64_t x323 = 922802407129227427LL;
	volatile int64_t x324 = -56LL;

	t80 = (x321%((x322^x323)^x324));

	if (t80 != 61LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = -1;
	int32_t x328 = -24;
	volatile int32_t t81 = 11;

	t81 = (x325%((x326^x327)^x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 0U;
	int8_t x331 = INT8_MAX;
	uint32_t x332 = UINT32_MAX;
	static uint64_t t82 = 12011001917LLU;

	t82 = (x329%((x330^x331)^x332));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MIN;
	uint8_t x335 = 0U;
	int64_t x336 = INT64_MIN;
	volatile uint64_t t83 = 5029385844LLU;

	t83 = (x333%((x334^x335)^x336));

	if (t83 != 4294967295LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -381012785LL;
	int16_t x338 = -4;
	int64_t x339 = -1LL;
	int64_t t84 = -3987027840822688068LL;

	t84 = (x337%((x338^x339)^x340));

	if (t84 != -381012785LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x343 = INT16_MAX;
	int8_t x344 = INT8_MAX;
	static uint32_t t85 = 546U;

	t85 = (x341%((x342^x343)^x344));

	if (t85 != 30U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 3280U;
	uint32_t x346 = 12959715U;
	int64_t x347 = -1LL;
	static volatile uint16_t x348 = 4946U;

	t86 = (x345%((x346^x347)^x348));

	if (t86 != 3280LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = -1;
	volatile uint16_t x350 = UINT16_MAX;
	uint64_t x351 = 1275937945LLU;
	volatile uint64_t t87 = 1759958629LLU;

	t87 = (x349%((x350^x351)^x352));

	if (t87 != 1275968281LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x353 = 0U;
	int8_t x354 = 22;
	uint64_t x355 = 157906805LLU;
	int32_t x356 = 0;

	t88 = (x353%((x354^x355)^x356));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = 690;
	uint16_t x360 = 17U;
	int32_t t89 = -59029;

	t89 = (x357%((x358^x359)^x360));

	if (t89 != -476) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = 138;
	int16_t x362 = INT16_MIN;
	int32_t x363 = 2596393;
	static uint8_t x364 = 0U;
	volatile int32_t t90 = -1479;

	t90 = (x361%((x362^x363)^x364));

	if (t90 != 138) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	volatile uint64_t x368 = UINT64_MAX;
	uint64_t t91 = 205240932837157LLU;

	t91 = (x365%((x366^x367)^x368));

	if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x370 = 22U;
	static uint8_t x371 = UINT8_MAX;
	static volatile uint32_t x372 = 81532U;
	volatile uint32_t t92 = 481U;

	t92 = (x369%((x370^x371)^x372));

	if (t92 != 12434U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	int8_t x374 = INT8_MIN;

	t93 = (x373%((x374^x375)^x376));

	if (t93 != -79) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	static uint16_t x378 = 6U;
	int8_t x379 = -1;
	uint64_t t94 = 10338623105477LLU;

	t94 = (x377%((x378^x379)^x380));

	if (t94 != 3LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = UINT16_MAX;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MAX;
	uint16_t x384 = UINT16_MAX;
	uint64_t t95 = 4007082LLU;

	t95 = (x381%((x382^x383)^x384));

	if (t95 != 65535LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 13U;
	volatile uint16_t x386 = 5418U;
	int64_t x387 = INT64_MIN;
	volatile int16_t x388 = -1;
	volatile int64_t t96 = -7657974325LL;

	t96 = (x385%((x386^x387)^x388));

	if (t96 != 13LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 3U;
	static uint64_t x390 = UINT64_MAX;
	volatile int8_t x391 = INT8_MIN;
	static int64_t x392 = INT64_MIN;
	volatile uint64_t t97 = 1814LLU;

	t97 = (x389%((x390^x391)^x392));

	if (t97 != 3LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = 166764400;
	int16_t x394 = -1;
	uint16_t x395 = 12550U;
	int8_t x396 = 49;

	t98 = (x393%((x394^x395)^x396));

	if (t98 != 3400) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = 2382U;
	uint32_t x399 = 61U;
	int32_t x400 = -2553898;
	uint32_t t99 = 125U;

	t99 = (x397%((x398^x399)^x400));

	if (t99 != 2552027U) { NG(); } else { ; }
	
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

