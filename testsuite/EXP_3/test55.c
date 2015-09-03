#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -41056334380446631LL;
int32_t x5 = -50;
static volatile uint64_t t2 = 6421240124379879139LLU;
int32_t x13 = INT32_MAX;
uint16_t x21 = UINT16_MAX;
int64_t x23 = INT64_MAX;
uint64_t t4 = 0LLU;
int16_t x26 = -1;
uint64_t x27 = 33609991053997840LLU;
static uint32_t x34 = UINT32_MAX;
static int64_t x38 = INT64_MIN;
uint32_t x42 = UINT32_MAX;
int64_t x45 = INT64_MIN;
int64_t t9 = 13268549243LL;
volatile int64_t x50 = -1LL;
int8_t x80 = INT8_MAX;
int16_t x85 = INT16_MIN;
static int32_t x97 = INT32_MIN;
static int8_t x112 = INT8_MIN;
static int64_t t26 = 8166519463LL;
static volatile int16_t x123 = -1;
static int64_t x125 = INT64_MIN;
static int64_t x126 = -482LL;
static int32_t x128 = INT32_MAX;
volatile uint16_t x129 = 114U;
int16_t x136 = -1;
static uint32_t x139 = 6U;
volatile int32_t x141 = 383284882;
uint64_t x143 = UINT64_MAX;
int32_t x144 = -1;
int32_t x145 = -8;
int8_t x146 = INT8_MIN;
uint64_t t36 = 578486336LLU;
volatile int32_t x165 = -1;
int32_t x173 = 138339;
static volatile uint64_t t39 = 2LLU;
volatile uint64_t t44 = 7863459095965694688LLU;
uint32_t x199 = 0U;
uint32_t x211 = 399U;
int32_t x216 = INT32_MIN;
static volatile uint64_t t49 = 14842797003LLU;
uint8_t x224 = 20U;
uint8_t x225 = 3U;
uint16_t x232 = 0U;
volatile int32_t t52 = -6838;
int8_t x245 = INT8_MIN;
static volatile uint32_t x247 = 5140006U;
int16_t x248 = INT16_MIN;
int64_t t55 = -63316LL;
int64_t x254 = INT64_MAX;
volatile uint64_t t57 = 1319244741092914295LLU;
uint8_t x263 = 1U;
uint8_t x264 = 21U;
int32_t t58 = 82;
uint64_t x267 = 15004588714464804LLU;
volatile int64_t x268 = -12116618665650826LL;
int64_t x279 = INT64_MAX;
int64_t x280 = INT64_MIN;
uint16_t x285 = UINT16_MAX;
static int8_t x292 = -60;
uint64_t x299 = UINT64_MAX;
int16_t x306 = 222;
static int16_t x310 = INT16_MAX;
int16_t x311 = 12;
uint32_t x312 = 743U;
int64_t x315 = INT64_MIN;
int64_t x317 = INT64_MIN;
uint8_t x325 = 92U;
volatile int16_t x326 = INT16_MIN;
volatile uint64_t x332 = 48292827406411062LLU;
uint64_t t73 = 106127297LLU;
int16_t x345 = -1;
volatile uint32_t x355 = UINT32_MAX;
volatile uint8_t x361 = 47U;
uint16_t x375 = 12172U;
static uint64_t t83 = 14LLU;
int32_t x385 = 5;
volatile uint64_t x386 = 5965127LLU;
uint64_t t84 = 121905446420LLU;
int16_t x396 = 2134;
uint32_t x398 = 9U;
uint8_t x406 = 7U;
int16_t x425 = -1;
static volatile int16_t x428 = INT16_MIN;
int64_t x433 = -1359945484828249006LL;
int16_t x442 = INT16_MAX;
uint64_t t93 = 90593LLU;
volatile int16_t x447 = -1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x2 = UINT8_MAX;
	static int16_t x4 = INT16_MAX;
	volatile int64_t t0 = -974526716086706117LL;

	t0 = ((x1%x2)*(x3+x4));

	if (t0 != 5255210800692974592LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	static int64_t x8 = -119993839LL;
	volatile int64_t t1 = -230209111945LL;

	t1 = ((x5%x6)*(x7+x8));

	if (t1 != 5999698350LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int32_t x10 = INT32_MIN;
	uint64_t x11 = 12LLU;
	static int64_t x12 = INT64_MIN;

	t2 = ((x9%x10)*(x11+x12));

	if (t2 != 18446744073709158400LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	uint16_t x15 = 7U;
	static uint16_t x16 = 10582U;
	volatile int32_t t3 = -1115;

	t3 = ((x13%x14)*(x15+x16));

	if (t3 != 1344803) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x22 = 26547890037214371LLU;
	volatile uint64_t x24 = UINT64_MAX;

	t4 = ((x21%x22)*(x23+x24));

	if (t4 != 9223372036854644738LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MIN;
	static uint16_t x28 = 6407U;
	volatile uint64_t t5 = 11LLU;

	t5 = ((x25%x26)*(x27+x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -1;
	int32_t x35 = INT32_MIN;
	static volatile uint8_t x36 = 121U;
	uint32_t t6 = 187U;

	t6 = ((x33%x34)*(x35+x36));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x37 = 7U;
	int64_t x39 = -1LL;
	int8_t x40 = INT8_MAX;
	static volatile int64_t t7 = -14959309987191LL;

	t7 = ((x37%x38)*(x39+x40));

	if (t7 != 882LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 6;
	int64_t x43 = -1LL;
	volatile int64_t x44 = -1LL;
	volatile int64_t t8 = 10LL;

	t8 = ((x41%x42)*(x43+x44));

	if (t8 != -12LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x46 = UINT8_MAX;
	int64_t x47 = 1LL;
	int32_t x48 = INT32_MAX;

	t9 = ((x45%x46)*(x47+x48));

	if (t9 != -274877906944LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	int8_t x51 = INT8_MAX;
	volatile int32_t x52 = -4;
	static volatile int64_t t10 = 439518122LL;

	t10 = ((x49%x50)*(x51+x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MAX;
	int8_t x54 = INT8_MAX;
	int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MAX;
	volatile int32_t t11 = -1;

	t11 = ((x53%x54)*(x55+x56));

	if (t11 != -7) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x61 = 520370LLU;
	static int64_t x62 = INT64_MIN;
	uint64_t x63 = UINT64_MAX;
	int32_t x64 = INT32_MAX;
	uint64_t t12 = 625152372636LLU;

	t12 = ((x61%x62)*(x63+x64));

	if (t12 != 1117486064869020LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MAX;
	uint64_t x66 = 17613168550LLU;
	int8_t x67 = INT8_MAX;
	static int16_t x68 = INT16_MIN;
	uint64_t t13 = 169127LLU;

	t13 = ((x65%x66)*(x67+x68));

	if (t13 != 18446744073705406209LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x69 = 125748U;
	uint32_t x70 = 50U;
	static int64_t x71 = -1LL;
	uint64_t x72 = 57752412543LLU;
	uint64_t t14 = 290137102122927584LLU;

	t14 = ((x69%x70)*(x71+x72));

	if (t14 != 2772115802016LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MAX;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = -1;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t15 = 15027266U;

	t15 = ((x73%x74)*(x75+x76));

	if (t15 != 4294901762U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x77 = 8618U;
	int32_t x78 = INT32_MAX;
	int16_t x79 = INT16_MIN;
	static uint32_t t16 = 7010U;

	t16 = ((x77%x78)*(x79+x80));

	if (t16 != 4013667158U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	uint16_t x82 = UINT16_MAX;
	int16_t x83 = INT16_MAX;
	static uint64_t x84 = UINT64_MAX;
	static volatile uint64_t t17 = 10236148LLU;

	t17 = ((x81%x82)*(x83+x84));

	if (t17 != 18446744072635875328LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x86 = 29U;
	volatile int32_t x87 = -1;
	int8_t x88 = INT8_MAX;
	static int32_t t18 = -385345809;

	t18 = ((x85%x86)*(x87+x88));

	if (t18 != -3402) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = 2U;
	int32_t x90 = INT32_MIN;
	int64_t x91 = -200182254520579LL;
	int16_t x92 = INT16_MAX;
	volatile int64_t t19 = 5498LL;

	t19 = ((x89%x90)*(x91+x92));

	if (t19 != -400364508975624LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = INT32_MIN;
	int16_t x94 = INT16_MIN;
	int32_t x95 = -3961444;
	uint32_t x96 = UINT32_MAX;
	volatile uint32_t t20 = 27345U;

	t20 = ((x93%x94)*(x95+x96));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x98 = 608U;
	int16_t x99 = INT16_MIN;
	static uint64_t x100 = 9534735LLU;
	volatile uint64_t t21 = 2411320LLU;

	t21 = ((x97%x98)*(x99+x100));

	if (t21 != 18446744070972985120LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = 7;
	volatile int8_t x102 = INT8_MAX;
	static volatile int32_t x103 = INT32_MIN;
	volatile int64_t x104 = 36415746337877123LL;
	int64_t t22 = 67286489012LL;

	t22 = ((x101%x102)*(x103+x104));

	if (t22 != 254910209332754325LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -743;
	volatile uint8_t x106 = 1U;
	uint32_t x107 = 19260036U;
	volatile uint16_t x108 = 0U;
	static uint32_t t23 = 1464434717U;

	t23 = ((x105%x106)*(x107+x108));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = -487;
	int32_t x110 = INT32_MAX;
	int8_t x111 = -1;
	static volatile int32_t t24 = 5;

	t24 = ((x109%x110)*(x111+x112));

	if (t24 != 62823) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 66U;
	static int64_t x114 = INT64_MAX;
	volatile uint32_t x115 = 4852U;
	int8_t x116 = INT8_MAX;
	volatile int64_t t25 = 1LL;

	t25 = ((x113%x114)*(x115+x116));

	if (t25 != 328614LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MAX;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = UINT16_MAX;
	int64_t x120 = -1LL;

	t26 = ((x117%x118)*(x119+x120));

	if (t26 != 8322818LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MAX;
	volatile int8_t x122 = 17;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t27 = 1150478;

	t27 = ((x121%x122)*(x123+x124));

	if (t27 != 2032) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x127 = INT8_MIN;
	static int64_t t28 = -4412453619704990LL;

	t28 = ((x125%x126)*(x127+x128));

	if (t28 != -1017907188006LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x130 = -7;
	static int64_t x131 = 10827735LL;
	volatile int8_t x132 = INT8_MAX;
	volatile int64_t t29 = -8790821917LL;

	t29 = ((x129%x130)*(x131+x132));

	if (t29 != 21655724LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = UINT8_MAX;
	volatile int16_t x134 = INT16_MIN;
	uint64_t x135 = 259256301178501353LLU;
	volatile uint64_t t30 = 288649454945LLU;

	t30 = ((x133%x134)*(x135+x136));

	if (t30 != 10770124579389189912LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 393105598903469LLU;
	static uint16_t x138 = 1U;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t31 = 749899104989LLU;

	t31 = ((x137%x138)*(x139+x140));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x142 = 33009684;
	uint64_t t32 = 9387134LLU;

	t32 = ((x141%x142)*(x143+x144));

	if (t32 != 18446744073669194900LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x147 = -1;
	int16_t x148 = -1;
	volatile int32_t t33 = -684;

	t33 = ((x145%x146)*(x147+x148));

	if (t33 != 16) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	volatile int32_t x150 = INT32_MIN;
	uint16_t x151 = 0U;
	int64_t x152 = 201327891568796LL;
	int64_t t34 = 13386959973134365LL;

	t34 = ((x149%x150)*(x151+x152));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x157 = INT64_MIN;
	static volatile int16_t x158 = 123;
	uint64_t x159 = 66605250298LLU;
	volatile int32_t x160 = INT32_MIN;
	volatile uint64_t t35 = 422877520318LLU;

	t35 = ((x157%x158)*(x159+x160));

	if (t35 != 18446743558047418416LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = UINT16_MAX;
	int64_t x162 = 91008LL;
	uint64_t x163 = 55906629064429414LLU;
	volatile int16_t x164 = INT16_MIN;

	t36 = ((x161%x162)*(x163+x164));

	if (t36 != 11385609140742975642LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = INT16_MIN;
	int8_t x167 = -1;
	volatile int8_t x168 = -1;
	volatile int32_t t37 = 27363;

	t37 = ((x165%x166)*(x167+x168));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MAX;
	static volatile uint8_t x170 = 31U;
	int16_t x171 = INT16_MIN;
	volatile int8_t x172 = -1;
	int32_t t38 = -594;

	t38 = ((x169%x170)*(x171+x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x174 = INT32_MIN;
	static int8_t x175 = 0;
	uint64_t x176 = 211614684867521LLU;

	t39 = ((x173%x174)*(x175+x176));

	if (t39 != 10827819816178436003LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x177 = 4U;
	uint32_t x178 = UINT32_MAX;
	int16_t x179 = -1;
	volatile int8_t x180 = -2;
	volatile uint32_t t40 = 11U;

	t40 = ((x177%x178)*(x179+x180));

	if (t40 != 4294967284U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = -1;
	static uint8_t x182 = UINT8_MAX;
	uint32_t x183 = 9U;
	int32_t x184 = -983;
	static volatile uint32_t t41 = 0U;

	t41 = ((x181%x182)*(x183+x184));

	if (t41 != 974U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x185 = 1U;
	int64_t x186 = -267LL;
	uint64_t x187 = UINT64_MAX;
	volatile int16_t x188 = -1;
	volatile uint64_t t42 = 5LLU;

	t42 = ((x185%x186)*(x187+x188));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = 118821LLU;
	uint64_t x190 = UINT64_MAX;
	uint64_t x191 = 3556LLU;
	int32_t x192 = INT32_MIN;
	uint64_t t43 = 55LLU;

	t43 = ((x189%x190)*(x191+x192));

	if (t43 != 18446488907977540084LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = UINT64_MAX;
	uint64_t x194 = 501LLU;
	uint32_t x195 = 182U;
	volatile int32_t x196 = INT32_MIN;

	t44 = ((x193%x194)*(x195+x196));

	if (t44 != 103079223840LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MIN;
	int64_t x198 = 750605726LL;
	int16_t x200 = 4;
	static volatile int64_t t45 = 33116968LL;

	t45 = ((x197%x198)*(x199+x200));

	if (t45 != -131072LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	static int8_t x203 = INT8_MAX;
	int32_t x204 = -1;
	int32_t t46 = -1;

	t46 = ((x201%x202)*(x203+x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = UINT32_MAX;
	static uint64_t x210 = 79050589712LLU;
	volatile int32_t x212 = INT32_MAX;
	uint64_t t47 = 1780634429611426LLU;

	t47 = ((x209%x210)*(x211+x212));

	if (t47 != 9223373744104275570LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x213 = -1LL;
	uint32_t x214 = 50609355U;
	uint8_t x215 = 1U;
	volatile int64_t t48 = 803289165302459LL;

	t48 = ((x213%x214)*(x215+x216));

	if (t48 != 2147483647LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x217 = 2292892;
	static int64_t x218 = -318742054190430583LL;
	uint32_t x219 = 10U;
	uint64_t x220 = UINT64_MAX;

	t49 = ((x217%x218)*(x219+x220));

	if (t49 != 20636028LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = -3913;
	int8_t x222 = 6;
	int8_t x223 = 0;
	volatile int32_t t50 = -410825658;

	t50 = ((x221%x222)*(x223+x224));

	if (t50 != -20) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x226 = -1;
	int8_t x227 = 3;
	int16_t x228 = -1;
	static volatile int32_t t51 = 1;

	t51 = ((x225%x226)*(x227+x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MIN;
	uint8_t x230 = 4U;
	int16_t x231 = INT16_MIN;

	t52 = ((x229%x230)*(x231+x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = 1U;
	static int32_t x234 = 228539699;
	volatile uint64_t x235 = 87LLU;
	volatile uint16_t x236 = UINT16_MAX;
	uint64_t t53 = 21435883530060424LLU;

	t53 = ((x233%x234)*(x235+x236));

	if (t53 != 65622LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x246 = INT32_MIN;
	volatile uint32_t t54 = 739111U;

	t54 = ((x245%x246)*(x247+x248));

	if (t54 != 3641240832U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x249 = UINT32_MAX;
	int8_t x250 = INT8_MIN;
	int64_t x251 = 77701301445364LL;
	int64_t x252 = -1LL;

	t55 = ((x249%x250)*(x251+x252));

	if (t55 != 9868065283561101LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = -1;
	static int32_t x255 = INT32_MAX;
	int32_t x256 = -464989;
	volatile int64_t t56 = -38642LL;

	t56 = ((x253%x254)*(x255+x256));

	if (t56 != -2147018658LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MIN;
	static uint64_t x258 = 3989LLU;
	uint8_t x259 = 4U;
	uint16_t x260 = 211U;

	t57 = ((x257%x258)*(x259+x260));

	if (t57 != 281435LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = -1;
	static int32_t x262 = INT32_MIN;

	t58 = ((x261%x262)*(x263+x264));

	if (t58 != -22) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x265 = INT8_MIN;
	volatile int64_t x266 = 46241172331638111LL;
	volatile uint64_t t59 = 8803335049000362LLU;

	t59 = ((x265%x266)*(x267+x268));

	if (t59 != 18077083907461362432LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x269 = 9U;
	volatile uint64_t x270 = 2098033439217487LLU;
	int64_t x271 = -19883667LL;
	static uint8_t x272 = 28U;
	static uint64_t t60 = 7086018629367LLU;

	t60 = ((x269%x270)*(x271+x272));

	if (t60 != 18446744073530598865LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = 25082880;
	volatile int16_t x274 = INT16_MIN;
	static int16_t x275 = 15928;
	static volatile uint8_t x276 = UINT8_MAX;
	volatile int32_t t61 = -3779;

	t61 = ((x273%x274)*(x275+x276));

	if (t61 != 248570880) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x277 = -1LL;
	int64_t x278 = -17751727004LL;
	int64_t t62 = 41LL;

	t62 = ((x277%x278)*(x279+x280));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MAX;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = INT16_MIN;
	int32_t x284 = 1;
	uint64_t t63 = 525367543096100LLU;

	t63 = ((x281%x282)*(x283+x284));

	if (t63 != 18446673707112890367LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x286 = -56;
	uint64_t x287 = UINT64_MAX;
	volatile int8_t x288 = -1;
	volatile uint64_t t64 = 122LLU;

	t64 = ((x285%x286)*(x287+x288));

	if (t64 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = -370;
	uint64_t x290 = 52LLU;
	int16_t x291 = 912;
	uint64_t t65 = 2LLU;

	t65 = ((x289%x290)*(x291+x292));

	if (t65 != 8520LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x297 = 117317036U;
	int64_t x298 = INT64_MIN;
	static volatile int8_t x300 = INT8_MIN;
	static volatile uint64_t t66 = 1620354504919039161LLU;

	t66 = ((x297%x298)*(x299+x300));

	if (t66 != 18446744058575653972LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x305 = 62U;
	static volatile int32_t x307 = -1;
	static int8_t x308 = -1;
	volatile int32_t t67 = 879528;

	t67 = ((x305%x306)*(x307+x308));

	if (t67 != -124) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x309 = UINT32_MAX;
	static volatile uint32_t t68 = 155U;

	t68 = ((x309%x310)*(x311+x312));

	if (t68 != 2265U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = -1;
	int32_t x314 = 53053347;
	static volatile uint32_t x316 = UINT32_MAX;
	int64_t t69 = -1232LL;

	t69 = ((x313%x314)*(x315+x316));

	if (t69 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = -1448LL;
	static volatile int16_t x320 = -351;
	volatile int64_t t70 = -1812739LL;

	t70 = ((x317%x318)*(x319+x320));

	if (t70 != 230272LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = INT16_MAX;
	int64_t x322 = -1LL;
	int16_t x323 = -2034;
	int16_t x324 = INT16_MAX;
	int64_t t71 = 39745122229357LL;

	t71 = ((x321%x322)*(x323+x324));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x327 = UINT32_MAX;
	static volatile int32_t x328 = 20;
	static volatile uint32_t t72 = 246620932U;

	t72 = ((x325%x326)*(x327+x328));

	if (t72 != 1748U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x329 = UINT16_MAX;
	int8_t x330 = INT8_MIN;
	int64_t x331 = -38294LL;

	t73 = ((x329%x330)*(x331+x332));

	if (t73 != 6133189080609341536LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = INT64_MIN;
	volatile int64_t x334 = INT64_MAX;
	int32_t x335 = INT32_MIN;
	static uint64_t x336 = UINT64_MAX;
	uint64_t t74 = 5944788465643LLU;

	t74 = ((x333%x334)*(x335+x336));

	if (t74 != 2147483649LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x337 = INT64_MIN;
	static volatile uint32_t x338 = UINT32_MAX;
	volatile int16_t x339 = 14;
	int32_t x340 = -1;
	volatile int64_t t75 = 17104394706543827LL;

	t75 = ((x337%x338)*(x339+x340));

	if (t75 != -27917287424LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x341 = -1;
	int8_t x342 = INT8_MIN;
	static volatile uint32_t x343 = 1U;
	int16_t x344 = INT16_MAX;
	static uint32_t t76 = 0U;

	t76 = ((x341%x342)*(x343+x344));

	if (t76 != 4294934528U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x346 = INT32_MIN;
	static uint64_t x347 = 1807206LLU;
	int16_t x348 = -1;
	static uint64_t t77 = 8673182645922468LLU;

	t77 = ((x345%x346)*(x347+x348));

	if (t77 != 18446744073707744411LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x349 = UINT64_MAX;
	uint64_t x350 = 897502227632378359LLU;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MIN;
	uint64_t t78 = 43260772337722LLU;

	t78 = ((x349%x350)*(x351+x352));

	if (t78 != 2909260298695544269LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x353 = -1LL;
	int32_t x354 = -1;
	uint32_t x356 = 153079U;
	volatile int64_t t79 = -1690LL;

	t79 = ((x353%x354)*(x355+x356));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x357 = 0;
	static int32_t x358 = -521;
	static volatile int16_t x359 = INT16_MIN;
	uint8_t x360 = UINT8_MAX;
	int32_t t80 = -85;

	t80 = ((x357%x358)*(x359+x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x362 = 45298509453329265LL;
	static int16_t x363 = -1;
	static int32_t x364 = -3056836;
	volatile int64_t t81 = 12378890LL;

	t81 = ((x361%x362)*(x363+x364));

	if (t81 != -143671339LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x373 = UINT8_MAX;
	uint8_t x374 = UINT8_MAX;
	int64_t x376 = 6515728195748119LL;
	int64_t t82 = 84764809128LL;

	t82 = ((x373%x374)*(x375+x376));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x377 = UINT64_MAX;
	uint32_t x378 = 13401U;
	uint16_t x379 = UINT16_MAX;
	uint16_t x380 = 3U;

	t83 = ((x377%x378)*(x379+x380));

	if (t83 != 824992344LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x387 = 259464530468809532LLU;
	int16_t x388 = INT16_MIN;

	t84 = ((x385%x386)*(x387+x388));

	if (t84 != 1297322652343883820LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MIN;
	int8_t x395 = -1;
	volatile int32_t t85 = -682385;

	t85 = ((x393%x394)*(x395+x396));

	if (t85 != -273024) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x397 = UINT64_MAX;
	uint32_t x399 = UINT32_MAX;
	volatile uint32_t x400 = UINT32_MAX;
	uint64_t t86 = 1LLU;

	t86 = ((x397%x398)*(x399+x400));

	if (t86 != 25769803764LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x401 = 0;
	volatile uint32_t x402 = 175U;
	int32_t x403 = -1;
	volatile int16_t x404 = 16;
	uint32_t t87 = 3042733U;

	t87 = ((x401%x402)*(x403+x404));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = INT8_MIN;
	uint64_t x407 = 176925037LLU;
	volatile int64_t x408 = INT64_MIN;
	static volatile uint64_t t88 = 4624LLU;

	t88 = ((x405%x406)*(x407+x408));

	if (t88 != 18446744073355701542LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x409 = -1LL;
	static uint8_t x410 = UINT8_MAX;
	volatile uint16_t x411 = 98U;
	int64_t x412 = -1LL;
	static volatile int64_t t89 = 136927LL;

	t89 = ((x409%x410)*(x411+x412));

	if (t89 != -97LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x426 = -1;
	int8_t x427 = 10;
	volatile int32_t t90 = -658117645;

	t90 = ((x425%x426)*(x427+x428));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x429 = INT64_MAX;
	int8_t x430 = INT8_MIN;
	uint32_t x431 = 2U;
	static int32_t x432 = -1;
	static volatile int64_t t91 = -4887532LL;

	t91 = ((x429%x430)*(x431+x432));

	if (t91 != 127LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x434 = 1120766144U;
	int8_t x435 = -1;
	int16_t x436 = INT16_MIN;
	static int64_t t92 = 1259095081829LL;

	t92 = ((x433%x434)*(x435+x436));

	if (t92 != 10998620125614LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x441 = 45018833092530LLU;
	uint64_t x443 = UINT64_MAX;
	uint16_t x444 = 6U;

	t93 = ((x441%x442)*(x443+x444));

	if (t93 != 54510LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x445 = -1;
	int16_t x446 = INT16_MIN;
	int64_t x448 = INT64_MAX;
	volatile int64_t t94 = -15864646LL;

	t94 = ((x445%x446)*(x447+x448));

	if (t94 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x453 = -1;
	int64_t x454 = INT64_MAX;
	int8_t x455 = INT8_MIN;
	int8_t x456 = -2;
	int64_t t95 = 729186351236879LL;

	t95 = ((x453%x454)*(x455+x456));

	if (t95 != 130LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x461 = -1;
	volatile uint64_t x462 = UINT64_MAX;
	int64_t x463 = INT64_MIN;
	uint8_t x464 = 1U;
	uint64_t t96 = 52724203256058754LLU;

	t96 = ((x461%x462)*(x463+x464));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x465 = 784889;
	volatile int64_t x466 = -775LL;
	int16_t x467 = INT16_MIN;
	int8_t x468 = INT8_MIN;
	int64_t t97 = -6LL;

	t97 = ((x465%x466)*(x467+x468));

	if (t97 != -19375744LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x469 = INT32_MAX;
	uint16_t x470 = 13550U;
	int32_t x471 = -10;
	int16_t x472 = INT16_MIN;
	int32_t t98 = 151789362;

	t98 = ((x469%x470)*(x471+x472));

	if (t98 != -389959866) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x473 = 4U;
	int32_t x474 = INT32_MIN;
	int16_t x475 = -1;
	int16_t x476 = INT16_MIN;
	volatile int32_t t99 = -45693;

	t99 = ((x473%x474)*(x475+x476));

	if (t99 != -131076) { NG(); } else { ; }
	
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

