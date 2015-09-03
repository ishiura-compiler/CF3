#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int64_t t2 = 579LL;
volatile int32_t t3 = INT32_MIN;
uint8_t x22 = 1U;
uint32_t x23 = UINT32_MAX;
static volatile uint64_t x25 = 6292951LLU;
uint64_t x27 = UINT64_MAX;
int16_t x31 = INT16_MAX;
static int32_t x34 = INT32_MIN;
int8_t x40 = INT8_MIN;
static volatile int32_t t8 = 8901;
uint8_t x58 = UINT8_MAX;
int32_t t13 = -68032;
uint16_t x67 = UINT16_MAX;
static volatile int64_t t14 = -4850732285598137LL;
uint16_t x70 = UINT16_MAX;
uint8_t x72 = 4U;
uint8_t x83 = 1U;
int64_t x87 = -1LL;
uint64_t x101 = 3139324LLU;
static volatile int16_t x104 = 7198;
int8_t x108 = INT8_MIN;
static int16_t x113 = 0;
int32_t t24 = -743270922;
static int8_t x119 = INT8_MIN;
int8_t x123 = 47;
int64_t x126 = -104576523LL;
static volatile uint64_t t27 = 1513171999676371478LLU;
volatile int64_t t28 = -157219651LL;
static int16_t x148 = -1;
static volatile uint32_t t32 = UINT32_MAX;
int32_t x151 = -1;
int16_t x161 = -1;
static int64_t x169 = INT64_MIN;
volatile uint16_t x171 = 12560U;
volatile uint32_t x184 = 2U;
int64_t x185 = INT64_MAX;
uint64_t x194 = UINT64_MAX;
int64_t x196 = -38349623836931LL;
static uint16_t x206 = UINT16_MAX;
uint8_t x207 = UINT8_MAX;
volatile int64_t t42 = 58212708924797159LL;
int64_t x210 = INT64_MAX;
static uint32_t x222 = UINT32_MAX;
uint32_t x226 = UINT32_MAX;
int8_t x231 = -1;
volatile int8_t x245 = -1;
int8_t x247 = INT8_MAX;
int8_t x248 = 1;
uint16_t x253 = 100U;
static volatile int32_t t53 = 123;
int64_t x258 = -1LL;
uint16_t x261 = UINT16_MAX;
uint16_t x263 = UINT16_MAX;
int32_t t55 = -173;
volatile uint32_t x269 = UINT32_MAX;
uint64_t x270 = 15297LLU;
uint32_t t57 = UINT32_MAX;
int16_t x274 = INT16_MIN;
static volatile int32_t t59 = -1;
volatile uint32_t x284 = 457061U;
int32_t x286 = -1;
int16_t x290 = 392;
volatile int32_t t62 = 8053;
uint16_t x293 = UINT16_MAX;
volatile int32_t x295 = -1;
volatile int16_t x298 = INT16_MIN;
uint32_t t64 = UINT32_MAX;
static uint64_t x315 = 666LLU;
uint32_t t67 = 6U;
static int64_t x317 = INT64_MIN;
uint16_t x318 = 30993U;
int32_t t69 = -8;
int64_t x326 = INT64_MAX;
volatile int64_t x327 = -1LL;
volatile int8_t x328 = -1;
uint8_t x336 = 38U;
static uint32_t t72 = 2796773U;
int8_t x343 = 24;
static volatile int16_t x344 = INT16_MIN;
int8_t x345 = INT8_MIN;
static int8_t x348 = INT8_MAX;
static int64_t t76 = 14709865290LL;
static int32_t x369 = INT32_MAX;
int16_t x373 = INT16_MAX;
int16_t x374 = INT16_MIN;
int32_t x376 = -74054807;
int32_t x382 = 870;
int8_t x388 = -2;
static int8_t x389 = INT8_MIN;
static volatile int32_t t84 = -1343;
uint64_t t85 = 259109173287548LLU;
volatile int32_t x398 = -1;
volatile int32_t t86 = 5766693;
int16_t x405 = INT16_MAX;
volatile int8_t x407 = -1;
volatile int8_t x408 = INT8_MIN;
int32_t x410 = -1;
int32_t t90 = -1911;
int32_t x420 = -1;
int64_t x424 = -3910061824LL;
volatile int16_t x433 = INT16_MIN;
int64_t x436 = -521438556939077402LL;
int16_t x438 = -1;
volatile int32_t t96 = -6867940;
int16_t x446 = 5685;
int32_t x447 = 1;
static uint16_t x449 = 313U;
uint32_t x450 = 17357U;
int64_t x451 = 327LL;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	uint16_t x3 = 156U;
	uint8_t x4 = 0U;
	static int32_t t0 = 2;

	t0 = (x1^(x2<=(x3-x4)));

	if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int16_t x6 = 1175;
	uint64_t x7 = UINT64_MAX;
	uint8_t x8 = 12U;
	static int32_t t1 = 7000;

	t1 = (x5^(x6<=(x7-x8)));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint64_t x10 = 14764789502757116LLU;
	uint8_t x11 = 5U;
	uint16_t x12 = 110U;

	t2 = (x9^(x10<=(x11-x12)));

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile int16_t x14 = INT16_MAX;
	static uint32_t x15 = 257U;
	volatile int8_t x16 = 0;

	t3 = (x13^(x14<=(x15-x16)));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 6U;
	static volatile int16_t x24 = INT16_MIN;
	int32_t t4 = 954486404;

	t4 = (x21^(x22<=(x23-x24)));

	if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x26 = INT8_MIN;
	uint8_t x28 = 2U;
	volatile uint64_t t5 = 1021983352884LLU;

	t5 = (x25^(x26<=(x27-x28)));

	if (t5 != 6292950LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x29 = INT8_MIN;
	int64_t x30 = -15078493LL;
	static uint16_t x32 = 468U;
	int32_t t6 = 1;

	t6 = (x29^(x30<=(x31-x32)));

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 5779LLU;
	volatile uint16_t x35 = 11U;
	static int64_t x36 = INT64_MAX;
	volatile uint64_t t7 = 1671980157LLU;

	t7 = (x33^(x34<=(x35-x36)));

	if (t7 != 5779LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = 1599;
	uint8_t x38 = 7U;
	int8_t x39 = INT8_MAX;

	t8 = (x37^(x38<=(x39-x40)));

	if (t8 != 1598) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	int16_t x42 = -2407;
	int32_t x43 = INT32_MIN;
	int64_t x44 = INT64_MIN;
	int32_t t9 = 190799460;

	t9 = (x41^(x42<=(x43-x44)));

	if (t9 != 65534) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 272U;
	int64_t x50 = INT64_MIN;
	int16_t x51 = INT16_MIN;
	int16_t x52 = -1;
	uint32_t t10 = 73685U;

	t10 = (x49^(x50<=(x51-x52)));

	if (t10 != 273U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = 39494;
	int32_t x54 = -1;
	int16_t x55 = INT16_MIN;
	int8_t x56 = -52;
	int32_t t11 = -999175350;

	t11 = (x53^(x54<=(x55-x56)));

	if (t11 != 39494) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x57 = 1585U;
	int32_t x59 = INT32_MIN;
	uint32_t x60 = 14294653U;
	volatile int32_t t12 = -1328576;

	t12 = (x57^(x58<=(x59-x60)));

	if (t12 != 1584) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MAX;
	uint64_t x62 = 2657981LLU;
	volatile uint64_t x63 = 15759990760LLU;
	static uint16_t x64 = 2U;

	t13 = (x61^(x62<=(x63-x64)));

	if (t13 != 126) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -1323765LL;
	int8_t x66 = 1;
	int8_t x68 = INT8_MIN;

	t14 = (x65^(x66<=(x67-x68)));

	if (t14 != -1323766LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 43U;
	uint8_t x71 = UINT8_MAX;
	static int32_t t15 = 163170146;

	t15 = (x69^(x70<=(x71-x72)));

	if (t15 != 43) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x73 = UINT32_MAX;
	int64_t x74 = -1510893803241492LL;
	uint16_t x75 = UINT16_MAX;
	int64_t x76 = -1LL;
	uint32_t t16 = 11U;

	t16 = (x73^(x74<=(x75-x76)));

	if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x77 = 1U;
	int8_t x78 = -1;
	uint16_t x79 = 3U;
	uint32_t x80 = 249841U;
	volatile int32_t t17 = -231;

	t17 = (x77^(x78<=(x79-x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x81 = 174U;
	int64_t x82 = INT64_MAX;
	int16_t x84 = INT16_MIN;
	static int32_t t18 = -118;

	t18 = (x81^(x82<=(x83-x84)));

	if (t18 != 174) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x86 = -2128;
	static int8_t x88 = -1;
	static volatile int32_t t19 = 23087931;

	t19 = (x85^(x86<=(x87-x88)));

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 3766U;
	static int64_t x90 = 1611166LL;
	static int8_t x91 = INT8_MIN;
	static uint64_t x92 = UINT64_MAX;
	volatile uint32_t t20 = 126263069U;

	t20 = (x89^(x90<=(x91-x92)));

	if (t20 != 3767U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = -1013761438637LL;
	uint8_t x98 = 10U;
	volatile uint64_t x99 = UINT64_MAX;
	int8_t x100 = 0;
	volatile int64_t t21 = 4LL;

	t21 = (x97^(x98<=(x99-x100)));

	if (t21 != -1013761438638LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x102 = 2375131U;
	int64_t x103 = -1322350406LL;
	static uint64_t t22 = 4851106141145143LLU;

	t22 = (x101^(x102<=(x103-x104)));

	if (t22 != 3139324LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = 11;
	volatile int8_t x106 = INT8_MAX;
	uint32_t x107 = 73213851U;
	int32_t t23 = -91;

	t23 = (x105^(x106<=(x107-x108)));

	if (t23 != 10) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x114 = INT8_MIN;
	int64_t x115 = INT64_MAX;
	volatile int16_t x116 = INT16_MAX;

	t24 = (x113^(x114<=(x115-x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x117 = 17U;
	int8_t x118 = -10;
	int32_t x120 = 15959531;
	volatile int32_t t25 = -19621;

	t25 = (x117^(x118<=(x119-x120)));

	if (t25 != 17) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x121 = -11;
	int32_t x122 = -1;
	static uint32_t x124 = 481U;
	volatile int32_t t26 = 24633;

	t26 = (x121^(x122<=(x123-x124)));

	if (t26 != -11) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x125 = UINT64_MAX;
	static int8_t x127 = INT8_MIN;
	static int16_t x128 = -1;

	t27 = (x125^(x126<=(x127-x128)));

	if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MAX;
	static int16_t x130 = 349;
	static int16_t x131 = INT16_MAX;
	uint16_t x132 = 44U;

	t28 = (x129^(x130<=(x131-x132)));

	if (t28 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x133 = INT32_MIN;
	static uint64_t x134 = UINT64_MAX;
	int8_t x135 = -1;
	int8_t x136 = -1;
	volatile int32_t t29 = INT32_MIN;

	t29 = (x133^(x134<=(x135-x136)));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MAX;
	int8_t x139 = INT8_MAX;
	uint16_t x140 = UINT16_MAX;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x137^(x138<=(x139-x140)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = 0;
	static uint32_t x142 = UINT32_MAX;
	static uint64_t x143 = 33483427712440LLU;
	uint16_t x144 = 9U;
	int32_t t31 = 1192170;

	t31 = (x141^(x142<=(x143-x144)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = UINT32_MAX;
	volatile uint32_t x146 = 23U;
	int64_t x147 = -61370538687661204LL;

	t32 = (x145^(x146<=(x147-x148)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MIN;
	volatile int16_t x150 = 148;
	static int8_t x152 = -1;
	int32_t t33 = 27467564;

	t33 = (x149^(x150<=(x151-x152)));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = UINT64_MAX;
	static int8_t x154 = INT8_MAX;
	volatile uint8_t x155 = 3U;
	volatile uint32_t x156 = 1648U;
	volatile uint64_t t34 = 905LLU;

	t34 = (x153^(x154<=(x155-x156)));

	if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x162 = UINT16_MAX;
	static int8_t x163 = -1;
	int16_t x164 = 13847;
	static int32_t t35 = -5;

	t35 = (x161^(x162<=(x163-x164)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x170 = INT8_MAX;
	int32_t x172 = INT32_MAX;
	int64_t t36 = INT64_MIN;

	t36 = (x169^(x170<=(x171-x172)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = 1;
	uint8_t x178 = 96U;
	int32_t x179 = -1;
	uint32_t x180 = UINT32_MAX;
	static int32_t t37 = -16695;

	t37 = (x177^(x178<=(x179-x180)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x181 = INT64_MIN;
	static int16_t x182 = INT16_MIN;
	volatile int64_t x183 = INT64_MAX;
	int64_t t38 = -1165240559667205991LL;

	t38 = (x181^(x182<=(x183-x184)));

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x186 = -168417977;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;
	volatile int64_t t39 = -6813051391853LL;

	t39 = (x185^(x186<=(x187-x188)));

	if (t39 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x189 = UINT16_MAX;
	int16_t x190 = -1;
	uint32_t x191 = UINT32_MAX;
	uint32_t x192 = 388U;
	volatile int32_t t40 = -122;

	t40 = (x189^(x190<=(x191-x192)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = INT8_MIN;
	int64_t x195 = -1LL;
	volatile int32_t t41 = -492104;

	t41 = (x193^(x194<=(x195-x196)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = -26044275597LL;
	int16_t x208 = -1;

	t42 = (x205^(x206<=(x207-x208)));

	if (t42 != -26044275597LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = -17955569835322LL;
	int8_t x211 = -1;
	static int64_t x212 = INT64_MIN;
	volatile int64_t t43 = -4LL;

	t43 = (x209^(x210<=(x211-x212)));

	if (t43 != -17955569835321LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = INT32_MAX;
	volatile int64_t x214 = -121757475LL;
	int8_t x215 = INT8_MIN;
	uint32_t x216 = 134568U;
	int32_t t44 = 0;

	t44 = (x213^(x214<=(x215-x216)));

	if (t44 != 2147483646) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x217 = INT64_MIN;
	uint32_t x218 = 0U;
	int16_t x219 = 999;
	static int16_t x220 = INT16_MIN;
	int64_t t45 = -507LL;

	t45 = (x217^(x218<=(x219-x220)));

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x221 = 116U;
	uint64_t x223 = UINT64_MAX;
	static volatile int8_t x224 = -1;
	int32_t t46 = -39570814;

	t46 = (x221^(x222<=(x223-x224)));

	if (t46 != 116) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = UINT16_MAX;
	static volatile uint64_t x227 = 2891687329591570LLU;
	static int16_t x228 = -1;
	volatile int32_t t47 = -1429984;

	t47 = (x225^(x226<=(x227-x228)));

	if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x229 = 31LLU;
	static int16_t x230 = -1;
	int64_t x232 = 971859941LL;
	volatile uint64_t t48 = 13LLU;

	t48 = (x229^(x230<=(x231-x232)));

	if (t48 != 31LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x233 = 1U;
	int8_t x234 = -1;
	static uint64_t x235 = 6LLU;
	uint16_t x236 = 2840U;
	int32_t t49 = -7827735;

	t49 = (x233^(x234<=(x235-x236)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = INT32_MAX;
	uint64_t x242 = UINT64_MAX;
	int64_t x243 = -65418796966LL;
	int16_t x244 = -1;
	int32_t t50 = INT32_MAX;

	t50 = (x241^(x242<=(x243-x244)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x246 = -1;
	volatile int32_t t51 = 1805;

	t51 = (x245^(x246<=(x247-x248)));

	if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x249 = -1;
	static int8_t x250 = 0;
	static uint32_t x251 = 2457143U;
	int64_t x252 = 8772879525719LL;
	volatile int32_t t52 = 99583;

	t52 = (x249^(x250<=(x251-x252)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x254 = INT64_MAX;
	int16_t x255 = -1;
	int16_t x256 = -1;

	t53 = (x253^(x254<=(x255-x256)));

	if (t53 != 100) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x257 = INT16_MAX;
	uint8_t x259 = 13U;
	static uint32_t x260 = UINT32_MAX;
	int32_t t54 = 2;

	t54 = (x257^(x258<=(x259-x260)));

	if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x262 = INT8_MAX;
	uint8_t x264 = 19U;

	t55 = (x261^(x262<=(x263-x264)));

	if (t55 != 65534) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x265 = INT8_MAX;
	int8_t x266 = INT8_MIN;
	static volatile uint8_t x267 = 26U;
	int64_t x268 = 3510LL;
	volatile int32_t t56 = 1;

	t56 = (x265^(x266<=(x267-x268)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x271 = -1LL;
	uint64_t x272 = UINT64_MAX;

	t57 = (x269^(x270<=(x271-x272)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x273 = UINT64_MAX;
	volatile int16_t x275 = INT16_MIN;
	uint32_t x276 = UINT32_MAX;
	uint64_t t58 = 3LLU;

	t58 = (x273^(x274<=(x275-x276)));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x277 = 51U;
	int32_t x278 = 5234;
	uint16_t x279 = 17U;
	volatile uint64_t x280 = 61294489811120LLU;

	t59 = (x277^(x278<=(x279-x280)));

	if (t59 != 50) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x281 = 1761548357LLU;
	volatile uint32_t x282 = UINT32_MAX;
	uint64_t x283 = UINT64_MAX;
	uint64_t t60 = 55LLU;

	t60 = (x281^(x282<=(x283-x284)));

	if (t60 != 1761548356LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x285 = 3U;
	uint64_t x287 = 14978527588224681LLU;
	int16_t x288 = -19;
	int32_t t61 = -3463;

	t61 = (x285^(x286<=(x287-x288)));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = -1;
	volatile uint8_t x291 = UINT8_MAX;
	static uint8_t x292 = UINT8_MAX;

	t62 = (x289^(x290<=(x291-x292)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x294 = INT32_MIN;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t63 = -145361;

	t63 = (x293^(x294<=(x295-x296)));

	if (t63 != 65534) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x297 = UINT32_MAX;
	int16_t x299 = INT16_MAX;
	int64_t x300 = 34614700555206LL;

	t64 = (x297^(x298<=(x299-x300)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = INT8_MIN;
	static uint8_t x307 = UINT8_MAX;
	int16_t x308 = 0;
	volatile int64_t t65 = 245095995074962LL;

	t65 = (x305^(x306<=(x307-x308)));

	if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x309 = 11U;
	uint16_t x310 = UINT16_MAX;
	int64_t x311 = INT64_MAX;
	uint16_t x312 = 3302U;
	volatile int32_t t66 = 152;

	t66 = (x309^(x310<=(x311-x312)));

	if (t66 != 10) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int64_t x314 = INT64_MAX;
	int64_t x316 = INT64_MAX;

	t67 = (x313^(x314<=(x315-x316)));

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x319 = 30387U;
	volatile int16_t x320 = 1;
	int64_t t68 = INT64_MIN;

	t68 = (x317^(x318<=(x319-x320)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x321 = INT32_MIN;
	static int64_t x322 = -59LL;
	static int16_t x323 = -1;
	uint8_t x324 = 1U;

	t69 = (x321^(x322<=(x323-x324)));

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = INT8_MIN;
	static volatile int32_t t70 = 2618;

	t70 = (x325^(x326<=(x327-x328)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x333 = INT16_MIN;
	uint8_t x334 = 49U;
	volatile int64_t x335 = INT64_MAX;
	static volatile int32_t t71 = -23303866;

	t71 = (x333^(x334<=(x335-x336)));

	if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x337 = 1810988690U;
	uint64_t x338 = UINT64_MAX;
	int8_t x339 = 0;
	static int16_t x340 = -1;

	t72 = (x337^(x338<=(x339-x340)));

	if (t72 != 1810988690U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x341 = -577563752LL;
	uint32_t x342 = 1059621022U;
	int64_t t73 = 4252009827266955LL;

	t73 = (x341^(x342<=(x343-x344)));

	if (t73 != -577563752LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x346 = -1543;
	int64_t x347 = INT64_MAX;
	volatile int32_t t74 = -6;

	t74 = (x345^(x346<=(x347-x348)));

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x349 = UINT32_MAX;
	uint32_t x350 = 169105383U;
	volatile int16_t x351 = 4083;
	volatile int16_t x352 = 828;
	uint32_t t75 = UINT32_MAX;

	t75 = (x349^(x350<=(x351-x352)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = INT64_MAX;
	volatile int64_t x354 = 12075LL;
	static int16_t x355 = INT16_MAX;
	static volatile int32_t x356 = -1;

	t76 = (x353^(x354<=(x355-x356)));

	if (t76 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x357 = 1805469;
	static int64_t x358 = INT64_MIN;
	static int16_t x359 = INT16_MIN;
	static int64_t x360 = -48333411LL;
	volatile int32_t t77 = 36;

	t77 = (x357^(x358<=(x359-x360)));

	if (t77 != 1805468) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x361 = 40U;
	int32_t x362 = INT32_MAX;
	int32_t x363 = 19520;
	volatile int32_t x364 = 154677;
	volatile int32_t t78 = -466255;

	t78 = (x361^(x362<=(x363-x364)));

	if (t78 != 40) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x370 = INT16_MAX;
	int64_t x371 = 803283920LL;
	volatile int8_t x372 = INT8_MAX;
	int32_t t79 = -1396;

	t79 = (x369^(x370<=(x371-x372)));

	if (t79 != 2147483646) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x375 = INT16_MIN;
	int32_t t80 = 1;

	t80 = (x373^(x374<=(x375-x376)));

	if (t80 != 32766) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x377 = INT8_MIN;
	volatile int8_t x378 = 5;
	uint64_t x379 = 1341LLU;
	volatile int32_t x380 = INT32_MIN;
	int32_t t81 = -1;

	t81 = (x377^(x378<=(x379-x380)));

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x381 = UINT16_MAX;
	volatile uint8_t x383 = 1U;
	int32_t x384 = -1;
	static int32_t t82 = 1053;

	t82 = (x381^(x382<=(x383-x384)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x385 = -4;
	int32_t x386 = -1;
	uint8_t x387 = 10U;
	int32_t t83 = -16;

	t83 = (x385^(x386<=(x387-x388)));

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x390 = INT16_MIN;
	static int64_t x391 = -1LL;
	static uint64_t x392 = 775762865637699341LLU;

	t84 = (x389^(x390<=(x391-x392)));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x393 = UINT64_MAX;
	static uint16_t x394 = 12907U;
	int32_t x395 = INT32_MAX;
	uint16_t x396 = 669U;

	t85 = (x393^(x394<=(x395-x396)));

	if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x399 = -11852733;
	volatile uint64_t x400 = 1676898047573LLU;

	t86 = (x397^(x398<=(x399-x400)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x401 = UINT32_MAX;
	int64_t x402 = 134871042644LL;
	int64_t x403 = 449596000033LL;
	int16_t x404 = INT16_MIN;
	volatile uint32_t t87 = 52478757U;

	t87 = (x401^(x402<=(x403-x404)));

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x406 = -2;
	static int32_t t88 = -4255593;

	t88 = (x405^(x406<=(x407-x408)));

	if (t88 != 32766) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x409 = UINT64_MAX;
	int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MAX;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x409^(x410<=(x411-x412)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x413 = 908U;
	int8_t x414 = -1;
	int8_t x415 = INT8_MIN;
	static int32_t x416 = INT32_MIN;

	t90 = (x413^(x414<=(x415-x416)));

	if (t90 != 909) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = INT32_MAX;
	uint8_t x418 = 8U;
	volatile int32_t x419 = -31910;
	static volatile int32_t t91 = INT32_MAX;

	t91 = (x417^(x418<=(x419-x420)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = INT64_MIN;
	static int8_t x422 = 0;
	int16_t x423 = INT16_MIN;
	volatile int64_t t92 = -666LL;

	t92 = (x421^(x422<=(x423-x424)));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x425 = 6U;
	volatile int32_t x426 = -845959;
	static uint8_t x427 = UINT8_MAX;
	uint16_t x428 = UINT16_MAX;
	int32_t t93 = -485209767;

	t93 = (x425^(x426<=(x427-x428)));

	if (t93 != 7) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x429 = INT16_MIN;
	volatile int16_t x430 = 13511;
	static uint64_t x431 = 75115433580LLU;
	int64_t x432 = INT64_MIN;
	volatile int32_t t94 = 743;

	t94 = (x429^(x430<=(x431-x432)));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x434 = INT32_MIN;
	int32_t x435 = INT32_MIN;
	volatile int32_t t95 = 10181;

	t95 = (x433^(x434<=(x435-x436)));

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x437 = INT16_MIN;
	int16_t x439 = 6473;
	int8_t x440 = -1;

	t96 = (x437^(x438<=(x439-x440)));

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x441 = 3;
	volatile uint64_t x442 = 8953610262248675LLU;
	int64_t x443 = 183543881990LL;
	volatile uint16_t x444 = 60U;
	volatile int32_t t97 = 27127387;

	t97 = (x441^(x442<=(x443-x444)));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x445 = 20U;
	uint16_t x448 = 415U;
	int32_t t98 = -30129;

	t98 = (x445^(x446<=(x447-x448)));

	if (t98 != 20) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x452 = 832703198804658LLU;
	volatile int32_t t99 = 1466791;

	t99 = (x449^(x450<=(x451-x452)));

	if (t99 != 312) { NG(); } else { ; }
	
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

