
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

static volatile uint16_t x83 = 12U;
volatile uint32_t x84 = 3U;
int64_t t0 = 163LL;
int8_t x237 = INT8_MAX;
volatile uint8_t x358 = 1U;
volatile uint64_t x516 = UINT64_MAX;
volatile int64_t x567 = INT64_MIN;
int64_t x568 = INT64_MIN;
uint64_t t8 = 919790855597224932LLU;
volatile uint8_t x918 = 23U;
int8_t x919 = 1;
uint8_t x1243 = 0U;
int8_t x1296 = INT8_MIN;
int16_t x1302 = 685;
static int8_t x1303 = INT8_MIN;
static int8_t x1304 = INT8_MIN;
volatile int64_t t16 = -3893219624LL;
static uint64_t x1640 = UINT64_MAX;
uint32_t x2058 = UINT32_MAX;
int64_t x2060 = INT64_MIN;
int64_t x2137 = INT64_MIN;
uint64_t x2138 = 3628568266810720734LLU;
int64_t x2139 = INT64_MIN;
uint8_t x2282 = 14U;
static uint16_t x2308 = 0U;
volatile int32_t x2352 = 10;
volatile uint16_t x2547 = UINT16_MAX;
static int8_t x2668 = INT8_MIN;
int32_t t30 = -10229476;
static uint32_t x2754 = UINT32_MAX;
int8_t x2755 = -1;
static int32_t x2756 = -12;
static volatile uint32_t t32 = 142221780U;
int64_t x3329 = INT64_MIN;
volatile int64_t x3331 = INT64_MIN;
int64_t x3332 = INT64_MIN;
static uint32_t x3420 = UINT32_MAX;
int32_t x3587 = -1;
int64_t x3645 = -5156165686542129LL;
static uint8_t x3646 = UINT8_MAX;
static volatile int16_t x3647 = -1;
int32_t x3969 = INT32_MIN;
int16_t x4152 = -1;
static int64_t t44 = 121021LL;
uint64_t x4445 = 13179059LLU;
int8_t x4446 = INT8_MAX;
int8_t x4447 = INT8_MIN;
int8_t x4448 = INT8_MIN;
static uint32_t x4521 = UINT32_MAX;
int32_t x4649 = INT32_MIN;
static int64_t x4652 = -1LL;
volatile int16_t x4757 = INT16_MAX;
static uint32_t x4758 = UINT32_MAX;
volatile int16_t x4939 = INT16_MAX;
volatile int64_t t51 = -1480770585131803777LL;
uint8_t x5198 = 5U;
static int16_t x5199 = -1;
uint32_t x5240 = UINT32_MAX;
int32_t x5491 = 0;
int64_t x5533 = INT64_MAX;
volatile int64_t x5573 = INT64_MIN;
uint64_t x5594 = UINT64_MAX;
uint64_t t58 = 293907847871LLU;
volatile int16_t x5975 = -1;


