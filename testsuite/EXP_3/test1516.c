#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = 197688U;
static volatile int32_t x11 = INT32_MIN;
int16_t x14 = 1;
static volatile int32_t t6 = -8;
static uint32_t x41 = 0U;
int8_t x46 = INT8_MIN;
int32_t t11 = 1;
int8_t x55 = INT8_MIN;
uint32_t x57 = 484U;
int32_t x59 = -369;
uint32_t x64 = 265253321U;
static int32_t t17 = -37;
int16_t x73 = -1;
int32_t t19 = 49689;
volatile int32_t t20 = 8602573;
volatile int32_t t21 = -9;
uint32_t x91 = 8U;
volatile int32_t t22 = 12;
uint8_t x100 = 6U;
int32_t t24 = 814104;
int8_t x105 = -1;
volatile int8_t x120 = -1;
int32_t t30 = 386892465;
int32_t x126 = INT32_MIN;
volatile int8_t x128 = INT8_MIN;
static uint32_t x130 = 145451453U;
static volatile int16_t x139 = INT16_MIN;
volatile int8_t x140 = INT8_MIN;
int16_t x146 = 46;
int32_t x156 = -49557;
static int64_t x161 = INT64_MAX;
static int8_t x164 = INT8_MAX;
int16_t x166 = -1977;
static uint64_t x180 = UINT64_MAX;
int8_t x186 = INT8_MIN;
int8_t x187 = INT8_MIN;
int64_t x189 = -1482438LL;
uint16_t x194 = 8U;
uint32_t x196 = 31U;
static int8_t x197 = INT8_MIN;
uint8_t x198 = 0U;
volatile int32_t t50 = -15783496;
static int64_t x211 = INT64_MAX;
uint8_t x212 = UINT8_MAX;
static volatile int32_t x218 = -1;
static uint64_t x221 = 775847876310999LLU;
int8_t x227 = INT8_MAX;
int32_t t58 = -494774548;
volatile int32_t t59 = -14008;
int16_t x247 = INT16_MIN;
volatile uint8_t x248 = 2U;
static int8_t x250 = -1;
static int8_t x256 = -62;
uint64_t x257 = 5471471941926677LLU;
uint64_t x260 = 413380125399771LLU;
int32_t t64 = 29564;
uint64_t x261 = 21134015962038LLU;
int16_t x264 = INT16_MIN;
static int32_t x265 = -1;
int8_t x280 = 1;
volatile int32_t t69 = -175869326;
int16_t x302 = 3;
int16_t x310 = INT16_MIN;
int32_t x314 = -1;
static int64_t x322 = 901LL;
int32_t t80 = -3555965;
uint32_t x328 = 2917U;
static volatile int32_t t81 = 42;
volatile int16_t x332 = 245;
volatile int32_t t83 = 23836329;
uint8_t x339 = 59U;
int8_t x341 = INT8_MIN;
static uint32_t x345 = UINT32_MAX;
static uint16_t x348 = 5U;
volatile int16_t x349 = 29;
uint32_t x352 = 125501431U;
volatile int32_t t88 = 37841;
uint32_t x357 = 2117968675U;
int64_t x360 = 564118664901613160LL;
volatile int32_t t90 = -4;
int8_t x366 = -1;
int16_t x368 = INT16_MIN;
static int8_t x370 = -36;
int32_t t94 = 3;
uint8_t x383 = 46U;
uint64_t x387 = 26400293715827LLU;
static volatile uint16_t x388 = 2U;
int32_t t97 = 15160;
volatile uint16_t x395 = 22684U;


