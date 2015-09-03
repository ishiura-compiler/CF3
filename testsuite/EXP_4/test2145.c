#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x5 = 77094188936771882LL;
uint16_t x8 = UINT16_MAX;
int32_t x26 = INT32_MAX;
int64_t t7 = -60075509117373252LL;
volatile int64_t x34 = -7138543407LL;
int8_t x41 = INT8_MIN;
int32_t x45 = 30530;
volatile int32_t x60 = 8835829;
static int32_t t14 = -119;
volatile int32_t t16 = 19397942;
int16_t x74 = -1;
volatile int32_t x77 = 20;
volatile int64_t x79 = 12935289LL;
uint32_t x81 = 8724671U;
static volatile uint32_t t20 = 10096U;
int8_t x91 = INT8_MIN;
int16_t x98 = 37;
volatile int16_t x99 = INT16_MIN;
int64_t x100 = -1LL;
static uint16_t x101 = 831U;
volatile int64_t x103 = INT64_MIN;
static int32_t x105 = 209467;
static uint32_t x106 = 39U;
volatile int32_t t26 = -7218;
static uint64_t x109 = 1599623917708761LLU;
int32_t x121 = INT32_MIN;
int16_t x122 = INT16_MIN;
int64_t x123 = -83840648484LL;
uint32_t x130 = 440147546U;
int32_t x134 = INT32_MIN;
static int64_t x135 = -1LL;
volatile int32_t t33 = 9;
int8_t x144 = INT8_MIN;
static int16_t x145 = 38;
uint16_t x149 = UINT16_MAX;
int8_t x156 = INT8_MAX;
volatile int32_t t40 = -255761;
volatile uint64_t x168 = UINT64_MAX;
static int32_t x170 = INT32_MAX;
volatile uint16_t x171 = 26U;
volatile int32_t t42 = -835866997;
static int8_t x173 = 48;
uint16_t x182 = 4516U;
int8_t x184 = -12;
volatile uint16_t x189 = 15844U;
int32_t x190 = INT32_MAX;
int8_t x197 = -1;
int32_t x201 = INT32_MIN;
int64_t x214 = INT64_MIN;
int32_t x222 = INT32_MIN;
volatile uint64_t t55 = 201174LLU;
static uint8_t x232 = UINT8_MAX;
static int64_t t57 = 3700LL;
int8_t x246 = 1;
volatile int64_t t61 = 9584870LL;
int16_t x249 = INT16_MAX;
int32_t t62 = 914;
uint16_t x255 = UINT16_MAX;
uint8_t x265 = 0U;
volatile int16_t x266 = INT16_MIN;
volatile int32_t x275 = INT32_MAX;
static uint64_t x277 = 363798LLU;
uint64_t t69 = 1249405873633645LLU;
volatile int32_t x283 = INT32_MAX;
static volatile int64_t t70 = 68LL;
int64_t x287 = INT64_MIN;
uint64_t x289 = 30LLU;
volatile int16_t x292 = INT16_MIN;
volatile int16_t x295 = INT16_MIN;
volatile int64_t x296 = -1LL;
static int32_t x299 = INT32_MAX;
volatile int32_t t74 = -610418;
int8_t x304 = 12;
int16_t x306 = -1;
static int16_t x307 = INT16_MIN;
int32_t x308 = -1;
static int32_t t77 = -3;
static volatile uint8_t x318 = UINT8_MAX;
int8_t x321 = INT8_MAX;
int32_t x325 = 7564;
uint16_t x328 = 15U;
volatile uint64_t x330 = 95347558301943LLU;
static uint8_t x332 = 1U;
static uint32_t x339 = UINT32_MAX;
volatile uint64_t x345 = UINT64_MAX;
int16_t x347 = INT16_MIN;
int8_t x352 = -1;
volatile int64_t x358 = INT64_MAX;
int32_t x367 = INT32_MAX;
int16_t x369 = INT16_MIN;
uint64_t x370 = UINT64_MAX;
int32_t x374 = -14519;
static volatile int32_t t94 = -123776;
int32_t x382 = INT32_MIN;
volatile int64_t x387 = INT64_MAX;
int8_t x390 = INT8_MIN;
int64_t x392 = -1LL;
int32_t t97 = -13554536;
volatile int32_t t98 = 0;
uint64_t x397 = 2424392LLU;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x2 = -463;
	volatile int8_t x3 = 2;
	int32_t x4 = -1;
	int32_t t0 = -195;

	t0 = (x1^(x2<(x3^x4)));

	if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	int64_t x7 = -1LL;
	volatile int64_t t1 = -254LL;

	t1 = (x5^(x6<(x7^x8)));

	if (t1 != 77094188936771882LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	uint8_t x10 = 0U;
	int64_t x11 = -1LL;
	static uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = 5586773;

	t2 = (x9^(x10<(x11^x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static int16_t x14 = INT16_MIN;
	uint64_t x15 = 22427241127082LLU;
	static int64_t x16 = -3650178386558012LL;
	static int64_t t3 = -471572036386023229LL;

	t3 = (x13^(x14<(x15^x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 0LL;
	volatile int32_t x18 = 1;
	int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MAX;
	int64_t t4 = 4950069253787234LL;

	t4 = (x17^(x18<(x19^x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int8_t x22 = -7;
	uint32_t x23 = UINT32_MAX;
	uint64_t x24 = UINT64_MAX;
	int32_t t5 = 597752605;

	t5 = (x21^(x22<(x23^x24)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int32_t x27 = 1073;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x25^(x26<(x27^x28)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 199541LL;
	int16_t x30 = INT16_MIN;
	uint8_t x31 = UINT8_MAX;
	int8_t x32 = INT8_MAX;

	t7 = (x29^(x30<(x31^x32)));

	if (t7 != 199540LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int8_t x35 = 11;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 3965;

	t8 = (x33^(x34<(x35^x36)));

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int16_t x38 = -1;
	static uint64_t x39 = UINT64_MAX;
	volatile int32_t x40 = -1;
	volatile int64_t t9 = INT64_MAX;

	t9 = (x37^(x38<(x39^x40)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x42 = 178;
	volatile int16_t x43 = INT16_MIN;
	static volatile int8_t x44 = INT8_MIN;
	static int32_t t10 = 0;

	t10 = (x41^(x42<(x43^x44)));

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = 20;
	int8_t x47 = -28;
	int64_t x48 = -1LL;
	volatile int32_t t11 = 94;

	t11 = (x45^(x46<(x47^x48)));

	if (t11 != 30531) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	static int16_t x50 = 25;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 2000482;

	t12 = (x49^(x50<(x51^x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	int32_t x54 = 2665163;
	static volatile int64_t x55 = -1LL;
	uint8_t x56 = 77U;
	int64_t t13 = INT64_MIN;

	t13 = (x53^(x54<(x55^x56)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = INT64_MIN;

	t14 = (x57^(x58<(x59^x60)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = -1;
	static int64_t x63 = INT64_MIN;
	int8_t x64 = -7;
	static int32_t t15 = -43733548;

	t15 = (x61^(x62<(x63^x64)));

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 2748;
	uint8_t x66 = 7U;
	uint8_t x67 = UINT8_MAX;
	int16_t x68 = -1;

	t16 = (x65^(x66<(x67^x68)));

	if (t16 != 2748) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MAX;
	uint64_t x70 = UINT64_MAX;
	uint8_t x71 = 68U;
	static int32_t x72 = INT32_MIN;
	int32_t t17 = 1925117;

	t17 = (x69^(x70<(x71^x72)));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 5710;
	static uint16_t x75 = 1855U;
	volatile int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 1;

	t18 = (x73^(x74<(x75^x76)));

	if (t18 != 5711) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x78 = -317023789;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = 386262560;

	t19 = (x77^(x78<(x79^x80)));

	if (t19 != 21) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 1U;
	uint8_t x83 = 0U;
	static int8_t x84 = INT8_MIN;

	t20 = (x81^(x82<(x83^x84)));

	if (t20 != 8724671U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 1;
	int64_t x86 = INT64_MAX;
	uint32_t x87 = UINT32_MAX;
	volatile int16_t x88 = INT16_MAX;
	volatile int32_t t21 = -30;

	t21 = (x85^(x86<(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 91068717997LLU;
	static int64_t x90 = INT64_MIN;
	int64_t x92 = -1LL;
	volatile uint64_t t22 = 1063550398828LLU;

	t22 = (x89^(x90<(x91^x92)));

	if (t22 != 91068717996LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static uint16_t x94 = 5050U;
	int8_t x95 = -7;
	static int64_t x96 = INT64_MIN;
	volatile int32_t t23 = 111;

	t23 = (x93^(x94<(x95^x96)));

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 57LLU;
	volatile uint64_t t24 = 430303271504053816LLU;

	t24 = (x97^(x98<(x99^x100)));

	if (t24 != 56LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = 4866U;
	static volatile int32_t x104 = -57647573;
	static int32_t t25 = 0;

	t25 = (x101^(x102<(x103^x104)));

	if (t25 != 830) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x107 = INT8_MAX;
	uint64_t x108 = 6795314748087828427LLU;

	t26 = (x105^(x106<(x107^x108)));

	if (t26 != 209466) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x110 = -1;
	int32_t x111 = INT32_MIN;
	int32_t x112 = -1562;
	uint64_t t27 = 6019LLU;

	t27 = (x109^(x110<(x111^x112)));

	if (t27 != 1599623917708760LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	int64_t x114 = -1LL;
	int16_t x115 = INT16_MIN;
	volatile int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 944;

	t28 = (x113^(x114<(x115^x116)));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -659LL;
	uint16_t x118 = 8U;
	int64_t x119 = INT64_MIN;
	int8_t x120 = -6;
	static volatile int64_t t29 = -30443174929661448LL;

	t29 = (x117^(x118<(x119^x120)));

	if (t29 != -660LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x124 = INT8_MIN;
	static int32_t t30 = 18444563;

	t30 = (x121^(x122<(x123^x124)));

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 38LL;
	int8_t x126 = INT8_MAX;
	static int32_t x127 = INT32_MAX;
	static volatile uint16_t x128 = UINT16_MAX;
	static int64_t t31 = 375964690LL;

	t31 = (x125^(x126<(x127^x128)));

	if (t31 != 39LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 16310LLU;
	uint16_t x131 = 5955U;
	int8_t x132 = -1;
	static volatile uint64_t t32 = 214894323LLU;

	t32 = (x129^(x130<(x131^x132)));

	if (t32 != 16311LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int8_t x136 = INT8_MIN;

	t33 = (x133^(x134<(x135^x136)));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int32_t x138 = -1;
	int64_t x139 = INT64_MAX;
	int8_t x140 = INT8_MAX;
	volatile int64_t t34 = 17195525983435805LL;

	t34 = (x137^(x138<(x139^x140)));

	if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -121;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = -1;
	int32_t t35 = 96454086;

	t35 = (x141^(x142<(x143^x144)));

	if (t35 != -121) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 12541730;

	t36 = (x145^(x146<(x147^x148)));

	if (t36 != 39) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = 0;
	volatile int64_t x151 = 511947251360665172LL;
	volatile uint16_t x152 = 66U;
	volatile int32_t t37 = 25;

	t37 = (x149^(x150<(x151^x152)));

	if (t37 != 65534) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 0U;
	uint16_t x154 = 4U;
	volatile uint32_t x155 = 234885U;
	static volatile int32_t t38 = 1857434;

	t38 = (x153^(x154<(x155^x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 50108U;
	uint64_t x158 = UINT64_MAX;
	int32_t x159 = INT32_MIN;
	volatile int16_t x160 = -1;
	static volatile uint32_t t39 = 7707939U;

	t39 = (x157^(x158<(x159^x160)));

	if (t39 != 50108U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 4U;
	int64_t x162 = INT64_MIN;
	int8_t x163 = INT8_MIN;
	volatile int32_t x164 = 0;

	t40 = (x161^(x162<(x163^x164)));

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	int32_t x166 = -33697;
	int8_t x167 = 0;
	volatile int32_t t41 = -828;

	t41 = (x165^(x166<(x167^x168)));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = INT16_MIN;
	volatile int32_t x172 = INT32_MIN;

	t42 = (x169^(x170<(x171^x172)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x174 = INT8_MIN;
	volatile int32_t x175 = -233059;
	int64_t x176 = INT64_MAX;
	int32_t t43 = 15;

	t43 = (x173^(x174<(x175^x176)));

	if (t43 != 48) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 5423LLU;
	int32_t x178 = INT32_MAX;
	uint8_t x179 = UINT8_MAX;
	uint64_t x180 = 82407623354321LLU;
	uint64_t t44 = 27LLU;

	t44 = (x177^(x178<(x179^x180)));

	if (t44 != 5422LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 0U;
	int16_t x183 = -13;
	uint32_t t45 = 1708624012U;

	t45 = (x181^(x182<(x183^x184)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = 95268;
	static int32_t x186 = INT32_MIN;
	uint32_t x187 = 14813U;
	volatile int8_t x188 = INT8_MAX;
	static int32_t t46 = 264;

	t46 = (x185^(x186<(x187^x188)));

	if (t46 != 95268) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x191 = UINT32_MAX;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 0;

	t47 = (x189^(x190<(x191^x192)));

	if (t47 != 15845) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 6U;
	int8_t x194 = INT8_MIN;
	int16_t x195 = -1;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = 196688;

	t48 = (x193^(x194<(x195^x196)));

	if (t48 != 7) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = -19;
	volatile uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 15U;
	static int32_t t49 = -339;

	t49 = (x197^(x198<(x199^x200)));

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = UINT8_MAX;
	static volatile int8_t x203 = INT8_MAX;
	uint8_t x204 = 106U;
	volatile int32_t t50 = INT32_MIN;

	t50 = (x201^(x202<(x203^x204)));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = -1LL;
	volatile uint32_t x206 = UINT32_MAX;
	static int8_t x207 = INT8_MIN;
	int16_t x208 = -915;
	volatile int64_t t51 = -7016815521318695LL;

	t51 = (x205^(x206<(x207^x208)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -17936592;
	int16_t x210 = INT16_MIN;
	uint16_t x211 = UINT16_MAX;
	uint8_t x212 = 2U;
	int32_t t52 = 196769;

	t52 = (x209^(x210<(x211^x212)));

	if (t52 != -17936591) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -30;
	int32_t x215 = INT32_MIN;
	volatile int8_t x216 = 2;
	volatile int32_t t53 = 2630035;

	t53 = (x213^(x214<(x215^x216)));

	if (t53 != -29) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -28333;
	int64_t x218 = INT64_MIN;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = 3195;
	int32_t t54 = -920112712;

	t54 = (x217^(x218<(x219^x220)));

	if (t54 != -28334) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	static uint16_t x223 = UINT16_MAX;
	uint64_t x224 = UINT64_MAX;

	t55 = (x221^(x222<(x223^x224)));

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = INT32_MIN;
	int16_t x226 = -1;
	int32_t x227 = INT32_MAX;
	static int32_t x228 = INT32_MIN;
	volatile int32_t t56 = INT32_MIN;

	t56 = (x225^(x226<(x227^x228)));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -680LL;
	volatile int8_t x230 = -63;
	uint32_t x231 = UINT32_MAX;

	t57 = (x229^(x230<(x231^x232)));

	if (t57 != -680LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MAX;
	int8_t x234 = -1;
	int16_t x235 = INT16_MAX;
	int8_t x236 = -1;
	volatile int32_t t58 = INT32_MAX;

	t58 = (x233^(x234<(x235^x236)));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int64_t x238 = INT64_MIN;
	int8_t x239 = INT8_MAX;
	static uint16_t x240 = 62U;
	volatile int32_t t59 = 752137443;

	t59 = (x237^(x238<(x239^x240)));

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 60U;
	int8_t x242 = INT8_MAX;
	uint16_t x243 = 30306U;
	int16_t x244 = 3;
	int32_t t60 = 406664663;

	t60 = (x241^(x242<(x243^x244)));

	if (t60 != 61) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	int64_t x247 = INT64_MIN;
	volatile int16_t x248 = INT16_MIN;

	t61 = (x245^(x246<(x247^x248)));

	if (t61 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x250 = 126;
	static volatile int16_t x251 = 86;
	int32_t x252 = 1;

	t62 = (x249^(x250<(x251^x252)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int8_t x254 = -1;
	int64_t x256 = -4LL;
	volatile int32_t t63 = 1;

	t63 = (x253^(x254<(x255^x256)));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = UINT32_MAX;
	int32_t x258 = INT32_MIN;
	static int8_t x259 = -12;
	volatile int8_t x260 = INT8_MIN;
	static uint32_t t64 = 880U;

	t64 = (x257^(x258<(x259^x260)));

	if (t64 != 4294967294U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -1;
	volatile uint8_t x262 = 121U;
	uint64_t x263 = UINT64_MAX;
	int32_t x264 = INT32_MAX;
	int32_t t65 = -2400707;

	t65 = (x261^(x262<(x263^x264)));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x267 = INT64_MIN;
	static volatile int16_t x268 = -4;
	volatile int32_t t66 = 17;

	t66 = (x265^(x266<(x267^x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	static uint8_t x270 = 23U;
	uint32_t x271 = 329354674U;
	int32_t x272 = INT32_MAX;
	int32_t t67 = 20760114;

	t67 = (x269^(x270<(x271^x272)));

	if (t67 != 32766) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = 73814853484LLU;
	int16_t x274 = INT16_MIN;
	int32_t x276 = 0;
	volatile uint64_t t68 = 68235314674934LLU;

	t68 = (x273^(x274<(x275^x276)));

	if (t68 != 73814853485LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = 19U;
	int8_t x279 = -1;
	uint64_t x280 = 796230423LLU;

	t69 = (x277^(x278<(x279^x280)));

	if (t69 != 363799LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -233847324LL;
	static volatile int64_t x282 = INT64_MIN;
	uint64_t x284 = UINT64_MAX;

	t70 = (x281^(x282<(x283^x284)));

	if (t70 != -233847323LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	uint8_t x286 = 3U;
	int8_t x288 = INT8_MIN;
	volatile int64_t t71 = -507557LL;

	t71 = (x285^(x286<(x287^x288)));

	if (t71 != -2LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = 27;
	uint16_t x291 = 106U;
	static volatile uint64_t t72 = 18350968692216LLU;

	t72 = (x289^(x290<(x291^x292)));

	if (t72 != 30LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MIN;
	volatile int32_t t73 = 111253475;

	t73 = (x293^(x294<(x295^x296)));

	if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	static int16_t x298 = -1;
	int8_t x300 = -1;

	t74 = (x297^(x298<(x299^x300)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -30;
	static volatile int32_t x302 = 50974788;
	int8_t x303 = INT8_MIN;
	volatile int32_t t75 = 3696209;

	t75 = (x301^(x302<(x303^x304)));

	if (t75 != -30) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	static volatile int32_t t76 = -31426507;

	t76 = (x305^(x306<(x307^x308)));

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = -110436581;
	volatile uint64_t x310 = 12225511248760LLU;
	int16_t x311 = -11;
	int64_t x312 = -17099573521313526LL;

	t77 = (x309^(x310<(x311^x312)));

	if (t77 != -110436582) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	int8_t x314 = INT8_MAX;
	uint32_t x315 = UINT32_MAX;
	uint8_t x316 = 0U;
	static volatile int64_t t78 = -1283538533412595298LL;

	t78 = (x313^(x314<(x315^x316)));

	if (t78 != -2LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int64_t x319 = -171890389LL;
	uint64_t x320 = 55989520446LLU;
	int32_t t79 = -3455771;

	t79 = (x317^(x318<(x319^x320)));

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = UINT64_MAX;
	uint64_t x323 = UINT64_MAX;
	uint8_t x324 = 1U;
	volatile int32_t t80 = -6284;

	t80 = (x321^(x322<(x323^x324)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -1;
	int8_t x327 = 29;
	volatile int32_t t81 = 198605;

	t81 = (x325^(x326<(x327^x328)));

	if (t81 != 7565) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = -1;
	static int32_t x331 = 3513569;
	volatile int32_t t82 = 488567;

	t82 = (x329^(x330<(x331^x332)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MIN;
	int16_t x334 = -297;
	int64_t x335 = 431780691959600241LL;
	int64_t x336 = INT64_MIN;
	volatile int64_t t83 = INT64_MIN;

	t83 = (x333^(x334<(x335^x336)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	static int64_t x338 = -1LL;
	int8_t x340 = -3;
	int64_t t84 = 4667465LL;

	t84 = (x337^(x338<(x339^x340)));

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MIN;
	uint16_t x344 = 8U;
	static int64_t t85 = -1LL;

	t85 = (x341^(x342<(x343^x344)));

	if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = INT32_MIN;
	int32_t x348 = INT32_MAX;
	volatile uint64_t t86 = 123LLU;

	t86 = (x345^(x346<(x347^x348)));

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 22244303;
	uint8_t x350 = 0U;
	int32_t x351 = -43;
	static int32_t t87 = -35600216;

	t87 = (x349^(x350<(x351^x352)));

	if (t87 != 22244302) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = 117;
	int16_t x354 = -1;
	static volatile int32_t x355 = INT32_MAX;
	uint16_t x356 = 6U;
	volatile int32_t t88 = -458334970;

	t88 = (x353^(x354<(x355^x356)));

	if (t88 != 116) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	uint8_t x359 = 1U;
	uint8_t x360 = 22U;
	int64_t t89 = INT64_MIN;

	t89 = (x357^(x358<(x359^x360)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = -25;
	static int32_t x363 = INT32_MAX;
	int8_t x364 = INT8_MAX;
	volatile int64_t t90 = -277765036LL;

	t90 = (x361^(x362<(x363^x364)));

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = -1;
	static int32_t x368 = 718;
	volatile int32_t t91 = 6;

	t91 = (x365^(x366<(x367^x368)));

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x371 = UINT64_MAX;
	int32_t x372 = -364566;
	static volatile int32_t t92 = 26674;

	t92 = (x369^(x370<(x371^x372)));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 21358963904LLU;
	int32_t x375 = 4270359;
	int64_t x376 = -130756919213LL;
	static uint64_t t93 = 5562626671440LLU;

	t93 = (x373^(x374<(x375^x376)));

	if (t93 != 21358963904LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	static int32_t x378 = -1;
	int32_t x379 = 470990;
	int64_t x380 = INT64_MAX;

	t94 = (x377^(x378<(x379^x380)));

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	static int64_t x383 = -30LL;
	int8_t x384 = INT8_MIN;
	static volatile int32_t t95 = -692760281;

	t95 = (x381^(x382<(x383^x384)));

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	uint16_t x386 = 969U;
	volatile uint64_t x388 = 804184683258574441LLU;
	int32_t t96 = 35;

	t96 = (x385^(x386<(x387^x388)));

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -3173106;
	volatile uint32_t x391 = 1317662613U;

	t97 = (x389^(x390<(x391^x392)));

	if (t97 != -3173106) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 19U;
	int64_t x394 = INT64_MIN;
	int8_t x395 = INT8_MIN;
	uint32_t x396 = 70U;

	t98 = (x393^(x394<(x395^x396)));

	if (t98 != 18) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MAX;
	uint8_t x399 = 7U;
	int32_t x400 = INT32_MIN;
	volatile uint64_t t99 = 355LLU;

	t99 = (x397^(x398<(x399^x400)));

	if (t99 != 2424392LLU) { NG(); } else { ; }
	
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

