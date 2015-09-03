#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 246U;
int32_t x16 = -1;
int8_t x17 = 6;
uint8_t x21 = UINT8_MAX;
int32_t x24 = INT32_MIN;
static int32_t t4 = 32839;
static uint8_t x27 = 10U;
static int8_t x31 = 3;
static int8_t x38 = INT8_MIN;
static uint64_t x41 = UINT64_MAX;
int32_t x42 = INT32_MAX;
int32_t x44 = INT32_MIN;
static int8_t x45 = INT8_MIN;
uint8_t x52 = 0U;
uint64_t x60 = UINT64_MAX;
int64_t t14 = -72200950013515LL;
int16_t x65 = 199;
int16_t x66 = INT16_MIN;
volatile int16_t x67 = INT16_MAX;
int8_t x69 = INT8_MIN;
static volatile int64_t x70 = 4687928110455LL;
volatile int64_t t16 = 6377648LL;
int64_t x75 = -121LL;
int32_t x79 = INT32_MIN;
int64_t x82 = 13102LL;
int64_t x84 = -1LL;
int16_t x86 = -1;
uint16_t x88 = 12U;
volatile uint16_t x97 = 33U;
int8_t x99 = INT8_MAX;
uint8_t x100 = 10U;
int16_t x105 = -5027;
int8_t x106 = -1;
int16_t x118 = -1;
static int64_t x120 = -5739LL;
int16_t x122 = 1188;
uint64_t x124 = 9085185082222699623LLU;
static uint64_t x125 = 21032091854LLU;
int64_t x131 = -1LL;
int16_t x139 = 18;
static volatile uint32_t t31 = 172160U;
uint16_t x154 = UINT16_MAX;
static volatile int8_t x158 = INT8_MIN;
volatile int32_t x159 = INT32_MIN;
static volatile uint64_t t34 = 189342476800652354LLU;
static int32_t x171 = -1;
int16_t x178 = -250;
int64_t x195 = -1LL;
uint8_t x201 = UINT8_MAX;
int16_t x215 = INT16_MIN;
static int32_t t46 = -10;
volatile int64_t x219 = INT64_MIN;
int32_t t48 = -6805820;
int32_t x227 = 357267;
uint16_t x230 = UINT16_MAX;
static volatile uint64_t x236 = 4973LLU;
uint16_t x252 = 23034U;
int8_t x256 = INT8_MIN;
uint64_t t56 = 1399567LLU;
static uint32_t t59 = 431098U;
volatile int8_t x287 = INT8_MIN;
int16_t x288 = 6;
int32_t x291 = INT32_MIN;
int64_t x292 = -1LL;
int8_t x297 = -1;
int16_t x299 = INT16_MAX;
static int16_t x303 = 353;
uint8_t x313 = 1U;
uint32_t x314 = 0U;
volatile uint32_t x315 = 1680446530U;
uint32_t t69 = 433U;
volatile int32_t x320 = INT32_MIN;
int16_t x322 = INT16_MAX;
int16_t x334 = -154;
uint16_t x335 = 1305U;
volatile uint64_t t75 = 1854355980241663395LLU;
int16_t x342 = -5;
volatile int8_t x345 = -46;
static uint16_t x347 = UINT16_MAX;
int64_t x349 = INT64_MIN;
static int16_t x352 = -4728;
volatile int64_t t78 = 10609142LL;
int32_t x356 = INT32_MIN;
int32_t x363 = 8;
int8_t x367 = 0;
int32_t x371 = -1;
static int8_t x373 = INT8_MIN;
volatile int64_t t85 = -1033LL;
uint8_t x382 = 3U;
static int32_t x385 = INT32_MIN;
uint16_t x393 = UINT16_MAX;
int32_t x395 = INT32_MIN;
uint16_t x398 = 22U;
int32_t x399 = -1;
int64_t x400 = 225198LL;
int8_t x408 = INT8_MIN;
volatile int16_t x415 = -80;
uint8_t x416 = 126U;
int32_t t94 = -22586186;
int64_t x421 = INT64_MIN;
int8_t x423 = -1;
int16_t x424 = INT16_MIN;
int32_t x430 = INT32_MIN;
volatile int32_t x437 = INT32_MIN;
volatile int8_t x438 = INT8_MIN;
volatile int64_t t99 = 192334381719942815LL;


