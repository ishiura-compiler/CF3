#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 20502LLU;
volatile int8_t x9 = 1;
int64_t x11 = INT64_MIN;
int8_t x17 = -28;
volatile int16_t x22 = -5;
uint16_t x23 = 6755U;
volatile int16_t x28 = INT16_MAX;
int16_t x30 = -1;
uint8_t x32 = 1U;
static uint64_t x39 = 27136232710582598LLU;
int16_t x42 = 230;
int32_t x43 = -498783;
int32_t t14 = 283;
static int64_t x61 = 158676905927721LL;
uint16_t x72 = UINT16_MAX;
volatile int8_t x83 = INT8_MAX;
int32_t x86 = -1;
int16_t x97 = INT16_MIN;
int8_t x99 = INT8_MIN;
static int16_t x102 = INT16_MIN;
static int16_t x109 = -1;
uint32_t x111 = 6964335U;
uint32_t x112 = 45566342U;
uint8_t x115 = 1U;
uint64_t t31 = 10601475460LLU;
int16_t x134 = -814;
uint64_t x140 = 515007LLU;
int64_t x141 = INT64_MIN;
volatile int64_t t34 = 4022486566075367LL;
uint32_t x155 = 61329U;
static int64_t t38 = -1LL;
static uint32_t x161 = 3699392U;
uint32_t x165 = 1694308724U;
int8_t x167 = -1;
static volatile uint32_t t40 = 244500559U;
static uint16_t x171 = 3488U;
uint32_t x186 = 0U;
static uint64_t x187 = 104263154356856959LLU;
static int32_t x188 = 3;
int16_t x190 = -1;
int16_t x193 = INT16_MIN;
static uint8_t x197 = 11U;
uint8_t x199 = 13U;
int8_t x213 = INT8_MIN;
volatile int32_t t53 = -4410;
static int64_t x226 = INT64_MIN;
static uint8_t x227 = UINT8_MAX;
int16_t x228 = INT16_MIN;
volatile int64_t t55 = 313435565892705LL;
uint32_t t56 = UINT32_MAX;
int64_t x234 = 293779459873502681LL;
uint64_t x235 = 0LLU;
int64_t t57 = -152LL;
int8_t x245 = INT8_MAX;
volatile uint64_t t61 = 3608131513569625LLU;
int32_t x253 = INT32_MAX;
int64_t x255 = INT64_MAX;
int64_t x261 = -1LL;
int32_t x264 = INT32_MAX;
int8_t x277 = 6;
uint32_t x278 = 1297U;
static int64_t x279 = INT64_MIN;
uint32_t x282 = 2U;
static int8_t x288 = INT8_MAX;
int32_t x295 = INT32_MIN;
int64_t x296 = INT64_MAX;
volatile uint32_t t71 = 188065544U;
static int8_t x299 = 1;
uint32_t x302 = UINT32_MAX;
uint32_t x310 = 2060998979U;
volatile int16_t x313 = INT16_MIN;
volatile int8_t x317 = -1;
volatile int32_t x318 = INT32_MIN;
int8_t x320 = INT8_MAX;
int32_t t77 = INT32_MAX;
uint8_t x350 = 4U;
volatile int32_t t86 = 1128600;
volatile int64_t x358 = 721LL;
int64_t x363 = INT64_MIN;
volatile int8_t x367 = INT8_MAX;
int32_t t89 = -166285;
uint32_t x369 = 1770035U;
uint16_t x370 = 1052U;
int64_t x376 = INT64_MAX;
int8_t x378 = INT8_MAX;
volatile int32_t x384 = INT32_MAX;
uint64_t x387 = 1729151503LLU;
volatile int16_t x389 = INT16_MAX;
int64_t x390 = 1578477739034035LL;
int16_t x399 = INT16_MAX;
volatile int32_t t97 = 3478943;
int64_t x404 = INT64_MIN;
volatile uint64_t x406 = 5006084LLU;


