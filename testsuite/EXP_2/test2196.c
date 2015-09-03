#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = 6905U;
static volatile uint64_t x13 = UINT64_MAX;
int16_t x16 = INT16_MAX;
int8_t x23 = 6;
uint8_t x24 = 0U;
uint8_t x25 = 76U;
int16_t x26 = -1;
uint8_t x28 = UINT8_MAX;
uint8_t x31 = UINT8_MAX;
uint64_t t8 = 9080419452242952023LLU;
int32_t x39 = INT32_MAX;
uint16_t x40 = UINT16_MAX;
uint32_t x44 = UINT32_MAX;
static int64_t x50 = 1959473979LL;
volatile int8_t x52 = 17;
int64_t t12 = 193157765050LL;
int8_t x57 = -11;
uint64_t x61 = UINT64_MAX;
int8_t x65 = INT8_MAX;
static volatile uint32_t x74 = 7921472U;
int8_t x91 = INT8_MIN;
uint16_t x92 = UINT16_MAX;
int32_t x93 = INT32_MIN;
static uint64_t x96 = UINT64_MAX;
int32_t x102 = INT32_MIN;
int64_t x104 = INT64_MIN;
int64_t x106 = INT64_MIN;
volatile uint64_t t27 = 24201LLU;
static volatile uint64_t x114 = UINT64_MAX;
int64_t x120 = 2120230LL;
int64_t t29 = -3822787LL;
int64_t x126 = -32634174939760233LL;
uint64_t t31 = 438718160421077LLU;
int8_t x129 = INT8_MIN;
volatile uint64_t x132 = 1226LLU;
volatile int32_t x138 = 14040;
int32_t t35 = -21710948;
volatile int64_t x145 = -1LL;
static int64_t t37 = 1531859792LL;
static volatile int8_t x153 = INT8_MIN;
uint64_t x158 = 353224369642LLU;
static int16_t x161 = INT16_MIN;
int32_t t40 = -6;
int32_t x166 = INT32_MAX;
int16_t x168 = INT16_MIN;
int64_t t42 = -2203849180149870LL;
int64_t x176 = INT64_MAX;
volatile int64_t t43 = 0LL;
uint8_t x177 = UINT8_MAX;
int16_t x179 = INT16_MIN;
int8_t x180 = INT8_MIN;
static int32_t x182 = INT32_MAX;
volatile int16_t x184 = 6584;
volatile uint32_t t46 = 933720U;
static uint32_t x190 = 1646647U;
int16_t x192 = INT16_MAX;
volatile uint32_t t47 = 415U;
uint64_t x194 = UINT64_MAX;
int16_t x198 = INT16_MAX;
static int32_t x203 = -230;
volatile int8_t x204 = INT8_MIN;
int16_t x209 = -1;
int64_t x211 = 25093639373LL;
uint64_t t53 = 108LLU;
int64_t x223 = -1LL;
uint64_t x224 = UINT64_MAX;
int8_t x227 = -1;
int8_t x230 = INT8_MAX;
static int32_t x232 = INT32_MIN;
int16_t x234 = INT16_MIN;
int16_t x236 = -12312;
static volatile int32_t t58 = 0;
int16_t x237 = -1;
int8_t x238 = INT8_MAX;
volatile int32_t t59 = -13935555;
uint16_t x243 = 14979U;
uint32_t x250 = 99U;
int16_t x253 = 44;
int32_t x256 = INT32_MIN;
int64_t x258 = INT64_MIN;
static int16_t x263 = 7;
int32_t x264 = INT32_MIN;
volatile uint32_t x265 = UINT32_MAX;
int8_t x266 = INT8_MIN;
uint32_t x267 = UINT32_MAX;
volatile int8_t x275 = INT8_MAX;
int64_t t68 = -751LL;
uint32_t x277 = UINT32_MAX;
int64_t x281 = INT64_MAX;
int64_t x282 = -1LL;
static volatile int32_t x284 = 112859791;
uint32_t x294 = 173470669U;
static int64_t x295 = -1LL;
int32_t t74 = -12613710;
uint32_t x307 = 0U;
int64_t x309 = INT64_MAX;
int64_t t77 = INT64_MAX;
static int64_t x313 = 138377408597272919LL;
int32_t x319 = INT32_MAX;
int16_t x320 = -1;
volatile uint64_t t80 = 195997535338614LLU;
static int32_t x331 = 976770929;
static volatile int8_t x333 = INT8_MIN;
int8_t x334 = INT8_MIN;
uint64_t t84 = 18618351195LLU;
volatile uint64_t x343 = 2129849701LLU;
static uint8_t x346 = 40U;
static int32_t x350 = 3647531;
int8_t x352 = INT8_MIN;
int8_t x353 = INT8_MIN;
static uint64_t t88 = 162237748318LLU;
volatile int16_t x357 = 1;
int8_t x364 = INT8_MIN;
uint16_t x365 = 1292U;
uint32_t x372 = 117809842U;
volatile int64_t t93 = 32595457072LL;
static uint8_t x378 = 49U;
int32_t x381 = -44;
int8_t x382 = 4;
int64_t x387 = INT64_MIN;
volatile int64_t x388 = INT64_MIN;
volatile int32_t x392 = 524629883;
static int64_t x394 = 35314LL;
int32_t t99 = 4;


