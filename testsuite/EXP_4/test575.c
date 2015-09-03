#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x22 = INT64_MAX;
uint32_t x65 = 7158397U;
volatile uint32_t t1 = 30004368U;
uint32_t t2 = 46488339U;
int64_t x159 = -4312LL;
int16_t x160 = INT16_MAX;
int16_t x175 = INT16_MAX;
static int32_t t5 = INT32_MAX;
volatile int8_t x193 = INT8_MIN;
int64_t x197 = -1LL;
uint8_t x198 = UINT8_MAX;
volatile int64_t x216 = INT64_MIN;
int16_t x230 = 21;
uint64_t x235 = UINT64_MAX;
static volatile int64_t t10 = -22841119LL;
int64_t x240 = INT64_MIN;
int8_t x248 = -3;
uint32_t x250 = 191527987U;
int8_t x251 = INT8_MAX;
int8_t x320 = -1;
int32_t x345 = INT32_MAX;
volatile uint8_t x361 = 0U;
int16_t x364 = INT16_MIN;
static uint32_t x379 = 1340U;
static int8_t x393 = INT8_MIN;
uint8_t x433 = 0U;
int8_t x437 = -60;
int32_t x439 = 456780797;
volatile int32_t t23 = -16991;
int32_t x457 = -406497;
volatile int16_t x459 = -1;
uint8_t x518 = 0U;
static uint64_t x519 = 246965LLU;
uint16_t x537 = UINT16_MAX;
int16_t x538 = 0;
uint8_t x547 = 25U;
static int16_t x548 = -305;
volatile int32_t x551 = INT32_MAX;
uint64_t x558 = 1750350LLU;
volatile int32_t x559 = INT32_MAX;
volatile uint16_t x562 = 134U;
static int64_t x577 = INT64_MIN;
int64_t t40 = 54843326164306105LL;
int16_t x594 = 336;
int8_t x605 = 3;
uint16_t x607 = 119U;
uint64_t t43 = 19309441319827LLU;
uint64_t x609 = UINT64_MAX;
uint32_t x624 = UINT32_MAX;
volatile int32_t t45 = -91463247;
uint64_t t46 = 2LLU;
int8_t x651 = INT8_MIN;
int16_t x652 = INT16_MIN;
uint64_t t47 = 22LLU;
int16_t x666 = INT16_MAX;
int8_t x715 = -1;
int8_t x716 = INT8_MIN;
int32_t x729 = INT32_MAX;
volatile int64_t x745 = INT64_MIN;
int16_t x757 = -1;
volatile uint64_t t58 = 47544LLU;
int64_t x769 = 24603LL;
volatile int8_t x770 = 13;
static int32_t x772 = INT32_MIN;
volatile int64_t t59 = 15LL;
uint8_t x858 = 0U;
int64_t x880 = INT64_MIN;
uint32_t x899 = 10829151U;
volatile int8_t x900 = INT8_MIN;
static uint8_t x962 = 16U;
uint8_t x964 = 10U;
static volatile int32_t x985 = -1;
static uint16_t x988 = 4807U;
int8_t x997 = -5;
uint32_t x1001 = 233528U;
uint8_t x1013 = 14U;
volatile uint32_t t70 = 81U;
static volatile int64_t x1026 = 4210908LL;
int32_t x1103 = -236;
int32_t x1123 = INT32_MAX;
uint8_t x1130 = 21U;
volatile int32_t t76 = 2;
uint64_t x1194 = 542916155594479832LLU;
int32_t x1195 = INT32_MAX;
uint8_t x1209 = UINT8_MAX;
uint32_t x1218 = 7521U;
static uint64_t x1230 = UINT64_MAX;
int16_t x1231 = INT16_MIN;
volatile int64_t x1242 = 97098509457140LL;
static int64_t x1255 = -1LL;
int16_t x1305 = -1;
uint16_t x1306 = UINT16_MAX;
uint8_t x1338 = 1U;
static int8_t x1387 = INT8_MAX;
uint64_t t91 = 1840LLU;
uint32_t t93 = 14554590U;
int32_t t95 = -2325;
int16_t x1546 = 1001;
volatile uint16_t x1562 = 372U;
uint16_t x1572 = 6863U;


