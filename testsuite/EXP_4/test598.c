#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x19 = 2U;
uint32_t x45 = 42U;
static uint64_t x93 = UINT64_MAX;
int32_t x119 = 0;
volatile int16_t x120 = 3260;
volatile uint64_t t5 = 75741572549267LLU;
uint32_t t6 = 421558337U;
static int16_t x166 = INT16_MAX;
int8_t x168 = 13;
uint16_t x177 = 26153U;
uint16_t x191 = UINT16_MAX;
uint64_t x192 = 40271559LLU;
static volatile int64_t x196 = 1153567589452935884LL;
int16_t x211 = 252;
int64_t t15 = -2750938504063669065LL;
volatile int32_t x232 = -13559214;
volatile int64_t x240 = -345897LL;
uint16_t x243 = 120U;
static volatile int8_t x285 = 62;
static uint16_t x347 = 656U;
int64_t x356 = INT64_MIN;
int8_t x359 = 30;
static volatile uint32_t x360 = UINT32_MAX;
int16_t x362 = 3;
static uint8_t x386 = 0U;
static uint64_t x397 = 541738LLU;
static volatile uint64_t t32 = 78LLU;
int16_t x405 = 3;
int8_t x408 = 13;
int64_t x412 = INT64_MIN;
uint64_t x445 = 27705LLU;
static int8_t x457 = -5;
int32_t x481 = INT32_MIN;
volatile int64_t t44 = -21610378126LL;
int64_t x532 = INT64_MIN;
volatile int64_t t46 = 137LL;
static uint64_t x541 = 22850LLU;
volatile uint32_t t48 = 43768670U;
int64_t x565 = 435547345665974524LL;
int16_t x586 = INT16_MAX;
volatile int16_t x607 = -1;
int32_t t52 = -14;
static volatile int32_t x640 = INT32_MIN;
volatile int32_t x660 = INT32_MIN;
volatile int32_t x692 = -620161042;
volatile int32_t x701 = 86;
uint32_t x702 = 5756U;
int32_t x704 = 1;
volatile uint64_t x735 = 8684LLU;
volatile uint32_t t61 = 77U;
static int32_t x752 = INT32_MIN;
static uint64_t x765 = UINT64_MAX;
int64_t x768 = INT64_MIN;
int8_t x769 = INT8_MAX;
int8_t x795 = -1;
int32_t x796 = INT32_MIN;
static int16_t x814 = 0;
int64_t x831 = -6LL;
volatile uint64_t t70 = 374350824896232681LLU;
uint32_t x850 = 738094U;
static int16_t x852 = INT16_MIN;
uint64_t t75 = 7426365953197079367LLU;
volatile uint32_t x923 = 7634449U;
static volatile int64_t x937 = INT64_MAX;
uint16_t x940 = 22766U;
static int64_t x1008 = -610410009199396642LL;
volatile int16_t x1029 = INT16_MIN;
int16_t x1032 = INT16_MAX;
uint8_t x1035 = 51U;
int8_t x1075 = 13;
int64_t x1116 = INT64_MIN;
uint64_t t90 = 723400LLU;
volatile uint16_t x1142 = UINT16_MAX;
int64_t x1144 = INT64_MIN;
volatile int32_t t92 = 243651;
static volatile int32_t x1155 = -108248491;
int64_t x1156 = INT64_MAX;
uint64_t t96 = 6959LLU;
uint64_t x1173 = 2807469LLU;
volatile uint64_t x1174 = UINT64_MAX;
volatile uint32_t x1176 = 232428660U;
uint64_t t98 = 574LLU;


