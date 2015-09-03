#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 13U;
uint64_t x4 = 192399670282121LLU;
volatile int32_t x7 = -973;
static int16_t x8 = 1;
int16_t x13 = -1;
uint32_t x15 = 1U;
volatile int64_t t4 = 295635178784875185LL;
int64_t x22 = INT64_MAX;
int8_t x23 = INT8_MAX;
int8_t x25 = -1;
int64_t t6 = -40302LL;
uint64_t x39 = 4818LLU;
uint64_t t10 = 716607605LLU;
static uint16_t x47 = 21U;
int64_t t12 = 571020052544515LL;
static int32_t t13 = -22528;
int16_t x59 = INT16_MAX;
static uint64_t t14 = 402919LLU;
uint32_t x61 = 966659123U;
int16_t x63 = -1;
int16_t x64 = 4730;
int16_t x69 = -215;
static volatile int32_t t17 = -2287;
static int64_t x74 = 282153829LL;
static volatile int64_t t18 = -2572056LL;
int16_t x84 = INT16_MIN;
int8_t x86 = 3;
static volatile uint32_t t21 = 3311475U;
static volatile int16_t x89 = 5;
int32_t x93 = -1;
uint16_t x97 = 2U;
uint64_t t25 = 41LLU;
static int16_t x105 = -2;
uint64_t x106 = 5187577444LLU;
int64_t x111 = -2785465296LL;
uint32_t x117 = 191421088U;
uint64_t t29 = 7281069547LLU;
int16_t x124 = INT16_MIN;
uint8_t x126 = 8U;
int32_t x128 = -1;
static int32_t x131 = -87;
static volatile int16_t x132 = INT16_MAX;
int32_t t32 = -16385;
volatile int16_t x135 = INT16_MAX;
uint16_t x136 = UINT16_MAX;
uint8_t x148 = 5U;
int64_t x151 = 433511915841LL;
static int32_t x163 = INT32_MIN;
int64_t x188 = INT64_MIN;
uint32_t x192 = 0U;
int32_t t49 = -897;
uint16_t x204 = UINT16_MAX;
volatile int32_t t51 = 1;
static int32_t t53 = -11;
int64_t x218 = -11051433792744700LL;
int16_t x220 = -2;
int8_t x221 = INT8_MAX;
int8_t x222 = INT8_MIN;
static uint16_t x224 = 19841U;
int32_t t55 = 1;
static uint32_t x232 = 1494U;
volatile int64_t x236 = INT64_MIN;
int32_t x237 = INT32_MIN;
int32_t t59 = 148;
static int32_t x242 = INT32_MAX;
uint8_t x244 = UINT8_MAX;
int32_t x245 = INT32_MAX;
int16_t x246 = INT16_MIN;
int64_t x247 = INT64_MAX;
int64_t t61 = 1018881LL;
uint64_t x249 = 290LLU;
static int64_t t63 = -1060420914311706773LL;
uint8_t x257 = 43U;
uint32_t x258 = 6661431U;
static int8_t x262 = -3;
volatile int64_t t66 = -3LL;
static int32_t x272 = INT32_MIN;
int8_t x290 = -1;
uint64_t x291 = 14520006LLU;
volatile uint16_t x292 = 4U;
int32_t x293 = -1;
int32_t x297 = -9122;
volatile int32_t x298 = INT32_MIN;
volatile uint32_t t74 = 213928U;
static volatile uint8_t x306 = 10U;
volatile uint32_t x313 = UINT32_MAX;
volatile int64_t t80 = -3174380074719393661LL;
int64_t x325 = INT64_MIN;
static uint16_t x327 = 223U;
volatile int32_t x334 = -26677;
volatile int32_t x337 = 14;
uint8_t x342 = UINT8_MAX;
int16_t x343 = 37;
static uint32_t x346 = 35437721U;
volatile int32_t x350 = -162455928;
uint32_t x353 = 1U;
volatile int64_t t89 = -1584LL;
uint32_t t93 = 6U;
int16_t x378 = -5;
static volatile int64_t x381 = INT64_MAX;
static uint64_t x383 = UINT64_MAX;
uint16_t x385 = 68U;
int64_t x386 = INT64_MIN;
static volatile uint8_t x389 = 66U;
uint16_t x392 = 3824U;
static int32_t x394 = -639;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static int16_t x2 = INT16_MIN;
	uint64_t t0 = 179265LLU;

	t0 = (x1^(x2^(x3&x4)));

	if (t0 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint16_t x6 = 48U;
	static volatile int32_t t1 = 197559576;

	t1 = (x5^(x6^(x7&x8)));

	if (t1 != 206) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -477525760692LL;
	volatile int16_t x10 = -1;
	static int8_t x11 = INT8_MAX;
	int8_t x12 = 11;
	volatile int64_t t2 = -463374475LL;

	t2 = (x9^(x10^(x11&x12)));

	if (t2 != 477525760696LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	int64_t x16 = -1LL;
	volatile int64_t t3 = -371LL;

	t3 = (x13^(x14^(x15&x16)));

	if (t3 != 2147483646LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	int8_t x18 = INT8_MAX;
	uint16_t x19 = 9743U;
	int64_t x20 = 912724LL;

	t4 = (x17^(x18^(x19&x20)));

	if (t4 != 9220LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 599560939667LLU;
	volatile int8_t x24 = INT8_MIN;
	volatile uint64_t t5 = 244296040186959LLU;

	t5 = (x21^(x22^(x23&x24)));

	if (t5 != 9223371437293836140LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MAX;
	int16_t x27 = 72;
	int64_t x28 = INT64_MIN;

	t6 = (x25^(x26^(x27&x28)));

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	int8_t x30 = 1;
	int32_t x31 = INT32_MAX;
	volatile uint8_t x32 = 107U;
	int32_t t7 = -341;

	t7 = (x29^(x30^(x31&x32)));

	if (t7 != -107) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 1U;
	volatile uint8_t x34 = 3U;
	static int8_t x35 = -1;
	uint8_t x36 = 0U;
	int32_t t8 = -168398;

	t8 = (x33^(x34^(x35&x36)));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	static int8_t x38 = 0;
	uint16_t x40 = 212U;
	static volatile uint64_t t9 = 851315LLU;

	t9 = (x37^(x38^(x39&x40)));

	if (t9 != 9223372036854776016LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MAX;
	uint64_t x42 = 2809431231838LLU;
	uint8_t x43 = 0U;
	volatile int64_t x44 = -2119603381438961LL;

	t10 = (x41^(x42^(x43&x44)));

	if (t10 != 2809431231777LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 2194189556LLU;
	int64_t x46 = INT64_MAX;
	volatile uint16_t x48 = UINT16_MAX;
	volatile uint64_t t11 = 1136355388395LLU;

	t11 = (x45^(x46^(x47&x48)));

	if (t11 != 9223372034660586270LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int32_t x50 = 249919;
	volatile int64_t x51 = INT64_MIN;
	uint16_t x52 = 1659U;

	t12 = (x49^(x50^(x51&x52)));

	if (t12 != 250048LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	static uint16_t x54 = 17U;
	static uint8_t x55 = 0U;
	static int8_t x56 = INT8_MAX;

	t13 = (x53^(x54^(x55&x56)));

	if (t13 != -18) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	uint64_t x60 = 14000773LLU;

	t14 = (x57^(x58^(x59&x60)));

	if (t14 != 8954LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x62 = 177811;
	uint32_t t15 = 59936U;

	t15 = (x61^(x62^(x63&x64)));

	if (t15 != 966568154U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 25U;
	volatile uint32_t x66 = 1009117U;
	int8_t x67 = -28;
	volatile int8_t x68 = INT8_MIN;
	uint32_t t16 = 2779U;

	t16 = (x65^(x66^(x67&x68)));

	if (t16 != 4293958212U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x70 = 195;
	int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MAX;

	t17 = (x69^(x70^(x71&x72)));

	if (t17 != -22) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = UINT8_MAX;
	static volatile int16_t x75 = INT16_MIN;
	uint32_t x76 = 6232U;

	t18 = (x73^(x74^(x75&x76)));

	if (t18 != 282153882LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 4U;
	int32_t x78 = -68897362;
	int64_t x79 = -227607136576097342LL;
	uint64_t x80 = 1033323090961392122LLU;
	static volatile uint64_t t19 = 1826351248626LLU;

	t19 = (x77^(x78^(x79&x80)));

	if (t19 != 17557564071449236584LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 9255LL;
	int8_t x82 = -1;
	static int32_t x83 = INT32_MAX;
	static volatile int64_t t20 = -31LL;

	t20 = (x81^(x82^(x83&x84)));

	if (t20 != -2147460136LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -1158913;
	static uint32_t x87 = UINT32_MAX;
	uint8_t x88 = 22U;

	t21 = (x85^(x86^(x87&x88)));

	if (t21 != 4293808362U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = -1;
	int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -461;

	t22 = (x89^(x90^(x91&x92)));

	if (t22 != -6) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x94 = -3;
	static volatile uint32_t x95 = UINT32_MAX;
	volatile uint64_t x96 = 84LLU;
	volatile uint64_t t23 = 2097590227467201LLU;

	t23 = (x93^(x94^(x95&x96)));

	if (t23 != 86LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MIN;
	int32_t x99 = 845;
	int64_t x100 = INT64_MIN;
	volatile int64_t t24 = 0LL;

	t24 = (x97^(x98^(x99&x100)));

	if (t24 != -32766LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	int32_t x102 = INT32_MIN;
	volatile int8_t x103 = INT8_MIN;
	uint64_t x104 = UINT64_MAX;

	t25 = (x101^(x102^(x103&x104)));

	if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x107 = INT64_MAX;
	int32_t x108 = -799334;
	volatile uint64_t t26 = 6893LLU;

	t26 = (x105^(x106^(x107&x108)));

	if (t26 != 9223372042042610688LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int32_t x110 = INT32_MIN;
	static uint64_t x112 = 205LLU;
	uint64_t t27 = 28669688892275LLU;

	t27 = (x109^(x110^(x111&x112)));

	if (t27 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	static volatile int8_t x114 = -1;
	uint8_t x115 = 3U;
	uint64_t x116 = 202097LLU;
	static volatile uint64_t t28 = 742LLU;

	t28 = (x113^(x114^(x115&x116)));

	if (t28 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x118 = UINT64_MAX;
	uint32_t x119 = 260527363U;
	int8_t x120 = INT8_MIN;

	t29 = (x117^(x118^(x119&x120)));

	if (t29 != 18446744073626742879LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 79U;
	static int32_t x122 = 24;
	volatile uint16_t x123 = 3U;
	int32_t t30 = 3;

	t30 = (x121^(x122^(x123&x124)));

	if (t30 != 87) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -2084;
	uint16_t x127 = 762U;
	int32_t t31 = -81;

	t31 = (x125^(x126^(x127&x128)));

	if (t31 != -2770) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	static uint8_t x130 = 3U;

	t32 = (x129^(x130^(x131&x132)));

	if (t32 != -32683) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	int16_t x134 = INT16_MAX;
	int32_t t33 = 560466;

	t33 = (x133^(x134^(x135&x136)));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	int16_t x138 = -1;
	volatile int16_t x139 = INT16_MAX;
	volatile int64_t x140 = INT64_MAX;
	volatile int64_t t34 = -24LL;

	t34 = (x137^(x138^(x139&x140)));

	if (t34 != 32767LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	volatile uint8_t x142 = 45U;
	int16_t x143 = 1;
	uint64_t x144 = UINT64_MAX;
	uint64_t t35 = 23LLU;

	t35 = (x141^(x142^(x143&x144)));

	if (t35 != 18446744071562068012LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 129512698U;
	uint8_t x146 = 3U;
	int64_t x147 = INT64_MIN;
	volatile int64_t t36 = -18459239384018LL;

	t36 = (x145^(x146^(x147&x148)));

	if (t36 != 129512697LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = 0;
	int32_t x150 = INT32_MAX;
	int64_t x152 = 65810268883422LL;
	volatile int64_t t37 = 2094LL;

	t37 = (x149^(x150^(x151&x152)));

	if (t37 != 278550937279LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -54;
	int16_t x154 = INT16_MIN;
	uint8_t x155 = 114U;
	int16_t x156 = -5870;
	volatile int32_t t38 = -5254;

	t38 = (x153^(x154^(x155&x156)));

	if (t38 != 32728) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	static volatile int64_t x158 = INT64_MAX;
	int32_t x159 = INT32_MIN;
	static uint8_t x160 = 22U;
	int64_t t39 = -67433LL;

	t39 = (x157^(x158^(x159&x160)));

	if (t39 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = -7;
	uint16_t x162 = UINT16_MAX;
	int64_t x164 = 5660340980LL;
	volatile int64_t t40 = 5568585924326925LL;

	t40 = (x161^(x162^(x163&x164)));

	if (t40 != -4295032826LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MAX;
	volatile int32_t x168 = 1;
	volatile int64_t t41 = 22798865553813713LL;

	t41 = (x165^(x166^(x167&x168)));

	if (t41 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = 2743LLU;
	uint8_t x170 = 21U;
	volatile int32_t x171 = -1;
	int8_t x172 = 58;
	static uint64_t t42 = 17103217LLU;

	t42 = (x169^(x170^(x171&x172)));

	if (t42 != 2712LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 1720404437LLU;
	volatile int64_t x174 = -1788650052003207LL;
	int16_t x175 = INT16_MAX;
	int32_t x176 = 0;
	volatile uint64_t t43 = 20828LLU;

	t43 = (x173^(x174^(x175&x176)));

	if (t43 != 18444955422022341548LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 3U;
	uint8_t x178 = 53U;
	uint64_t x179 = UINT64_MAX;
	int16_t x180 = -3;
	uint64_t t44 = 118908LLU;

	t44 = (x177^(x178^(x179&x180)));

	if (t44 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int16_t x182 = INT16_MIN;
	static int64_t x183 = 7452LL;
	volatile uint64_t x184 = 1878LLU;
	volatile uint64_t t45 = 30636711538LLU;

	t45 = (x181^(x182^(x183&x184)));

	if (t45 != 18446744069414615787LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MAX;
	int16_t x186 = 0;
	static uint32_t x187 = 30969U;
	int64_t t46 = -1LL;

	t46 = (x185^(x186^(x187&x188)));

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 84U;
	int8_t x190 = -1;
	int16_t x191 = INT16_MIN;
	static volatile uint32_t t47 = 25767U;

	t47 = (x189^(x190^(x191&x192)));

	if (t47 != 4294967211U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	uint64_t x194 = 79616236594LLU;
	int16_t x195 = -86;
	int16_t x196 = INT16_MIN;
	uint64_t t48 = 8LLU;

	t48 = (x193^(x194^(x195&x196)));

	if (t48 != 9223372116470997965LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = -1;
	static uint8_t x198 = 2U;
	volatile uint16_t x199 = UINT16_MAX;
	uint16_t x200 = UINT16_MAX;

	t49 = (x197^(x198^(x199&x200)));

	if (t49 != -65534) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 5;
	int8_t x202 = -1;
	int8_t x203 = -1;
	int32_t t50 = 389;

	t50 = (x201^(x202^(x203&x204)));

	if (t50 != -65531) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	volatile int16_t x206 = -14;
	static int32_t x207 = -170901795;
	int16_t x208 = INT16_MIN;

	t51 = (x205^(x206^(x207&x208)));

	if (t51 != -170917875) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = 6582;
	volatile int16_t x210 = INT16_MIN;
	int16_t x211 = 1469;
	volatile int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 33622;

	t52 = (x209^(x210^(x211&x212)));

	if (t52 != -26186) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = 0;
	static uint8_t x216 = 14U;

	t53 = (x213^(x214^(x215&x216)));

	if (t53 != -65536) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	volatile int8_t x219 = INT8_MIN;
	volatile int64_t t54 = -11371400543629500LL;

	t54 = (x217^(x218^(x219&x220)));

	if (t54 != 11051433792744571LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x223 = 1U;

	t55 = (x221^(x222^(x223&x224)));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	uint8_t x226 = 68U;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = 1;

	t56 = (x225^(x226^(x227&x228)));

	if (t56 != -69) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	int32_t x230 = -1;
	int16_t x231 = INT16_MIN;
	uint32_t t57 = 1542437915U;

	t57 = (x229^(x230^(x231&x232)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MAX;
	static int8_t x234 = -1;
	int8_t x235 = INT8_MIN;
	volatile int64_t t58 = 645071LL;

	t58 = (x233^(x234^(x235&x236)));

	if (t58 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MAX;
	uint16_t x239 = UINT16_MAX;
	volatile int16_t x240 = INT16_MAX;

	t59 = (x237^(x238^(x239&x240)));

	if (t59 != -2147451008) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 3;
	static volatile int8_t x243 = -22;
	int32_t t60 = 337693;

	t60 = (x241^(x242^(x243&x244)));

	if (t60 != 2147483414) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x248 = 1;

	t61 = (x245^(x246^(x247&x248)));

	if (t61 != -2147450882LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x250 = -336159LL;
	static uint16_t x251 = 24U;
	static int16_t x252 = INT16_MIN;
	uint64_t t62 = 914140293627331134LLU;

	t62 = (x249^(x250^(x251&x252)));

	if (t62 != 18446744073709215683LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	int32_t x254 = -1;
	volatile int64_t x255 = 79684164580193LL;
	int16_t x256 = 1;

	t63 = (x253^(x254^(x255&x256)));

	if (t63 != -4294967295LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x259 = UINT8_MAX;
	int64_t x260 = -1LL;
	volatile int64_t t64 = 37391581241558LL;

	t64 = (x257^(x258^(x259&x260)));

	if (t64 != 6661603LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	uint64_t x263 = 1758LLU;
	int64_t x264 = INT64_MIN;
	volatile uint64_t t65 = 116936LLU;

	t65 = (x261^(x262^(x263&x264)));

	if (t65 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MIN;
	volatile uint32_t x268 = UINT32_MAX;

	t66 = (x265^(x266^(x267&x268)));

	if (t66 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MAX;
	int64_t x270 = -1LL;
	volatile int32_t x271 = -1;
	int64_t t67 = 1232951LL;

	t67 = (x269^(x270^(x271&x272)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MIN;
	int8_t x275 = -2;
	static int16_t x276 = -4416;
	int32_t t68 = 62805;

	t68 = (x273^(x274^(x275&x276)));

	if (t68 != -4416) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MIN;
	uint64_t x279 = UINT64_MAX;
	uint16_t x280 = 3U;
	uint64_t t69 = 234886405466087LLU;

	t69 = (x277^(x278^(x279&x280)));

	if (t69 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	volatile int8_t x282 = INT8_MIN;
	int64_t x283 = INT64_MAX;
	uint64_t x284 = 478261LLU;
	uint64_t t70 = 6693537185973393908LLU;

	t70 = (x281^(x282^(x283&x284)));

	if (t70 != 18446744073709073354LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = -1LL;
	int8_t x286 = -2;
	volatile uint16_t x287 = UINT16_MAX;
	volatile int16_t x288 = INT16_MIN;
	volatile int64_t t71 = -575LL;

	t71 = (x285^(x286^(x287&x288)));

	if (t71 != 32769LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 62025755;
	static volatile uint64_t t72 = 7962295038LLU;

	t72 = (x289^(x290^(x291&x292)));

	if (t72 != 18446744073647525856LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x294 = -4270;
	uint8_t x295 = UINT8_MAX;
	int8_t x296 = INT8_MIN;
	int32_t t73 = 0;

	t73 = (x293^(x294^(x295&x296)));

	if (t73 != 4141) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x299 = UINT32_MAX;
	uint8_t x300 = 0U;

	t74 = (x297^(x298^(x299&x300)));

	if (t74 != 2147474526U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 11002U;
	int32_t x302 = INT32_MAX;
	int32_t x303 = -1;
	volatile int16_t x304 = -67;
	int32_t t75 = 2;

	t75 = (x301^(x302^(x303&x304)));

	if (t75 != -2147472712) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int64_t x307 = INT64_MIN;
	uint8_t x308 = 3U;
	volatile int64_t t76 = 125016697838708LL;

	t76 = (x305^(x306^(x307&x308)));

	if (t76 != -32758LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MAX;
	int16_t x310 = INT16_MIN;
	static uint16_t x311 = 0U;
	uint16_t x312 = 17901U;
	volatile int32_t t77 = -1;

	t77 = (x309^(x310^(x311&x312)));

	if (t77 != -2147450881) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = -1050;
	uint16_t x315 = 361U;
	int64_t x316 = INT64_MIN;
	volatile int64_t t78 = 4173LL;

	t78 = (x313^(x314^(x315&x316)));

	if (t78 != -4294966247LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int8_t x318 = INT8_MIN;
	uint64_t x319 = 1111343879740106LLU;
	int8_t x320 = -31;
	static volatile uint64_t t79 = 10346300586557LLU;

	t79 = (x317^(x318^(x319&x320)));

	if (t79 != 18445632729829811647LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	static int16_t x322 = 63;
	int32_t x323 = -1;
	int64_t x324 = INT64_MIN;

	t80 = (x321^(x322^(x323&x324)));

	if (t80 != -9223372036854710336LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x326 = INT16_MAX;
	int32_t x328 = 42;
	int64_t t81 = 229548636292869880LL;

	t81 = (x325^(x326^(x327&x328)));

	if (t81 != -9223372036854743051LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = -19;
	int64_t x330 = INT64_MAX;
	volatile int64_t x331 = INT64_MIN;
	volatile int8_t x332 = INT8_MAX;
	static int64_t t82 = -31890918111802LL;

	t82 = (x329^(x330^(x331&x332)));

	if (t82 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 1171U;
	uint8_t x335 = 5U;
	uint8_t x336 = UINT8_MAX;
	int32_t t83 = -638;

	t83 = (x333^(x334^(x335&x336)));

	if (t83 != -27811) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MIN;
	int32_t x339 = 18350;
	uint32_t x340 = 14U;
	uint32_t t84 = 1534U;

	t84 = (x337^(x338^(x339&x340)));

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 28785U;
	int8_t x344 = INT8_MIN;
	volatile uint32_t t85 = 101444U;

	t85 = (x341^(x342^(x343&x344)));

	if (t85 != 28814U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int64_t x347 = INT64_MAX;
	volatile uint16_t x348 = 61U;
	static volatile int64_t t86 = 20LL;

	t86 = (x345^(x346^(x347&x348)));

	if (t86 != -2112045916LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	uint32_t x351 = 2U;
	static int16_t x352 = -12;
	uint32_t t87 = 11245452U;

	t87 = (x349^(x350^(x351&x352)));

	if (t87 != 162438792U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x354 = -23801LL;
	int64_t x355 = INT64_MIN;
	static volatile uint16_t x356 = UINT16_MAX;
	volatile int64_t t88 = -8709041641LL;

	t88 = (x353^(x354^(x355&x356)));

	if (t88 != -23802LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	int32_t x358 = -2865;
	int64_t x359 = -1LL;
	uint32_t x360 = 0U;

	t89 = (x357^(x358^(x359&x360)));

	if (t89 != -2896LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	int64_t x362 = -17LL;
	int64_t x363 = INT64_MIN;
	uint16_t x364 = UINT16_MAX;
	int64_t t90 = 6LL;

	t90 = (x361^(x362^(x363&x364)));

	if (t90 != 2147483631LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = 38;
	int32_t x367 = -1;
	int8_t x368 = INT8_MIN;
	volatile int64_t t91 = 761081014154LL;

	t91 = (x365^(x366^(x367&x368)));

	if (t91 != 9223372036854775718LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	static int8_t x370 = INT8_MIN;
	uint32_t x371 = 22698502U;
	static int8_t x372 = INT8_MAX;
	uint32_t t92 = 960376U;

	t92 = (x369^(x370^(x371&x372)));

	if (t92 != 2147483526U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MIN;
	uint32_t x376 = UINT32_MAX;

	t93 = (x373^(x374^(x375&x376)));

	if (t93 != 2147516288U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 5009476229LLU;
	int8_t x379 = INT8_MIN;
	int64_t x380 = INT64_MIN;
	static uint64_t t94 = 18828782944119782LLU;

	t94 = (x377^(x378^(x379&x380)));

	if (t94 != 9223372031845299582LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = 805185236284273895LLU;
	int64_t x384 = INT64_MAX;
	volatile uint64_t t95 = 1600148413283LLU;

	t95 = (x381^(x382^(x383&x384)));

	if (t95 != 805185236284273895LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x387 = INT8_MIN;
	uint32_t x388 = 940U;
	static int64_t t96 = 15146777LL;

	t96 = (x385^(x386^(x387&x388)));

	if (t96 != -9223372036854774844LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = 2071831209LL;
	static uint32_t x391 = 1253252957U;
	volatile int64_t t97 = 3LL;

	t97 = (x389^(x390^(x391&x392)));

	if (t97 != 2071833787LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x393 = 2031U;
	uint64_t x395 = 145789934900774LLU;
	uint16_t x396 = 4494U;
	uint64_t t98 = 188889180637131LLU;

	t98 = (x393^(x394^(x395&x396)));

	if (t98 != 18446744073709546088LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = -449244;
	int8_t x398 = INT8_MIN;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;
	int64_t t99 = 211015116568138090LL;

	t99 = (x397^(x398^(x399&x400)));

	if (t99 != -9223372036854326620LL) { NG(); } else { ; }
	
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

