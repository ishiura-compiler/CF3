
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
volatile int32_t t0 = 4287;
static int32_t x7 = 2312;
int8_t x11 = INT8_MAX;
int16_t x20 = INT16_MAX;
static int32_t x28 = INT32_MIN;
static int32_t t7 = 110307;
uint32_t x45 = 238009U;
int64_t x47 = INT64_MAX;
volatile uint64_t x61 = 779257914LLU;
static uint16_t x62 = 575U;
int32_t x91 = -1;
int32_t x95 = -1;
uint64_t x114 = UINT64_MAX;
static volatile int32_t t17 = -23582506;
static volatile uint32_t x117 = 3U;
static int64_t x133 = INT64_MIN;
static volatile uint64_t x153 = 197LLU;
int32_t x154 = INT32_MIN;
uint32_t x156 = 593975U;
volatile uint64_t t21 = 11847325220LLU;
int32_t t22 = 1;
int32_t t23 = -70;
int32_t x171 = -20;
int32_t x172 = -40224;
volatile int64_t x175 = INT64_MIN;
int32_t t25 = -404791862;
int32_t x194 = INT32_MAX;
uint64_t x205 = UINT64_MAX;
int16_t x206 = INT16_MAX;
int8_t x207 = 1;
volatile uint8_t x224 = 0U;
static int32_t x236 = INT32_MIN;
volatile int64_t x238 = -462068391195239LL;
int8_t x253 = -1;
uint16_t x256 = 8U;
int64_t x259 = 62627LL;
uint16_t x301 = UINT16_MAX;
static int8_t x303 = INT8_MIN;
int32_t t42 = 225;
uint8_t x311 = 1U;
int8_t x319 = 22;
int8_t x344 = 37;
int8_t x347 = 1;
int8_t x368 = INT8_MIN;
uint32_t t50 = 1900518833U;
static int32_t x376 = INT32_MAX;
volatile int32_t x383 = 6;
int64_t t53 = -7212947468773LL;
uint16_t x402 = 352U;
static int8_t x404 = -56;
int16_t x424 = -1;
uint32_t x432 = UINT32_MAX;
static uint16_t x440 = UINT16_MAX;
static int8_t x442 = -1;
static int16_t x450 = 1;
int16_t x461 = -3;
int8_t x463 = INT8_MIN;
static volatile uint8_t x469 = UINT8_MAX;
uint8_t x474 = 51U;
int8_t x476 = INT8_MAX;
volatile int32_t t67 = -6;
int32_t x477 = INT32_MIN;
static int16_t x479 = INT16_MIN;
int64_t x491 = -416384961901653032LL;
static int8_t x494 = INT8_MIN;
uint64_t x502 = UINT64_MAX;
int8_t x503 = -1;
uint8_t x507 = 2U;
static int64_t x508 = INT64_MIN;
int64_t x526 = 7755LL;
uint64_t t75 = 174378548698002136LLU;
int16_t x564 = INT16_MAX;
static int64_t x578 = -37827530LL;
static int32_t x580 = INT32_MIN;
volatile uint32_t x596 = UINT32_MAX;
int8_t x603 = 61;
uint32_t x612 = 210U;
uint64_t x622 = UINT64_MAX;
uint64_t x637 = 120405771340199LLU;
int64_t x638 = -951LL;
volatile uint64_t x640 = UINT64_MAX;
int64_t x651 = INT64_MIN;
int64_t x652 = -1LL;
volatile int32_t t89 = 106316272;
static volatile uint8_t x654 = 83U;
int16_t x655 = 1180;
volatile uint8_t x657 = 4U;
static volatile int64_t x665 = 132146LL;
uint8_t x671 = 30U;
int32_t t95 = -3201;
uint8_t x702 = 28U;
int8_t x704 = 0;
static int8_t x717 = -2;
uint64_t x718 = UINT64_MAX;
static volatile int8_t x725 = INT8_MIN;
static uint8_t x778 = UINT8_MAX;
static volatile int8_t x791 = 1;
static uint32_t x797 = UINT32_MAX;
int16_t x798 = 6206;
static uint32_t t107 = 1060U;
int32_t x802 = -54231693;
static uint32_t x804 = 4U;
volatile uint32_t x807 = 41683U;
uint32_t x814 = UINT32_MAX;
static int64_t x828 = INT64_MIN;
static int64_t t112 = -262809097LL;
uint64_t x845 = 47635LLU;
uint8_t x846 = 7U;
int32_t t117 = -140241576;
volatile int8_t x865 = 22;
uint64_t x876 = 1383112105151502LLU;
uint16_t x877 = UINT16_MAX;
static int16_t x878 = INT16_MAX;
volatile int32_t t122 = -3954;
static int16_t x898 = -1;
int32_t x924 = 1521987;
int32_t t125 = -77486;
static volatile int32_t t126 = -6;
int8_t x963 = INT8_MIN;
static int8_t x995 = -1;
uint64_t x997 = UINT64_MAX;
int8_t x1001 = -1;
uint64_t x1051 = 10606LLU;
volatile int32_t t135 = -27;
volatile int16_t x1062 = INT16_MIN;
volatile int64_t t136 = -3605763153269698616LL;
int64_t x1065 = -1LL;
uint64_t x1077 = 270719466178LLU;
static int8_t x1094 = 0;
int32_t t141 = 37309;
int64_t x1110 = 3005214694763283LL;
volatile int32_t t142 = -1223;
uint8_t x1116 = 39U;
volatile int8_t x1143 = -1;
volatile uint32_t x1159 = 158U;
volatile uint32_t x1160 = UINT32_MAX;
volatile int32_t t146 = -1;
static int64_t x1163 = INT64_MIN;
int64_t x1164 = -3801622LL;
int32_t x1170 = -301709792;
int64_t t148 = 15LL;
int32_t t149 = -116;
volatile int8_t x1183 = INT8_MAX;
volatile int32_t t153 = -1;
int16_t x1229 = INT16_MIN;
static int32_t t158 = 764986990;
volatile uint64_t x1237 = 184LLU;
uint64_t x1250 = 982620484278LLU;
int32_t t162 = -216;
volatile int64_t x1260 = INT64_MIN;
volatile int32_t t163 = 261743;
volatile uint8_t x1264 = 0U;
static uint64_t x1267 = 1977338LLU;
int64_t t166 = -296LL;
volatile int8_t x1273 = INT8_MAX;
static int64_t x1283 = INT64_MIN;
int16_t x1284 = INT16_MIN;
int32_t t169 = 16;
int64_t t170 = 3LL;
int16_t x1306 = 9;
int32_t x1311 = INT32_MIN;
int8_t x1313 = 2;
int64_t x1324 = INT64_MAX;
int64_t x1326 = INT64_MAX;
volatile int8_t x1327 = -1;
uint32_t x1334 = UINT32_MAX;
int16_t x1341 = 13363;
uint16_t x1342 = 4069U;
int16_t x1344 = -145;
int64_t x1349 = -88296913LL;
int64_t t181 = 2462503516594494464LL;
uint64_t x1367 = 1736107919LLU;
static volatile uint32_t x1373 = UINT32_MAX;
uint32_t t185 = 20U;
int64_t x1387 = INT64_MIN;
static volatile uint64_t x1412 = UINT64_MAX;
static int32_t x1423 = INT32_MIN;
int16_t x1449 = INT16_MIN;
int16_t x1452 = INT16_MIN;
uint16_t x1455 = UINT16_MAX;
static int32_t x1456 = INT32_MIN;
static int16_t x1465 = INT16_MAX;
static uint64_t x1468 = UINT64_MAX;
static int64_t x1521 = INT64_MIN;