void f0(void) {
	uint8_t x17 = 1U;
	uint32_t x18 = 10750414U;
	uint16_t x20 = 4U;
	uint32_t t0 = 242U;

	t0 = (x17^(x18>>(x19/x20)));

	if (t0 != 10750415U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x37 = 11944805850472115LLU;
	uint32_t x38 = 18784776U;
	int64_t x39 = 201500LL;
	static uint64_t x40 = 83670536LLU;
	static uint64_t t1 = 6683165203377247LLU;

	t1 = (x37^(x38>>(x39/x40)));

	if (t1 != 11944805835635899LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x46 = 2U;
	int8_t x47 = INT8_MAX;
	int32_t x48 = 865573855;
	uint32_t t2 = 1U;

	t2 = (x45^(x46>>(x47/x48)));

	if (t2 != 40U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x77 = 11U;
	uint64_t x78 = 25367LLU;
	int16_t x79 = -40;
	int32_t x80 = -1;
	static volatile uint64_t t3 = 11876239116876LLU;

	t3 = (x77^(x78>>(x79/x80)));

	if (t3 != 11LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = INT16_MAX;
	int32_t x96 = INT32_MIN;
	uint64_t t4 = 3LLU;

	t4 = (x93^(x94>>(x95/x96)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x117 = INT16_MAX;
	uint64_t x118 = 3LLU;

	t5 = (x117^(x118>>(x119/x120)));

	if (t5 != 32764LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x125 = 464U;
	uint32_t x126 = 930U;
	uint32_t x127 = 2073443U;
	uint32_t x128 = 668207270U;

	t6 = (x125^(x126>>(x127/x128)));

	if (t6 != 626U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x153 = -1LL;
	uint8_t x154 = 60U;
	int8_t x155 = INT8_MAX;
	int16_t x156 = 255;
	volatile int64_t t7 = -15959630186LL;

	t7 = (x153^(x154>>(x155/x156)));

	if (t7 != -61LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x157 = UINT8_MAX;
	int8_t x158 = INT8_MAX;
	volatile uint64_t x159 = UINT64_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t8 = -6267954;

	t8 = (x157^(x158>>(x159/x160)));

	if (t8 != 192) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x165 = 33;
	uint8_t x167 = UINT8_MAX;
	static volatile int32_t t9 = 23712106;

	t9 = (x165^(x166>>(x167/x168)));

	if (t9 != 33) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x173 = UINT64_MAX;
	static volatile uint8_t x174 = UINT8_MAX;
	uint32_t x175 = 159U;
	volatile int32_t x176 = INT32_MIN;
	uint64_t t10 = 6163158LLU;

	t10 = (x173^(x174>>(x175/x176)));

	if (t10 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x178 = 11U;
	int16_t x179 = INT16_MAX;
	static uint32_t x180 = 2770U;
	int32_t t11 = 1065001;

	t11 = (x177^(x178>>(x179/x180)));

	if (t11 != 26153) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x189 = INT64_MIN;
	static uint8_t x190 = 112U;
	int64_t t12 = 0LL;

	t12 = (x189^(x190>>(x191/x192)));

	if (t12 != -9223372036854775696LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x193 = UINT8_MAX;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = INT64_MAX;
	volatile uint32_t t13 = 54746669U;

	t13 = (x193^(x194>>(x195/x196)));

	if (t13 != 33554176U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x197 = 172097117356LLU;
	uint16_t x198 = UINT16_MAX;
	static volatile int32_t x199 = -498021;
	volatile uint32_t x200 = UINT32_MAX;
	static volatile uint64_t t14 = 1782842056LLU;

	t14 = (x197^(x198>>(x199/x200)));

	if (t14 != 172097102675LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x209 = 106U;
	volatile int64_t x210 = INT64_MAX;
	volatile uint64_t x212 = UINT64_MAX;

	t15 = (x209^(x210>>(x211/x212)));

	if (t15 != 9223372036854775701LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x217 = 752055463U;
	uint16_t x218 = 13U;
	int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;
	volatile uint32_t t16 = 23U;

	t16 = (x217^(x218>>(x219/x220)));

	if (t16 != 752055457U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x221 = -1;
	static volatile uint16_t x222 = 14U;
	int8_t x223 = 10;
	uint32_t x224 = 519867U;
	int32_t t17 = 4;

	t17 = (x221^(x222>>(x223/x224)));

	if (t17 != -15) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x229 = -1;
	volatile uint64_t x230 = 403234LLU;
	static int16_t x231 = -7;
	uint64_t t18 = 3863652947774602LLU;

	t18 = (x229^(x230>>(x231/x232)));

	if (t18 != 18446744073709148381LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x237 = 3669827LL;
	int64_t x238 = INT64_MAX;
	volatile int16_t x239 = -1;
	volatile int64_t t19 = 1843152067261LL;

	t19 = (x237^(x238>>(x239/x240)));

	if (t19 != 9223372036851105980LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	int16_t x244 = INT16_MAX;
	uint32_t t20 = 0U;

	t20 = (x241^(x242>>(x243/x244)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x249 = INT8_MIN;
	uint32_t x250 = 17028U;
	volatile int64_t x251 = 1LL;
	uint32_t x252 = 625U;
	static volatile uint32_t t21 = 3668920U;

	t21 = (x249^(x250>>(x251/x252)));

	if (t21 != 4294950148U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x261 = -1;
	int16_t x262 = 430;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MIN;
	static int32_t t22 = -1;

	t22 = (x261^(x262>>(x263/x264)));

	if (t22 != -216) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x286 = 57;
	volatile int16_t x287 = INT16_MIN;
	volatile int16_t x288 = INT16_MIN;
	volatile int32_t t23 = 0;

	t23 = (x285^(x286>>(x287/x288)));

	if (t23 != 34) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x321 = INT16_MIN;
	volatile uint32_t x322 = UINT32_MAX;
	int8_t x323 = -1;
	int32_t x324 = -24061463;
	volatile uint32_t t24 = 241788U;

	t24 = (x321^(x322>>(x323/x324)));

	if (t24 != 32767U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x333 = INT16_MIN;
	volatile uint32_t x334 = UINT32_MAX;
	uint8_t x335 = UINT8_MAX;
	static uint16_t x336 = UINT16_MAX;
	uint32_t t25 = 37U;

	t25 = (x333^(x334>>(x335/x336)));

	if (t25 != 32767U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x345 = INT8_MIN;
	volatile uint32_t x346 = UINT32_MAX;
	int64_t x348 = INT64_MAX;
	uint32_t t26 = 490U;

	t26 = (x345^(x346>>(x347/x348)));

	if (t26 != 127U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x353 = -1;
	uint8_t x354 = 1U;
	int64_t x355 = -68759946672628LL;
	volatile int32_t t27 = 43275;

	t27 = (x353^(x354>>(x355/x356)));

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x357 = 54202366U;
	volatile uint16_t x358 = 20036U;
	volatile uint32_t t28 = 38U;

	t28 = (x357^(x358>>(x359/x360)));

	if (t28 != 54215098U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x361 = 31U;
	static volatile int8_t x363 = INT8_MAX;
	volatile int8_t x364 = INT8_MIN;
	int32_t t29 = 8367871;

	t29 = (x361^(x362>>(x363/x364)));

	if (t29 != 28) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x385 = -18;
	int32_t x387 = -1;
	uint32_t x388 = UINT32_MAX;
	volatile int32_t t30 = -2259916;

	t30 = (x385^(x386>>(x387/x388)));

	if (t30 != -18) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MAX;
	uint64_t x395 = 1275384LLU;
	volatile int8_t x396 = -1;
	volatile int32_t t31 = 41;

	t31 = (x393^(x394>>(x395/x396)));

	if (t31 != -2147450881) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x398 = UINT8_MAX;
	int8_t x399 = -30;
	int8_t x400 = INT8_MIN;

	t32 = (x397^(x398>>(x399/x400)));

	if (t32 != 541909LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x406 = 381813545990457381LL;
	int64_t x407 = 15LL;
	volatile int64_t t33 = -4508889498979751412LL;

	t33 = (x405^(x406>>(x407/x408)));

	if (t33 != 190906772995228689LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x409 = -3;
	volatile uint32_t x410 = UINT32_MAX;
	volatile int32_t x411 = -1;
	uint32_t t34 = 65195U;

	t34 = (x409^(x410>>(x411/x412)));

	if (t34 != 2U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x413 = UINT64_MAX;
	uint16_t x414 = 649U;
	uint64_t x415 = UINT64_MAX;
	int32_t x416 = INT32_MIN;
	static uint64_t t35 = 5169867866LLU;

	t35 = (x413^(x414>>(x415/x416)));

	if (t35 != 18446744073709551291LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x433 = 15LLU;
	uint16_t x434 = UINT16_MAX;
	int8_t x435 = INT8_MAX;
	int64_t x436 = INT64_MAX;
	volatile uint64_t t36 = 501886LLU;

	t36 = (x433^(x434>>(x435/x436)));

	if (t36 != 65520LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x437 = -1LL;
	uint16_t x438 = 3163U;
	uint64_t x439 = 12LLU;
	int8_t x440 = INT8_MAX;
	static int64_t t37 = 235980LL;

	t37 = (x437^(x438>>(x439/x440)));

	if (t37 != -3164LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x446 = 0U;
	int16_t x447 = 23;
	int32_t x448 = INT32_MIN;
	volatile uint64_t t38 = 51LLU;

	t38 = (x445^(x446>>(x447/x448)));

	if (t38 != 27705LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x458 = INT16_MAX;
	volatile int8_t x459 = -1;
	int16_t x460 = 14196;
	static int32_t t39 = -433615;

	t39 = (x457^(x458>>(x459/x460)));

	if (t39 != -32764) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x473 = INT16_MAX;
	static uint16_t x474 = 6U;
	int64_t x475 = 45950LL;
	uint64_t x476 = 5261LLU;
	int32_t t40 = -444;

	t40 = (x473^(x474>>(x475/x476)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x477 = 438887642U;
	uint8_t x478 = 6U;
	int64_t x479 = INT64_MAX;
	uint64_t x480 = 894182813668196449LLU;
	uint32_t t41 = 1465166728U;

	t41 = (x477^(x478>>(x479/x480)));

	if (t41 != 438887642U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x482 = 11;
	int32_t x483 = -1;
	volatile int64_t x484 = -1LL;
	volatile int32_t t42 = 0;

	t42 = (x481^(x482>>(x483/x484)));

	if (t42 != -2147483643) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x485 = -1;
	static uint32_t x486 = 13973U;
	static int8_t x487 = INT8_MIN;
	volatile int64_t x488 = 394313337048LL;
	uint32_t t43 = 341039602U;

	t43 = (x485^(x486>>(x487/x488)));

	if (t43 != 4294953322U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x493 = INT64_MIN;
	uint16_t x494 = 85U;
	int32_t x495 = INT32_MIN;
	static volatile int64_t x496 = INT64_MIN;

	t44 = (x493^(x494>>(x495/x496)));

	if (t44 != -9223372036854775723LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x529 = -44245;
	uint8_t x530 = 118U;
	int16_t x531 = -1;
	static volatile int32_t t45 = 374333395;

	t45 = (x529^(x530>>(x531/x532)));

	if (t45 != -44195) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x537 = INT64_MIN;
	static uint16_t x538 = 6718U;
	uint64_t x539 = UINT64_MAX;
	static int32_t x540 = INT32_MIN;

	t46 = (x537^(x538>>(x539/x540)));

	if (t46 != -9223372036854772449LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x542 = UINT64_MAX;
	int32_t x543 = -3;
	uint8_t x544 = UINT8_MAX;
	volatile uint64_t t47 = 352LLU;

	t47 = (x541^(x542>>(x543/x544)));

	if (t47 != 18446744073709528765LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x549 = INT32_MAX;
	static uint32_t x550 = 295659U;
	int8_t x551 = -14;
	uint32_t x552 = UINT32_MAX;

	t48 = (x549^(x550>>(x551/x552)));

	if (t48 != 2147187988U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x566 = UINT16_MAX;
	static int64_t x567 = -5310905LL;
	volatile uint32_t x568 = UINT32_MAX;
	static int64_t t49 = 3530771787460095LL;

	t49 = (x565^(x566>>(x567/x568)));

	if (t49 != 435547345665924867LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x569 = INT32_MIN;
	int16_t x570 = 7632;
	static volatile uint8_t x571 = 1U;
	int16_t x572 = -480;
	volatile int32_t t50 = 178091451;

	t50 = (x569^(x570>>(x571/x572)));

	if (t50 != -2147476016) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x585 = INT32_MAX;
	int64_t x587 = INT64_MIN;
	int64_t x588 = INT64_MIN;
	volatile int32_t t51 = -7;

	t51 = (x585^(x586>>(x587/x588)));

	if (t51 != 2147467264) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x605 = -1751185;
	uint8_t x606 = UINT8_MAX;
	int64_t x608 = INT64_MAX;

	t52 = (x605^(x606>>(x607/x608)));

	if (t52 != -1751152) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x609 = 10756865692986LLU;
	int8_t x610 = 20;
	static uint32_t x611 = UINT32_MAX;
	int64_t x612 = INT64_MIN;
	uint64_t t53 = 231814588322721LLU;

	t53 = (x609^(x610>>(x611/x612)));

	if (t53 != 10756865692974LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x637 = INT64_MIN;
	volatile uint64_t x638 = 28790264005286299LLU;
	int32_t x639 = 7;
	uint64_t t54 = 14295LLU;

	t54 = (x637^(x638>>(x639/x640)));

	if (t54 != 9252162300860062107LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x649 = INT16_MAX;
	int64_t x650 = INT64_MAX;
	static int8_t x651 = INT8_MIN;
	int64_t x652 = INT64_MIN;
	int64_t t55 = -249LL;

	t55 = (x649^(x650>>(x651/x652)));

	if (t55 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x657 = UINT32_MAX;
	int64_t x658 = 57296475018210LL;
	int32_t x659 = -13;
	volatile int64_t t56 = 12LL;

	t56 = (x657^(x658>>(x659/x660)));

	if (t56 != 57297547406365LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x681 = INT64_MIN;
	static uint16_t x682 = 8U;
	int16_t x683 = -821;
	static uint64_t x684 = UINT64_MAX;
	volatile int64_t t57 = -16259851307LL;

	t57 = (x681^(x682>>(x683/x684)));

	if (t57 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x689 = INT16_MAX;
	uint32_t x690 = UINT32_MAX;
	static int8_t x691 = -32;
	uint32_t t58 = 5U;

	t58 = (x689^(x690>>(x691/x692)));

	if (t58 != 4294934528U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x703 = 4U;
	static volatile uint32_t t59 = 0U;

	t59 = (x701^(x702>>(x703/x704)));

	if (t59 != 305U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x729 = INT16_MAX;
	uint8_t x730 = UINT8_MAX;
	uint16_t x731 = 2U;
	int64_t x732 = INT64_MAX;
	static int32_t t60 = 4;

	t60 = (x729^(x730>>(x731/x732)));

	if (t60 != 32512) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x733 = 782U;
	uint32_t x734 = 129101U;
	int8_t x736 = -1;

	t61 = (x733^(x734>>(x735/x736)));

	if (t61 != 129859U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x749 = INT64_MIN;
	int8_t x750 = 15;
	int32_t x751 = -7;
	volatile int64_t t62 = 15829LL;

	t62 = (x749^(x750>>(x751/x752)));

	if (t62 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x761 = 191;
	uint64_t x762 = UINT64_MAX;
	int8_t x763 = INT8_MIN;
	static int64_t x764 = 4098850747355536LL;
	static volatile uint64_t t63 = 170456267658LLU;

	t63 = (x761^(x762>>(x763/x764)));

	if (t63 != 18446744073709551424LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x766 = 1445947755462915061LL;
	int8_t x767 = INT8_MIN;
	uint64_t t64 = 58061LLU;

	t64 = (x765^(x766>>(x767/x768)));

	if (t64 != 17000796318246636554LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x770 = 73U;
	int8_t x771 = INT8_MIN;
	int8_t x772 = -7;
	int32_t t65 = -469;

	t65 = (x769^(x770>>(x771/x772)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x793 = INT8_MAX;
	uint8_t x794 = UINT8_MAX;
	int32_t t66 = -32;

	t66 = (x793^(x794>>(x795/x796)));

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x813 = INT8_MAX;
	static int16_t x815 = INT16_MAX;
	static int16_t x816 = 1190;
	volatile int32_t t67 = 0;

	t67 = (x813^(x814>>(x815/x816)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x817 = INT8_MIN;
	uint16_t x818 = 146U;
	static uint16_t x819 = 1U;
	static int64_t x820 = -2974337LL;
	static volatile int32_t t68 = 90574463;

	t68 = (x817^(x818>>(x819/x820)));

	if (t68 != -238) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x825 = INT64_MAX;
	volatile int8_t x826 = 0;
	int16_t x827 = 8;
	int64_t x828 = INT64_MIN;
	volatile int64_t t69 = INT64_MAX;

	t69 = (x825^(x826>>(x827/x828)));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x829 = INT8_MIN;
	volatile uint64_t x830 = 131002919931062976LLU;
	static volatile int64_t x832 = -1LL;

	t70 = (x829^(x830>>(x831/x832)));

	if (t70 != 18444697153085628715LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x849 = INT32_MIN;
	volatile int16_t x851 = -1;
	uint32_t t71 = 71U;

	t71 = (x849^(x850>>(x851/x852)));

	if (t71 != 2148221742U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x873 = UINT16_MAX;
	volatile int8_t x874 = 0;
	static uint8_t x875 = UINT8_MAX;
	static uint16_t x876 = 12U;
	static volatile int32_t t72 = 1484220;

	t72 = (x873^(x874>>(x875/x876)));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x881 = INT8_MIN;
	volatile int16_t x882 = 474;
	int32_t x883 = -1;
	int16_t x884 = INT16_MIN;
	volatile int32_t t73 = 15919;

	t73 = (x881^(x882>>(x883/x884)));

	if (t73 != -422) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x901 = UINT32_MAX;
	int64_t x902 = INT64_MAX;
	static uint32_t x903 = 63551U;
	volatile int32_t x904 = INT32_MAX;
	volatile int64_t t74 = 5906LL;

	t74 = (x901^(x902>>(x903/x904)));

	if (t74 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x917 = UINT32_MAX;
	volatile uint64_t x918 = UINT64_MAX;
	static volatile uint8_t x919 = 0U;
	static int64_t x920 = INT64_MIN;

	t75 = (x917^(x918>>(x919/x920)));

	if (t75 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x921 = UINT8_MAX;
	static uint16_t x922 = UINT16_MAX;
	int64_t x924 = INT64_MIN;
	volatile int32_t t76 = -1;

	t76 = (x921^(x922>>(x923/x924)));

	if (t76 != 65280) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x938 = UINT32_MAX;
	int16_t x939 = -2173;
	int64_t t77 = 176834LL;

	t77 = (x937^(x938>>(x939/x940)));

	if (t77 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x965 = INT16_MIN;
	int64_t x966 = 1228834849LL;
	static int32_t x967 = 861;
	int8_t x968 = INT8_MAX;
	volatile int64_t t78 = -12LL;

	t78 = (x965^(x966>>(x967/x968)));

	if (t78 != -19170784LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x969 = INT16_MAX;
	uint64_t x970 = UINT64_MAX;
	int8_t x971 = -1;
	uint32_t x972 = UINT32_MAX;
	volatile uint64_t t79 = 11329LLU;

	t79 = (x969^(x970>>(x971/x972)));

	if (t79 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x985 = 3LLU;
	static int16_t x986 = 943;
	int32_t x987 = INT32_MIN;
	static int32_t x988 = INT32_MIN;
	uint64_t t80 = 73804LLU;

	t80 = (x985^(x986>>(x987/x988)));

	if (t80 != 468LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1005 = UINT64_MAX;
	volatile uint32_t x1006 = 116752139U;
	static int8_t x1007 = -1;
	volatile uint64_t t81 = 3LLU;

	t81 = (x1005^(x1006>>(x1007/x1008)));

	if (t81 != 18446744073592799476LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x1025 = 4U;
	int8_t x1026 = INT8_MAX;
	int8_t x1027 = INT8_MAX;
	int16_t x1028 = INT16_MIN;
	int32_t t82 = -525321962;

	t82 = (x1025^(x1026>>(x1027/x1028)));

	if (t82 != 123) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1030 = INT8_MAX;
	int16_t x1031 = -91;
	int32_t t83 = -18576389;

	t83 = (x1029^(x1030>>(x1031/x1032)));

	if (t83 != -32641) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1033 = UINT8_MAX;
	volatile int64_t x1034 = 1515446375185LL;
	uint64_t x1036 = UINT64_MAX;
	volatile int64_t t84 = 385LL;

	t84 = (x1033^(x1034>>(x1035/x1036)));

	if (t84 != 1515446375406LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x1045 = INT32_MIN;
	uint64_t x1046 = 17853878841752284LLU;
	int8_t x1047 = INT8_MAX;
	int8_t x1048 = INT8_MAX;
	volatile uint64_t t85 = 20LLU;

	t85 = (x1045^(x1046>>(x1047/x1048)));

	if (t85 != 18437817132581182830LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x1069 = UINT8_MAX;
	volatile int64_t x1070 = 5143LL;
	static uint8_t x1071 = 84U;
	static uint16_t x1072 = 297U;
	static volatile int64_t t86 = 2004891901LL;

	t86 = (x1069^(x1070>>(x1071/x1072)));

	if (t86 != 5352LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x1073 = INT8_MIN;
	static int64_t x1074 = 116383901716963LL;
	volatile int16_t x1076 = INT16_MIN;
	volatile int64_t t87 = -27910LL;

	t87 = (x1073^(x1074>>(x1075/x1076)));

	if (t87 != -116383901716893LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1081 = INT8_MIN;
	uint16_t x1082 = 17350U;
	int8_t x1083 = -1;
	static int16_t x1084 = 36;
	int32_t t88 = 0;

	t88 = (x1081^(x1082>>(x1083/x1084)));

	if (t88 != -17338) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x1113 = -1;
	volatile int32_t x1114 = 12;
	volatile int8_t x1115 = 0;
	int32_t t89 = -8773;

	t89 = (x1113^(x1114>>(x1115/x1116)));

	if (t89 != -13) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1117 = UINT8_MAX;
	uint64_t x1118 = 7266452573707136LLU;
	int16_t x1119 = -3297;
	int32_t x1120 = -2436524;

	t90 = (x1117^(x1118>>(x1119/x1120)));

	if (t90 != 7266452573707135LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x1129 = 6008261599599875818LLU;
	uint8_t x1130 = 0U;
	uint16_t x1131 = 40U;
	uint8_t x1132 = 33U;
	volatile uint64_t t91 = 376793734898840LLU;

	t91 = (x1129^(x1130>>(x1131/x1132)));

	if (t91 != 6008261599599875818LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1141 = INT16_MAX;
	volatile int8_t x1143 = INT8_MIN;

	t92 = (x1141^(x1142>>(x1143/x1144)));

	if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x1145 = 33427LLU;
	uint32_t x1146 = UINT32_MAX;
	int32_t x1147 = 21;
	static uint8_t x1148 = 9U;
	volatile uint64_t t93 = 8695917LLU;

	t93 = (x1145^(x1146>>(x1147/x1148)));

	if (t93 != 1073708396LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1149 = -1;
	uint64_t x1150 = 3803990880443LLU;
	static uint32_t x1151 = 81858U;
	volatile int8_t x1152 = INT8_MIN;
	volatile uint64_t t94 = 32747006410LLU;

	t94 = (x1149^(x1150>>(x1151/x1152)));

	if (t94 != 18446740269718671172LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x1153 = -1;
	int64_t x1154 = 3092360029LL;
	static int64_t t95 = 414806279512200555LL;

	t95 = (x1153^(x1154>>(x1155/x1156)));

	if (t95 != -3092360030LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x1165 = 22LLU;
	int64_t x1166 = 1183376947LL;
	uint8_t x1167 = UINT8_MAX;
	volatile int64_t x1168 = INT64_MIN;

	t96 = (x1165^(x1166>>(x1167/x1168)));

	if (t96 != 1183376933LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x1169 = -1;
	int32_t x1170 = 250065;
	int16_t x1171 = INT16_MIN;
	static int64_t x1172 = INT64_MIN;
	int32_t t97 = -61319247;

	t97 = (x1169^(x1170>>(x1171/x1172)));

	if (t97 != -250066) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1175 = INT32_MIN;

	t98 = (x1173^(x1174>>(x1175/x1176)));

	if (t98 != 36028797016156498LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1185 = INT64_MIN;
	uint16_t x1186 = UINT16_MAX;
	int8_t x1187 = 19;
	int64_t x1188 = INT64_MAX;
	int64_t t99 = -57408LL;

	t99 = (x1185^(x1186>>(x1187/x1188)));

	if (t99 != -9223372036854710273LL) { NG(); } else { ; }
	
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