void f0(void) {
	uint16_t x1 = 32368U;
	uint64_t x2 = 90LLU;
	uint32_t x3 = UINT32_MAX;
	static int16_t x4 = -3635;

	t0 = ((x1^x2)-(x3<x4));

	if (t0 != 32298LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -754;
	int32_t x6 = INT32_MIN;
	uint64_t x7 = 1088975056484135300LLU;
	int8_t x8 = -1;
	static volatile int32_t t1 = -247;

	t1 = ((x5^x6)-(x7<x8));

	if (t1 != 2147482893) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MAX;
	volatile uint64_t x12 = 217107036994LLU;
	volatile int32_t t2 = -304397;

	t2 = ((x9^x10)-(x11<x12));

	if (t2 != 2147483646) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -9;
	static uint8_t x14 = 0U;
	static int16_t x15 = INT16_MIN;
	uint8_t x16 = 74U;
	static volatile int32_t t3 = -4;

	t3 = ((x13^x14)-(x15<x16));

	if (t3 != -10) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 1824010566U;
	static int16_t x19 = INT16_MAX;
	volatile int64_t x20 = -1LL;
	uint32_t t4 = 313U;

	t4 = ((x17^x18)-(x19<x20));

	if (t4 != 2470956706U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 1433559765LLU;
	uint64_t x24 = 69509673177218327LLU;
	volatile uint64_t t5 = 1722522LLU;

	t5 = ((x21^x22)-(x23<x24));

	if (t5 != 18446744072275991853LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	volatile int64_t x26 = 744838094LL;
	uint8_t x27 = 12U;
	int64_t t6 = 1049LL;

	t6 = ((x25^x26)-(x27<x28));

	if (t6 != -744838096LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int16_t x31 = INT16_MIN;
	int32_t t7 = 9798965;

	t7 = ((x29^x30)-(x31<x32));

	if (t7 != -257) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	int64_t x34 = -915237033591329LL;
	int32_t x35 = 1;
	uint8_t x36 = 11U;
	static int64_t t8 = -172444911695327LL;

	t8 = ((x33^x34)-(x35<x36));

	if (t8 != 915237225774558LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -127;
	int16_t x38 = INT16_MIN;
	volatile uint8_t x40 = 54U;
	int32_t t9 = -5035418;

	t9 = ((x37^x38)-(x39<x40));

	if (t9 != 32641) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	static int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -719231265;

	t10 = ((x41^x42)-(x43<x44));

	if (t10 != 65304) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x45 = 176U;
	volatile int64_t x46 = INT64_MAX;
	int8_t x47 = INT8_MIN;
	uint8_t x48 = UINT8_MAX;
	static volatile int64_t t11 = -1113774LL;

	t11 = ((x45^x46)-(x47<x48));

	if (t11 != 9223372036854775630LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x49 = INT32_MIN;
	int32_t x50 = -1;
	uint16_t x51 = 7443U;
	uint64_t x52 = 13430731990LLU;
	int32_t t12 = 26929877;

	t12 = ((x49^x50)-(x51<x52));

	if (t12 != 2147483646) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int32_t x54 = -1;
	int32_t x55 = INT32_MIN;
	uint32_t x56 = 13881U;
	int32_t t13 = INT32_MAX;

	t13 = ((x53^x54)-(x55<x56));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x57 = 1826747;
	static uint8_t x58 = 64U;
	int16_t x59 = -1;
	int8_t x60 = INT8_MIN;

	t14 = ((x57^x58)-(x59<x60));

	if (t14 != 1826811) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = 784U;
	volatile int64_t x63 = INT64_MAX;
	volatile int32_t x64 = 10;
	volatile int64_t t15 = -252751819823LL;

	t15 = ((x61^x62)-(x63<x64));

	if (t15 != 158676905928505LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x65 = INT64_MIN;
	int8_t x66 = 1;
	static int8_t x67 = -1;
	uint8_t x68 = 29U;
	int64_t t16 = INT64_MIN;

	t16 = ((x65^x66)-(x67<x68));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = 1;
	volatile int8_t x71 = 1;
	int32_t t17 = 214559716;

	t17 = ((x69^x70)-(x71<x72));

	if (t17 != 65533) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 30U;
	volatile uint32_t x74 = UINT32_MAX;
	uint8_t x75 = 1U;
	static uint16_t x76 = 13U;
	uint32_t t18 = 23U;

	t18 = ((x73^x74)-(x75<x76));

	if (t18 != 4294967264U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MAX;
	volatile uint64_t x78 = 11146LLU;
	int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MIN;
	uint64_t t19 = 63985033019086122LLU;

	t19 = ((x77^x78)-(x79<x80));

	if (t19 != 11253LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int32_t x82 = -14936;
	volatile int32_t x84 = -1;
	int32_t t20 = 3354;

	t20 = ((x81^x82)-(x83<x84));

	if (t20 != -14889) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x85 = 437789;
	uint16_t x87 = 3U;
	uint64_t x88 = UINT64_MAX;
	int32_t t21 = -536;

	t21 = ((x85^x86)-(x87<x88));

	if (t21 != -437791) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	int16_t x91 = -29;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 137904;

	t22 = ((x89^x90)-(x91<x92));

	if (t22 != 32639) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	int16_t x94 = 4;
	uint16_t x95 = 29U;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = -1406120;

	t23 = ((x93^x94)-(x95<x96));

	if (t23 != 250) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x98 = INT16_MIN;
	int8_t x100 = INT8_MAX;
	int32_t t24 = -24055392;

	t24 = ((x97^x98)-(x99<x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = 0;
	static volatile int8_t x103 = -1;
	volatile int32_t x104 = -11437150;
	volatile int32_t t25 = -10991;

	t25 = ((x101^x102)-(x103<x104));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = 2003U;
	int8_t x106 = -18;
	int64_t x107 = 1LL;
	volatile int32_t x108 = 548800012;
	volatile int32_t t26 = -493500363;

	t26 = ((x105^x106)-(x107<x108));

	if (t26 != -1988) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 38LLU;
	uint64_t t27 = 9356LLU;

	t27 = ((x109^x110)-(x111<x112));

	if (t27 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	uint16_t x114 = 1U;
	int32_t x116 = INT32_MAX;
	int32_t t28 = -827613880;

	t28 = ((x113^x114)-(x115<x116));

	if (t28 != -3) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = INT8_MAX;
	volatile int32_t x119 = INT32_MIN;
	volatile int16_t x120 = INT16_MIN;
	static volatile int32_t t29 = -172104;

	t29 = ((x117^x118)-(x119<x120));

	if (t29 != 32639) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	int8_t x122 = INT8_MAX;
	int64_t x123 = -1LL;
	int8_t x124 = INT8_MIN;
	volatile uint32_t t30 = 128910U;

	t30 = ((x121^x122)-(x123<x124));

	if (t30 != 4294967168U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x129 = 62U;
	uint64_t x130 = UINT64_MAX;
	uint32_t x131 = UINT32_MAX;
	int64_t x132 = INT64_MIN;

	t31 = ((x129^x130)-(x131<x132));

	if (t31 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x133 = 27789U;
	static uint64_t x135 = 3821288574116124LLU;
	static int32_t x136 = -7613;
	int32_t t32 = -15;

	t32 = ((x133^x134)-(x135<x136));

	if (t32 != -28578) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	uint32_t x138 = 389473U;
	int8_t x139 = INT8_MIN;
	volatile int64_t t33 = -1308383LL;

	t33 = ((x137^x138)-(x139<x140));

	if (t33 != -9223372036854386335LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x142 = 29U;
	uint64_t x143 = 128793199LLU;
	volatile int32_t x144 = -6791;

	t34 = ((x141^x142)-(x143<x144));

	if (t34 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x145 = 6498U;
	int32_t x146 = INT32_MAX;
	uint32_t x147 = 23276U;
	int16_t x148 = -33;
	static volatile uint32_t t35 = 93078U;

	t35 = ((x145^x146)-(x147<x148));

	if (t35 != 2147477148U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 3U;
	static volatile int8_t x150 = 2;
	static volatile int16_t x151 = -5484;
	static int8_t x152 = INT8_MAX;
	volatile uint32_t t36 = 852U;

	t36 = ((x149^x150)-(x151<x152));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x153 = -19;
	int16_t x154 = 1007;
	volatile uint16_t x156 = UINT16_MAX;
	int32_t t37 = 181352393;

	t37 = ((x153^x154)-(x155<x156));

	if (t37 != -1023) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x157 = INT64_MIN;
	uint16_t x158 = 1U;
	static int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MIN;

	t38 = ((x157^x158)-(x159<x160));

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x162 = 70U;
	uint8_t x163 = 17U;
	uint64_t x164 = 1LLU;
	volatile uint32_t t39 = 1U;

	t39 = ((x161^x162)-(x163<x164));

	if (t39 != 3699334U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x166 = -1;
	int16_t x168 = 0;

	t40 = ((x165^x166)-(x167<x168));

	if (t40 != 2600658570U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x169 = 2U;
	static int8_t x170 = INT8_MIN;
	static uint8_t x172 = 47U;
	volatile int32_t t41 = -644739403;

	t41 = ((x169^x170)-(x171<x172));

	if (t41 != -126) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -1;
	uint64_t x174 = UINT64_MAX;
	int32_t x175 = -36080181;
	uint8_t x176 = 123U;
	static uint64_t t42 = UINT64_MAX;

	t42 = ((x173^x174)-(x175<x176));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x177 = UINT64_MAX;
	static int32_t x178 = INT32_MIN;
	volatile int8_t x179 = INT8_MIN;
	uint8_t x180 = UINT8_MAX;
	static uint64_t t43 = 1461737273312LLU;

	t43 = ((x177^x178)-(x179<x180));

	if (t43 != 2147483646LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -23;
	volatile uint32_t x182 = 154462U;
	int64_t x183 = INT64_MAX;
	int32_t x184 = -1;
	volatile uint32_t t44 = 236899458U;

	t44 = ((x181^x182)-(x183<x184));

	if (t44 != 4294812855U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = 4276000426624697LLU;
	uint64_t t45 = 15092842094LLU;

	t45 = ((x185^x186)-(x187<x188));

	if (t45 != 4276000426624697LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x189 = 7232449U;
	static uint64_t x191 = 204760682326LLU;
	uint32_t x192 = 42U;
	volatile uint32_t t46 = 167201U;

	t46 = ((x189^x190)-(x191<x192));

	if (t46 != 4287734846U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x194 = 3040394LL;
	static int8_t x195 = INT8_MIN;
	int64_t x196 = -268LL;
	int64_t t47 = 3529222553202172LL;

	t47 = ((x193^x194)-(x195<x196));

	if (t47 != -3021686LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x198 = -1;
	int64_t x200 = INT64_MIN;
	volatile int32_t t48 = 8;

	t48 = ((x197^x198)-(x199<x200));

	if (t48 != -12) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x201 = INT16_MAX;
	int32_t x202 = -5262165;
	int8_t x203 = 0;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t49 = -14153285;

	t49 = ((x201^x202)-(x203<x204));

	if (t49 != -5256365) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x205 = 691695474LLU;
	int64_t x206 = INT64_MIN;
	int64_t x207 = -214445519301764LL;
	int32_t x208 = -9193264;
	volatile uint64_t t50 = 7170622264809LLU;

	t50 = ((x205^x206)-(x207<x208));

	if (t50 != 9223372037546471281LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = -1;
	int16_t x210 = -1703;
	int8_t x211 = 2;
	int64_t x212 = INT64_MAX;
	int32_t t51 = 19;

	t51 = ((x209^x210)-(x211<x212));

	if (t51 != 1701) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x214 = INT8_MIN;
	uint32_t x215 = 78U;
	static int16_t x216 = -1;
	int32_t t52 = -62;

	t52 = ((x213^x214)-(x215<x216));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x217 = 1371;
	int8_t x218 = INT8_MIN;
	int32_t x219 = INT32_MIN;
	uint64_t x220 = 7044506335796LLU;

	t53 = ((x217^x218)-(x219<x220));

	if (t53 != -1317) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = 7012463599LL;
	uint64_t x222 = 5608282LLU;
	static uint8_t x223 = 0U;
	int8_t x224 = 2;
	uint64_t t54 = 5839179432077LLU;

	t54 = ((x221^x222)-(x223<x224));

	if (t54 != 7007379636LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = 167087756;

	t55 = ((x225^x226)-(x227<x228));

	if (t55 != -9223372036687688052LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x230 = -1;
	uint32_t x231 = 373352U;
	int32_t x232 = INT32_MIN;

	t56 = ((x229^x230)-(x231<x232));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x233 = INT32_MIN;
	static int16_t x236 = -1;

	t57 = ((x233^x234)-(x235<x236));

	if (t57 != -293779460005497384LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = 503LL;
	uint16_t x239 = 902U;
	uint16_t x240 = 933U;
	static volatile int64_t t58 = 1884755871273865242LL;

	t58 = ((x237^x238)-(x239<x240));

	if (t58 != -2147483146LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x241 = 0U;
	int64_t x242 = INT64_MIN;
	volatile uint8_t x243 = 28U;
	static volatile int32_t x244 = INT32_MIN;
	int64_t t59 = INT64_MIN;

	t59 = ((x241^x242)-(x243<x244));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x246 = 217LLU;
	uint64_t x247 = 4404864884LLU;
	uint32_t x248 = 335902U;
	volatile uint64_t t60 = 0LLU;

	t60 = ((x245^x246)-(x247<x248));

	if (t60 != 166LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = 252LL;
	volatile uint64_t x250 = 688LLU;
	static int8_t x251 = 1;
	int16_t x252 = -2241;

	t61 = ((x249^x250)-(x251<x252));

	if (t61 != 588LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x254 = 74U;
	int8_t x256 = INT8_MAX;
	volatile int32_t t62 = -530089;

	t62 = ((x253^x254)-(x255<x256));

	if (t62 != 2147483573) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x262 = INT32_MAX;
	uint16_t x263 = 1925U;
	volatile int64_t t63 = 3871100225135LL;

	t63 = ((x261^x262)-(x263<x264));

	if (t63 != -2147483649LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = 6U;
	int16_t x266 = INT16_MIN;
	int32_t x267 = -306555;
	static int32_t x268 = -373401199;
	volatile int32_t t64 = 945;

	t64 = ((x265^x266)-(x267<x268));

	if (t64 != -32762) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MIN;
	volatile int32_t x270 = -6;
	uint16_t x271 = 2413U;
	int8_t x272 = -1;
	static int32_t t65 = 126260;

	t65 = ((x269^x270)-(x271<x272));

	if (t65 != 122) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x273 = 18U;
	int32_t x274 = INT32_MIN;
	uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MAX;
	volatile int32_t t66 = 16526150;

	t66 = ((x273^x274)-(x275<x276));

	if (t66 != -2147483630) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x280 = UINT32_MAX;
	volatile uint32_t t67 = 1014667U;

	t67 = ((x277^x278)-(x279<x280));

	if (t67 != 1302U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -745LL;
	uint32_t x283 = UINT32_MAX;
	int8_t x284 = INT8_MIN;
	static int64_t t68 = 99954558730788LL;

	t68 = ((x281^x282)-(x283<x284));

	if (t68 != -747LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MAX;
	volatile int32_t x286 = INT32_MIN;
	volatile int8_t x287 = 1;
	int32_t t69 = 248942598;

	t69 = ((x285^x286)-(x287<x288));

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x289 = 788U;
	int64_t x290 = INT64_MIN;
	int16_t x291 = INT16_MAX;
	int32_t x292 = 21;
	int64_t t70 = -225854926LL;

	t70 = ((x289^x290)-(x291<x292));

	if (t70 != -9223372036854775020LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MAX;
	static uint32_t x294 = UINT32_MAX;

	t71 = ((x293^x294)-(x295<x296));

	if (t71 != 4294934527U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x297 = -40;
	int32_t x298 = -12080198;
	int64_t x300 = INT64_MIN;
	volatile int32_t t72 = 145;

	t72 = ((x297^x298)-(x299<x300));

	if (t72 != 12080226) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	static int64_t x303 = 4046922292186LL;
	static volatile int32_t x304 = INT32_MAX;
	uint32_t t73 = 707U;

	t73 = ((x301^x302)-(x303<x304));

	if (t73 != 127U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = INT16_MAX;
	int8_t x306 = 16;
	int16_t x307 = -7739;
	int8_t x308 = -16;
	static volatile int32_t t74 = 3960;

	t74 = ((x305^x306)-(x307<x308));

	if (t74 != 32750) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	int16_t x311 = 2;
	int32_t x312 = -59;
	static int64_t t75 = -10LL;

	t75 = ((x309^x310)-(x311<x312));

	if (t75 != -9223372034793776829LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x314 = 4LLU;
	uint64_t x315 = 56137LLU;
	volatile int8_t x316 = -1;
	uint64_t t76 = 1LLU;

	t76 = ((x313^x314)-(x315<x316));

	if (t76 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x319 = UINT8_MAX;

	t77 = ((x317^x318)-(x319<x320));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x321 = UINT32_MAX;
	static int64_t x322 = INT64_MAX;
	static int8_t x323 = 10;
	int16_t x324 = INT16_MIN;
	static volatile int64_t t78 = -5771LL;

	t78 = ((x321^x322)-(x323<x324));

	if (t78 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = 1753247719LL;
	int32_t x326 = -1;
	int8_t x327 = INT8_MIN;
	int8_t x328 = -1;
	static volatile int64_t t79 = 12LL;

	t79 = ((x325^x326)-(x327<x328));

	if (t79 != -1753247721LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = UINT64_MAX;
	static int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MAX;
	uint16_t x332 = UINT16_MAX;
	volatile uint64_t t80 = 120609186064849790LLU;

	t80 = ((x329^x330)-(x331<x332));

	if (t80 != 2147483646LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x333 = 0U;
	int8_t x334 = INT8_MIN;
	int8_t x335 = -1;
	volatile uint8_t x336 = 5U;
	volatile int32_t t81 = -49477818;

	t81 = ((x333^x334)-(x335<x336));

	if (t81 != -129) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = 38U;
	static uint32_t x338 = 60U;
	uint8_t x339 = 10U;
	int16_t x340 = -463;
	uint32_t t82 = 435164U;

	t82 = ((x337^x338)-(x339<x340));

	if (t82 != 26U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = -688528105LL;
	int32_t x343 = INT32_MIN;
	int16_t x344 = -1;
	static volatile int64_t t83 = -3675643907733622LL;

	t83 = ((x341^x342)-(x343<x344));

	if (t83 != 688547094LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x345 = 913591029820675LLU;
	int16_t x346 = -18;
	volatile int64_t x347 = -1LL;
	static volatile int64_t x348 = 21541815052036850LL;
	volatile uint64_t t84 = 134514936046506305LLU;

	t84 = ((x345^x346)-(x347<x348));

	if (t84 != 18445830482679730924LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = UINT32_MAX;
	static int64_t x351 = INT64_MIN;
	int16_t x352 = INT16_MIN;
	uint32_t t85 = 603U;

	t85 = ((x349^x350)-(x351<x352));

	if (t85 != 4294967290U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = -3;
	int8_t x354 = INT8_MAX;
	int8_t x355 = INT8_MAX;
	static uint16_t x356 = 326U;

	t86 = ((x353^x354)-(x355<x356));

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 11U;
	static uint8_t x359 = 34U;
	uint8_t x360 = 3U;
	volatile int64_t t87 = 25271248687135LL;

	t87 = ((x357^x358)-(x359<x360));

	if (t87 != 730LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x361 = INT16_MIN;
	int16_t x362 = -1567;
	static volatile int64_t x364 = INT64_MAX;
	static int32_t t88 = 215;

	t88 = ((x361^x362)-(x363<x364));

	if (t88 != 31200) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = -1;
	int32_t x366 = -44093;
	int16_t x368 = 480;

	t89 = ((x365^x366)-(x367<x368));

	if (t89 != 44091) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x371 = -22LL;
	uint8_t x372 = 125U;
	uint32_t t90 = 63939292U;

	t90 = ((x369^x370)-(x371<x372));

	if (t90 != 1771054U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = 2429707808014LL;
	int32_t x375 = -1;
	volatile int64_t t91 = -87996967251127LL;

	t91 = ((x373^x374)-(x375<x376));

	if (t91 != 2430047687408LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x377 = -1;
	int16_t x379 = 6;
	uint8_t x380 = UINT8_MAX;
	int32_t t92 = 9596;

	t92 = ((x377^x378)-(x379<x380));

	if (t92 != -129) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = INT64_MAX;
	volatile int32_t x382 = INT32_MIN;
	int32_t x383 = INT32_MIN;
	volatile int64_t t93 = 104LL;

	t93 = ((x381^x382)-(x383<x384));

	if (t93 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = -1;
	int64_t x388 = INT64_MIN;
	volatile int32_t t94 = -5;

	t94 = ((x385^x386)-(x387<x388));

	if (t94 != -65537) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x391 = INT32_MAX;
	volatile int16_t x392 = 5;
	volatile int64_t t95 = -38379959382LL;

	t95 = ((x389^x390)-(x391<x392));

	if (t95 != 1578477739031116LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x393 = 31U;
	int16_t x394 = -5;
	uint64_t x395 = UINT64_MAX;
	static int8_t x396 = 1;
	volatile uint32_t t96 = 1095085U;

	t96 = ((x393^x394)-(x395<x396));

	if (t96 != 4294967268U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x397 = 0U;
	static int8_t x398 = INT8_MIN;
	uint64_t x400 = 258030822572LLU;

	t97 = ((x397^x398)-(x399<x400));

	if (t97 != -129) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x401 = UINT64_MAX;
	volatile int32_t x402 = INT32_MAX;
	uint64_t x403 = 238LLU;
	volatile uint64_t t98 = 2LLU;

	t98 = ((x401^x402)-(x403<x404));

	if (t98 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x405 = 16510051277191LLU;
	static int64_t x407 = -1LL;
	int16_t x408 = -3;
	volatile uint64_t t99 = 4LLU;

	t99 = ((x405^x406)-(x407<x408));

	if (t99 != 16510054677123LLU) { NG(); } else { ; }
	
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