void f0(void) {
	int16_t x1 = -6;
	volatile int8_t x2 = INT8_MIN;
	uint16_t x3 = UINT16_MAX;
	uint32_t x4 = 0U;
	volatile int32_t t0 = -248;

	t0 = ((x1^x2)==(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 266;

	t1 = ((x5^x6)==(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 23141792LLU;
	int64_t x10 = INT64_MIN;
	static uint64_t x12 = 1144067385LLU;
	volatile int32_t t2 = 125322;

	t2 = ((x9^x10)==(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 3885132LLU;
	int32_t x15 = -31;
	static int64_t x16 = 15LL;
	volatile int32_t t3 = 1;

	t3 = ((x13^x14)==(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 118148LL;
	static int8_t x18 = 20;
	static uint32_t x19 = UINT32_MAX;
	uint32_t x20 = 31U;
	static int32_t t4 = 2;

	t4 = ((x17^x18)==(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 17;
	volatile int8_t x22 = -5;
	int64_t x23 = INT64_MAX;
	static int8_t x24 = -1;
	int32_t t5 = 34890951;

	t5 = ((x21^x22)==(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	volatile uint16_t x26 = 22609U;
	uint16_t x27 = 1U;
	int64_t x28 = 3875327343129950LL;

	t6 = ((x25^x26)==(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile uint64_t x30 = 34274225924429126LLU;
	int32_t x31 = 1;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t7 = -466;

	t7 = ((x29^x30)==(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	int64_t x34 = -1LL;
	int32_t x35 = 1762481;
	uint32_t x36 = 14848U;
	volatile int32_t t8 = 44;

	t8 = ((x33^x34)==(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	volatile int8_t x38 = 1;
	static int32_t x39 = INT32_MAX;
	uint32_t x40 = 2U;
	int32_t t9 = -10;

	t9 = ((x37^x38)==(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MAX;
	volatile int64_t x43 = 46474693531LL;
	int8_t x44 = -1;
	volatile int32_t t10 = -5547;

	t10 = ((x41^x42)==(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	int8_t x47 = -5;
	int64_t x48 = -224314785LL;

	t11 = ((x45^x46)==(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 58U;
	uint32_t x50 = 498U;
	uint32_t x51 = 8665U;
	int32_t x52 = -1;
	volatile int32_t t12 = 187;

	t12 = ((x49^x50)==(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -61438807206508LL;
	volatile int16_t x54 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	static volatile int32_t t13 = 6405573;

	t13 = ((x53^x54)==(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x58 = UINT32_MAX;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -3522743;

	t14 = ((x57^x58)==(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -7;
	volatile uint16_t x62 = 413U;
	int64_t x63 = -1062139LL;
	volatile int32_t t15 = 52800660;

	t15 = ((x61^x62)==(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	uint8_t x66 = 22U;
	int16_t x67 = INT16_MAX;
	int64_t x68 = -5454LL;
	static volatile int32_t t16 = 26092;

	t16 = ((x65^x66)==(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MIN;
	int64_t x71 = INT64_MAX;
	uint32_t x72 = 558237U;

	t17 = ((x69^x70)==(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x74 = -1LL;
	int64_t x75 = INT64_MIN;
	uint8_t x76 = 11U;
	int32_t t18 = 212754;

	t18 = ((x73^x74)==(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -9414;
	uint32_t x78 = 43489622U;
	int16_t x79 = 256;
	uint8_t x80 = UINT8_MAX;

	t19 = ((x77^x78)==(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 23532LLU;
	uint32_t x82 = UINT32_MAX;
	int8_t x83 = INT8_MIN;
	static uint32_t x84 = 27U;

	t20 = ((x81^x82)==(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 5802342865935LLU;
	int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MIN;
	int16_t x88 = -1;

	t21 = ((x85^x86)==(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -81189530;
	static volatile uint8_t x90 = UINT8_MAX;
	int8_t x92 = INT8_MAX;

	t22 = ((x89^x90)==(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 51523894U;
	static int64_t x94 = -34LL;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = 1U;
	static volatile int32_t t23 = 32482;

	t23 = ((x93^x94)==(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = 6;
	uint16_t x98 = 10U;
	uint16_t x99 = UINT16_MAX;

	t24 = ((x97^x98)==(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static int32_t x102 = -182493348;
	static int32_t x103 = INT32_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t25 = 647386305;

	t25 = ((x101^x102)==(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x106 = UINT64_MAX;
	uint64_t x107 = 7LLU;
	uint16_t x108 = 655U;
	int32_t t26 = -158;

	t26 = ((x105^x106)==(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -30;
	int16_t x110 = INT16_MIN;
	int8_t x111 = 63;
	int16_t x112 = INT16_MAX;
	int32_t t27 = -47;

	t27 = ((x109^x110)==(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	uint8_t x114 = 6U;
	uint16_t x115 = 0U;
	static volatile uint16_t x116 = 256U;
	int32_t t28 = -75012217;

	t28 = ((x113^x114)==(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	uint32_t x118 = 857508284U;
	static int64_t x119 = -1584932224094614916LL;
	volatile int32_t t29 = 31201;

	t29 = ((x117^x118)==(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	uint8_t x122 = UINT8_MAX;
	int64_t x123 = -1893514LL;
	uint8_t x124 = 1U;

	t30 = ((x121^x122)==(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 10U;
	uint64_t x127 = UINT64_MAX;
	static volatile int32_t t31 = 6443;

	t31 = ((x125^x126)==(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 1099511892536759229LLU;
	int16_t x131 = INT16_MIN;
	static uint8_t x132 = 1U;
	int32_t t32 = -303;

	t32 = ((x129^x130)==(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 5U;
	volatile uint16_t x134 = 73U;
	int32_t x135 = INT32_MAX;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = -15280713;

	t33 = ((x133^x134)==(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = -50;
	volatile int32_t t34 = 2;

	t34 = ((x137^x138)==(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 19U;
	uint32_t x142 = 550U;
	int16_t x143 = INT16_MAX;
	int64_t x144 = INT64_MIN;
	static volatile int32_t t35 = -1533;

	t35 = ((x141^x142)==(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 25U;
	uint32_t x147 = UINT32_MAX;
	int8_t x148 = -1;
	volatile int32_t t36 = 1732;

	t36 = ((x145^x146)==(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int64_t x150 = 53LL;
	uint8_t x151 = 3U;
	int8_t x152 = 31;
	int32_t t37 = -3041610;

	t37 = ((x149^x150)==(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = -12747;
	static volatile int8_t x155 = INT8_MIN;
	volatile int32_t t38 = -555;

	t38 = ((x153^x154)==(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	int16_t x158 = -70;
	int64_t x159 = INT64_MIN;
	uint8_t x160 = 15U;
	int32_t t39 = -13144585;

	t39 = ((x157^x158)==(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = 919414160844786994LLU;
	static volatile uint8_t x163 = 65U;
	int32_t t40 = -1;

	t40 = ((x161^x162)==(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 0U;
	volatile uint8_t x167 = 1U;
	int64_t x168 = 0LL;
	volatile int32_t t41 = -3007;

	t41 = ((x165^x166)==(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	static int64_t x170 = -1LL;
	static volatile int32_t x171 = -1;
	volatile uint32_t x172 = UINT32_MAX;
	static volatile int32_t t42 = 14803067;

	t42 = ((x169^x170)==(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x173 = 140147024067887LLU;
	int16_t x174 = 14;
	int32_t x175 = INT32_MAX;
	uint64_t x176 = UINT64_MAX;
	int32_t t43 = 40852;

	t43 = ((x173^x174)==(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = 29453474526630LL;
	static int64_t x179 = INT64_MIN;
	volatile int32_t t44 = -120823;

	t44 = ((x177^x178)==(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = INT8_MIN;
	uint8_t x182 = 1U;
	int8_t x183 = 3;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -260958290;

	t45 = ((x181^x182)==(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 1914634197LLU;
	int64_t x188 = -1395101359954521LL;
	volatile int32_t t46 = 0;

	t46 = ((x185^x186)==(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MIN;
	static volatile uint32_t x191 = 52U;
	uint8_t x192 = 2U;
	int32_t t47 = -163960209;

	t47 = ((x189^x190)==(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	static uint64_t x195 = 37696794473LLU;
	int32_t t48 = 30290;

	t48 = ((x193^x194)==(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x199 = -1;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -5;

	t49 = ((x197^x198)==(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = UINT32_MAX;
	volatile int32_t x202 = -1;
	int32_t x203 = -1;
	static volatile int64_t x204 = 740040566430448693LL;

	t50 = ((x201^x202)==(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	int32_t x206 = -1;
	uint32_t x207 = 770U;
	int16_t x208 = 62;
	volatile int32_t t51 = 22937;

	t51 = ((x205^x206)==(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 2033568306710LLU;
	int8_t x210 = 0;
	int32_t t52 = 0;

	t52 = ((x209^x210)==(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int16_t x214 = -298;
	uint64_t x215 = 16625271984240211LLU;
	static int64_t x216 = -1LL;
	static volatile int32_t t53 = 2082858;

	t53 = ((x213^x214)==(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	int8_t x219 = -1;
	int64_t x220 = -1LL;
	volatile int32_t t54 = 1224203;

	t54 = ((x217^x218)==(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x222 = INT32_MIN;
	static volatile int32_t x223 = -43236;
	static uint32_t x224 = UINT32_MAX;
	int32_t t55 = -600788;

	t55 = ((x221^x222)==(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -1;
	int32_t x226 = 38533;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = 5434661;

	t56 = ((x225^x226)==(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 1738323;
	uint16_t x230 = 916U;
	uint64_t x231 = 123684LLU;
	int64_t x232 = INT64_MIN;
	int32_t t57 = 0;

	t57 = ((x229^x230)==(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = UINT32_MAX;
	static int8_t x234 = -1;
	int8_t x235 = INT8_MAX;
	uint64_t x236 = 10971144LLU;

	t58 = ((x233^x234)==(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -5;
	volatile int16_t x238 = INT16_MIN;
	static int16_t x239 = INT16_MIN;
	volatile int64_t x240 = -1LL;

	t59 = ((x237^x238)==(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	static int8_t x242 = INT8_MIN;
	volatile int8_t x243 = -3;
	int32_t x244 = 456202646;
	static int32_t t60 = 245;

	t60 = ((x241^x242)==(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	static uint8_t x246 = UINT8_MAX;
	int32_t t61 = -2219708;

	t61 = ((x245^x246)==(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	uint64_t x251 = 799261LLU;
	int64_t x252 = INT64_MAX;
	volatile int32_t t62 = -126524;

	t62 = ((x249^x250)==(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int8_t x254 = -1;
	uint64_t x255 = 16305739177226569LLU;
	volatile int32_t t63 = 195;

	t63 = ((x253^x254)==(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MAX;
	int32_t x259 = -1123316;

	t64 = ((x257^x258)==(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = 14U;
	volatile uint32_t x263 = 17337U;
	volatile int32_t t65 = -7832725;

	t65 = ((x261^x262)==(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = -1;
	int32_t x267 = -1065967554;
	static uint64_t x268 = 99025LLU;
	volatile int32_t t66 = 59;

	t66 = ((x265^x266)==(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t67 = -14246;

	t67 = ((x269^x270)==(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = 394;
	volatile int16_t x275 = INT16_MAX;
	int32_t x276 = INT32_MIN;
	int32_t t68 = -65;

	t68 = ((x273^x274)==(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 16;
	int32_t x278 = -1;
	int16_t x279 = -1;

	t69 = ((x277^x278)==(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = 117U;
	static int32_t x282 = -1;
	int32_t x283 = -3;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = 3770242;

	t70 = ((x281^x282)==(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -31;
	uint32_t x286 = 261658511U;
	volatile int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MAX;
	volatile int32_t t71 = 83407;

	t71 = ((x285^x286)==(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	uint64_t x290 = 7182LLU;
	volatile int32_t x291 = INT32_MIN;
	static volatile int8_t x292 = -56;
	volatile int32_t t72 = 4;

	t72 = ((x289^x290)==(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int8_t x294 = -1;
	uint32_t x295 = UINT32_MAX;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t73 = -6;

	t73 = ((x293^x294)==(x295<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	int8_t x298 = INT8_MIN;
	volatile uint64_t x299 = 3656577LLU;
	static int64_t x300 = INT64_MIN;
	int32_t t74 = -12;

	t74 = ((x297^x298)==(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	int64_t x303 = -1LL;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t75 = -59813670;

	t75 = ((x301^x302)==(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = 246545481630700LL;
	uint16_t x306 = 3U;
	uint16_t x307 = 26708U;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = -3569150;

	t76 = ((x305^x306)==(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MIN;
	static volatile int32_t x311 = -448949;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 3;

	t77 = ((x309^x310)==(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = UINT8_MAX;
	int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MAX;
	int32_t t78 = 393;

	t78 = ((x313^x314)==(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = UINT8_MAX;
	int16_t x318 = -1;
	volatile uint64_t x319 = 1097424837867LLU;
	int64_t x320 = -1LL;
	static volatile int32_t t79 = -1947;

	t79 = ((x317^x318)==(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 17484340556873LLU;
	volatile int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MIN;

	t80 = ((x321^x322)==(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = -1;
	volatile int32_t x326 = INT32_MIN;
	volatile int16_t x327 = -2;

	t81 = ((x325^x326)==(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	volatile uint32_t x330 = UINT32_MAX;
	int8_t x331 = INT8_MIN;
	volatile int32_t t82 = -8020004;

	t82 = ((x329^x330)==(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	uint16_t x334 = 1U;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;

	t83 = ((x333^x334)==(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 515U;
	int8_t x338 = 2;
	volatile int32_t x340 = INT32_MIN;
	int32_t t84 = 35922807;

	t84 = ((x337^x338)==(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MIN;
	int8_t x343 = 3;
	volatile int16_t x344 = INT16_MIN;
	static volatile int32_t t85 = -23249006;

	t85 = ((x341^x342)==(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = 11889680433367LL;
	volatile uint64_t x347 = 10165238183LLU;
	int32_t t86 = -341915;

	t86 = ((x345^x346)==(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x350 = UINT8_MAX;
	volatile int64_t x351 = INT64_MIN;
	volatile int32_t t87 = 1834556;

	t87 = ((x349^x350)==(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = 4659LLU;
	volatile uint64_t x354 = 5806879636439LLU;
	static int16_t x355 = -1;
	int8_t x356 = INT8_MIN;

	t88 = ((x353^x354)==(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = -1;
	int64_t x359 = -1LL;
	static volatile int32_t t89 = 160434783;

	t89 = ((x357^x358)==(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	volatile int16_t x362 = INT16_MIN;
	volatile int8_t x363 = -28;
	uint32_t x364 = 737034430U;

	t90 = ((x361^x362)==(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	static uint16_t x367 = 0U;
	int32_t t91 = 10;

	t91 = ((x365^x366)==(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int32_t x371 = INT32_MAX;
	volatile int64_t x372 = INT64_MAX;
	static int32_t t92 = 46;

	t92 = ((x369^x370)==(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	static int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MAX;
	static int8_t x376 = 6;
	int32_t t93 = -1623310;

	t93 = ((x373^x374)==(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MIN;
	static volatile int64_t x379 = -10877560319625LL;
	static volatile uint8_t x380 = 86U;

	t94 = ((x377^x378)==(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = UINT32_MAX;
	int8_t x382 = -15;
	int64_t x384 = INT64_MIN;
	static int32_t t95 = -38;

	t95 = ((x381^x382)==(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x385 = -1;
	static int64_t x386 = 22057LL;
	static volatile int32_t t96 = 111;

	t96 = ((x385^x386)==(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 910U;
	volatile int8_t x390 = -11;
	int8_t x391 = 19;
	int32_t x392 = 177839331;

	t97 = ((x389^x390)==(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 14U;
	uint64_t x394 = 99817091LLU;
	static int8_t x396 = INT8_MAX;
	int32_t t98 = -4;

	t98 = ((x393^x394)==(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = INT64_MAX;
	static volatile int8_t x398 = INT8_MIN;
	volatile uint16_t x399 = 0U;
	static int64_t x400 = 484LL;
	static volatile int32_t t99 = 3497;

	t99 = ((x397^x398)==(x399<x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