void f0(void) {
    	volatile int8_t x1 = 1;
	int64_t x2 = INT64_MAX;
	int8_t x3 = INT8_MAX;

    t0 = (x1%(x2>(x3&x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	volatile uint16_t x6 = UINT16_MAX;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 0;

    t1 = (x5%(x6>(x7&x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 1584U;
	int32_t x10 = -1;
	static uint64_t x12 = 406676262140912LLU;
	volatile int32_t t2 = -1222860;

    t2 = (x9%(x10>(x11&x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 35326131LLU;
	volatile uint64_t x14 = UINT64_MAX;
	int64_t x15 = INT64_MIN;
	static int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = 3423703LLU;

    t3 = (x13%(x14>(x15&x16)));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int64_t x18 = INT64_MIN;
	uint64_t x19 = 68189532346349LLU;
	static volatile int32_t t4 = -4080647;

    t4 = (x17%(x18>(x19&x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x25 = 7433081598LLU;
	uint8_t x26 = 3U;
	volatile int64_t x27 = -85LL;
	volatile uint64_t t5 = 1742342479006175888LLU;

    t5 = (x25%(x26>(x27&x28)));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x33 = 1U;
	uint16_t x34 = 6616U;
	int8_t x35 = INT8_MAX;
	volatile uint64_t x36 = 29178705932342LLU;
	static uint32_t t6 = 4U;

    t6 = (x33%(x34>(x35&x36)));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = -1;
	int8_t x38 = INT8_MIN;
	uint32_t x39 = UINT32_MAX;
	uint8_t x40 = 0U;

    t7 = (x37%(x38>(x39&x40)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x46 = INT64_MAX;
	int8_t x48 = -55;
	volatile uint32_t t8 = 1036966U;

    t8 = (x45%(x46>(x47&x48)));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x63 = 2U;
	uint8_t x64 = UINT8_MAX;
	uint64_t t9 = 67796825637112LLU;

    t9 = (x61%(x62>(x63&x64)));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x65 = UINT32_MAX;
	volatile int16_t x66 = INT16_MAX;
	int8_t x67 = 3;
	uint16_t x68 = UINT16_MAX;
	volatile uint32_t t10 = 4527U;

    t10 = (x65%(x66>(x67&x68)));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x69 = 1802639LLU;
	uint64_t x70 = 607643653649096476LLU;
	uint16_t x71 = 0U;
	static int16_t x72 = INT16_MAX;
	static volatile uint64_t t11 = 766LLU;

    t11 = (x69%(x70>(x71&x72)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x73 = -3;
	static int16_t x74 = INT16_MIN;
	int32_t x75 = -58225914;
	static volatile int32_t x76 = INT32_MIN;
	int32_t t12 = -2858;

    t12 = (x73%(x74>(x75&x76)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x81 = 57U;
	static int16_t x82 = INT16_MIN;
	uint32_t x83 = 1922U;
	uint16_t x84 = 89U;
	volatile int32_t t13 = -342494;

    t13 = (x81%(x82>(x83&x84)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x89 = INT64_MIN;
	uint16_t x90 = 990U;
	int64_t x92 = -1LL;
	static volatile int64_t t14 = 281495615303904788LL;

    t14 = (x89%(x90>(x91&x92)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MAX;
	int8_t x96 = INT8_MAX;
	volatile uint64_t t15 = 842153068039LLU;

    t15 = (x93%(x94>(x95&x96)));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x97 = 13657U;
	volatile uint64_t x98 = 4421319983109620LLU;
	uint64_t x99 = 40484947LLU;
	int8_t x100 = INT8_MIN;
	int32_t t16 = 11;

    t16 = (x97%(x98>(x99&x100)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x113 = INT16_MIN;
	int16_t x115 = -14254;
	uint16_t x116 = 3351U;

    t17 = (x113%(x114>(x115&x116)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x118 = -1;
	uint64_t x119 = 22LLU;
	int64_t x120 = -97LL;
	volatile uint32_t t18 = 40031U;

    t18 = (x117%(x118>(x119&x120)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x129 = -1LL;
	static uint64_t x130 = UINT64_MAX;
	uint64_t x131 = 34019364LLU;
	uint8_t x132 = 0U;
	static volatile int64_t t19 = 242596437470LL;

    t19 = (x129%(x130>(x131&x132)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x134 = -58LL;
	volatile int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MIN;
	int64_t t20 = -1854944615794437781LL;

    t20 = (x133%(x134>(x135&x136)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x155 = INT32_MIN;

    t21 = (x153%(x154>(x155&x156)));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x157 = 0U;
	int64_t x158 = INT64_MAX;
	int64_t x159 = 530685244148408364LL;
	uint32_t x160 = 521397U;

    t22 = (x157%(x158>(x159&x160)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x161 = -1;
	static int64_t x162 = -1LL;
	volatile int8_t x163 = INT8_MAX;
	static uint64_t x164 = UINT64_MAX;

    t23 = (x161%(x162>(x163&x164)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x169 = INT32_MIN;
	static int16_t x170 = 0;
	int32_t t24 = -29;

    t24 = (x169%(x170>(x171&x172)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x173 = 10U;
	int64_t x174 = INT64_MAX;
	int64_t x176 = INT64_MAX;

    t25 = (x173%(x174>(x175&x176)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x193 = -1;
	int64_t x195 = INT64_MIN;
	volatile int8_t x196 = INT8_MAX;
	int32_t t26 = 99;

    t26 = (x193%(x194>(x195&x196)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x197 = -1168LL;
	uint16_t x198 = 737U;
	uint64_t x199 = 2LLU;
	uint8_t x200 = UINT8_MAX;
	volatile int64_t t27 = -1969874398LL;

    t27 = (x197%(x198>(x199&x200)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x201 = 0U;
	static int8_t x202 = INT8_MIN;
	volatile int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t28 = -1030299162;

    t28 = (x201%(x202>(x203&x204)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x208 = UINT16_MAX;
	uint64_t t29 = 1269020394168480335LLU;

    t29 = (x205%(x206>(x207&x208)));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x209 = -1818;
	static volatile uint64_t x210 = 3944396171LLU;
	static volatile uint16_t x211 = 2513U;
	static int8_t x212 = 0;
	volatile int32_t t30 = 177940073;

    t30 = (x209%(x210>(x211&x212)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x221 = -1;
	static uint8_t x222 = 1U;
	int8_t x223 = INT8_MAX;
	int32_t t31 = 468;

    t31 = (x221%(x222>(x223&x224)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x225 = 343424637U;
	static volatile uint32_t x226 = 5969893U;
	int64_t x227 = INT64_MIN;
	uint32_t x228 = UINT32_MAX;
	uint32_t t32 = 2885U;

    t32 = (x225%(x226>(x227&x228)));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x229 = 1013784LL;
	uint16_t x230 = 1266U;
	int64_t x231 = -1LL;
	volatile uint8_t x232 = UINT8_MAX;
	volatile int64_t t33 = 3307554LL;

    t33 = (x229%(x230>(x231&x232)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x233 = INT64_MAX;
	volatile int16_t x234 = INT16_MIN;
	uint32_t x235 = 533458524U;
	int64_t t34 = -11LL;

    t34 = (x233%(x234>(x235&x236)));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x237 = 3955122308665696LLU;
	int32_t x239 = 191088248;
	uint64_t x240 = 6520091961269608LLU;
	volatile uint64_t t35 = 398229LLU;

    t35 = (x237%(x238>(x239&x240)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x245 = INT64_MAX;
	int16_t x246 = INT16_MIN;
	uint32_t x247 = 120881U;
	static uint64_t x248 = 48316551541918LLU;
	int64_t t36 = 32LL;

    t36 = (x245%(x246>(x247&x248)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x254 = INT64_MAX;
	static int8_t x255 = INT8_MIN;
	int32_t t37 = -15;

    t37 = (x253%(x254>(x255&x256)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x257 = -1LL;
	static int64_t x258 = 701329794096021987LL;
	static volatile uint64_t x260 = UINT64_MAX;
	volatile int64_t t38 = 658047LL;

    t38 = (x257%(x258>(x259&x260)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x269 = -1;
	int32_t x270 = 9747462;
	int16_t x271 = -1504;
	static volatile int32_t x272 = 457297;
	static int32_t t39 = -50965800;

    t39 = (x269%(x270>(x271&x272)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x273 = 1;
	int64_t x274 = INT64_MIN;
	volatile int64_t x275 = 1499208463894LL;
	uint64_t x276 = UINT64_MAX;
	static int32_t t40 = 1821;

    t40 = (x273%(x274>(x275&x276)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x281 = INT32_MAX;
	int32_t x282 = 18318;
	int64_t x283 = INT64_MIN;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t41 = 921;

    t41 = (x281%(x282>(x283&x284)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x302 = 97U;
	static int8_t x304 = 0;

    t42 = (x301%(x302>(x303&x304)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x309 = 664906LLU;
	static int64_t x310 = 86LL;
	volatile int64_t x312 = -1LL;
	volatile uint64_t t43 = 173LLU;

    t43 = (x309%(x310>(x311&x312)));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x317 = UINT64_MAX;
	int64_t x318 = 33749261693LL;
	uint8_t x320 = UINT8_MAX;
	static volatile uint64_t t44 = 28826544605LLU;

    t44 = (x317%(x318>(x319&x320)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x321 = -8189456750LL;
	volatile uint16_t x322 = UINT16_MAX;
	static volatile int64_t x323 = INT64_MIN;
	static uint16_t x324 = UINT16_MAX;
	int64_t t45 = -41235121597LL;

    t45 = (x321%(x322>(x323&x324)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x325 = UINT16_MAX;
	int16_t x326 = INT16_MIN;
	int64_t x327 = -1LL;
	volatile int64_t x328 = INT64_MIN;
	volatile int32_t t46 = -1;

    t46 = (x325%(x326>(x327&x328)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x337 = INT8_MIN;
	static int32_t x338 = -1;
	volatile int32_t x339 = -1;
	int32_t x340 = INT32_MIN;
	int32_t t47 = 1;

    t47 = (x337%(x338>(x339&x340)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x341 = INT64_MAX;
	volatile uint8_t x342 = UINT8_MAX;
	volatile int32_t x343 = INT32_MIN;
	volatile int64_t t48 = -8698210338036354LL;

    t48 = (x341%(x342>(x343&x344)));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x345 = 250U;
	int16_t x346 = 1877;
	uint64_t x348 = 95715LLU;
	int32_t t49 = 3;

    t49 = (x345%(x346>(x347&x348)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x365 = UINT32_MAX;
	int32_t x366 = 1091184;
	int8_t x367 = 0;

    t50 = (x365%(x366>(x367&x368)));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x373 = 7U;
	int32_t x374 = 3357651;
	volatile uint16_t x375 = 129U;
	volatile int32_t t51 = -36067131;

    t51 = (x373%(x374>(x375&x376)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x377 = 0U;
	static uint32_t x378 = UINT32_MAX;
	volatile int16_t x379 = -25;
	uint8_t x380 = 18U;
	int32_t t52 = -894;

    t52 = (x377%(x378>(x379&x380)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x381 = -1626306758845LL;
	uint16_t x382 = 7225U;
	int8_t x384 = 17;

    t53 = (x381%(x382>(x383&x384)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x385 = INT8_MIN;
	int16_t x386 = -12;
	static uint32_t x387 = 3562474U;
	int32_t x388 = INT32_MIN;
	volatile int32_t t54 = 123768;

    t54 = (x385%(x386>(x387&x388)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x393 = -1LL;
	static uint16_t x394 = UINT16_MAX;
	static uint8_t x395 = UINT8_MAX;
	static volatile int64_t x396 = INT64_MAX;
	volatile int64_t t55 = 8424LL;

    t55 = (x393%(x394>(x395&x396)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint16_t x401 = 6973U;
	int32_t x403 = INT32_MIN;
	int32_t t56 = -1;

    t56 = (x401%(x402>(x403&x404)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x413 = UINT32_MAX;
	uint32_t x414 = UINT32_MAX;
	static uint32_t x415 = 551456417U;
	uint32_t x416 = 1U;
	uint32_t t57 = 152U;

    t57 = (x413%(x414>(x415&x416)));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x421 = -1;
	int16_t x422 = INT16_MAX;
	int16_t x423 = INT16_MIN;
	volatile int32_t t58 = -14426316;

    t58 = (x421%(x422>(x423&x424)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x429 = 22LL;
	int8_t x430 = -1;
	uint8_t x431 = 97U;
	volatile int64_t t59 = -231149964LL;

    t59 = (x429%(x430>(x431&x432)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	static volatile uint32_t x438 = 246879U;
	volatile uint64_t x439 = UINT64_MAX;
	uint64_t t60 = 101682353LLU;

    t60 = (x437%(x438>(x439&x440)));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x441 = -21974;
	int16_t x443 = 843;
	static uint32_t x444 = 170U;
	static volatile int32_t t61 = -1577;

    t61 = (x441%(x442>(x443&x444)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x445 = INT16_MIN;
	int16_t x446 = INT16_MAX;
	int64_t x447 = INT64_MIN;
	uint16_t x448 = 8701U;
	int32_t t62 = 3019497;

    t62 = (x445%(x446>(x447&x448)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x449 = 3999U;
	int16_t x451 = -1;
	volatile int32_t x452 = -3;
	static int32_t t63 = -15;

    t63 = (x449%(x450>(x451&x452)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x457 = INT64_MIN;
	uint32_t x458 = 16366087U;
	uint32_t x459 = 3539494U;
	int64_t x460 = -17992145284260064LL;
	volatile int64_t t64 = 1020116766143029950LL;

    t64 = (x457%(x458>(x459&x460)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x462 = INT64_MAX;
	int64_t x464 = INT64_MIN;
	int32_t t65 = 1;

    t65 = (x461%(x462>(x463&x464)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x470 = 16682896070069342LLU;
	uint16_t x471 = 4U;
	uint32_t x472 = UINT32_MAX;
	static int32_t t66 = 5987;

    t66 = (x469%(x470>(x471&x472)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x473 = INT8_MIN;
	uint8_t x475 = 2U;

    t67 = (x473%(x474>(x475&x476)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x478 = -1;
	static int64_t x480 = -13929526999536276LL;
	int32_t t68 = -6638222;

    t68 = (x477%(x478>(x479&x480)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x485 = -1;
	uint16_t x486 = 438U;
	volatile int16_t x487 = -3314;
	int8_t x488 = INT8_MAX;
	volatile int32_t t69 = 1706;

    t69 = (x485%(x486>(x487&x488)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x489 = INT16_MIN;
	int32_t x490 = INT32_MIN;
	int8_t x492 = -50;
	static volatile int32_t t70 = -28895825;

    t70 = (x489%(x490>(x491&x492)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x493 = 5;
	static uint64_t x495 = UINT64_MAX;
	volatile uint16_t x496 = UINT16_MAX;
	volatile int32_t t71 = 6094;

    t71 = (x493%(x494>(x495&x496)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x501 = -1;
	static int64_t x504 = INT64_MAX;
	volatile int32_t t72 = -413287629;

    t72 = (x501%(x502>(x503&x504)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x505 = 1U;
	volatile uint32_t x506 = 3466U;
	uint32_t t73 = 35112894U;

    t73 = (x505%(x506>(x507&x508)));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x513 = INT32_MIN;
	int16_t x514 = INT16_MAX;
	int32_t x515 = INT32_MIN;
	int16_t x516 = INT16_MIN;
	int32_t t74 = -5;

    t74 = (x513%(x514>(x515&x516)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x525 = UINT64_MAX;
	int32_t x527 = 1;
	volatile int16_t x528 = -1;

    t75 = (x525%(x526>(x527&x528)));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x533 = 104663;
	uint16_t x534 = 1U;
	int8_t x535 = INT8_MIN;
	static volatile uint8_t x536 = 1U;
	static int32_t t76 = -13325;

    t76 = (x533%(x534>(x535&x536)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x549 = 114;
	int32_t x550 = INT32_MAX;
	int32_t x551 = INT32_MIN;
	int16_t x552 = INT16_MIN;
	static int32_t t77 = 71310;

    t77 = (x549%(x550>(x551&x552)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x561 = INT8_MAX;
	volatile int16_t x562 = INT16_MIN;
	static uint32_t x563 = UINT32_MAX;
	volatile int32_t t78 = 80456;

    t78 = (x561%(x562>(x563&x564)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x577 = 1253820U;
	int8_t x579 = -24;
	uint32_t t79 = 162U;

    t79 = (x577%(x578>(x579&x580)));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x585 = 31829U;
	uint32_t x586 = UINT32_MAX;
	uint64_t x587 = 50696LLU;
	volatile int64_t x588 = INT64_MIN;
	uint32_t t80 = 560007U;

    t80 = (x585%(x586>(x587&x588)));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x593 = 914904752059056885LL;
	int32_t x594 = -55553;
	uint64_t x595 = 1132987759034769927LLU;
	int64_t t81 = 3352510497LL;

    t81 = (x593%(x594>(x595&x596)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint32_t x597 = UINT32_MAX;
	uint64_t x598 = 48709LLU;
	int64_t x599 = 173LL;
	static int16_t x600 = 1417;
	volatile uint32_t t82 = 6317385U;

    t82 = (x597%(x598>(x599&x600)));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x601 = 1921121728U;
	uint32_t x602 = 173446U;
	uint8_t x604 = UINT8_MAX;
	volatile uint32_t t83 = 234U;

    t83 = (x601%(x602>(x603&x604)));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x609 = INT16_MAX;
	uint8_t x610 = 5U;
	static uint64_t x611 = 2821195280564711723LLU;
	int32_t t84 = -7;

    t84 = (x609%(x610>(x611&x612)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x621 = INT8_MIN;
	static int32_t x623 = INT32_MIN;
	volatile int64_t x624 = -37198712484046LL;
	int32_t t85 = 62;

    t85 = (x621%(x622>(x623&x624)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x633 = UINT64_MAX;
	static int64_t x634 = 22926897250002376LL;
	int64_t x635 = 1960LL;
	int64_t x636 = -1LL;
	static volatile uint64_t t86 = 1863629703135LLU;

    t86 = (x633%(x634>(x635&x636)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x639 = 51845399LLU;
	volatile uint64_t t87 = 1LLU;

    t87 = (x637%(x638>(x639&x640)));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x645 = -6422788945646277LL;
	static uint8_t x646 = UINT8_MAX;
	int64_t x647 = 429339315953LL;
	int64_t x648 = INT64_MIN;
	int64_t t88 = 157806063LL;

    t88 = (x645%(x646>(x647&x648)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x649 = INT16_MIN;
	static uint32_t x650 = 15U;

    t89 = (x649%(x650>(x651&x652)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x653 = 0U;
	int16_t x656 = INT16_MIN;
	volatile int32_t t90 = -106425407;

    t90 = (x653%(x654>(x655&x656)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x658 = INT16_MIN;
	uint64_t x659 = UINT64_MAX;
	static uint8_t x660 = 7U;
	volatile int32_t t91 = -349;

    t91 = (x657%(x658>(x659&x660)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint32_t x666 = 409556U;
	int8_t x667 = INT8_MAX;
	volatile int32_t x668 = INT32_MIN;
	static volatile int64_t t92 = 10LL;

    t92 = (x665%(x666>(x667&x668)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x669 = -1;
	static uint8_t x670 = UINT8_MAX;
	volatile uint64_t x672 = 54204651281635538LLU;
	volatile int32_t t93 = -2948776;

    t93 = (x669%(x670>(x671&x672)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x681 = UINT8_MAX;
	static volatile int64_t x682 = 85593743148LL;
	volatile int32_t x683 = 640284;
	volatile int8_t x684 = INT8_MIN;
	volatile int32_t t94 = -254;

    t94 = (x681%(x682>(x683&x684)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x685 = UINT16_MAX;
	int16_t x686 = -1262;
	int32_t x687 = INT32_MIN;
	static int64_t x688 = -52068254860LL;

    t95 = (x685%(x686>(x687&x688)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x701 = UINT8_MAX;
	int32_t x703 = INT32_MIN;
	int32_t t96 = -774435;

    t96 = (x701%(x702>(x703&x704)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x719 = -58620;
	int16_t x720 = -275;
	static volatile int32_t t97 = -1848;

    t97 = (x717%(x718>(x719&x720)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x726 = -1;
	uint64_t x727 = 27420LLU;
	int32_t x728 = INT32_MIN;
	static volatile int32_t t98 = 171871139;

    t98 = (x725%(x726>(x727&x728)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x729 = UINT8_MAX;
	volatile int8_t x730 = INT8_MAX;
	uint64_t x731 = UINT64_MAX;
	uint8_t x732 = 3U;
	static volatile int32_t t99 = -732819623;

    t99 = (x729%(x730>(x731&x732)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x745 = -92;
	uint32_t x746 = 35012084U;
	static uint32_t x747 = 14U;
	int8_t x748 = INT8_MAX;
	static volatile int32_t t100 = -382932;

    t100 = (x745%(x746>(x747&x748)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x753 = -7162;
	uint8_t x754 = 3U;
	int8_t x755 = -1;
	int8_t x756 = -1;
	int32_t t101 = -2909;

    t101 = (x753%(x754>(x755&x756)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x757 = INT64_MIN;
	int16_t x758 = 10942;
	int8_t x759 = -1;
	uint16_t x760 = 9U;
	volatile int64_t t102 = 59599988742LL;

    t102 = (x757%(x758>(x759&x760)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x773 = 50U;
	static int16_t x774 = 1917;
	int16_t x775 = -1;
	int16_t x776 = INT16_MIN;
	volatile int32_t t103 = 262941600;

    t103 = (x773%(x774>(x775&x776)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x777 = 127;
	uint64_t x779 = 3963LLU;
	uint8_t x780 = 4U;
	int32_t t104 = -9947;

    t104 = (x777%(x778>(x779&x780)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x785 = -12735;
	static uint8_t x786 = 6U;
	int16_t x787 = INT16_MIN;
	uint8_t x788 = UINT8_MAX;
	int32_t t105 = -148423724;

    t105 = (x785%(x786>(x787&x788)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x789 = 14U;
	uint32_t x790 = 214871U;
	uint8_t x792 = 4U;
	volatile int32_t t106 = -13267;

    t106 = (x789%(x790>(x791&x792)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x799 = INT8_MAX;
	static int32_t x800 = 2705;

    t107 = (x797%(x798>(x799&x800)));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x801 = INT16_MIN;
	int8_t x803 = 0;
	int32_t t108 = -431;

    t108 = (x801%(x802>(x803&x804)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x805 = -313223194982LL;
	uint16_t x806 = UINT16_MAX;
	int16_t x808 = INT16_MIN;
	volatile int64_t t109 = -229284321235LL;

    t109 = (x805%(x806>(x807&x808)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x813 = -5950773LL;
	static volatile int8_t x815 = 4;
	int8_t x816 = -1;
	volatile int64_t t110 = 7LL;

    t110 = (x813%(x814>(x815&x816)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x825 = 0LL;
	static volatile uint16_t x826 = 1U;
	volatile int8_t x827 = INT8_MAX;
	int64_t t111 = 78024694773076118LL;

    t111 = (x825%(x826>(x827&x828)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x837 = 3218237097300033LL;
	static uint64_t x838 = UINT64_MAX;
	uint32_t x839 = 210331631U;
	volatile uint16_t x840 = UINT16_MAX;

    t112 = (x837%(x838>(x839&x840)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x841 = -15356;
	int8_t x842 = -5;
	int16_t x843 = INT16_MIN;
	int8_t x844 = INT8_MIN;
	static volatile int32_t t113 = 657032;

    t113 = (x841%(x842>(x843&x844)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x847 = INT8_MIN;
	int64_t x848 = -108670049899LL;
	volatile uint64_t t114 = 50257LLU;

    t114 = (x845%(x846>(x847&x848)));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x849 = INT16_MIN;
	int32_t x850 = -2674;
	uint32_t x851 = 63U;
	uint8_t x852 = UINT8_MAX;
	volatile int32_t t115 = -289596647;

    t115 = (x849%(x850>(x851&x852)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x857 = INT16_MIN;
	volatile int8_t x858 = -1;
	uint8_t x859 = 7U;
	static volatile uint32_t x860 = 0U;
	volatile int32_t t116 = -3204634;

    t116 = (x857%(x858>(x859&x860)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x861 = -1;
	uint32_t x862 = 13U;
	static volatile uint8_t x863 = 22U;
	static volatile uint8_t x864 = 77U;

    t117 = (x861%(x862>(x863&x864)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x866 = 1009991774U;
	uint16_t x867 = UINT16_MAX;
	uint32_t x868 = 480U;
	volatile int32_t t118 = -129596941;

    t118 = (x865%(x866>(x867&x868)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x873 = 43U;
	volatile int32_t x874 = INT32_MIN;
	uint8_t x875 = 41U;
	volatile int32_t t119 = 3;

    t119 = (x873%(x874>(x875&x876)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x879 = 11925U;
	int8_t x880 = -23;
	volatile int32_t t120 = -569388;

    t120 = (x877%(x878>(x879&x880)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x881 = 123U;
	uint16_t x882 = UINT16_MAX;
	volatile int16_t x883 = 478;
	volatile int32_t x884 = -918490;
	uint32_t t121 = 1709U;

    t121 = (x881%(x882>(x883&x884)));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x889 = 0;
	int64_t x890 = INT64_MAX;
	int16_t x891 = -3814;
	static uint16_t x892 = 97U;

    t122 = (x889%(x890>(x891&x892)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x897 = 2112065;
	int8_t x899 = INT8_MIN;
	volatile int32_t x900 = -14;
	int32_t t123 = -413866518;

    t123 = (x897%(x898>(x899&x900)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x921 = INT8_MIN;
	int32_t x922 = INT32_MAX;
	uint64_t x923 = UINT64_MAX;
	static int32_t t124 = -137294167;

    t124 = (x921%(x922>(x923&x924)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x925 = INT8_MIN;
	volatile int32_t x926 = INT32_MIN;
	uint64_t x927 = 775128710673091LLU;
	volatile uint64_t x928 = 1479683161LLU;

    t125 = (x925%(x926>(x927&x928)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x929 = 6377U;
	int64_t x930 = -4227310151587LL;
	uint64_t x931 = 55572465748LLU;
	uint8_t x932 = 54U;

    t126 = (x929%(x930>(x931&x932)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x961 = INT32_MIN;
	volatile uint8_t x962 = UINT8_MAX;
	static uint16_t x964 = 117U;
	volatile int32_t t127 = 8242715;

    t127 = (x961%(x962>(x963&x964)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x973 = 2U;
	int16_t x974 = INT16_MAX;
	volatile uint8_t x975 = UINT8_MAX;
	volatile int8_t x976 = -1;
	volatile int32_t t128 = 232298;

    t128 = (x973%(x974>(x975&x976)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x993 = INT64_MIN;
	uint32_t x994 = UINT32_MAX;
	int32_t x996 = INT32_MAX;
	static volatile int64_t t129 = 906311814040LL;

    t129 = (x993%(x994>(x995&x996)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x998 = INT32_MIN;
	int16_t x999 = -23;
	uint64_t x1000 = 1422501685460467928LLU;
	volatile uint64_t t130 = 10942357LLU;

    t130 = (x997%(x998>(x999&x1000)));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x1002 = UINT16_MAX;
	int16_t x1003 = INT16_MAX;
	int64_t x1004 = -6732LL;
	int32_t t131 = 76612415;

    t131 = (x1001%(x1002>(x1003&x1004)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x1017 = 16163LLU;
	int8_t x1018 = 0;
	static int32_t x1019 = INT32_MIN;
	int32_t x1020 = -10650;
	volatile uint64_t t132 = 4321939799796256LLU;

    t132 = (x1017%(x1018>(x1019&x1020)));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x1021 = -6;
	volatile int64_t x1022 = INT64_MAX;
	uint64_t x1023 = 20107444865LLU;
	int8_t x1024 = 3;
	int32_t t133 = -2513152;

    t133 = (x1021%(x1022>(x1023&x1024)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1049 = 336130768LLU;
	int8_t x1050 = INT8_MIN;
	volatile int32_t x1052 = -1;
	uint64_t t134 = 3074290157056857710LLU;

    t134 = (x1049%(x1050>(x1051&x1052)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x1053 = INT8_MIN;
	int64_t x1054 = INT64_MAX;
	volatile int8_t x1055 = INT8_MIN;
	static volatile int8_t x1056 = -1;

    t135 = (x1053%(x1054>(x1055&x1056)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1061 = INT64_MIN;
	uint64_t x1063 = 509322516233800LLU;
	uint8_t x1064 = 50U;

    t136 = (x1061%(x1062>(x1063&x1064)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1066 = INT16_MAX;
	uint8_t x1067 = 27U;
	static int64_t x1068 = -1LL;
	volatile int64_t t137 = 20669236628838LL;

    t137 = (x1065%(x1066>(x1067&x1068)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x1078 = 58568562U;
	static int16_t x1079 = INT16_MIN;
	int16_t x1080 = 144;
	uint64_t t138 = 6LLU;

    t138 = (x1077%(x1078>(x1079&x1080)));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1089 = INT32_MAX;
	uint64_t x1090 = UINT64_MAX;
	volatile int8_t x1091 = -1;
	volatile uint64_t x1092 = 1183489477LLU;
	static volatile int32_t t139 = 52;

    t139 = (x1089%(x1090>(x1091&x1092)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1093 = 957U;
	int32_t x1095 = -1;
	int32_t x1096 = INT32_MIN;
	static volatile uint32_t t140 = 287U;

    t140 = (x1093%(x1094>(x1095&x1096)));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1097 = INT32_MIN;
	int16_t x1098 = INT16_MAX;
	static uint8_t x1099 = 1U;
	int32_t x1100 = 37;

    t141 = (x1097%(x1098>(x1099&x1100)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x1109 = -1;
	volatile int64_t x1111 = INT64_MIN;
	static volatile uint8_t x1112 = 3U;

    t142 = (x1109%(x1110>(x1111&x1112)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint16_t x1113 = 4U;
	static int8_t x1114 = INT8_MAX;
	static uint64_t x1115 = UINT64_MAX;
	int32_t t143 = 265;

    t143 = (x1113%(x1114>(x1115&x1116)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x1141 = -1;
	static int8_t x1142 = -2;
	uint64_t x1144 = 203159438LLU;
	int32_t t144 = 1;

    t144 = (x1141%(x1142>(x1143&x1144)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1153 = INT64_MIN;
	volatile uint8_t x1154 = 4U;
	int16_t x1155 = INT16_MIN;
	int16_t x1156 = 6379;
	int64_t t145 = -37174433405226642LL;

    t145 = (x1153%(x1154>(x1155&x1156)));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x1157 = 27U;
	int32_t x1158 = -1;

    t146 = (x1157%(x1158>(x1159&x1160)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x1161 = 1728U;
	uint16_t x1162 = UINT16_MAX;
	volatile int32_t t147 = -8358260;

    t147 = (x1161%(x1162>(x1163&x1164)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x1169 = INT64_MIN;
	int16_t x1171 = -1;
	int32_t x1172 = INT32_MIN;

    t148 = (x1169%(x1170>(x1171&x1172)));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint16_t x1177 = UINT16_MAX;
	int16_t x1178 = -1;
	volatile int64_t x1179 = INT64_MAX;
	static uint64_t x1180 = UINT64_MAX;

    t149 = (x1177%(x1178>(x1179&x1180)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1181 = INT8_MAX;
	int32_t x1182 = INT32_MAX;
	volatile uint8_t x1184 = UINT8_MAX;
	int32_t t150 = -7546;

    t150 = (x1181%(x1182>(x1183&x1184)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1189 = -2767561;
	static volatile uint64_t x1190 = UINT64_MAX;
	uint16_t x1191 = UINT16_MAX;
	static int8_t x1192 = -1;
	volatile int32_t t151 = 0;

    t151 = (x1189%(x1190>(x1191&x1192)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1193 = -1;
	static uint32_t x1194 = 5706899U;
	uint32_t x1195 = 809U;
	uint64_t x1196 = 140LLU;
	volatile int32_t t152 = -490;

    t152 = (x1193%(x1194>(x1195&x1196)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1205 = -317;
	static int16_t x1206 = INT16_MIN;
	volatile uint8_t x1207 = 0U;
	uint64_t x1208 = 109907246756LLU;

    t153 = (x1205%(x1206>(x1207&x1208)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1209 = 28451325611LLU;
	uint8_t x1210 = 3U;
	volatile int64_t x1211 = INT64_MIN;
	int16_t x1212 = 647;
	volatile uint64_t t154 = 2197234LLU;

    t154 = (x1209%(x1210>(x1211&x1212)));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x1213 = -1LL;
	int64_t x1214 = -1LL;
	int64_t x1215 = -165929826LL;
	static int64_t x1216 = -1042LL;
	int64_t t155 = -11786077LL;

    t155 = (x1213%(x1214>(x1215&x1216)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint32_t x1217 = 3338238U;
	volatile uint64_t x1218 = UINT64_MAX;
	int32_t x1219 = INT32_MIN;
	volatile uint64_t x1220 = 8148LLU;
	volatile uint32_t t156 = 42478U;

    t156 = (x1217%(x1218>(x1219&x1220)));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x1225 = INT16_MIN;
	uint16_t x1226 = 14988U;
	int64_t x1227 = -29172881958642LL;
	uint64_t x1228 = 7698LLU;
	volatile int32_t t157 = -109;

    t157 = (x1225%(x1226>(x1227&x1228)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1230 = 7998287213117LL;
	int32_t x1231 = 1;
	uint32_t x1232 = UINT32_MAX;

    t158 = (x1229%(x1230>(x1231&x1232)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x1238 = UINT16_MAX;
	int64_t x1239 = -110333064LL;
	volatile uint16_t x1240 = UINT16_MAX;
	static volatile uint64_t t159 = 17LLU;

    t159 = (x1237%(x1238>(x1239&x1240)));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1241 = INT16_MIN;
	int16_t x1242 = INT16_MAX;
	uint8_t x1243 = UINT8_MAX;
	uint16_t x1244 = 13862U;
	int32_t t160 = -57832;

    t160 = (x1241%(x1242>(x1243&x1244)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x1249 = 4;
	uint16_t x1251 = 399U;
	int32_t x1252 = -1;
	volatile int32_t t161 = 12;

    t161 = (x1249%(x1250>(x1251&x1252)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1253 = INT16_MIN;
	volatile int8_t x1254 = INT8_MAX;
	int16_t x1255 = INT16_MAX;
	static int64_t x1256 = INT64_MIN;

    t162 = (x1253%(x1254>(x1255&x1256)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1257 = UINT8_MAX;
	volatile int64_t x1258 = -163994135763LL;
	int32_t x1259 = -1;

    t163 = (x1257%(x1258>(x1259&x1260)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x1261 = INT16_MIN;
	static int8_t x1262 = 60;
	uint64_t x1263 = UINT64_MAX;
	volatile int32_t t164 = -64483348;

    t164 = (x1261%(x1262>(x1263&x1264)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x1265 = 88LLU;
	static int64_t x1266 = -125818490084760008LL;
	int64_t x1268 = 2457LL;
	volatile uint64_t t165 = 96974898LLU;

    t165 = (x1265%(x1266>(x1267&x1268)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1269 = -1LL;
	static int64_t x1270 = INT64_MAX;
	static uint32_t x1271 = 13U;
	int32_t x1272 = INT32_MAX;

    t166 = (x1269%(x1270>(x1271&x1272)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1274 = UINT16_MAX;
	static int16_t x1275 = INT16_MAX;
	int32_t x1276 = INT32_MAX;
	int32_t t167 = 336741479;

    t167 = (x1273%(x1274>(x1275&x1276)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1277 = 18689U;
	static uint8_t x1278 = 3U;
	static int64_t x1279 = INT64_MIN;
	uint8_t x1280 = 25U;
	int32_t t168 = 1895;

    t168 = (x1277%(x1278>(x1279&x1280)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1281 = INT32_MIN;
	uint32_t x1282 = 1033927958U;

    t169 = (x1281%(x1282>(x1283&x1284)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x1289 = -1LL;
	volatile uint64_t x1290 = 277567137546745634LLU;
	int16_t x1291 = INT16_MAX;
	volatile int64_t x1292 = -1LL;

    t170 = (x1289%(x1290>(x1291&x1292)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1301 = INT64_MAX;
	int16_t x1302 = INT16_MAX;
	uint8_t x1303 = 4U;
	static int16_t x1304 = INT16_MIN;
	int64_t t171 = -27565521211836LL;

    t171 = (x1301%(x1302>(x1303&x1304)));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1305 = -1;
	static uint8_t x1307 = 0U;
	uint8_t x1308 = 1U;
	volatile int32_t t172 = -268532;

    t172 = (x1305%(x1306>(x1307&x1308)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x1309 = 3;
	static int16_t x1310 = INT16_MIN;
	int8_t x1312 = -1;
	static int32_t t173 = -341867879;

    t173 = (x1309%(x1310>(x1311&x1312)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1314 = -9;
	static int16_t x1315 = -1761;
	int64_t x1316 = INT64_MIN;
	static int32_t t174 = -1;

    t174 = (x1313%(x1314>(x1315&x1316)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x1321 = INT16_MAX;
	uint64_t x1322 = UINT64_MAX;
	static uint64_t x1323 = UINT64_MAX;
	volatile int32_t t175 = -295716;

    t175 = (x1321%(x1322>(x1323&x1324)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1325 = -3;
	int32_t x1328 = INT32_MIN;
	int32_t t176 = 13146;

    t176 = (x1325%(x1326>(x1327&x1328)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1329 = INT64_MIN;
	int64_t x1330 = INT64_MAX;
	int64_t x1331 = INT64_MIN;
	uint64_t x1332 = 4722494216183703LLU;
	int64_t t177 = 1440635753LL;

    t177 = (x1329%(x1330>(x1331&x1332)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x1333 = 277U;
	uint64_t x1335 = 3232LLU;
	int32_t x1336 = 84;
	volatile uint32_t t178 = 7588512U;

    t178 = (x1333%(x1334>(x1335&x1336)));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x1343 = UINT8_MAX;
	volatile int32_t t179 = 147719573;

    t179 = (x1341%(x1342>(x1343&x1344)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1345 = 1708955;
	volatile int32_t x1346 = -1;
	volatile int32_t x1347 = 1;
	uint32_t x1348 = 110694U;
	static int32_t t180 = 231;

    t180 = (x1345%(x1346>(x1347&x1348)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1350 = INT8_MIN;
	int64_t x1351 = -7351183846LL;
	static int64_t x1352 = -1LL;

    t181 = (x1349%(x1350>(x1351&x1352)));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x1353 = INT64_MAX;
	int16_t x1354 = INT16_MIN;
	static uint64_t x1355 = 38905418414060984LLU;
	uint16_t x1356 = 2U;
	int64_t t182 = 1586LL;

    t182 = (x1353%(x1354>(x1355&x1356)));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1361 = 1590609LLU;
	int16_t x1362 = INT16_MAX;
	int8_t x1363 = -1;
	static volatile uint32_t x1364 = 48U;
	volatile uint64_t t183 = 197968022LLU;

    t183 = (x1361%(x1362>(x1363&x1364)));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1365 = -17LL;
	int8_t x1366 = -1;
	static volatile int32_t x1368 = -329985393;
	volatile int64_t t184 = -363856574102366897LL;

    t184 = (x1365%(x1366>(x1367&x1368)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x1374 = INT8_MAX;
	uint64_t x1375 = 1767928686354LLU;
	static uint8_t x1376 = 0U;

    t185 = (x1373%(x1374>(x1375&x1376)));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x1381 = INT32_MIN;
	static volatile uint64_t x1382 = 69935049LLU;
	volatile uint32_t x1383 = 12412659U;
	volatile int32_t x1384 = INT32_MIN;
	int32_t t186 = 41296;

    t186 = (x1381%(x1382>(x1383&x1384)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1385 = -1;
	volatile uint64_t x1386 = UINT64_MAX;
	int64_t x1388 = 0LL;
	int32_t t187 = 7402;

    t187 = (x1385%(x1386>(x1387&x1388)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1393 = 2490U;
	uint8_t x1394 = UINT8_MAX;
	volatile int16_t x1395 = -1;
	int16_t x1396 = -1;
	int32_t t188 = 246;

    t188 = (x1393%(x1394>(x1395&x1396)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x1405 = 5460567U;
	static uint16_t x1406 = UINT16_MAX;
	int32_t x1407 = 0;
	int8_t x1408 = -1;
	volatile uint32_t t189 = 10U;

    t189 = (x1405%(x1406>(x1407&x1408)));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1409 = INT16_MIN;
	static uint64_t x1410 = UINT64_MAX;
	int8_t x1411 = INT8_MIN;
	static int32_t t190 = 223004180;

    t190 = (x1409%(x1410>(x1411&x1412)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1421 = 4LL;
	uint8_t x1422 = 3U;
	static int16_t x1424 = INT16_MIN;
	int64_t t191 = 11LL;

    t191 = (x1421%(x1422>(x1423&x1424)));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1437 = UINT16_MAX;
	int64_t x1438 = 14781LL;
	static uint8_t x1439 = 6U;
	volatile uint16_t x1440 = UINT16_MAX;
	volatile int32_t t192 = -1758908;

    t192 = (x1437%(x1438>(x1439&x1440)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1450 = -403;
	static volatile int8_t x1451 = -49;
	int32_t t193 = 0;

    t193 = (x1449%(x1450>(x1451&x1452)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1453 = INT64_MIN;
	static volatile uint8_t x1454 = UINT8_MAX;
	volatile int64_t t194 = 18220172224LL;

    t194 = (x1453%(x1454>(x1455&x1456)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1466 = -1;
	uint64_t x1467 = 1049078867406LLU;
	volatile int32_t t195 = -92140026;

    t195 = (x1465%(x1466>(x1467&x1468)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x1469 = INT32_MIN;
	int32_t x1470 = -33988183;
	int64_t x1471 = -3843835045446920516LL;
	int32_t x1472 = -1;
	volatile int32_t t196 = -12686733;

    t196 = (x1469%(x1470>(x1471&x1472)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1481 = INT32_MAX;
	volatile uint8_t x1482 = UINT8_MAX;
	int64_t x1483 = -1LL;
	static volatile int32_t x1484 = -3412;
	volatile int32_t t197 = 32;

    t197 = (x1481%(x1482>(x1483&x1484)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x1513 = UINT16_MAX;
	int8_t x1514 = -5;
	int8_t x1515 = -2;
	static volatile int8_t x1516 = INT8_MIN;
	int32_t t198 = -124;

    t198 = (x1513%(x1514>(x1515&x1516)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1522 = 234LLU;
	int8_t x1523 = INT8_MAX;
	int32_t x1524 = INT32_MAX;
	volatile int64_t t199 = -3361LL;

    t199 = (x1521%(x1522>(x1523&x1524)));

    if (t199 != 0LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