void f0(void) {
	uint64_t x1 = 1801335204493LLU;
	static uint64_t x2 = 2636686LLU;
	static volatile int8_t x3 = INT8_MAX;
	volatile int16_t x4 = INT16_MIN;
	uint64_t t0 = 33043699312825LLU;

	t0 = ((x1^(x2^x3))|x4);

	if (t0 != 18446744073709539708LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint8_t x6 = UINT8_MAX;
	int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MAX;
	int64_t t1 = 10075166LL;

	t1 = ((x5^(x6^x7))|x8);

	if (t1 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x10 = 29005442454925LL;
	int64_t x12 = INT64_MIN;
	int64_t t2 = -7181341LL;

	t2 = ((x9^(x10^x11))|x12);

	if (t2 != -29005442453365LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -8721401594866LL;
	int16_t x15 = INT16_MAX;
	static uint64_t t3 = 16079129613LLU;

	t3 = ((x13^(x14^x15))|x16);

	if (t3 != 8721401610239LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 90222LLU;
	int64_t x18 = -1LL;
	static int8_t x19 = INT8_MIN;
	uint8_t x20 = 0U;
	static volatile uint64_t t4 = 1461878LLU;

	t4 = ((x17^(x18^x19))|x20);

	if (t4 != 90129LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -2;
	uint16_t x22 = 95U;
	volatile int32_t t5 = -10840;

	t5 = ((x21^(x22^x23))|x24);

	if (t5 != -89) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x27 = INT8_MIN;
	volatile int32_t t6 = 11;

	t6 = ((x25^(x26^x27))|x28);

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 12381123070237LLU;
	uint64_t x30 = 2190604890948135089LLU;
	uint32_t x32 = 5U;
	volatile uint64_t t7 = 155936648902LLU;

	t7 = ((x29^(x30^x31))|x32);

	if (t7 != 2190610653520273751LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 26519U;
	static int8_t x34 = -1;
	uint32_t x35 = 50U;
	uint64_t x36 = 5664408965976686LLU;

	t8 = ((x33^(x34^x35))|x36);

	if (t8 != 5664409028369022LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 1049U;
	static uint16_t x38 = 28U;
	int32_t t9 = INT32_MAX;

	t9 = ((x37^(x38^x39))|x40);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = UINT64_MAX;
	static uint16_t x42 = 105U;
	int16_t x43 = INT16_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x41^(x42^x43))|x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MIN;
	int32_t x47 = -792042168;
	uint16_t x48 = 870U;
	static volatile int64_t t11 = 71904LL;

	t11 = ((x45^(x46^x47))|x48);

	if (t11 != -9223372036062733330LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1398;
	static int32_t x51 = 2953229;

	t12 = ((x49^(x50^x51))|x52);

	if (t12 != -1961240131LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -3933;
	static uint8_t x54 = 37U;
	uint8_t x55 = 12U;
	static uint32_t x56 = UINT32_MAX;
	uint32_t t13 = UINT32_MAX;

	t13 = ((x53^(x54^x55))|x56);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	int16_t x59 = 1145;
	volatile uint16_t x60 = 50U;
	int64_t t14 = 1045277753LL;

	t14 = ((x57^(x58^x59))|x60);

	if (t14 != 9223372036854774718LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x62 = INT8_MIN;
	int64_t x63 = -508259LL;
	volatile uint16_t x64 = 646U;
	volatile uint64_t t15 = 261863578466810LLU;

	t15 = ((x61^(x62^x63))|x64);

	if (t15 != 18446744073709043430LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = -1;
	static int64_t x67 = INT64_MAX;
	volatile int8_t x68 = -33;
	volatile int64_t t16 = 77159070318993LL;

	t16 = ((x65^(x66^x67))|x68);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 359351292U;
	int32_t x70 = 15663;
	int64_t x71 = -3011736682096246523LL;
	int8_t x72 = -1;
	volatile int64_t t17 = -1588LL;

	t17 = ((x69^(x70^x71))|x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	uint16_t x75 = 389U;
	uint16_t x76 = 11085U;
	static uint32_t t18 = 12U;

	t18 = ((x73^(x74^x75))|x76);

	if (t18 != 2155413453U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	volatile uint16_t x78 = 266U;
	int32_t x79 = INT32_MAX;
	int8_t x80 = INT8_MAX;
	int64_t t19 = 12190LL;

	t19 = ((x77^(x78^x79))|x80);

	if (t19 != -9223372034707292417LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 1006410LLU;
	volatile uint16_t x82 = 111U;
	uint8_t x83 = 0U;
	volatile int16_t x84 = 1;
	uint64_t t20 = 16730596832543LLU;

	t20 = ((x81^(x82^x83))|x84);

	if (t20 != 1006373LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MIN;
	int32_t x87 = -1;
	int8_t x88 = INT8_MAX;
	int32_t t21 = 0;

	t21 = ((x85^(x86^x87))|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MAX;
	int64_t x90 = INT64_MIN;
	int64_t t22 = INT64_MAX;

	t22 = ((x89^(x90^x91))|x92);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = 13;
	static int16_t x95 = INT16_MIN;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = ((x93^(x94^x95))|x96);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	static volatile int8_t x98 = -23;
	int16_t x99 = INT16_MIN;
	volatile int64_t x100 = 240192030777LL;
	volatile int64_t t24 = 4276261801376128LL;

	t24 = ((x97^(x98^x99))|x100);

	if (t24 != 240518137919LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	int64_t x103 = -1LL;
	int64_t t25 = -20346514021061LL;

	t25 = ((x101^(x102^x103))|x104);

	if (t25 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = 1852;
	volatile int8_t x107 = INT8_MIN;
	int16_t x108 = INT16_MAX;
	int64_t t26 = INT64_MAX;

	t26 = ((x105^(x106^x107))|x108);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	static uint64_t x110 = 8702821830795318975LLU;
	static uint64_t x111 = 189LLU;
	static int16_t x112 = -1220;

	t27 = ((x109^(x110^x111))|x112);

	if (t27 != 18446744073709550589LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int8_t x115 = -1;
	uint16_t x116 = UINT16_MAX;
	static uint64_t t28 = 70271006561362293LLU;

	t28 = ((x113^(x114^x115))|x116);

	if (t28 != 65535LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MIN;
	uint16_t x118 = 7580U;
	uint32_t x119 = 4499788U;

	t29 = ((x117^(x118^x119))|x120);

	if (t29 != 2154102518LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	volatile uint8_t x123 = 4U;
	uint8_t x124 = 3U;
	int64_t t30 = -212070036089LL;

	t30 = ((x121^(x122^x123))|x124);

	if (t30 != 9223372036854775687LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	static int32_t x127 = INT32_MIN;
	uint16_t x128 = UINT16_MAX;

	t31 = ((x125^(x126^x127))|x128);

	if (t31 != 18414109900542246911LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MIN;
	uint16_t x131 = 1U;
	volatile uint64_t t32 = 102453080LLU;

	t32 = ((x129^(x130^x131))|x132);

	if (t32 != 9223372036854775755LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x133 = INT64_MAX;
	int32_t x134 = INT32_MAX;
	int8_t x135 = INT8_MIN;
	int32_t x136 = INT32_MIN;
	volatile int64_t t33 = 5LL;

	t33 = ((x133^(x134^x135))|x136);

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 22633906612LLU;
	int64_t x139 = -59LL;
	int16_t x140 = -1842;
	static volatile uint64_t t34 = 3512402215071972LLU;

	t34 = ((x137^(x138^x139))|x140);

	if (t34 != 18446744073709549807LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = 501;
	static int16_t x143 = 15;
	static uint8_t x144 = 10U;

	t35 = ((x141^(x142^x143))|x144);

	if (t35 != -32262) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = -1;
	volatile int8_t x147 = 1;
	int8_t x148 = INT8_MIN;
	volatile int64_t t36 = -23180054449002LL;

	t36 = ((x145^(x146^x147))|x148);

	if (t36 != -127LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = UINT8_MAX;
	int8_t x150 = -1;
	int32_t x151 = 619757156;
	static int64_t x152 = 1688824725094625964LL;

	t37 = ((x149^(x150^x151))|x152);

	if (t37 != -617647124LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x154 = INT64_MIN;
	volatile int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MIN;
	static volatile int64_t t38 = -46495634038668547LL;

	t38 = ((x153^(x154^x155))|x156);

	if (t38 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	int64_t x159 = INT64_MIN;
	int16_t x160 = INT16_MIN;
	uint64_t t39 = 7121292673593346081LLU;

	t39 = ((x157^(x158^x159))|x160);

	if (t39 != 18446744073709541909LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x162 = 22U;
	int16_t x163 = INT16_MIN;
	static volatile int16_t x164 = INT16_MAX;

	t40 = ((x161^(x162^x163))|x164);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int16_t x167 = INT16_MIN;
	int32_t t41 = -28401;

	t41 = ((x165^(x166^x167))|x168);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	static int64_t x170 = -37LL;
	uint16_t x171 = UINT16_MAX;
	static int8_t x172 = -1;

	t42 = ((x169^(x170^x171))|x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x173 = 728;
	volatile int64_t x174 = INT64_MIN;
	volatile uint8_t x175 = 65U;

	t43 = ((x173^(x174^x175))|x176);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MAX;
	volatile int32_t t44 = 243;

	t44 = ((x177^(x178^x179))|x180);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 2LLU;
	int32_t x183 = -1;
	uint64_t t45 = 3782176601877327635LLU;

	t45 = ((x181^(x182^x183))|x184);

	if (t45 != 18446744071562074554LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	uint8_t x186 = 18U;
	static int8_t x187 = INT8_MIN;
	static uint8_t x188 = UINT8_MAX;

	t46 = ((x185^(x186^x187))|x188);

	if (t46 != 255U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MIN;
	static int32_t x191 = INT32_MIN;

	t47 = ((x189^(x190^x191))|x192);

	if (t47 != 1671167U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x193 = 12U;
	volatile int32_t x195 = 696857;
	static uint64_t x196 = UINT64_MAX;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = ((x193^(x194^x195))|x196);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 13LLU;
	static int64_t x199 = 5067632LL;
	static int64_t x200 = -190LL;
	volatile uint64_t t49 = 261738314115LLU;

	t49 = ((x197^(x198^x199))|x200);

	if (t49 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile int64_t x202 = INT64_MIN;
	volatile int64_t t50 = 2495397933356844366LL;

	t50 = ((x201^(x202^x203))|x204);

	if (t50 != -102LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 20;
	int32_t x206 = -1;
	volatile int8_t x207 = INT8_MIN;
	uint8_t x208 = UINT8_MAX;
	int32_t t51 = 157569;

	t51 = ((x205^(x206^x207))|x208);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x210 = -1;
	int16_t x212 = 2;
	static int64_t t52 = -5746114028625LL;

	t52 = ((x209^(x210^x211))|x212);

	if (t52 != 25093639375LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 123597556741335991LLU;
	uint64_t x214 = 7LLU;
	volatile uint32_t x215 = 209U;
	uint32_t x216 = UINT32_MAX;

	t53 = ((x213^(x214^x215))|x216);

	if (t53 != 123597558072213503LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -6;
	int16_t x218 = 87;
	volatile int64_t x219 = INT64_MIN;
	uint16_t x220 = 865U;
	volatile int64_t t54 = -56879060852724LL;

	t54 = ((x217^(x218^x219))|x220);

	if (t54 != 9223372036854775789LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 3U;
	static uint32_t x222 = 93U;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = ((x221^(x222^x223))|x224);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 1517638373U;
	int32_t x226 = 11;
	static int16_t x228 = INT16_MAX;
	volatile uint32_t t56 = 7886983U;

	t56 = ((x225^(x226^x227))|x228);

	if (t56 != 2777350143U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 57U;
	int16_t x231 = INT16_MIN;
	volatile int32_t t57 = 5;

	t57 = ((x229^(x230^x231))|x232);

	if (t57 != -32698) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = 3692790;
	int32_t x235 = INT32_MIN;

	t58 = ((x233^(x234^x235))|x236);

	if (t58 != -8194) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x239 = 3;
	uint8_t x240 = UINT8_MAX;

	t59 = ((x237^(x238^x239))|x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	uint32_t x242 = 1U;
	static volatile uint32_t x244 = 7U;
	uint32_t t60 = 731U;

	t60 = ((x241^(x242^x243))|x244);

	if (t60 != 2147498631U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x245 = 56U;
	int64_t x246 = -1LL;
	static int8_t x247 = -1;
	uint32_t x248 = 326347U;
	volatile int64_t t61 = 0LL;

	t61 = ((x245^(x246^x247))|x248);

	if (t61 != 326395LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = -1;
	int8_t x251 = 0;
	static volatile int64_t x252 = INT64_MIN;
	volatile int64_t t62 = -377390057891944LL;

	t62 = ((x249^(x250^x251))|x252);

	if (t62 != -9223372032559808612LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MIN;
	int64_t x255 = -1LL;
	int64_t t63 = -32595850LL;

	t63 = ((x253^(x254^x255))|x256);

	if (t63 != -2147450925LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	int64_t x259 = INT64_MIN;
	int8_t x260 = -1;
	static volatile int64_t t64 = 2619656491961LL;

	t64 = ((x257^(x258^x259))|x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = 4U;
	volatile int8_t x262 = INT8_MIN;
	volatile int32_t t65 = -40;

	t65 = ((x261^(x262^x263))|x264);

	if (t65 != -125) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x268 = -1;
	uint32_t t66 = UINT32_MAX;

	t66 = ((x265^(x266^x267))|x268);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	uint64_t x270 = 5943140816031LLU;
	static volatile int8_t x271 = 2;
	uint8_t x272 = 9U;
	volatile uint64_t t67 = 200LLU;

	t67 = ((x269^(x270^x271))|x272);

	if (t67 != 18446738130528375965LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x273 = INT64_MIN;
	int16_t x274 = 1;
	uint32_t x276 = UINT32_MAX;

	t68 = ((x273^(x274^x275))|x276);

	if (t68 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = -1;
	int16_t x279 = 1;
	volatile int64_t x280 = INT64_MAX;
	int64_t t69 = INT64_MAX;

	t69 = ((x277^(x278^x279))|x280);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x283 = 0;
	int64_t t70 = 14028LL;

	t70 = ((x281^(x282^x283))|x284);

	if (t70 != -9223372036741916017LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	static uint16_t x286 = 2940U;
	uint8_t x287 = 1U;
	int32_t x288 = INT32_MIN;
	int32_t t71 = -124562809;

	t71 = ((x285^(x286^x287))|x288);

	if (t71 != -2147480830) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	int16_t x290 = 1892;
	volatile int8_t x291 = -2;
	int32_t x292 = 503376176;
	volatile int32_t t72 = 495889850;

	t72 = ((x289^(x290^x291))|x292);

	if (t72 != -4235) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -2159652LL;
	int8_t x296 = INT8_MIN;
	int64_t t73 = 51486967547040LL;

	t73 = ((x293^(x294^x295))|x296);

	if (t73 != -18LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 850609;
	static int32_t x298 = -597;
	int32_t x299 = INT32_MAX;
	int32_t x300 = -1;

	t74 = ((x297^(x298^x299))|x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MIN;
	volatile uint16_t x302 = 948U;
	static uint64_t x303 = 19LLU;
	int32_t x304 = 8;
	uint64_t t75 = 0LLU;

	t75 = ((x301^(x302^x303))|x304);

	if (t75 != 9223372036854776751LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	uint64_t x306 = 8389485043LLU;
	volatile uint16_t x308 = UINT16_MAX;
	uint64_t t76 = 30872652036716580LLU;

	t76 = ((x305^(x306^x307))|x308);

	if (t76 != 9223372028465315839LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x310 = -1;
	int16_t x311 = INT16_MIN;
	static volatile int32_t x312 = INT32_MAX;

	t77 = ((x309^(x310^x311))|x312);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x314 = 4155U;
	static int8_t x315 = 0;
	int8_t x316 = INT8_MAX;
	int64_t t78 = -18629910011208LL;

	t78 = ((x313^(x314^x315))|x316);

	if (t78 != 138377408597277055LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -1451811091LL;
	int64_t x318 = -1LL;
	volatile int64_t t79 = 9205LL;

	t79 = ((x317^(x318^x319))|x320);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	volatile int16_t x322 = -1;
	static uint64_t x323 = UINT64_MAX;
	uint8_t x324 = 2U;

	t80 = ((x321^(x322^x323))|x324);

	if (t80 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -502;
	volatile uint64_t x326 = 50433LLU;
	int64_t x327 = INT64_MAX;
	int8_t x328 = -37;
	static volatile uint64_t t81 = UINT64_MAX;

	t81 = ((x325^(x326^x327))|x328);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 27036101162LL;
	int16_t x330 = INT16_MAX;
	uint64_t x332 = UINT64_MAX;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = ((x329^(x330^x331))|x332);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x335 = -1;
	int16_t x336 = INT16_MIN;
	static volatile int32_t t83 = -3829;

	t83 = ((x333^(x334^x335))|x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	volatile uint64_t x338 = 176317020659LLU;
	uint64_t x339 = 51406693LLU;
	uint32_t x340 = 5U;

	t84 = ((x337^(x338^x339))|x340);

	if (t84 != 176332758765LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int8_t x342 = -1;
	uint64_t x344 = 322498621LLU;
	volatile uint64_t t85 = 75LLU;

	t85 = ((x341^(x342^x343))|x344);

	if (t85 != 322826943LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = INT16_MIN;
	int32_t x347 = INT32_MAX;
	int16_t x348 = -1;
	static volatile int32_t t86 = 448527;

	t86 = ((x345^(x346^x347))|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	int32_t x351 = -2476;
	int32_t t87 = 3;

	t87 = ((x349^(x350^x351))|x352);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = 15781238279LLU;

	t88 = ((x353^(x354^x355))|x356);

	if (t88 != 9223372054034644871LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = INT16_MIN;
	int64_t x359 = -1LL;
	int32_t x360 = -61735;
	volatile int64_t t89 = -3922LL;

	t89 = ((x357^(x358^x359))|x360);

	if (t89 != -32769LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MIN;
	uint32_t x362 = 919392U;
	int16_t x363 = -1;
	int64_t t90 = -57518225865399631LL;

	t90 = ((x361^(x362^x363))|x364);

	if (t90 != -97LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = 464;
	int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MIN;
	volatile int32_t t91 = 195;

	t91 = ((x365^(x366^x367))|x368);

	if (t91 != -36) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	uint32_t x370 = 8515331U;
	int8_t x371 = -3;
	volatile int64_t t92 = -994732798339469793LL;

	t92 = ((x369^(x370^x371))|x372);

	if (t92 != -9223372032568216834LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	volatile int8_t x374 = -1;
	uint16_t x375 = 31106U;
	volatile uint32_t x376 = 9392370U;

	t93 = ((x373^(x374^x375))|x376);

	if (t93 != 9223372036854765311LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	int32_t x379 = -1328462;
	static int32_t x380 = -1;
	int32_t t94 = -219577;

	t94 = ((x377^(x378^x379))|x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MAX;
	int32_t t95 = INT32_MAX;

	t95 = ((x381^(x382^x383))|x384);

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	static volatile int32_t x386 = INT32_MIN;
	volatile int64_t t96 = 16103LL;

	t96 = ((x385^(x386^x387))|x388);

	if (t96 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	uint8_t x390 = UINT8_MAX;
	static int16_t x391 = INT16_MIN;
	int32_t t97 = -139953396;

	t97 = ((x389^(x390^x391))|x392);

	if (t97 != 2147465215) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MAX;
	uint8_t x395 = UINT8_MAX;
	volatile uint64_t x396 = 7782685341275LLU;
	volatile uint64_t t98 = 1865521LLU;

	t98 = ((x393^(x394^x395))|x396);

	if (t98 != 7784628221691LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	volatile int16_t x398 = -1;
	static uint8_t x399 = UINT8_MAX;
	int8_t x400 = -1;

	t99 = ((x397^(x398^x399))|x400);

	if (t99 != -1) { NG(); } else { ; }
	
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

