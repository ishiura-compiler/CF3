#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MIN;
int64_t x7 = INT64_MAX;
volatile uint64_t x8 = 260223263LLU;
int16_t x10 = -11;
int8_t x17 = 1;
int8_t x19 = INT8_MAX;
uint16_t x29 = 5U;
uint32_t x31 = 1856U;
int32_t t8 = -713;
volatile int8_t x42 = -3;
int64_t x47 = INT64_MIN;
uint32_t x50 = 505283417U;
volatile uint32_t x54 = 3381971U;
int16_t x63 = INT16_MAX;
volatile uint64_t t16 = 15600227399932969LLU;
static volatile int32_t x83 = 1845;
uint64_t t18 = 268304LLU;
volatile uint64_t x101 = 1639754651143LLU;
static uint64_t x106 = 2398965LLU;
uint32_t x107 = UINT32_MAX;
uint64_t x109 = 191661LLU;
static volatile uint64_t t24 = 56LLU;
volatile int8_t x113 = INT8_MIN;
static int8_t x116 = INT8_MIN;
uint64_t x125 = 28941618305786547LLU;
int64_t x128 = INT64_MIN;
volatile uint64_t t31 = 1140336739353089824LLU;
static int16_t x141 = INT16_MIN;
volatile int32_t x144 = -1;
int64_t x159 = INT64_MAX;
volatile int64_t t36 = 4LL;
uint64_t x162 = UINT64_MAX;
uint64_t x177 = UINT64_MAX;
int8_t x182 = 4;
int64_t x192 = INT64_MIN;
int32_t x221 = -1;
int8_t x223 = INT8_MIN;
volatile uint32_t x227 = 128U;
int8_t x232 = INT8_MIN;
int8_t x240 = -1;
static int32_t t54 = 1245;
int8_t x243 = INT8_MAX;
int8_t x246 = INT8_MAX;
uint16_t x251 = 0U;
volatile int32_t t57 = 499;
uint64_t x253 = 14309377665103LLU;
uint16_t x256 = UINT16_MAX;
static uint32_t x263 = 1238U;
uint16_t x266 = 1924U;
int32_t x269 = 376790;
static uint64_t t62 = 4072614LLU;
uint16_t x274 = 3U;
volatile uint32_t t63 = 120U;
int8_t x280 = INT8_MIN;
static int8_t x314 = INT8_MIN;
int16_t x331 = -1;
static volatile int64_t t71 = 15137308592458LL;
uint32_t x333 = 7665934U;
uint16_t x337 = 7U;
int64_t x338 = INT64_MIN;
int8_t x341 = INT8_MIN;
uint32_t t77 = 8703U;
int8_t x364 = INT8_MIN;
uint64_t x372 = UINT64_MAX;
uint8_t x376 = 10U;
static uint64_t x381 = 55LLU;
static int64_t x382 = 28613464LL;
static uint64_t t83 = 5295705308981562888LLU;
int16_t x386 = 4;
static int8_t x393 = INT8_MIN;
static volatile uint64_t t86 = 388LLU;
int16_t x398 = INT16_MAX;
static int16_t x400 = INT16_MAX;
int8_t x401 = -1;
int8_t x402 = INT8_MAX;
volatile int8_t x408 = -1;
int64_t t90 = 360508LL;
int16_t x418 = -1;
uint16_t x424 = 5348U;
int32_t t93 = -7986;
int32_t x435 = INT32_MIN;
static uint16_t x449 = 2908U;