void f0(void) {
    	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MAX;

    t0 = (x81+(x82<<(x83^x84)));

    if (t0 != -9223372035781066752LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x97 = -10;
	uint16_t x98 = UINT16_MAX;
	int32_t x99 = 12;
	uint16_t x100 = 2U;
	static volatile int32_t t1 = 2957271;

    t1 = (x97+(x98<<(x99^x100)));

    if (t1 != 1073725430) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x173 = 3;
	static uint16_t x174 = 1U;
	volatile int16_t x175 = -1;
	uint64_t x176 = UINT64_MAX;
	volatile int32_t t2 = -740;

    t2 = (x173+(x174<<(x175^x176)));

    if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x238 = UINT64_MAX;
	int16_t x239 = -90;
	volatile int8_t x240 = INT8_MIN;
	volatile uint64_t t3 = 11650271LLU;

    t3 = (x237+(x238<<(x239^x240)));

    if (t3 != 18446743798831644799LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x245 = 2LLU;
	uint16_t x246 = 0U;
	uint8_t x247 = 13U;
	volatile uint32_t x248 = 0U;
	volatile uint64_t t4 = 592272904043222716LLU;

    t4 = (x245+(x246<<(x247^x248)));

    if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x357 = INT16_MAX;
	int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t5 = -32;

    t5 = (x357+(x358<<(x359^x360)));

    if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x513 = INT16_MIN;
	int32_t x514 = INT32_MAX;
	int8_t x515 = -1;
	volatile int32_t t6 = 1;

    t6 = (x513+(x514<<(x515^x516)));

    if (t6 != 2147450879) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x565 = 1U;
	uint16_t x566 = 7587U;
	volatile uint32_t t7 = 33U;

    t7 = (x565+(x566<<(x567^x568)));

    if (t7 != 7588U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x721 = UINT64_MAX;
	int8_t x722 = 1;
	static volatile int32_t x723 = INT32_MAX;
	int32_t x724 = INT32_MAX;

    t8 = (x721+(x722<<(x723^x724)));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x837 = INT8_MIN;
	uint16_t x838 = 63U;
	int8_t x839 = -26;
	int64_t x840 = -1LL;
	static volatile int32_t t9 = 72;

    t9 = (x837+(x838<<(x839^x840)));

    if (t9 != 2113929088) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x917 = 1304LL;
	static uint8_t x920 = 2U;
	volatile int64_t t10 = -737LL;

    t10 = (x917+(x918<<(x919^x920)));

    if (t10 != 1488LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x1009 = INT32_MIN;
	uint16_t x1010 = 16854U;
	volatile int64_t x1011 = -1LL;
	int32_t x1012 = -1;
	int32_t t11 = 247862847;

    t11 = (x1009+(x1010<<(x1011^x1012)));

    if (t11 != -2147466794) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x1089 = INT16_MIN;
	static uint16_t x1090 = UINT16_MAX;
	int8_t x1091 = -1;
	uint32_t x1092 = UINT32_MAX;
	volatile int32_t t12 = -320;

    t12 = (x1089+(x1090<<(x1091^x1092)));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x1241 = -9;
	volatile uint32_t x1242 = 107393U;
	uint32_t x1244 = 22U;
	static volatile uint32_t t13 = 562U;

    t13 = (x1241+(x1242<<(x1243^x1244)));

    if (t13 != 3762290679U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x1293 = 6872;
	int8_t x1294 = INT8_MAX;
	volatile int8_t x1295 = INT8_MIN;
	static int32_t t14 = 60512693;

    t14 = (x1293+(x1294<<(x1295^x1296)));

    if (t14 != 6999) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1301 = -6;
	static int32_t t15 = -1050876127;

    t15 = (x1301+(x1302<<(x1303^x1304)));

    if (t15 != 679) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x1381 = INT64_MIN;
	uint16_t x1382 = 12653U;
	int8_t x1383 = -1;
	volatile int16_t x1384 = -1;

    t16 = (x1381+(x1382<<(x1383^x1384)));

    if (t16 != -9223372036854763155LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x1585 = 508U;
	volatile uint32_t x1586 = 506942618U;
	int8_t x1587 = -1;
	int32_t x1588 = -1;
	uint32_t t17 = 5557U;

    t17 = (x1585+(x1586<<(x1587^x1588)));

    if (t17 != 506943126U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x1637 = INT32_MIN;
	volatile int32_t x1638 = 281;
	int8_t x1639 = -1;
	int32_t t18 = -16340;

    t18 = (x1637+(x1638<<(x1639^x1640)));

    if (t18 != -2147483367) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x1649 = -1;
	static uint16_t x1650 = 2U;
	int16_t x1651 = -1;
	uint64_t x1652 = UINT64_MAX;
	volatile int32_t t19 = 63568576;

    t19 = (x1649+(x1650<<(x1651^x1652)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x1809 = INT32_MIN;
	int16_t x1810 = 1;
	volatile uint64_t x1811 = 6LLU;
	int16_t x1812 = 2;
	volatile int32_t t20 = -52330;

    t20 = (x1809+(x1810<<(x1811^x1812)));

    if (t20 != -2147483632) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x1909 = 14044353U;
	uint16_t x1910 = 25809U;
	static int8_t x1911 = -5;
	int64_t x1912 = -1LL;
	volatile uint32_t t21 = 13U;

    t21 = (x1909+(x1910<<(x1911^x1912)));

    if (t21 != 14457297U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x2013 = -1;
	uint32_t x2014 = UINT32_MAX;
	uint64_t x2015 = UINT64_MAX;
	int16_t x2016 = -1;
	volatile uint32_t t22 = 19345U;

    t22 = (x2013+(x2014<<(x2015^x2016)));

    if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x2057 = INT64_MIN;
	int64_t x2059 = INT64_MIN;
	volatile int64_t t23 = 11LL;

    t23 = (x2057+(x2058<<(x2059^x2060)));

    if (t23 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x2140 = INT64_MIN;
	volatile uint64_t t24 = 14651851LLU;

    t24 = (x2137+(x2138<<(x2139^x2140)));

    if (t24 != 12851940303665496542LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x2273 = INT32_MIN;
	volatile uint32_t x2274 = 196844U;
	int32_t x2275 = INT32_MAX;
	int32_t x2276 = INT32_MAX;
	volatile uint32_t t25 = 386304805U;

    t25 = (x2273+(x2274<<(x2275^x2276)));

    if (t25 != 2147680492U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x2281 = 488273U;
	int16_t x2283 = -4;
	uint32_t x2284 = UINT32_MAX;
	uint32_t t26 = 595803292U;

    t26 = (x2281+(x2282<<(x2283^x2284)));

    if (t26 != 488385U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x2305 = -6;
	static uint16_t x2306 = 116U;
	uint8_t x2307 = 3U;
	volatile int32_t t27 = -30;

    t27 = (x2305+(x2306<<(x2307^x2308)));

    if (t27 != 922) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x2349 = INT8_MIN;
	uint16_t x2350 = 109U;
	uint8_t x2351 = 1U;
	volatile int32_t t28 = 840025496;

    t28 = (x2349+(x2350<<(x2351^x2352)));

    if (t28 != 223104) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x2545 = INT32_MIN;
	uint32_t x2546 = UINT32_MAX;
	static uint16_t x2548 = UINT16_MAX;
	uint32_t t29 = 15269U;

    t29 = (x2545+(x2546<<(x2547^x2548)));

    if (t29 != 2147483647U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x2665 = INT16_MIN;
	uint16_t x2666 = 13U;
	int8_t x2667 = INT8_MIN;

    t30 = (x2665+(x2666<<(x2667^x2668)));

    if (t30 != -32755) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2729 = -1;
	static volatile uint32_t x2730 = 477503325U;
	int16_t x2731 = INT16_MAX;
	int16_t x2732 = INT16_MAX;
	uint32_t t31 = 1015U;

    t31 = (x2729+(x2730<<(x2731^x2732)));

    if (t31 != 477503324U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x2753 = INT16_MIN;

    t32 = (x2753+(x2754<<(x2755^x2756)));

    if (t32 != 4294932480U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x2801 = INT64_MIN;
	uint16_t x2802 = 427U;
	volatile uint16_t x2803 = 23U;
	volatile uint32_t x2804 = 2U;
	int64_t t33 = 11771363670598149LL;

    t33 = (x2801+(x2802<<(x2803^x2804)));

    if (t33 != -9223372035959291904LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x3005 = -932;
	uint16_t x3006 = UINT16_MAX;
	static volatile uint32_t x3007 = UINT32_MAX;
	volatile uint32_t x3008 = UINT32_MAX;
	int32_t t34 = -58028617;

    t34 = (x3005+(x3006<<(x3007^x3008)));

    if (t34 != 64603) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x3069 = -1;
	int16_t x3070 = 3;
	uint64_t x3071 = UINT64_MAX;
	volatile int64_t x3072 = -1LL;
	int32_t t35 = 50078;

    t35 = (x3069+(x3070<<(x3071^x3072)));

    if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x3330 = UINT16_MAX;
	volatile int64_t t36 = 20951889373775LL;

    t36 = (x3329+(x3330<<(x3331^x3332)));

    if (t36 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x3409 = INT8_MIN;
	uint64_t x3410 = UINT64_MAX;
	static int16_t x3411 = -4;
	static volatile int16_t x3412 = -1;
	volatile uint64_t t37 = 350805967079LLU;

    t37 = (x3409+(x3410<<(x3411^x3412)));

    if (t37 != 18446744073709551480LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x3417 = -1LL;
	volatile int16_t x3418 = 4;
	int8_t x3419 = -1;
	volatile int64_t t38 = 10154735420708LL;

    t38 = (x3417+(x3418<<(x3419^x3420)));

    if (t38 != 3LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x3585 = UINT8_MAX;
	uint64_t x3586 = UINT64_MAX;
	volatile uint64_t x3588 = UINT64_MAX;
	uint64_t t39 = 532062597510LLU;

    t39 = (x3585+(x3586<<(x3587^x3588)));

    if (t39 != 254LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x3633 = 664349586239LL;
	uint32_t x3634 = 15022U;
	int8_t x3635 = -1;
	static int32_t x3636 = -7;
	volatile int64_t t40 = -264492716541616LL;

    t40 = (x3633+(x3634<<(x3635^x3636)));

    if (t40 != 664350547647LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x3648 = -3;
	static int64_t t41 = 0LL;

    t41 = (x3645+(x3646<<(x3647^x3648)));

    if (t41 != -5156165686541109LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x3970 = 17865;
	volatile int64_t x3971 = -1LL;
	int8_t x3972 = -1;
	volatile int32_t t42 = 3194600;

    t42 = (x3969+(x3970<<(x3971^x3972)));

    if (t42 != -2147465783) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x3977 = 3LL;
	uint32_t x3978 = 84382U;
	uint64_t x3979 = UINT64_MAX;
	int16_t x3980 = -1;
	int64_t t43 = 1278261805353173LL;

    t43 = (x3977+(x3978<<(x3979^x3980)));

    if (t43 != 84385LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x4149 = INT8_MIN;
	volatile int64_t x4150 = 310LL;
	static volatile int64_t x4151 = -1LL;

    t44 = (x4149+(x4150<<(x4151^x4152)));

    if (t44 != 182LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x4173 = -1LL;
	uint16_t x4174 = UINT16_MAX;
	int32_t x4175 = -1;
	int64_t x4176 = -1LL;
	int64_t t45 = -493LL;

    t45 = (x4173+(x4174<<(x4175^x4176)));

    if (t45 != 65534LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t t46 = 28006967941483825LLU;

    t46 = (x4445+(x4446<<(x4447^x4448)));

    if (t46 != 13179186LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x4473 = INT16_MIN;
	static volatile int8_t x4474 = 5;
	int32_t x4475 = INT32_MIN;
	static int32_t x4476 = INT32_MIN;
	int32_t t47 = -927;

    t47 = (x4473+(x4474<<(x4475^x4476)));

    if (t47 != -32763) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x4522 = UINT8_MAX;
	int8_t x4523 = 6;
	volatile uint64_t x4524 = 3LLU;
	volatile uint32_t t48 = 48139U;

    t48 = (x4521+(x4522<<(x4523^x4524)));

    if (t48 != 8159U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x4650 = INT8_MAX;
	int16_t x4651 = -1;
	volatile int32_t t49 = -74772888;

    t49 = (x4649+(x4650<<(x4651^x4652)));

    if (t49 != -2147483521) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x4759 = -1LL;
	uint64_t x4760 = UINT64_MAX;
	uint32_t t50 = 69852U;

    t50 = (x4757+(x4758<<(x4759^x4760)));

    if (t50 != 32766U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x4937 = INT64_MIN;
	static uint32_t x4938 = 1U;
	int16_t x4940 = INT16_MAX;

    t51 = (x4937+(x4938<<(x4939^x4940)));

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x5197 = 114420293U;
	static int16_t x5200 = -1;
	volatile uint32_t t52 = 3U;

    t52 = (x5197+(x5198<<(x5199^x5200)));

    if (t52 != 114420298U) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint64_t x5237 = 7852343807295054LLU;
	volatile uint16_t x5238 = 16673U;
	int8_t x5239 = -9;
	uint64_t t53 = 13820793579144LLU;

    t53 = (x5237+(x5238<<(x5239^x5240)));

    if (t53 != 7852343811563342LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x5273 = 38452998U;
	volatile int64_t x5274 = 0LL;
	int8_t x5275 = INT8_MAX;
	static int8_t x5276 = INT8_MAX;
	volatile int64_t t54 = 992943094975442745LL;

    t54 = (x5273+(x5274<<(x5275^x5276)));

    if (t54 != 38452998LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x5489 = -31;
	uint64_t x5490 = 455648LLU;
	uint16_t x5492 = 0U;
	volatile uint64_t t55 = 1063833LLU;

    t55 = (x5489+(x5490<<(x5491^x5492)));

    if (t55 != 455617LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x5534 = 48205053LLU;
	int64_t x5535 = INT64_MIN;
	volatile int64_t x5536 = INT64_MIN;
	static volatile uint64_t t56 = 1175LLU;

    t56 = (x5533+(x5534<<(x5535^x5536)));

    if (t56 != 9223372036902980860LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x5574 = 17U;
	volatile int16_t x5575 = -1;
	int32_t x5576 = -1;
	volatile int64_t t57 = 78LL;

    t57 = (x5573+(x5574<<(x5575^x5576)));

    if (t57 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x5593 = 28395LL;
	static int8_t x5595 = 1;
	int8_t x5596 = 3;

    t58 = (x5593+(x5594<<(x5595^x5596)));

    if (t58 != 28391LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x5781 = INT16_MIN;
	int16_t x5782 = 1;
	int32_t x5783 = -1;
	int16_t x5784 = -1;
	static int32_t t59 = -109060618;

    t59 = (x5781+(x5782<<(x5783^x5784)));

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x5973 = UINT16_MAX;
	static uint64_t x5974 = 82531916894561931LLU;
	int16_t x5976 = -1;
	volatile uint64_t t60 = 31LLU;

    t60 = (x5973+(x5974<<(x5975^x5976)));

    if (t60 != 82531916894627466LLU) { NG(); } else { ; }
	
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


    return 0;
}