void f0(void) {
	uint16_t x1 = 3542U;
	static volatile uint32_t x3 = 138773822U;
	int32_t x4 = -61017;
	static uint32_t t0 = 127U;

	t0 = ((x1-x2)^(x3^x4));

	if (t0 != 4156201081U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 3;
	uint16_t x6 = UINT16_MAX;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = 33816LLU;
	volatile uint64_t t1 = 143LLU;

	t1 = ((x5-x6)^(x7^x8));

	if (t1 != 1052LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = -1;
	int32_t x14 = -1;
	int8_t x15 = 31;
	int32_t t2 = -1;

	t2 = ((x13-x14)^(x15^x16));

	if (t2 != -32) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x18 = 20175U;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;
	int32_t t3 = 2671497;

	t3 = ((x17-x18)^(x19^x20));

	if (t3 != -2147463497) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = 5985;
	int32_t x23 = -77491955;

	t4 = ((x21-x22)^(x23^x24));

	if (t4 != -2069989229) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	int64_t x26 = 7522948LL;
	int64_t x28 = INT64_MAX;
	volatile int64_t t5 = 4LL;

	t5 = ((x25-x26)^(x27^x28));

	if (t5 != 7522958LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 40LLU;
	int64_t x30 = INT64_MIN;
	int64_t x32 = -1LL;
	uint64_t t6 = 664155645398019LLU;

	t6 = ((x29-x30)^(x31^x32));

	if (t6 != 9223372036854775764LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	int8_t x34 = -10;
	volatile uint32_t x35 = 24598453U;
	static volatile int32_t x36 = INT32_MAX;
	uint32_t t7 = 14961422U;

	t7 = ((x33-x34)^(x35^x36));

	if (t7 != 2122885443U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x37 = 5LLU;
	int16_t x39 = INT16_MAX;
	uint64_t x40 = 53005114923LLU;
	uint64_t t8 = 363946128LLU;

	t8 = ((x37-x38)^(x39^x40));

	if (t8 != 53005099345LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x43 = -1;
	uint64_t t9 = UINT64_MAX;

	t9 = ((x41-x42)^(x43^x44));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x46 = INT64_MIN;
	uint64_t x47 = 108625LLU;
	int16_t x48 = -1;
	volatile uint64_t t10 = 10LLU;

	t10 = ((x45-x46)^(x47^x48));

	if (t10 != 9223372036854884398LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 850228U;
	int64_t x50 = -1LL;
	volatile int32_t x51 = 3190771;
	int64_t t11 = -152759311902933LL;

	t11 = ((x49-x50)^(x51^x52));

	if (t11 != 3954374LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 10742LLU;
	int16_t x54 = -53;
	volatile int32_t x55 = INT32_MIN;
	int8_t x56 = -1;
	uint64_t t12 = 32681100755823104LLU;

	t12 = ((x53-x54)^(x55^x56));

	if (t12 != 2147472852LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 296U;
	volatile int32_t x58 = -446;
	int64_t x59 = -1LL;
	uint64_t t13 = 0LLU;

	t13 = ((x57-x58)^(x59^x60));

	if (t13 != 742LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x61 = UINT8_MAX;
	int64_t x62 = 4938LL;
	int16_t x63 = -1;
	uint16_t x64 = 150U;

	t14 = ((x61-x62)^(x63^x64));

	if (t14 != 4828LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x68 = -1;
	int32_t t15 = 1;

	t15 = ((x65-x66)^(x67^x68));

	if (t15 != -65337) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x71 = 0U;
	int8_t x72 = -1;

	t16 = ((x69-x70)^(x71^x72));

	if (t16 != 4687928110582LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	int64_t x76 = 958385671LL;
	int64_t t17 = -1LL;

	t17 = ((x73-x74)^(x75^x76));

	if (t17 != 958385792LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 1360296609U;
	int32_t x78 = 322181793;
	int64_t x80 = INT64_MAX;
	static int64_t t18 = 99661211395LL;

	t18 = ((x77-x78)^(x79^x80));

	if (t18 != -9223372035745406977LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x81 = 1;
	uint64_t x83 = 8478712LLU;
	volatile uint64_t t19 = 52LLU;

	t19 = ((x81-x82)^(x83^x84));

	if (t19 != 8482004LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = UINT16_MAX;
	uint64_t x87 = 0LLU;
	static uint64_t t20 = 202LLU;

	t20 = ((x85-x86)^(x87^x88));

	if (t20 != 65548LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MAX;
	volatile int32_t x94 = 179;
	static int8_t x95 = -1;
	int8_t x96 = INT8_MIN;
	volatile int32_t t21 = 663627;

	t21 = ((x93-x94)^(x95^x96));

	if (t21 != 32563) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x98 = 7;
	int32_t t22 = 506026515;

	t22 = ((x97-x98)^(x99^x100));

	if (t22 != 111) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	static int16_t x102 = -1;
	int32_t x103 = -1;
	static uint8_t x104 = UINT8_MAX;
	volatile int32_t t23 = -5;

	t23 = ((x101-x102)^(x103^x104));

	if (t23 != 2147483393) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x107 = 23944U;
	static uint16_t x108 = UINT16_MAX;
	volatile uint32_t t24 = 341U;

	t24 = ((x105-x106)^(x107^x108));

	if (t24 != 4294921769U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MAX;
	static int64_t x119 = 10931675881701012LL;
	static int64_t t25 = 25081LL;

	t25 = ((x117-x118)^(x119^x120));

	if (t25 != -10931675881728255LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 82U;
	int16_t x123 = 527;
	uint64_t t26 = 211074149514185652LLU;

	t26 = ((x121-x122)^(x123^x124));

	if (t26 != 9361558991486852550LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x126 = -24563780982141LL;
	int8_t x127 = INT8_MAX;
	uint32_t x128 = 8U;
	volatile uint64_t t27 = 1681326LLU;

	t27 = ((x125-x126)^(x127^x128));

	if (t27 != 24584813073980LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MAX;
	static volatile int16_t x130 = -1;
	int16_t x132 = -2431;
	volatile int64_t t28 = 76432418411339301LL;

	t28 = ((x129-x130)^(x131^x132));

	if (t28 != 2558LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = -63;
	uint32_t x134 = 67612U;
	uint32_t x135 = 25999U;
	uint16_t x136 = UINT16_MAX;
	volatile uint32_t t29 = 17883U;

	t29 = ((x133-x134)^(x135^x136));

	if (t29 != 4294864341U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x137 = UINT32_MAX;
	static uint32_t x138 = 15427983U;
	uint16_t x140 = 5416U;
	volatile uint32_t t30 = 38U;

	t30 = ((x137-x138)^(x139^x140));

	if (t30 != 4279534410U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 17894U;
	volatile int32_t x142 = -9259;
	int16_t x143 = INT16_MIN;
	static volatile uint16_t x144 = 6582U;

	t31 = ((x141-x142)^(x143^x144));

	if (t31 != 4294964135U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x149 = 21U;
	static uint64_t x150 = 58LLU;
	uint16_t x151 = UINT16_MAX;
	static uint8_t x152 = 2U;
	volatile uint64_t t32 = 5599513041LLU;

	t32 = ((x149-x150)^(x151^x152));

	if (t32 != 18446744073709486118LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = UINT16_MAX;
	static volatile int8_t x155 = -1;
	volatile uint8_t x156 = 24U;
	volatile int32_t t33 = 0;

	t33 = ((x153-x154)^(x155^x156));

	if (t33 != -25) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x157 = UINT64_MAX;
	volatile int16_t x160 = INT16_MAX;

	t34 = ((x157-x158)^(x159^x160));

	if (t34 != 18446744071562100608LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = -1;
	volatile int8_t x166 = -1;
	int16_t x167 = INT16_MIN;
	uint8_t x168 = 2U;
	volatile int32_t t35 = 3;

	t35 = ((x165-x166)^(x167^x168));

	if (t35 != -32766) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x169 = UINT32_MAX;
	volatile int8_t x170 = -1;
	int32_t x172 = -1;
	volatile uint32_t t36 = 134973770U;

	t36 = ((x169-x170)^(x171^x172));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = UINT32_MAX;
	static int16_t x174 = 11687;
	int8_t x175 = INT8_MIN;
	int32_t x176 = -1;
	uint32_t t37 = 29U;

	t37 = ((x173-x174)^(x175^x176));

	if (t37 != 4294955559U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = 1;
	int16_t x179 = -1;
	int8_t x180 = INT8_MIN;
	int32_t t38 = 10;

	t38 = ((x177-x178)^(x179^x180));

	if (t38 != 132) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = -120;
	static int32_t x182 = 1;
	int16_t x183 = INT16_MIN;
	static int32_t x184 = INT32_MIN;
	static volatile int32_t t39 = 1;

	t39 = ((x181-x182)^(x183^x184));

	if (t39 != -2147451001) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x189 = 15157901587LL;
	int16_t x190 = -1;
	static uint64_t x191 = UINT64_MAX;
	static int32_t x192 = 463084;
	uint64_t t40 = 13619853626305392LLU;

	t40 = ((x189-x190)^(x191^x192));

	if (t40 != 18446744058551588359LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x193 = INT32_MIN;
	static int64_t x194 = 34122443389940873LL;
	int8_t x196 = 21;
	volatile int64_t t41 = 27930LL;

	t41 = ((x193-x194)^(x195^x196));

	if (t41 != 34122445537424541LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = 1;
	uint16_t x198 = UINT16_MAX;
	volatile int16_t x199 = -1;
	uint8_t x200 = UINT8_MAX;
	int32_t t42 = -26648627;

	t42 = ((x197-x198)^(x199^x200));

	if (t42 != 65282) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x202 = 1038U;
	uint16_t x203 = 3438U;
	int8_t x204 = INT8_MAX;
	volatile uint32_t t43 = 51792928U;

	t43 = ((x201-x202)^(x203^x204));

	if (t43 != 4294963680U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = -1;
	int32_t x207 = INT32_MIN;
	int32_t x208 = INT32_MIN;
	volatile int32_t t44 = -32372976;

	t44 = ((x205-x206)^(x207^x208));

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x209 = 255U;
	int8_t x210 = -1;
	static volatile int32_t x211 = INT32_MAX;
	static uint16_t x212 = 40U;
	int32_t t45 = 10;

	t45 = ((x209-x210)^(x211^x212));

	if (t45 != 2147483351) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x213 = UINT8_MAX;
	uint16_t x214 = UINT16_MAX;
	static volatile int32_t x216 = INT32_MIN;

	t46 = ((x213-x214)^(x215^x216));

	if (t46 != -2147450624) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = INT64_MAX;
	static int32_t x218 = INT32_MAX;
	volatile int64_t x220 = INT64_MIN;
	volatile int64_t t47 = 906450494529401LL;

	t47 = ((x217-x218)^(x219^x220));

	if (t47 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = INT16_MAX;
	volatile int16_t x222 = 90;
	int8_t x223 = INT8_MIN;
	int16_t x224 = 0;

	t48 = ((x221-x222)^(x223^x224));

	if (t48 != -32731) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = INT8_MIN;
	static int16_t x226 = -1932;
	int16_t x228 = -1454;
	volatile int32_t t49 = -1671;

	t49 = ((x225-x226)^(x227^x228));

	if (t49 != -356659) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = INT16_MIN;
	uint16_t x231 = 1U;
	int16_t x232 = INT16_MAX;
	volatile int32_t t50 = -87715;

	t50 = ((x229-x230)^(x231^x232));

	if (t50 != -65537) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x233 = UINT64_MAX;
	volatile int32_t x234 = -1;
	uint64_t x235 = 323091282547LLU;
	volatile uint64_t t51 = 1970725LLU;

	t51 = ((x233-x234)^(x235^x236));

	if (t51 != 323091278110LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = -1635LL;
	static volatile int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MIN;
	uint32_t x240 = 473157U;
	volatile int64_t t52 = -2304499887941LL;

	t52 = ((x237-x238)^(x239^x240));

	if (t52 != -9223372034707766824LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = -1;
	int8_t x246 = -2;
	int8_t x247 = INT8_MIN;
	uint32_t x248 = 8473948U;
	uint32_t t53 = 198734419U;

	t53 = ((x245-x246)^(x247^x248));

	if (t53 != 4286493405U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x249 = UINT64_MAX;
	int64_t x250 = 1658796293644800525LL;
	int32_t x251 = INT32_MIN;
	uint64_t t54 = 48347LLU;

	t54 = ((x249-x250)^(x251^x252));

	if (t54 != 1658796293730956296LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x253 = 906U;
	int64_t x254 = 8803741259658LL;
	int16_t x255 = -1;
	volatile int64_t t55 = 1230887075814LL;

	t55 = ((x253-x254)^(x255^x256));

	if (t55 != -8803741258625LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = -6;
	static int8_t x258 = 1;
	volatile int16_t x259 = -1;
	volatile uint64_t x260 = UINT64_MAX;

	t56 = ((x257-x258)^(x259^x260));

	if (t56 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x265 = -1LL;
	int64_t x266 = -1LL;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MAX;
	int64_t t57 = 1666817LL;

	t57 = ((x265-x266)^(x267^x268));

	if (t57 != -2147483521LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x269 = UINT16_MAX;
	uint64_t x270 = 0LLU;
	volatile int16_t x271 = INT16_MAX;
	static int16_t x272 = -19;
	volatile uint64_t t58 = 28LLU;

	t58 = ((x269-x270)^(x271^x272));

	if (t58 != 18446744073709518829LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x273 = INT16_MIN;
	volatile int32_t x274 = -1;
	int16_t x275 = INT16_MAX;
	uint32_t x276 = UINT32_MAX;

	t59 = ((x273-x274)^(x275^x276));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x277 = 9U;
	int8_t x278 = INT8_MAX;
	int8_t x279 = 2;
	uint32_t x280 = UINT32_MAX;
	static uint32_t t60 = 1561U;

	t60 = ((x277-x278)^(x279^x280));

	if (t60 != 119U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x281 = -1LL;
	int16_t x282 = INT16_MIN;
	int32_t x283 = INT32_MIN;
	volatile int16_t x284 = -1;
	volatile int64_t t61 = 3665898104036675LL;

	t61 = ((x281-x282)^(x283^x284));

	if (t61 != 2147450880LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = INT16_MAX;
	int8_t x286 = INT8_MAX;
	static volatile int32_t t62 = 308;

	t62 = ((x285-x286)^(x287^x288));

	if (t62 != -32762) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x289 = 501079971688388LLU;
	int8_t x290 = -5;
	uint64_t t63 = 246547257981714LLU;

	t63 = ((x289-x290)^(x291^x292));

	if (t63 != 501079779872822LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x293 = INT16_MAX;
	int8_t x294 = INT8_MIN;
	uint32_t x295 = 47740U;
	volatile int8_t x296 = INT8_MAX;
	volatile uint32_t t64 = 10U;

	t64 = ((x293-x294)^(x295^x296));

	if (t64 != 14972U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x298 = UINT32_MAX;
	uint16_t x300 = 583U;
	uint32_t t65 = 206U;

	t65 = ((x297-x298)^(x299^x300));

	if (t65 != 32184U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x301 = UINT64_MAX;
	int64_t x302 = -1LL;
	int64_t x304 = INT64_MIN;
	volatile uint64_t t66 = 406436336373350931LLU;

	t66 = ((x301-x302)^(x303^x304));

	if (t66 != 9223372036854776161LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = 8116;
	uint16_t x306 = 1U;
	static int32_t x307 = 3145;
	int8_t x308 = INT8_MIN;
	volatile int32_t t67 = 35513942;

	t67 = ((x305-x306)^(x307^x308));

	if (t67 != -4998) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = INT8_MIN;
	uint32_t x310 = UINT32_MAX;
	int8_t x311 = INT8_MIN;
	static int32_t x312 = -2;
	uint32_t t68 = UINT32_MAX;

	t68 = ((x309-x310)^(x311^x312));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x316 = 0U;

	t69 = ((x313-x314)^(x315^x316));

	if (t69 != 1680446531U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x317 = UINT64_MAX;
	int64_t x318 = -1LL;
	uint32_t x319 = 150U;
	uint64_t t70 = 12LLU;

	t70 = ((x317-x318)^(x319^x320));

	if (t70 != 2147483798LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x321 = 3019;
	static volatile int16_t x323 = -1;
	int16_t x324 = INT16_MIN;
	volatile int32_t t71 = 4030;

	t71 = ((x321-x322)^(x323^x324));

	if (t71 != -3021) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = 14554202719940LL;
	int64_t x327 = 17938307993725LL;
	uint64_t x328 = UINT64_MAX;
	uint64_t t72 = 1390277689589626LLU;

	t72 = ((x325-x326)^(x327^x328));

	if (t72 != 32357149873854LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = INT16_MIN;
	uint64_t x330 = 1066787786803925363LLU;
	uint16_t x331 = UINT16_MAX;
	int16_t x332 = -605;
	static volatile uint64_t t73 = 347021542LLU;

	t73 = ((x329-x330)^(x331^x332));

	if (t73 != 1066787786803915985LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x333 = UINT16_MAX;
	volatile int32_t x336 = 9;
	int32_t t74 = 0;

	t74 = ((x333-x334)^(x335^x336));

	if (t74 != 66953) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x337 = 1676361LLU;
	uint32_t x338 = 42503U;
	static int64_t x339 = INT64_MAX;
	uint32_t x340 = 3070126U;

	t75 = ((x337-x338)^(x339^x340));

	if (t75 != 9223372036851222803LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x341 = 32310U;
	static int8_t x343 = 21;
	int64_t x344 = -1LL;
	static int64_t t76 = -165428571001265LL;

	t76 = ((x341-x342)^(x343^x344));

	if (t76 != -32303LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x346 = -1;
	int8_t x348 = -60;
	volatile int32_t t77 = -39513471;

	t77 = ((x345-x346)^(x347^x348));

	if (t77 != 65512) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MIN;

	t78 = ((x349-x350)^(x351^x352));

	if (t78 != 2147478920LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = INT8_MIN;
	uint8_t x354 = 0U;
	int64_t x355 = INT64_MAX;
	volatile int64_t t79 = -754284LL;

	t79 = ((x353-x354)^(x355^x356));

	if (t79 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x357 = 7LLU;
	uint16_t x358 = 92U;
	volatile int64_t x359 = INT64_MAX;
	volatile int64_t x360 = INT64_MAX;
	volatile uint64_t t80 = 146643LLU;

	t80 = ((x357-x358)^(x359^x360));

	if (t80 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x361 = 1704U;
	volatile int16_t x362 = -123;
	int8_t x364 = -1;
	uint32_t t81 = 5982U;

	t81 = ((x361-x362)^(x363^x364));

	if (t81 != 4294965460U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x365 = -60637485671LL;
	int8_t x366 = INT8_MAX;
	uint32_t x368 = 3717552U;
	volatile int64_t t82 = -1310361557475LL;

	t82 = ((x365-x366)^(x367^x368));

	if (t82 != -60641125206LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x369 = 11664750947299420LLU;
	volatile int64_t x370 = -131154551LL;
	volatile int8_t x372 = -10;
	uint64_t t83 = 26LLU;

	t83 = ((x369-x370)^(x371^x372));

	if (t83 != 11664751078453978LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x374 = 2660963U;
	uint16_t x375 = 51U;
	uint16_t x376 = 4588U;
	uint32_t t84 = 20U;

	t84 = ((x373-x374)^(x375^x376));

	if (t84 != 4292310210U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = -1LL;
	uint8_t x379 = UINT8_MAX;
	int16_t x380 = INT16_MIN;

	t85 = ((x377-x378)^(x379^x380));

	if (t85 != 32638LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x381 = INT16_MIN;
	int32_t x383 = -1;
	uint32_t x384 = 1685296902U;
	volatile uint32_t t86 = 10U;

	t86 = ((x381-x382)^(x383^x384));

	if (t86 != 1685264132U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x386 = UINT64_MAX;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = INT8_MIN;
	uint64_t t87 = 2146061996978621991LLU;

	t87 = ((x385-x386)^(x387^x388));

	if (t87 != 18446744071562068094LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x389 = -9;
	uint16_t x390 = 86U;
	int32_t x391 = INT32_MIN;
	volatile int64_t x392 = -1LL;
	static int64_t t88 = 454071LL;

	t88 = ((x389-x390)^(x391^x392));

	if (t88 != -2147483554LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x394 = INT64_MAX;
	int8_t x396 = INT8_MAX;
	static int64_t t89 = 665102053LL;

	t89 = ((x393-x394)^(x395^x396));

	if (t89 != 9223372034707357823LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x397 = -14156476;
	int64_t t90 = -998073733338LL;

	t90 = ((x397-x398)^(x399^x400));

	if (t90 != 14380415LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = 51096038LL;
	uint32_t x402 = 503201432U;
	int8_t x403 = -1;
	static int16_t x404 = 273;
	int64_t t91 = -3750788607LL;

	t91 = ((x401-x402)^(x403^x404));

	if (t91 != 452105632LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x405 = INT16_MAX;
	uint8_t x406 = UINT8_MAX;
	uint8_t x407 = 116U;
	static volatile int32_t t92 = 321412926;

	t92 = ((x405-x406)^(x407^x408));

	if (t92 != -32524) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = -1;
	static uint64_t x414 = 1723021LLU;
	uint64_t t93 = 573384903LLU;

	t93 = ((x413-x414)^(x415^x416));

	if (t93 != 1723068LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x417 = INT32_MIN;
	int8_t x418 = -1;
	uint16_t x419 = 2196U;
	int16_t x420 = -1;

	t94 = ((x417-x418)^(x419^x420));

	if (t94 != 2147481450) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x422 = INT64_MIN;
	static volatile int64_t t95 = 40157054LL;

	t95 = ((x421-x422)^(x423^x424));

	if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x425 = UINT16_MAX;
	uint8_t x426 = UINT8_MAX;
	static int8_t x427 = INT8_MIN;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t96 = -7;

	t96 = ((x425-x426)^(x427^x428));

	if (t96 != 32896) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x429 = 1U;
	int16_t x431 = INT16_MIN;
	int8_t x432 = INT8_MAX;
	static volatile uint32_t t97 = 298988U;

	t97 = ((x429-x430)^(x431^x432));

	if (t97 != 2147451006U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MIN;
	volatile uint16_t x434 = UINT16_MAX;
	int32_t x435 = INT32_MIN;
	uint8_t x436 = UINT8_MAX;
	static volatile int32_t t98 = -1116970;

	t98 = ((x433-x434)^(x435^x436));

	if (t98 != 2147417982) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x439 = 1;
	int64_t x440 = INT64_MIN;

	t99 = ((x437-x438)^(x439^x440));

	if (t99 != 9223372034707292289LL) { NG(); } else { ; }
	
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