void f0(void) {
	int64_t x2 = 6191058840393LL;
	int32_t x3 = INT32_MIN;
	uint16_t x4 = 16U;
	volatile int64_t t0 = -28LL;

	t0 = (x1^(x2+(x3/x4)));

	if (t0 != -6190924600503LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint32_t x6 = 48U;
	volatile uint64_t t1 = 23LLU;

	t1 = (x5^(x6+(x7/x8)));

	if (t1 != 35444056590LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -37;
	int16_t x11 = -1;
	static uint64_t x12 = 318363LLU;
	volatile uint64_t t2 = 5382471374432955LLU;

	t2 = (x9^(x10+(x11/x12)));

	if (t2 != 18446686131222284824LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 12;
	volatile int16_t x14 = 920;
	uint32_t x15 = UINT32_MAX;
	int32_t x16 = INT32_MIN;
	static uint32_t t3 = 3812U;

	t3 = (x13^(x14+(x15/x16)));

	if (t3 != 917U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = INT64_MIN;
	static uint16_t x20 = UINT16_MAX;
	volatile int64_t t4 = 124515LL;

	t4 = (x17^(x18+(x19/x20)));

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = 235165783;
	volatile int64_t x26 = INT64_MIN;
	int32_t x27 = -1;
	volatile int16_t x28 = INT16_MIN;
	volatile int64_t t5 = 37824785LL;

	t5 = (x25^(x26+(x27/x28)));

	if (t5 != -9223372036619610025LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MIN;
	uint32_t x32 = 673U;
	uint32_t t6 = 215191U;

	t6 = (x29^(x30+(x31/x32)));

	if (t6 != 4294967175U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 5U;
	int8_t x34 = INT8_MIN;
	int16_t x35 = -251;
	volatile int8_t x36 = INT8_MAX;
	static volatile uint32_t t7 = 1447040864U;

	t7 = (x33^(x34+(x35/x36)));

	if (t7 != 4294967162U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	uint16_t x38 = 40U;
	int8_t x39 = 2;
	int16_t x40 = INT16_MIN;

	t8 = (x37^(x38+(x39/x40)));

	if (t8 != -2147483608) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 17251439LL;
	int8_t x43 = -59;
	uint32_t x44 = 2657U;
	static volatile int64_t t9 = -893LL;

	t9 = (x41^(x42+(x43/x44)));

	if (t9 != 18847290LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 4017;
	int64_t x46 = -18059LL;
	volatile uint64_t x48 = 91541297366307LLU;
	volatile uint64_t t10 = 2488446484490318090LLU;

	t10 = (x45^(x46+(x47/x48)));

	if (t10 != 85176LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = 10;
	int32_t x51 = INT32_MAX;
	uint32_t x52 = UINT32_MAX;
	uint32_t t11 = 369850423U;

	t11 = (x49^(x50+(x51/x52)));

	if (t11 != 505283411U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x53 = -98;
	uint64_t x55 = UINT64_MAX;
	uint64_t x56 = 18271940140850336LLU;
	uint64_t t12 = 1959371938739548196LLU;

	t12 = (x53^(x54+(x55/x56)));

	if (t12 != 18446744073706168666LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	static volatile int8_t x58 = -1;
	int32_t x59 = INT32_MIN;
	int16_t x60 = 35;
	uint64_t t13 = 188246869558746928LLU;

	t13 = (x57^(x58+(x59/x60)));

	if (t13 != 61356675LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	uint16_t x62 = 1335U;
	uint64_t x64 = 3LLU;
	volatile uint64_t t14 = 139754006394299418LLU;

	t14 = (x61^(x62+(x63/x64)));

	if (t14 != 9223372036854788065LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int8_t x66 = 0;
	static int32_t x67 = INT32_MIN;
	uint64_t x68 = 787540235279503LLU;
	uint64_t t15 = 2LLU;

	t15 = (x65^(x66+(x67/x68)));

	if (t15 != 18446744073709528319LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 63425766U;
	volatile uint32_t x70 = 355564897U;
	uint64_t x71 = UINT64_MAX;
	int64_t x72 = 32567155298949367LL;

	t16 = (x69^(x70+(x71/x72)));

	if (t16 != 385266545LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = INT8_MAX;
	int16_t x74 = INT16_MIN;
	int8_t x75 = INT8_MIN;
	static int8_t x76 = INT8_MIN;
	int32_t t17 = -4;

	t17 = (x73^(x74+(x75/x76)));

	if (t17 != -32642) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 3021LLU;
	uint8_t x82 = UINT8_MAX;
	int32_t x84 = INT32_MAX;

	t18 = (x81^(x82+(x83/x84)));

	if (t18 != 2866LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = INT8_MAX;
	volatile uint8_t x86 = UINT8_MAX;
	static int16_t x87 = INT16_MIN;
	int64_t x88 = 2181509LL;
	volatile int64_t t19 = -1547326LL;

	t19 = (x85^(x86+(x87/x88)));

	if (t19 != 128LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MAX;
	static volatile uint32_t x90 = 648749U;
	volatile int8_t x91 = INT8_MIN;
	static uint8_t x92 = 100U;
	uint32_t t20 = 71U;

	t20 = (x89^(x90+(x91/x92)));

	if (t20 != 648787U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x97 = INT16_MIN;
	static volatile uint8_t x98 = UINT8_MAX;
	int32_t x99 = INT32_MAX;
	int64_t x100 = INT64_MIN;
	static volatile int64_t t21 = 1991572137369682LL;

	t21 = (x97^(x98+(x99/x100)));

	if (t21 != -32513LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x102 = 354U;
	static volatile int16_t x103 = INT16_MIN;
	static int16_t x104 = -15337;
	uint64_t t22 = 34368LLU;

	t22 = (x101^(x102+(x103/x104)));

	if (t22 != 1639754651491LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x105 = INT32_MIN;
	static int32_t x108 = -11;
	static volatile uint64_t t23 = 89LLU;

	t23 = (x105^(x106+(x107/x108)));

	if (t23 != 18446744071564466934LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x110 = 40U;
	uint16_t x111 = UINT16_MAX;
	uint32_t x112 = UINT32_MAX;

	t24 = (x109^(x110+(x111/x112)));

	if (t24 != 191621LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x114 = UINT16_MAX;
	static int16_t x115 = -1;
	int32_t t25 = 14;

	t25 = (x113^(x114+(x115/x116)));

	if (t25 != -65409) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MAX;
	volatile int8_t x118 = -16;
	volatile int8_t x119 = 0;
	int16_t x120 = INT16_MIN;
	int32_t t26 = -1;

	t26 = (x117^(x118+(x119/x120)));

	if (t26 != -2147483633) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x121 = INT8_MIN;
	static int8_t x122 = 44;
	static int16_t x123 = INT16_MIN;
	volatile int64_t x124 = -1LL;
	static volatile int64_t t27 = 131525892546LL;

	t27 = (x121^(x122+(x123/x124)));

	if (t27 != -32852LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x126 = INT8_MIN;
	uint16_t x127 = 26U;
	uint64_t t28 = 109066579699295LLU;

	t28 = (x125^(x126+(x127/x128)));

	if (t28 != 18417802455403765043LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = 11412387;
	uint8_t x130 = UINT8_MAX;
	int64_t x131 = 985063293098LL;
	uint64_t x132 = 53845981038LLU;
	uint64_t t29 = 186860551303962LLU;

	t29 = (x129^(x130+(x131/x132)));

	if (t29 != 11412146LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = INT64_MIN;
	int32_t x134 = -1;
	static int64_t x135 = INT64_MIN;
	int32_t x136 = 14;
	volatile int64_t t30 = 13346726536464744LL;

	t30 = (x133^(x134+(x135/x136)));

	if (t30 != 8564559748508006107LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = 10;
	uint32_t x138 = 156437592U;
	uint64_t x139 = 212106904273LLU;
	int8_t x140 = INT8_MIN;

	t31 = (x137^(x138+(x139/x140)));

	if (t31 != 156437586LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x142 = 226997961U;
	static int16_t x143 = -1;
	volatile uint32_t t32 = 449029U;

	t32 = (x141^(x142+(x143/x144)));

	if (t32 != 4067964618U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x145 = -1;
	static volatile uint16_t x146 = UINT16_MAX;
	static uint32_t x147 = 51480545U;
	uint8_t x148 = UINT8_MAX;
	static uint32_t t33 = 9945U;

	t33 = (x145^(x146+(x147/x148)));

	if (t33 != 4294699876U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = 20934U;
	static int16_t x150 = -1;
	int64_t x151 = INT64_MIN;
	volatile uint64_t x152 = 4604838588101007575LLU;
	volatile uint64_t t34 = 24386LLU;

	t34 = (x149^(x150+(x151/x152)));

	if (t34 != 20935LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = 144279LLU;
	int8_t x154 = INT8_MIN;
	int8_t x155 = -1;
	static uint16_t x156 = 10645U;
	volatile uint64_t t35 = 1916016LLU;

	t35 = (x153^(x154+(x155/x156)));

	if (t35 != 18446744073709407255LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x157 = UINT32_MAX;
	volatile uint32_t x158 = 14847832U;
	volatile int16_t x160 = 15516;

	t36 = (x157^(x158+(x159/x160)));

	if (t36 != 594442945159723LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = 2;
	int64_t x163 = INT64_MAX;
	int32_t x164 = INT32_MAX;
	uint64_t t37 = 14489331066475020LLU;

	t37 = (x161^(x162+(x163/x164)));

	if (t37 != 4294967299LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = 724156353391LL;
	int32_t x166 = INT32_MIN;
	volatile uint32_t x167 = 454322043U;
	volatile int8_t x168 = -1;
	int64_t t38 = -489089126775661052LL;

	t38 = (x165^(x166+(x167/x168)));

	if (t38 != 722008869743LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MIN;
	uint32_t x170 = UINT32_MAX;
	static int32_t x171 = -540089;
	int8_t x172 = INT8_MIN;
	static volatile int64_t t39 = -73LL;

	t39 = (x169^(x170+(x171/x172)));

	if (t39 != -9223372036854771590LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x178 = -381;
	int64_t x179 = 6459721770851LL;
	int32_t x180 = INT32_MIN;
	uint64_t t40 = 802LLU;

	t40 = (x177^(x178+(x179/x180)));

	if (t40 != 3388LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x181 = -917977;
	static int8_t x183 = INT8_MAX;
	int64_t x184 = INT64_MIN;
	int64_t t41 = 11602741725765016LL;

	t41 = (x181^(x182+(x183/x184)));

	if (t41 != -917981LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x185 = 43405U;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = 12U;
	int8_t x188 = 4;
	static uint32_t t42 = 6U;

	t42 = (x185^(x186+(x187/x188)));

	if (t42 != 4294912398U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x189 = 26U;
	static int64_t x190 = INT64_MIN;
	int8_t x191 = 1;
	int64_t t43 = -1LL;

	t43 = (x189^(x190+(x191/x192)));

	if (t43 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = -4;
	int8_t x194 = 53;
	volatile int64_t x195 = -12969555716945LL;
	int64_t x196 = -1LL;
	volatile int64_t t44 = -1535LL;

	t44 = (x193^(x194+(x195/x196)));

	if (t44 != -12969555716998LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = 15312867;
	uint64_t x202 = UINT64_MAX;
	uint64_t x203 = 0LLU;
	volatile int8_t x204 = -18;
	uint64_t t45 = 271926355955700235LLU;

	t45 = (x201^(x202+(x203/x204)));

	if (t45 != 18446744073694238748LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MAX;
	int32_t x206 = -767;
	volatile uint64_t x207 = 217604915LLU;
	volatile uint64_t x208 = 812423960274276LLU;
	volatile uint64_t t46 = 1736LLU;

	t46 = (x205^(x206+(x207/x208)));

	if (t46 != 18446744073709519614LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MIN;
	uint32_t x210 = 1U;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = INT32_MIN;
	volatile int64_t t47 = 22LL;

	t47 = (x209^(x210+(x211/x212)));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x213 = 106U;
	int8_t x214 = INT8_MAX;
	uint8_t x215 = UINT8_MAX;
	volatile int8_t x216 = INT8_MIN;
	volatile int32_t t48 = 284718;

	t48 = (x213^(x214+(x215/x216)));

	if (t48 != 20) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = UINT16_MAX;
	int64_t x218 = INT64_MIN;
	static volatile int64_t x219 = -1LL;
	int32_t x220 = INT32_MIN;
	int64_t t49 = 5175477LL;

	t49 = (x217^(x218+(x219/x220)));

	if (t49 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x222 = UINT16_MAX;
	uint64_t x224 = 10124211344491808LLU;
	volatile uint64_t t50 = 225LLU;

	t50 = (x221^(x222+(x223/x224)));

	if (t50 != 18446744073709484258LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = INT32_MIN;
	uint32_t x226 = 5U;
	volatile uint8_t x228 = UINT8_MAX;
	uint32_t t51 = 328121110U;

	t51 = (x225^(x226+(x227/x228)));

	if (t51 != 2147483653U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = -6;
	uint32_t x230 = 97437U;
	uint32_t x231 = UINT32_MAX;
	static uint32_t t52 = 350731851U;

	t52 = (x229^(x230+(x231/x232)));

	if (t52 != 4294869860U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = 22U;
	uint32_t x234 = 330583U;
	uint32_t x235 = UINT32_MAX;
	int64_t x236 = -21LL;
	int64_t t53 = -31839660LL;

	t53 = (x233^(x234+(x235/x236)));

	if (t53 != -204191651LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x237 = 6U;
	int8_t x238 = 0;
	int16_t x239 = INT16_MIN;

	t54 = (x237^(x238+(x239/x240)));

	if (t54 != 32774) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x241 = UINT16_MAX;
	static int32_t x242 = INT32_MIN;
	static volatile uint32_t x244 = 916034U;
	volatile uint32_t t55 = 6U;

	t55 = (x241^(x242+(x243/x244)));

	if (t55 != 2147549183U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = INT8_MAX;
	static uint8_t x247 = UINT8_MAX;
	int8_t x248 = 2;
	volatile int32_t t56 = 92;

	t56 = (x245^(x246+(x247/x248)));

	if (t56 != 129) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x249 = 14U;
	int8_t x250 = 1;
	int32_t x252 = -1;

	t57 = (x249^(x250+(x251/x252)));

	if (t57 != 15) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x254 = 3LLU;
	volatile uint8_t x255 = UINT8_MAX;
	uint64_t t58 = 65542585401247LLU;

	t58 = (x253^(x254+(x255/x256)));

	if (t58 != 14309377665100LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = 125270;
	volatile int16_t x258 = 3;
	int16_t x259 = INT16_MIN;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t59 = 747144208U;

	t59 = (x257^(x258+(x259/x260)));

	if (t59 != 125269U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x261 = INT32_MIN;
	int32_t x262 = -1;
	static int8_t x264 = 22;
	volatile uint32_t t60 = 213642U;

	t60 = (x261^(x262+(x263/x264)));

	if (t60 != 2147483703U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	int64_t x267 = -12510317692167LL;
	static int64_t x268 = -2441405500067219LL;
	int64_t t61 = -948246648LL;

	t61 = (x265^(x266+(x267/x268)));

	if (t61 != -2147481724LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x270 = -65363;
	static int16_t x271 = -167;
	volatile uint64_t x272 = 1LLU;

	t62 = (x269^(x270+(x271/x272)));

	if (t62 != 18446744073709207504LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x273 = INT8_MIN;
	uint32_t x275 = 4391U;
	static uint16_t x276 = 67U;

	t63 = (x273^(x274+(x275/x276)));

	if (t63 != 4294967236U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x277 = INT32_MAX;
	static int32_t x278 = INT32_MIN;
	int8_t x279 = 1;
	int32_t t64 = -78054895;

	t64 = (x277^(x278+(x279/x280)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = -1;
	volatile int8_t x286 = -1;
	static uint16_t x287 = UINT16_MAX;
	uint16_t x288 = UINT16_MAX;
	static int32_t t65 = 1659;

	t65 = (x285^(x286+(x287/x288)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x293 = INT32_MIN;
	static int8_t x294 = INT8_MIN;
	uint8_t x295 = 1U;
	int32_t x296 = 751;
	int32_t t66 = -50;

	t66 = (x293^(x294+(x295/x296)));

	if (t66 != 2147483520) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = -1;
	static int64_t x299 = -21916875LL;
	int16_t x300 = INT16_MIN;
	volatile int64_t t67 = 5291520LL;

	t67 = (x297^(x298+(x299/x300)));

	if (t67 != -32101LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = INT8_MIN;
	int8_t x315 = -1;
	int8_t x316 = INT8_MAX;
	int32_t t68 = 6278801;

	t68 = (x313^(x314+(x315/x316)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = -1;
	int64_t x318 = -51348448504786LL;
	int8_t x319 = INT8_MIN;
	int16_t x320 = -1790;
	static volatile int64_t t69 = 24926471115LL;

	t69 = (x317^(x318+(x319/x320)));

	if (t69 != 51348448504785LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = -1;
	int64_t x322 = INT64_MAX;
	int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MAX;
	static int64_t t70 = INT64_MIN;

	t70 = (x321^(x322+(x323/x324)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x329 = 1;
	int64_t x330 = INT64_MAX;
	static volatile int32_t x332 = INT32_MIN;

	t71 = (x329^(x330+(x331/x332)));

	if (t71 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x334 = 0U;
	static int16_t x335 = -1;
	volatile int64_t x336 = INT64_MIN;
	volatile int64_t t72 = -3999785218542LL;

	t72 = (x333^(x334+(x335/x336)));

	if (t72 != 7665934LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x339 = 3631LLU;
	static volatile int16_t x340 = -1022;
	uint64_t t73 = 28239700LLU;

	t73 = (x337^(x338+(x339/x340)));

	if (t73 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MAX;
	static volatile int64_t x344 = -1LL;
	int64_t t74 = 505770472307019LL;

	t74 = (x341^(x342+(x343/x344)));

	if (t74 != -4294967296LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = -1;
	uint8_t x346 = 37U;
	uint16_t x347 = 500U;
	int32_t x348 = INT32_MAX;
	int32_t t75 = 8;

	t75 = (x345^(x346+(x347/x348)));

	if (t75 != -38) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x349 = INT8_MAX;
	int64_t x350 = INT64_MIN;
	static int8_t x351 = INT8_MAX;
	volatile int8_t x352 = INT8_MIN;
	static int64_t t76 = -1127195798LL;

	t76 = (x349^(x350+(x351/x352)));

	if (t76 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x353 = 39U;
	volatile int32_t x354 = 486;
	uint32_t x355 = UINT32_MAX;
	int16_t x356 = 1872;

	t77 = (x353^(x354+(x355/x356)));

	if (t77 != 2294833U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x361 = UINT16_MAX;
	static uint32_t x362 = UINT32_MAX;
	int8_t x363 = 31;
	uint32_t t78 = 5010644U;

	t78 = (x361^(x362+(x363/x364)));

	if (t78 != 4294901760U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x365 = INT16_MIN;
	uint64_t x366 = 1996816640878722LLU;
	static uint32_t x367 = 13U;
	uint8_t x368 = UINT8_MAX;
	uint64_t t79 = 1983389270673LLU;

	t79 = (x365^(x366+(x367/x368)));

	if (t79 != 18444747257068660866LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x369 = INT64_MAX;
	int16_t x370 = INT16_MIN;
	volatile uint8_t x371 = 123U;
	volatile uint64_t t80 = 7215679LLU;

	t80 = (x369^(x370+(x371/x372)));

	if (t80 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x373 = 4947900639978LLU;
	static uint16_t x374 = UINT16_MAX;
	uint32_t x375 = 2U;
	volatile uint64_t t81 = 1886220312LLU;

	t81 = (x373^(x374+(x375/x376)));

	if (t81 != 4947900683541LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x377 = UINT16_MAX;
	int64_t x378 = -31647LL;
	int16_t x379 = INT16_MIN;
	int32_t x380 = INT32_MAX;
	static int64_t t82 = 1193741773098470LL;

	t82 = (x377^(x378+(x379/x380)));

	if (t82 != -33890LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x383 = 44U;
	int32_t x384 = INT32_MAX;

	t83 = (x381^(x382+(x383/x384)));

	if (t83 != 28613487LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x385 = INT32_MIN;
	uint16_t x387 = 6U;
	uint16_t x388 = 570U;
	static int32_t t84 = 235;

	t84 = (x385^(x386+(x387/x388)));

	if (t84 != -2147483644) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x389 = 3523950527318216739LLU;
	uint64_t x390 = 72706LLU;
	volatile int16_t x391 = 148;
	int8_t x392 = INT8_MAX;
	volatile uint64_t t85 = 16181036475065LLU;

	t85 = (x389^(x390+(x391/x392)));

	if (t85 != 3523950527318281248LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x394 = 2LL;
	static uint64_t x395 = UINT64_MAX;
	int8_t x396 = INT8_MIN;

	t86 = (x393^(x394+(x395/x396)));

	if (t86 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x397 = -6;
	int8_t x399 = INT8_MIN;
	int32_t t87 = -438184;

	t87 = (x397^(x398+(x399/x400)));

	if (t87 != -32763) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x403 = INT8_MIN;
	int64_t x404 = INT64_MIN;
	int64_t t88 = -2840LL;

	t88 = (x401^(x402+(x403/x404)));

	if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x405 = UINT16_MAX;
	uint64_t x406 = 213808151071831LLU;
	uint16_t x407 = 2U;
	static uint64_t t89 = 16642437LLU;

	t89 = (x405^(x406+(x407/x408)));

	if (t89 != 213808151131050LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x409 = INT8_MIN;
	int32_t x410 = -1;
	int64_t x411 = INT64_MIN;
	int32_t x412 = INT32_MAX;

	t90 = (x409^(x410+(x411/x412)));

	if (t90 != 4294967421LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x413 = -13;
	int16_t x414 = -1;
	static int8_t x415 = 12;
	uint16_t x416 = 1013U;
	volatile int32_t t91 = 2381;

	t91 = (x413^(x414+(x415/x416)));

	if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x417 = 57U;
	int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MAX;
	int32_t t92 = 7889;

	t92 = (x417^(x418+(x419/x420)));

	if (t92 != -57) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = -1;
	volatile int16_t x422 = 20;
	volatile int16_t x423 = -207;

	t93 = (x421^(x422+(x423/x424)));

	if (t93 != -21) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = -1;
	int16_t x426 = INT16_MAX;
	int64_t x427 = 3780338LL;
	static volatile int8_t x428 = INT8_MIN;
	int64_t t94 = 3492386099LL;

	t94 = (x425^(x426+(x427/x428)));

	if (t94 != -3235LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = INT16_MIN;
	int16_t x430 = 1115;
	uint8_t x431 = 12U;
	uint32_t x432 = 12U;
	uint32_t t95 = 36U;

	t95 = (x429^(x430+(x431/x432)));

	if (t95 != 4294935644U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x433 = 16386828LLU;
	volatile int16_t x434 = INT16_MIN;
	int16_t x436 = INT16_MIN;
	volatile uint64_t t96 = 8653935984616893246LLU;

	t96 = (x433^(x434+(x435/x436)));

	if (t96 != 16419596LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = -168905LL;
	volatile int16_t x438 = -1;
	uint32_t x439 = UINT32_MAX;
	uint8_t x440 = 11U;
	volatile int64_t t97 = -374091656352988LL;

	t97 = (x437^(x438+(x439/x440)));

	if (t97 != -390546108LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x445 = -1;
	uint16_t x446 = 26U;
	int8_t x447 = -1;
	int64_t x448 = -1LL;
	volatile int64_t t98 = -2638546689LL;

	t98 = (x445^(x446+(x447/x448)));

	if (t98 != -28LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x450 = 812U;
	int64_t x451 = INT64_MIN;
	static int16_t x452 = INT16_MIN;
	static int64_t t99 = 52887001LL;

	t99 = (x449^(x450+(x451/x452)));

	if (t99 != 281474976712816LL) { NG(); } else { ; }
	
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