void f0(void) {
	uint64_t x21 = UINT64_MAX;
	volatile int8_t x23 = INT8_MIN;
	int16_t x24 = -15530;
	volatile uint64_t t0 = 7543143245924LLU;

	t0 = (x21*(x22<<(x23/x24)));

	if (t0 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x66 = 0;
	int64_t x67 = -1LL;
	volatile int16_t x68 = 39;

	t1 = (x65*(x66<<(x67/x68)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x69 = 130U;
	int16_t x70 = INT16_MAX;
	int64_t x71 = -485871185LL;
	int64_t x72 = INT64_MIN;

	t2 = (x69*(x70<<(x71/x72)));

	if (t2 != 4259710U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x101 = UINT16_MAX;
	volatile uint32_t x102 = 249U;
	volatile int16_t x103 = -8198;
	volatile uint32_t x104 = UINT32_MAX;
	static uint32_t t3 = 64U;

	t3 = (x101*(x102<<(x103/x104)));

	if (t3 != 16318215U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x157 = -1;
	volatile uint8_t x158 = UINT8_MAX;
	int32_t t4 = 15;

	t4 = (x157*(x158<<(x159/x160)));

	if (t4 != -255) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x173 = 1;
	volatile int32_t x174 = INT32_MAX;
	int16_t x176 = INT16_MIN;

	t5 = (x173*(x174<<(x175/x176)));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x194 = 23907066LL;
	uint64_t x195 = UINT64_MAX;
	static int8_t x196 = -22;
	int64_t t6 = 1672344855LL;

	t6 = (x193*(x194<<(x195/x196)));

	if (t6 != -6120208896LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x199 = -1;
	static int64_t x200 = -126269007910030461LL;
	static volatile int64_t t7 = -1601LL;

	t7 = (x197*(x198<<(x199/x200)));

	if (t7 != -255LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x213 = 1U;
	uint32_t x214 = UINT32_MAX;
	int64_t x215 = -1LL;
	uint32_t t8 = UINT32_MAX;

	t8 = (x213*(x214<<(x215/x216)));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x229 = UINT16_MAX;
	volatile int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t9 = 2866;

	t9 = (x229*(x230<<(x231/x232)));

	if (t9 != 2752470) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x233 = -373941615LL;
	int8_t x234 = INT8_MAX;
	int32_t x236 = INT32_MIN;

	t10 = (x233*(x234<<(x235/x236)));

	if (t10 != -94981170210LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x237 = 1;
	uint8_t x238 = 7U;
	int32_t x239 = INT32_MIN;
	volatile int32_t t11 = -106057459;

	t11 = (x237*(x238<<(x239/x240)));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x245 = -1;
	uint16_t x246 = 25U;
	int64_t x247 = -1LL;
	volatile int32_t t12 = -179991289;

	t12 = (x245*(x246<<(x247/x248)));

	if (t12 != -25) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x249 = INT8_MIN;
	volatile int32_t x252 = INT32_MIN;
	uint32_t t13 = 6664405U;

	t13 = (x249*(x250<<(x251/x252)));

	if (t13 != 1254221440U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x285 = INT32_MAX;
	volatile uint64_t x286 = 882146191LLU;
	int32_t x287 = -1;
	int64_t x288 = INT64_MAX;
	static volatile uint64_t t14 = 24639775LLU;

	t14 = (x285*(x286<<(x287/x288)));

	if (t14 != 1894394519435838577LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x317 = 1521780400496473595LLU;
	static volatile uint64_t x318 = 124LLU;
	uint64_t x319 = 540456337544008LLU;
	uint64_t t15 = 27898454196LLU;

	t15 = (x317*(x318<<(x319/x320)));

	if (t15 != 4233328924467209620LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x346 = 0U;
	volatile uint8_t x347 = 0U;
	int32_t x348 = INT32_MAX;
	uint32_t t16 = 6045U;

	t16 = (x345*(x346<<(x347/x348)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x362 = 2945U;
	static int8_t x363 = -63;
	volatile int32_t t17 = -916379196;

	t17 = (x361*(x362<<(x363/x364)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x377 = 106989676U;
	int32_t x378 = INT32_MAX;
	int16_t x380 = INT16_MIN;
	uint32_t t18 = 268939U;

	t18 = (x377*(x378<<(x379/x380)));

	if (t18 != 4187977620U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x381 = UINT16_MAX;
	uint8_t x382 = 26U;
	static int64_t x383 = -1LL;
	uint32_t x384 = 140554933U;
	static int32_t t19 = -49003;

	t19 = (x381*(x382<<(x383/x384)));

	if (t19 != 1703910) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x394 = 26104U;
	int8_t x395 = INT8_MAX;
	static volatile int16_t x396 = INT16_MAX;
	volatile uint32_t t20 = 378754954U;

	t20 = (x393*(x394<<(x395/x396)));

	if (t20 != 4291625984U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x417 = -28;
	volatile uint32_t x418 = 137U;
	int16_t x419 = -1768;
	int64_t x420 = INT64_MIN;
	uint32_t t21 = 777U;

	t21 = (x417*(x418<<(x419/x420)));

	if (t21 != 4294963460U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x434 = 11150;
	int16_t x435 = 3;
	uint16_t x436 = UINT16_MAX;
	volatile int32_t t22 = 17;

	t22 = (x433*(x434<<(x435/x436)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x438 = 3U;
	static uint64_t x440 = UINT64_MAX;

	t23 = (x437*(x438<<(x439/x440)));

	if (t23 != -180) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x441 = 955U;
	volatile uint64_t x442 = 32030LLU;
	static uint32_t x443 = 44969765U;
	uint64_t x444 = UINT64_MAX;
	volatile uint64_t t24 = 0LLU;

	t24 = (x441*(x442<<(x443/x444)));

	if (t24 != 30588650LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x445 = -11;
	uint8_t x446 = 102U;
	int8_t x447 = -52;
	int16_t x448 = INT16_MIN;
	int32_t t25 = 7976035;

	t25 = (x445*(x446<<(x447/x448)));

	if (t25 != -1122) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x458 = 9U;
	int32_t x460 = INT32_MIN;
	volatile int32_t t26 = 33311;

	t26 = (x457*(x458<<(x459/x460)));

	if (t26 != -3658473) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x461 = UINT64_MAX;
	static int64_t x462 = INT64_MAX;
	volatile int32_t x463 = INT32_MIN;
	uint32_t x464 = UINT32_MAX;
	static uint64_t t27 = 421814LLU;

	t27 = (x461*(x462<<(x463/x464)));

	if (t27 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x489 = INT16_MAX;
	static volatile uint64_t x490 = UINT64_MAX;
	static volatile uint64_t x491 = 4724015LLU;
	volatile int64_t x492 = 266491556LL;
	static volatile uint64_t t28 = 517437160720LLU;

	t28 = (x489*(x490<<(x491/x492)));

	if (t28 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x505 = 16U;
	static uint32_t x506 = 143U;
	volatile int64_t x507 = 4LL;
	int8_t x508 = 13;
	volatile uint32_t t29 = 182U;

	t29 = (x505*(x506<<(x507/x508)));

	if (t29 != 2288U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x517 = 58903546LLU;
	volatile int32_t x520 = INT32_MAX;
	static volatile uint64_t t30 = 6482LLU;

	t30 = (x517*(x518<<(x519/x520)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x525 = 31U;
	uint16_t x526 = 1U;
	static int32_t x527 = -1;
	int16_t x528 = 823;
	int32_t t31 = -116043045;

	t31 = (x525*(x526<<(x527/x528)));

	if (t31 != 31) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x533 = 118U;
	uint64_t x534 = 38375858552872511LLU;
	uint16_t x535 = 10571U;
	uint16_t x536 = 3642U;
	uint64_t t32 = 59972352761255LLU;

	t32 = (x533*(x534<<(x535/x536)));

	if (t32 != 18113405236955825192LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x539 = UINT16_MAX;
	int32_t x540 = INT32_MAX;
	volatile int32_t t33 = 281;

	t33 = (x537*(x538<<(x539/x540)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x545 = 357U;
	static int64_t x546 = 8124706670111LL;
	int64_t t34 = 1562382LL;

	t34 = (x545*(x546<<(x547/x548)));

	if (t34 != 2900520281229627LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x549 = 11053U;
	uint8_t x550 = UINT8_MAX;
	uint64_t x552 = 70336410630337LLU;
	volatile int32_t t35 = -145085;

	t35 = (x549*(x550<<(x551/x552)));

	if (t35 != 2818515) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x557 = 1296958;
	volatile uint32_t x560 = UINT32_MAX;
	uint64_t t36 = 507629288308047LLU;

	t36 = (x557*(x558<<(x559/x560)));

	if (t36 != 2270130435300LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x561 = 493U;
	static uint16_t x563 = 2178U;
	uint64_t x564 = UINT64_MAX;
	uint32_t t37 = 0U;

	t37 = (x561*(x562<<(x563/x564)));

	if (t37 != 66062U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x565 = 1201U;
	uint8_t x566 = 21U;
	int16_t x567 = -1;
	int8_t x568 = 6;
	static volatile int32_t t38 = -1;

	t38 = (x565*(x566<<(x567/x568)));

	if (t38 != 25221) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x578 = 0;
	uint8_t x579 = 4U;
	static int64_t x580 = -1008812079988616921LL;
	int64_t t39 = -1LL;

	t39 = (x577*(x578<<(x579/x580)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x585 = -1;
	int64_t x586 = INT64_MAX;
	int16_t x587 = -1;
	static int64_t x588 = 220LL;

	t40 = (x585*(x586<<(x587/x588)));

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x589 = INT16_MIN;
	uint64_t x590 = UINT64_MAX;
	static uint64_t x591 = UINT64_MAX;
	int16_t x592 = -1;
	volatile uint64_t t41 = 8701075762669001LLU;

	t41 = (x589*(x590<<(x591/x592)));

	if (t41 != 65536LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x593 = 87LLU;
	volatile uint32_t x595 = 1690576763U;
	int64_t x596 = -6128408942340969LL;
	volatile uint64_t t42 = 3849906223602LLU;

	t42 = (x593*(x594<<(x595/x596)));

	if (t42 != 29232LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x606 = 106445866654LLU;
	int32_t x608 = INT32_MAX;

	t43 = (x605*(x606<<(x607/x608)));

	if (t43 != 319337599962LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x610 = 15;
	static uint64_t x611 = 0LLU;
	int32_t x612 = INT32_MIN;
	static uint64_t t44 = 13LLU;

	t44 = (x609*(x610<<(x611/x612)));

	if (t44 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x621 = UINT8_MAX;
	static uint8_t x622 = 4U;
	int32_t x623 = -1;

	t45 = (x621*(x622<<(x623/x624)));

	if (t45 != 2040) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x625 = INT8_MIN;
	uint64_t x626 = UINT64_MAX;
	int64_t x627 = -1LL;
	volatile uint32_t x628 = UINT32_MAX;

	t46 = (x625*(x626<<(x627/x628)));

	if (t46 != 128LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x649 = -39605251LL;
	uint64_t x650 = 719887879686LLU;

	t47 = (x649*(x650<<(x651/x652)));

	if (t47 != 8382147980597272046LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x657 = INT8_MIN;
	uint16_t x658 = UINT16_MAX;
	int32_t x659 = -40;
	static volatile int16_t x660 = 193;
	volatile int32_t t48 = 21;

	t48 = (x657*(x658<<(x659/x660)));

	if (t48 != -8388480) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x665 = 7U;
	uint8_t x667 = 63U;
	static int64_t x668 = 1130202LL;
	int32_t t49 = 0;

	t49 = (x665*(x666<<(x667/x668)));

	if (t49 != 229369) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x669 = 14U;
	int16_t x670 = 2321;
	int32_t x671 = 46;
	int32_t x672 = INT32_MIN;
	static int32_t t50 = -97900723;

	t50 = (x669*(x670<<(x671/x672)));

	if (t50 != 32494) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x673 = UINT8_MAX;
	static int8_t x674 = INT8_MAX;
	static int32_t x675 = INT32_MIN;
	volatile int64_t x676 = -17212819930320403LL;
	static int32_t t51 = 35867;

	t51 = (x673*(x674<<(x675/x676)));

	if (t51 != 32385) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x681 = UINT32_MAX;
	uint8_t x682 = 26U;
	static int8_t x683 = 1;
	static int8_t x684 = -27;
	volatile uint32_t t52 = 485656U;

	t52 = (x681*(x682<<(x683/x684)));

	if (t52 != 4294967270U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x713 = 5766142LLU;
	static uint8_t x714 = 3U;
	uint64_t t53 = 66682844351LLU;

	t53 = (x713*(x714<<(x715/x716)));

	if (t53 != 17298426LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x717 = INT16_MAX;
	volatile uint32_t x718 = 4783916U;
	uint32_t x719 = 87212U;
	volatile uint32_t x720 = UINT32_MAX;
	uint32_t t54 = 3855U;

	t54 = (x717*(x718<<(x719/x720)));

	if (t54 != 2135752916U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x730 = UINT64_MAX;
	static uint16_t x731 = 6002U;
	int32_t x732 = INT32_MAX;
	static uint64_t t55 = 1033406369LLU;

	t55 = (x729*(x730<<(x731/x732)));

	if (t55 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x746 = 1;
	static int32_t x747 = -430674658;
	static uint32_t x748 = UINT32_MAX;
	volatile int64_t t56 = INT64_MIN;

	t56 = (x745*(x746<<(x747/x748)));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x758 = INT8_MAX;
	volatile int16_t x759 = -1;
	int64_t x760 = 1016562LL;
	volatile int32_t t57 = -1373;

	t57 = (x757*(x758<<(x759/x760)));

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x761 = 16248140369250554LLU;
	int64_t x762 = INT64_MAX;
	uint64_t x763 = 34816806871LLU;
	static int32_t x764 = INT32_MIN;

	t58 = (x761*(x762<<(x763/x764)));

	if (t58 != 18430495933340301062LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x771 = 42;

	t59 = (x769*(x770<<(x771/x772)));

	if (t59 != 319839LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x777 = UINT64_MAX;
	int32_t x778 = 0;
	static volatile int8_t x779 = INT8_MAX;
	volatile uint32_t x780 = UINT32_MAX;
	volatile uint64_t t60 = 2LLU;

	t60 = (x777*(x778<<(x779/x780)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x797 = 3;
	static uint32_t x798 = 207438911U;
	int64_t x799 = -1LL;
	int32_t x800 = -1;
	static uint32_t t61 = 6147U;

	t61 = (x797*(x798<<(x799/x800)));

	if (t61 != 1244633466U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x849 = INT16_MAX;
	int8_t x850 = 0;
	uint64_t x851 = UINT64_MAX;
	int64_t x852 = -4084590024567274115LL;
	int32_t t62 = -57793726;

	t62 = (x849*(x850<<(x851/x852)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x857 = -1;
	static volatile uint16_t x859 = 120U;
	volatile int32_t x860 = -3806175;
	volatile int32_t t63 = -717877656;

	t63 = (x857*(x858<<(x859/x860)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x877 = INT16_MAX;
	int8_t x878 = 1;
	int32_t x879 = -1;
	static volatile int32_t t64 = 122070563;

	t64 = (x877*(x878<<(x879/x880)));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x897 = -25;
	static int8_t x898 = INT8_MAX;
	int32_t t65 = -460973;

	t65 = (x897*(x898<<(x899/x900)));

	if (t65 != -3175) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x961 = UINT32_MAX;
	int64_t x963 = -1LL;
	uint32_t t66 = 13203U;

	t66 = (x961*(x962<<(x963/x964)));

	if (t66 != 4294967280U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x986 = 1;
	static uint16_t x987 = 6U;
	int32_t t67 = 0;

	t67 = (x985*(x986<<(x987/x988)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x998 = 681U;
	volatile uint16_t x999 = UINT16_MAX;
	uint64_t x1000 = UINT64_MAX;
	uint32_t t68 = 250U;

	t68 = (x997*(x998<<(x999/x1000)));

	if (t68 != 4294963891U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1002 = 1961232197LLU;
	int32_t x1003 = -3663250;
	static int64_t x1004 = 10633663902LL;
	static uint64_t t69 = 0LLU;

	t69 = (x1001*(x1002<<(x1003/x1004)));

	if (t69 != 458002632501016LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x1014 = UINT32_MAX;
	volatile uint64_t x1015 = 14LLU;
	uint16_t x1016 = 1524U;

	t70 = (x1013*(x1014<<(x1015/x1016)));

	if (t70 != 4294967282U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1025 = -1;
	int32_t x1027 = 164;
	int64_t x1028 = 42282599683126179LL;
	int64_t t71 = -136559385311034507LL;

	t71 = (x1025*(x1026<<(x1027/x1028)));

	if (t71 != -4210908LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x1101 = -15;
	int8_t x1102 = INT8_MAX;
	int64_t x1104 = -252954799996LL;
	volatile int32_t t72 = 1147313;

	t72 = (x1101*(x1102<<(x1103/x1104)));

	if (t72 != -1905) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1113 = INT8_MIN;
	volatile uint16_t x1114 = 150U;
	int32_t x1115 = -1;
	static uint32_t x1116 = UINT32_MAX;
	int32_t t73 = 213722269;

	t73 = (x1113*(x1114<<(x1115/x1116)));

	if (t73 != -38400) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1121 = -69041075829326LL;
	uint8_t x1122 = 0U;
	int64_t x1124 = INT64_MIN;
	volatile int64_t t74 = 687343454184LL;

	t74 = (x1121*(x1122<<(x1123/x1124)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1129 = UINT16_MAX;
	int8_t x1131 = INT8_MIN;
	int64_t x1132 = INT64_MIN;
	volatile int32_t t75 = -13368;

	t75 = (x1129*(x1130<<(x1131/x1132)));

	if (t75 != 1376235) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1153 = -1;
	int32_t x1154 = 11195;
	volatile int64_t x1155 = -1LL;
	uint16_t x1156 = 45U;

	t76 = (x1153*(x1154<<(x1155/x1156)));

	if (t76 != -11195) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x1165 = -1;
	int32_t x1166 = INT32_MAX;
	static int8_t x1167 = -25;
	int32_t x1168 = INT32_MIN;
	volatile int32_t t77 = -471;

	t77 = (x1165*(x1166<<(x1167/x1168)));

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1189 = -1;
	uint8_t x1190 = 3U;
	volatile uint16_t x1191 = 4089U;
	static volatile int32_t x1192 = 3029;
	int32_t t78 = -51;

	t78 = (x1189*(x1190<<(x1191/x1192)));

	if (t78 != -6) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1193 = INT8_MAX;
	int64_t x1196 = INT64_MIN;
	uint64_t t79 = 302754LLU;

	t79 = (x1193*(x1194<<(x1195/x1196)));

	if (t79 != 13610119539370283816LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x1210 = UINT32_MAX;
	static int8_t x1211 = INT8_MIN;
	int16_t x1212 = INT16_MAX;
	volatile uint32_t t80 = 188440239U;

	t80 = (x1209*(x1210<<(x1211/x1212)));

	if (t80 != 4294967041U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x1217 = INT16_MIN;
	uint16_t x1219 = UINT16_MAX;
	uint32_t x1220 = UINT32_MAX;
	static uint32_t t81 = 1184395191U;

	t81 = (x1217*(x1218<<(x1219/x1220)));

	if (t81 != 4048519168U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1229 = INT64_MIN;
	int64_t x1232 = INT64_MAX;
	uint64_t t82 = 2089494086035LLU;

	t82 = (x1229*(x1230<<(x1231/x1232)));

	if (t82 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1241 = UINT8_MAX;
	int32_t x1243 = -3;
	volatile uint8_t x1244 = 79U;
	volatile int64_t t83 = -2138687639485LL;

	t83 = (x1241*(x1242<<(x1243/x1244)));

	if (t83 != 24760119911570700LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1253 = INT32_MIN;
	volatile uint32_t x1254 = 0U;
	int8_t x1256 = INT8_MAX;
	uint32_t t84 = 23785U;

	t84 = (x1253*(x1254<<(x1255/x1256)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1265 = -1;
	uint64_t x1266 = 5LLU;
	uint32_t x1267 = UINT32_MAX;
	static uint32_t x1268 = 1781541390U;
	uint64_t t85 = 1740953LLU;

	t85 = (x1265*(x1266<<(x1267/x1268)));

	if (t85 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x1297 = -1;
	uint32_t x1298 = 1742U;
	uint16_t x1299 = 1U;
	static uint16_t x1300 = 1317U;
	uint32_t t86 = 818257088U;

	t86 = (x1297*(x1298<<(x1299/x1300)));

	if (t86 != 4294965554U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x1301 = INT16_MIN;
	volatile int16_t x1302 = INT16_MAX;
	uint32_t x1303 = UINT32_MAX;
	int16_t x1304 = -218;
	static int32_t t87 = 115;

	t87 = (x1301*(x1302<<(x1303/x1304)));

	if (t87 != -2147418112) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x1307 = -1;
	uint16_t x1308 = UINT16_MAX;
	int32_t t88 = -53993665;

	t88 = (x1305*(x1306<<(x1307/x1308)));

	if (t88 != -65535) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1337 = 13702308LLU;
	int16_t x1339 = 23;
	uint32_t x1340 = 1333266832U;
	volatile uint64_t t89 = 38470957LLU;

	t89 = (x1337*(x1338<<(x1339/x1340)));

	if (t89 != 13702308LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x1341 = UINT16_MAX;
	uint64_t x1342 = 711399LLU;
	uint8_t x1343 = 109U;
	int8_t x1344 = INT8_MIN;
	static uint64_t t90 = 8651176259876892447LLU;

	t90 = (x1341*(x1342<<(x1343/x1344)));

	if (t90 != 46621533465LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1385 = 1000;
	uint64_t x1386 = 47629LLU;
	volatile uint8_t x1388 = UINT8_MAX;

	t91 = (x1385*(x1386<<(x1387/x1388)));

	if (t91 != 47629000LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x1409 = INT8_MIN;
	static uint8_t x1410 = UINT8_MAX;
	volatile int16_t x1411 = INT16_MIN;
	volatile int64_t x1412 = INT64_MAX;
	int32_t t92 = -40558;

	t92 = (x1409*(x1410<<(x1411/x1412)));

	if (t92 != -32640) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x1449 = 768118491U;
	static uint8_t x1450 = UINT8_MAX;
	static int8_t x1451 = 0;
	int8_t x1452 = -11;

	t93 = (x1449*(x1450<<(x1451/x1452)));

	if (t93 != 2596686885U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1457 = -1;
	uint16_t x1458 = 37U;
	volatile int32_t x1459 = INT32_MIN;
	static int64_t x1460 = INT64_MIN;
	volatile int32_t t94 = -5006;

	t94 = (x1457*(x1458<<(x1459/x1460)));

	if (t94 != -37) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x1505 = 13700U;
	uint8_t x1506 = UINT8_MAX;
	static int16_t x1507 = -2251;
	int16_t x1508 = INT16_MAX;

	t95 = (x1505*(x1506<<(x1507/x1508)));

	if (t95 != 3493500) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1545 = 451LLU;
	volatile int8_t x1547 = -19;
	static int16_t x1548 = 213;
	volatile uint64_t t96 = 333882168LLU;

	t96 = (x1545*(x1546<<(x1547/x1548)));

	if (t96 != 451451LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1557 = 1U;
	volatile int32_t x1558 = 334897105;
	int32_t x1559 = -1;
	int64_t x1560 = 1729820LL;
	int32_t t97 = -4945137;

	t97 = (x1557*(x1558<<(x1559/x1560)));

	if (t97 != 334897105) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1561 = -1;
	int32_t x1563 = -1;
	volatile uint8_t x1564 = 22U;
	static int32_t t98 = -2;

	t98 = (x1561*(x1562<<(x1563/x1564)));

	if (t98 != -372) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x1569 = INT32_MIN;
	volatile uint64_t x1570 = UINT64_MAX;
	uint16_t x1571 = 506U;
	static volatile uint64_t t99 = 1756701276447288923LLU;

	t99 = (x1569*(x1570<<(x1571/x1572)));

	if (t99 != 2147483648LLU) { NG(); } else { ; }
	
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

