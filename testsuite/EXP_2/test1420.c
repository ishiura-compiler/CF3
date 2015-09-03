#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = 13;
volatile int64_t x28 = 510191943LL;
int64_t t3 = -791618113501331801LL;
int16_t x50 = INT16_MIN;
uint32_t x56 = UINT32_MAX;
uint32_t t6 = 267U;
int32_t x64 = INT32_MAX;
volatile uint32_t t7 = 74141U;
volatile int64_t x72 = -3604LL;
static int64_t t8 = -3378381036LL;
uint64_t x85 = 11LLU;
volatile int8_t x87 = -38;
uint8_t x101 = 0U;
uint64_t x104 = UINT64_MAX;
int16_t x123 = INT16_MIN;
uint8_t x124 = 0U;
uint32_t t12 = 123841337U;
volatile uint8_t x125 = 64U;
static uint32_t x128 = 27U;
int32_t x156 = INT32_MIN;
volatile uint64_t x205 = UINT64_MAX;
int32_t x206 = -1;
volatile int8_t x223 = INT8_MIN;
volatile int64_t t21 = 2752015602589231LL;
uint8_t x256 = 1U;
int32_t x278 = -127806929;
static int16_t x302 = -1;
uint64_t x303 = 771LLU;
uint16_t x347 = UINT16_MAX;
static uint64_t x353 = 6390276481238LLU;
static uint32_t x354 = 7231670U;
int8_t x357 = INT8_MAX;
int16_t x359 = INT16_MAX;
volatile uint32_t t38 = 82222U;
static int64_t x374 = -127462343048168666LL;
uint8_t x375 = 55U;
static int8_t x380 = INT8_MIN;
uint64_t x382 = 1LLU;
int32_t x383 = INT32_MAX;
volatile int16_t x433 = 10597;
static uint16_t x446 = UINT16_MAX;
int8_t x447 = INT8_MIN;
static uint32_t t43 = 852U;
volatile int16_t x449 = INT16_MAX;
uint16_t x454 = UINT16_MAX;
uint8_t x461 = UINT8_MAX;
volatile uint64_t t47 = 3277LLU;
volatile uint64_t t50 = 6531038601LLU;
int32_t x513 = 2973586;
uint16_t x514 = UINT16_MAX;
uint32_t t52 = 116U;
int64_t x528 = -1LL;
volatile int64_t x537 = 24LL;
int32_t x538 = -2340189;
int32_t x539 = INT32_MIN;
uint16_t x540 = 25U;
int8_t x551 = -1;
int8_t x552 = -26;
uint32_t x573 = 312264301U;
uint64_t x589 = 371002290597LLU;
int32_t x590 = -14598;
int64_t t61 = 21500041400129LL;
static uint8_t x636 = UINT8_MAX;
volatile uint16_t x645 = 1U;
int8_t x647 = 1;
int8_t x648 = 1;
static int16_t x651 = INT16_MIN;
int8_t x659 = 0;
int32_t x668 = -1;
static int16_t x706 = 1908;
int32_t t76 = 3073238;
uint8_t x718 = UINT8_MAX;
static int16_t x720 = -1;
uint32_t t77 = 55U;
int16_t x733 = 4;
int8_t x754 = INT8_MIN;
int16_t x755 = 8455;
volatile uint64_t t79 = 54569003553355LLU;
uint16_t x757 = UINT16_MAX;
static int32_t x759 = INT32_MIN;
volatile int32_t t80 = 2;
int32_t x766 = INT32_MAX;
static int32_t x774 = INT32_MAX;
volatile uint64_t t82 = 153622855590977962LLU;
uint16_t x785 = UINT16_MAX;
volatile int64_t x786 = INT64_MAX;
volatile uint16_t x787 = 9U;
volatile int32_t t86 = 420641999;
volatile uint32_t x797 = 713412U;
int64_t x826 = INT64_MAX;
int32_t t88 = -28357;
static volatile uint8_t x834 = 1U;
volatile int32_t x835 = -1;
uint8_t x845 = UINT8_MAX;
uint32_t x851 = 88139U;
int8_t x852 = INT8_MAX;
int8_t x858 = INT8_MAX;
static int8_t x859 = INT8_MIN;
int32_t x860 = INT32_MIN;
int32_t x873 = 480;
int8_t x876 = -1;
volatile uint64_t x880 = 83224890681LLU;
volatile int32_t t96 = 12922;
volatile int8_t x926 = INT8_MAX;
uint8_t x928 = UINT8_MAX;
static int16_t x942 = INT16_MIN;
uint32_t x944 = UINT32_MAX;


void f0(void) {
	int64_t x1 = 1530251277LL;
	uint8_t x2 = 12U;
	uint16_t x3 = 44U;
	int8_t x4 = INT8_MIN;
	int64_t t0 = -106143567074284170LL;

	t0 = ((x1<<(x2<x3))*x4);

	if (t0 != -391744326912LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 4;
	int32_t x6 = INT32_MAX;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = -350182;

	t1 = ((x5<<(x6<x7))*x8);

	if (t1 != -512) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x13 = 331893850LLU;
	int64_t x14 = INT64_MIN;
	int16_t x15 = -1;
	int16_t x16 = INT16_MIN;
	uint64_t t2 = 74896045931264LLU;

	t2 = ((x13<<(x14<x15))*x16);

	if (t2 != 18446722322714198016LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MAX;
	volatile int8_t x26 = 2;
	int64_t x27 = -56249762406978124LL;

	t3 = ((x25<<(x26<x27))*x28);

	if (t3 != 64794376761LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x49 = UINT32_MAX;
	static int16_t x51 = 1;
	uint32_t x52 = 1528859133U;
	volatile uint32_t t4 = 91U;

	t4 = ((x49<<(x50<x51))*x52);

	if (t4 != 1237249030U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x53 = INT32_MAX;
	int8_t x54 = INT8_MAX;
	int16_t x55 = -1;
	uint32_t t5 = 27728U;

	t5 = ((x53<<(x54<x55))*x56);

	if (t5 != 2147483649U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x57 = 89300237U;
	volatile int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	int16_t x60 = -112;

	t6 = ((x57<<(x58<x59))*x60);

	if (t6 != 2883275344U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x61 = UINT32_MAX;
	int64_t x62 = -1LL;
	int64_t x63 = -1LL;

	t7 = ((x61<<(x62<x63))*x64);

	if (t7 != 2147483649U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x69 = 20;
	int32_t x70 = INT32_MIN;
	int16_t x71 = 315;

	t8 = ((x69<<(x70<x71))*x72);

	if (t8 != -144160LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x86 = INT64_MIN;
	static int32_t x88 = 106873;
	static volatile uint64_t t9 = 13100958LLU;

	t9 = ((x85<<(x86<x87))*x88);

	if (t9 != 2351206LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x97 = 14LLU;
	uint32_t x98 = 66321801U;
	uint32_t x99 = UINT32_MAX;
	int32_t x100 = INT32_MIN;
	volatile uint64_t t10 = 917LLU;

	t10 = ((x97<<(x98<x99))*x100);

	if (t10 != 18446744013580009472LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x102 = INT8_MIN;
	int64_t x103 = -1LL;
	volatile uint64_t t11 = 17LLU;

	t11 = ((x101<<(x102<x103))*x104);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x121 = UINT32_MAX;
	int64_t x122 = INT64_MAX;

	t12 = ((x121<<(x122<x123))*x124);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x126 = INT32_MIN;
	static uint16_t x127 = 1148U;
	volatile uint32_t t13 = 7264347U;

	t13 = ((x125<<(x126<x127))*x128);

	if (t13 != 3456U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x129 = UINT32_MAX;
	volatile int32_t x130 = INT32_MIN;
	volatile int16_t x131 = -1;
	static int8_t x132 = INT8_MIN;
	uint32_t t14 = 196U;

	t14 = ((x129<<(x130<x131))*x132);

	if (t14 != 256U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x133 = INT16_MAX;
	static int64_t x134 = INT64_MIN;
	volatile uint64_t x135 = 256093LLU;
	volatile int8_t x136 = INT8_MIN;
	static int32_t t15 = 1652;

	t15 = ((x133<<(x134<x135))*x136);

	if (t15 != -4194176) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x145 = 1948;
	uint32_t x146 = 645499243U;
	int8_t x147 = 23;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t16 = 23778687848093167LLU;

	t16 = ((x145<<(x146<x147))*x148);

	if (t16 != 18446744073709549668LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x153 = 111212LLU;
	uint64_t x154 = 2LLU;
	static int8_t x155 = INT8_MAX;
	uint64_t t17 = 1157039380LLU;

	t17 = ((x153<<(x154<x155))*x156);

	if (t17 != 18446266421806628864LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MAX;
	volatile uint64_t t18 = 292LLU;

	t18 = ((x205<<(x206<x207))*x208);

	if (t18 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x209 = 101LL;
	int8_t x210 = -6;
	int8_t x211 = 12;
	int8_t x212 = 2;
	int64_t t19 = 7515300LL;

	t19 = ((x209<<(x210<x211))*x212);

	if (t19 != 404LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x217 = 73U;
	int64_t x218 = 856467449802LL;
	uint16_t x219 = UINT16_MAX;
	int16_t x220 = INT16_MIN;
	int32_t t20 = 3828776;

	t20 = ((x217<<(x218<x219))*x220);

	if (t20 != -2392064) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x221 = UINT8_MAX;
	int16_t x222 = INT16_MIN;
	int64_t x224 = 4295195LL;

	t21 = ((x221<<(x222<x223))*x224);

	if (t21 != 2190549450LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x225 = UINT32_MAX;
	volatile int8_t x226 = -9;
	volatile int32_t x227 = 150772;
	int32_t x228 = INT32_MIN;
	uint32_t t22 = 48215U;

	t22 = ((x225<<(x226<x227))*x228);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x249 = 32;
	int64_t x250 = 2024283154159LL;
	volatile int8_t x251 = INT8_MAX;
	static int8_t x252 = -45;
	volatile int32_t t23 = -21033103;

	t23 = ((x249<<(x250<x251))*x252);

	if (t23 != -1440) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x253 = 9469566744LLU;
	int16_t x254 = INT16_MIN;
	int64_t x255 = INT64_MIN;
	uint64_t t24 = 2741012698245285168LLU;

	t24 = ((x253<<(x254<x255))*x256);

	if (t24 != 9469566744LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x273 = 5217972288LLU;
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MIN;
	static volatile uint64_t t25 = 24100LLU;

	t25 = ((x273<<(x274<x275))*x276);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x277 = 74U;
	int64_t x279 = INT64_MIN;
	int16_t x280 = INT16_MIN;
	volatile int32_t t26 = -50713871;

	t26 = ((x277<<(x278<x279))*x280);

	if (t26 != -2424832) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x281 = UINT16_MAX;
	uint8_t x282 = UINT8_MAX;
	int64_t x283 = INT64_MIN;
	int32_t x284 = -1;
	volatile int32_t t27 = -427;

	t27 = ((x281<<(x282<x283))*x284);

	if (t27 != -65535) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x289 = 351LL;
	volatile uint8_t x290 = UINT8_MAX;
	static int8_t x291 = INT8_MIN;
	static uint32_t x292 = 158552U;
	volatile int64_t t28 = -99136448647761962LL;

	t28 = ((x289<<(x290<x291))*x292);

	if (t28 != 55651752LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x297 = UINT8_MAX;
	volatile int8_t x298 = 0;
	uint64_t x299 = 2666689754LLU;
	uint16_t x300 = 5481U;
	int32_t t29 = -84612524;

	t29 = ((x297<<(x298<x299))*x300);

	if (t29 != 2795310) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x301 = 4844565;
	static volatile uint64_t x304 = UINT64_MAX;
	uint64_t t30 = 600934666387679896LLU;

	t30 = ((x301<<(x302<x303))*x304);

	if (t30 != 18446744073704707051LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x317 = 19509U;
	int16_t x318 = -1;
	static int32_t x319 = INT32_MAX;
	int16_t x320 = -3192;
	volatile uint32_t t31 = 1U;

	t31 = ((x317<<(x318<x319))*x320);

	if (t31 != 4170421840U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x321 = 19U;
	volatile uint32_t x322 = UINT32_MAX;
	int64_t x323 = INT64_MIN;
	volatile int32_t x324 = -1;
	int32_t t32 = -849006;

	t32 = ((x321<<(x322<x323))*x324);

	if (t32 != -19) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x325 = 232964705U;
	int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MAX;
	static volatile uint32_t x328 = UINT32_MAX;
	uint32_t t33 = 130983U;

	t33 = ((x325<<(x326<x327))*x328);

	if (t33 != 3829037886U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x337 = INT32_MAX;
	int8_t x338 = -26;
	int32_t x339 = -365;
	uint64_t x340 = UINT64_MAX;
	static uint64_t t34 = 2102LLU;

	t34 = ((x337<<(x338<x339))*x340);

	if (t34 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = INT16_MAX;
	static uint8_t x348 = 110U;
	uint32_t t35 = 0U;

	t35 = ((x345<<(x346<x347))*x348);

	if (t35 != 4294967076U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x355 = UINT32_MAX;
	static volatile int64_t x356 = -1LL;
	static volatile uint64_t t36 = 7520282103106500278LLU;

	t36 = ((x353<<(x354<x355))*x356);

	if (t36 != 18446731293156589140LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x358 = -1LL;
	int8_t x360 = INT8_MAX;
	volatile int32_t t37 = 0;

	t37 = ((x357<<(x358<x359))*x360);

	if (t37 != 32258) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x361 = UINT32_MAX;
	uint64_t x362 = 1083495580LLU;
	int8_t x363 = -1;
	int32_t x364 = INT32_MIN;

	t38 = ((x361<<(x362<x363))*x364);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x373 = UINT8_MAX;
	int64_t x376 = -1LL;
	volatile int64_t t39 = 34054904425LL;

	t39 = ((x373<<(x374<x375))*x376);

	if (t39 != -510LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x377 = UINT16_MAX;
	uint8_t x378 = UINT8_MAX;
	static int16_t x379 = -4;
	int32_t t40 = -4475818;

	t40 = ((x377<<(x378<x379))*x380);

	if (t40 != -8388480) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x381 = INT8_MAX;
	static uint32_t x384 = 75100U;
	uint32_t t41 = 2056122U;

	t41 = ((x381<<(x382<x383))*x384);

	if (t41 != 19075400U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x434 = INT16_MIN;
	int16_t x435 = -1;
	uint16_t x436 = 3U;
	int32_t t42 = 26572695;

	t42 = ((x433<<(x434<x435))*x436);

	if (t42 != 63582) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x445 = 340U;
	static int8_t x448 = INT8_MAX;

	t43 = ((x445<<(x446<x447))*x448);

	if (t43 != 43180U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x450 = INT64_MIN;
	uint8_t x451 = 11U;
	volatile int32_t x452 = -14;
	int32_t t44 = 1919180;

	t44 = ((x449<<(x450<x451))*x452);

	if (t44 != -917476) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x453 = INT8_MAX;
	static int8_t x455 = -1;
	uint64_t x456 = 7877840575LLU;
	uint64_t t45 = 177515820LLU;

	t45 = ((x453<<(x454<x455))*x456);

	if (t45 != 1000485753025LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x462 = -1;
	static uint8_t x463 = UINT8_MAX;
	uint8_t x464 = 18U;
	volatile int32_t t46 = -26;

	t46 = ((x461<<(x462<x463))*x464);

	if (t46 != 9180) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x473 = UINT64_MAX;
	static volatile uint64_t x474 = 269832068058724649LLU;
	uint16_t x475 = UINT16_MAX;
	static volatile int32_t x476 = INT32_MIN;

	t47 = ((x473<<(x474<x475))*x476);

	if (t47 != 2147483648LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x481 = 6484424U;
	int32_t x482 = INT32_MAX;
	static int64_t x483 = INT64_MIN;
	static uint64_t x484 = UINT64_MAX;
	volatile uint64_t t48 = 286428LLU;

	t48 = ((x481<<(x482<x483))*x484);

	if (t48 != 18446744073703067192LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x493 = 2U;
	uint8_t x494 = UINT8_MAX;
	static volatile uint16_t x495 = 21212U;
	int32_t x496 = -25901463;
	static int32_t t49 = 0;

	t49 = ((x493<<(x494<x495))*x496);

	if (t49 != -103605852) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x505 = 1451445988028031LLU;
	int16_t x506 = INT16_MIN;
	volatile uint32_t x507 = 776U;
	uint16_t x508 = 1U;

	t50 = ((x505<<(x506<x507))*x508);

	if (t50 != 1451445988028031LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x515 = 264357148535650LLU;
	int32_t x516 = -1;
	volatile int32_t t51 = -44;

	t51 = ((x513<<(x514<x515))*x516);

	if (t51 != -5947172) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x517 = UINT16_MAX;
	static uint16_t x518 = 7U;
	int8_t x519 = 6;
	uint32_t x520 = UINT32_MAX;

	t52 = ((x517<<(x518<x519))*x520);

	if (t52 != 4294901761U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x525 = 116875;
	int64_t x526 = -72096572LL;
	static volatile int16_t x527 = INT16_MAX;
	int64_t t53 = -811LL;

	t53 = ((x525<<(x526<x527))*x528);

	if (t53 != -233750LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t t54 = 210LL;

	t54 = ((x537<<(x538<x539))*x540);

	if (t54 != 600LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x541 = UINT16_MAX;
	uint16_t x542 = 60U;
	int8_t x543 = 0;
	uint8_t x544 = 10U;
	static int32_t t55 = 1;

	t55 = ((x541<<(x542<x543))*x544);

	if (t55 != 655350) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x549 = 1776269177447LLU;
	int16_t x550 = -3;
	volatile uint64_t t56 = 9171LLU;

	t56 = ((x549<<(x550<x551))*x552);

	if (t56 != 18446651707712324372LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x574 = -1;
	int64_t x575 = INT64_MIN;
	int64_t x576 = -1LL;
	volatile int64_t t57 = -9533505877195915LL;

	t57 = ((x573<<(x574<x575))*x576);

	if (t57 != -312264301LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x585 = UINT16_MAX;
	uint32_t x586 = 2858U;
	uint32_t x587 = 2460U;
	int64_t x588 = -1LL;
	volatile int64_t t58 = -3569526585LL;

	t58 = ((x585<<(x586<x587))*x588);

	if (t58 != -65535LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x591 = INT64_MIN;
	uint32_t x592 = 32123064U;
	volatile uint64_t t59 = 32569LLU;

	t59 = ((x589<<(x590<x591))*x592);

	if (t59 != 11917730324994029208LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x593 = 426566254U;
	static int8_t x594 = INT8_MAX;
	int32_t x595 = INT32_MIN;
	int64_t x596 = -499950LL;
	volatile int64_t t60 = 1167037LL;

	t60 = ((x593<<(x594<x595))*x596);

	if (t60 != -213261798687300LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x597 = 209572131LL;
	int16_t x598 = -1;
	uint8_t x599 = 96U;
	int64_t x600 = -1LL;

	t61 = ((x597<<(x598<x599))*x600);

	if (t61 != -419144262LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x617 = UINT16_MAX;
	uint32_t x618 = 467784249U;
	int64_t x619 = -268325483337693LL;
	uint64_t x620 = UINT64_MAX;
	static volatile uint64_t t62 = 230542961851666LLU;

	t62 = ((x617<<(x618<x619))*x620);

	if (t62 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x633 = INT16_MAX;
	volatile int64_t x634 = 0LL;
	uint32_t x635 = UINT32_MAX;
	int32_t t63 = 329536047;

	t63 = ((x633<<(x634<x635))*x636);

	if (t63 != 16711170) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x641 = UINT16_MAX;
	int32_t x642 = -1;
	volatile int64_t x643 = INT64_MAX;
	int16_t x644 = -1;
	int32_t t64 = 2;

	t64 = ((x641<<(x642<x643))*x644);

	if (t64 != -131070) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x646 = UINT8_MAX;
	static int32_t t65 = 704;

	t65 = ((x645<<(x646<x647))*x648);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x649 = 8412LL;
	static int32_t x650 = INT32_MIN;
	int16_t x652 = INT16_MIN;
	int64_t t66 = -182LL;

	t66 = ((x649<<(x650<x651))*x652);

	if (t66 != -551288832LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x653 = 2302U;
	int16_t x654 = 1;
	int8_t x655 = -1;
	int64_t x656 = -3474695LL;
	volatile int64_t t67 = 35LL;

	t67 = ((x653<<(x654<x655))*x656);

	if (t67 != -7998747890LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x657 = 444724012LLU;
	uint32_t x658 = 47975890U;
	int64_t x660 = INT64_MAX;
	uint64_t t68 = 406448LLU;

	t68 = ((x657<<(x658<x659))*x660);

	if (t68 != 18446744073264827604LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x661 = 8U;
	int64_t x662 = INT64_MIN;
	volatile uint16_t x663 = UINT16_MAX;
	static int32_t x664 = -912547;
	static int32_t t69 = 2780;

	t69 = ((x661<<(x662<x663))*x664);

	if (t69 != -14600752) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x665 = INT64_MAX;
	int32_t x666 = -1;
	int16_t x667 = -19;
	volatile int64_t t70 = 0LL;

	t70 = ((x665<<(x666<x667))*x668);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x673 = 3;
	uint64_t x674 = 1LLU;
	uint32_t x675 = UINT32_MAX;
	volatile int8_t x676 = INT8_MIN;
	int32_t t71 = 2791219;

	t71 = ((x673<<(x674<x675))*x676);

	if (t71 != -768) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x681 = INT16_MAX;
	volatile uint16_t x682 = 29U;
	static uint16_t x683 = 116U;
	uint8_t x684 = 14U;
	int32_t t72 = 35512855;

	t72 = ((x681<<(x682<x683))*x684);

	if (t72 != 917476) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x685 = 0;
	volatile uint16_t x686 = 3U;
	int32_t x687 = -21;
	static volatile int64_t x688 = INT64_MIN;
	static int64_t t73 = -260045603775472253LL;

	t73 = ((x685<<(x686<x687))*x688);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x701 = 0;
	int8_t x702 = INT8_MIN;
	static uint16_t x703 = UINT16_MAX;
	volatile int32_t x704 = INT32_MAX;
	static int32_t t74 = 14425;

	t74 = ((x701<<(x702<x703))*x704);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x705 = 3452471;
	volatile int8_t x707 = -1;
	uint64_t x708 = 193841120269980LLU;
	uint64_t t75 = 56243LLU;

	t75 = ((x705<<(x706<x707))*x708);

	if (t75 != 5148059686074262404LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x713 = 3;
	int32_t x714 = INT32_MAX;
	static volatile int16_t x715 = -1;
	int16_t x716 = INT16_MIN;

	t76 = ((x713<<(x714<x715))*x716);

	if (t76 != -98304) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x717 = 1689U;
	int64_t x719 = INT64_MIN;

	t77 = ((x717<<(x718<x719))*x720);

	if (t77 != 4294965607U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x734 = -1;
	int64_t x735 = -2LL;
	static uint16_t x736 = UINT16_MAX;
	volatile int32_t t78 = -1802388;

	t78 = ((x733<<(x734<x735))*x736);

	if (t78 != 262140) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x753 = UINT64_MAX;
	static volatile int32_t x756 = INT32_MIN;

	t79 = ((x753<<(x754<x755))*x756);

	if (t79 != 4294967296LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x758 = 1022151LL;
	int8_t x760 = -3;

	t80 = ((x757<<(x758<x759))*x760);

	if (t80 != -196605) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x765 = 5729U;
	int64_t x767 = -331913032085LL;
	uint16_t x768 = UINT16_MAX;
	volatile int32_t t81 = -162847;

	t81 = ((x765<<(x766<x767))*x768);

	if (t81 != 375450015) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x773 = 1LLU;
	uint8_t x775 = UINT8_MAX;
	int64_t x776 = INT64_MAX;

	t82 = ((x773<<(x774<x775))*x776);

	if (t82 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x777 = 187;
	int8_t x778 = 1;
	uint8_t x779 = 31U;
	uint16_t x780 = 16051U;
	int32_t t83 = 522998;

	t83 = ((x777<<(x778<x779))*x780);

	if (t83 != 6003074) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x781 = UINT8_MAX;
	int16_t x782 = INT16_MAX;
	uint16_t x783 = 30U;
	int32_t x784 = 9;
	volatile int32_t t84 = -289;

	t84 = ((x781<<(x782<x783))*x784);

	if (t84 != 2295) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x788 = -1;
	static volatile int32_t t85 = -31;

	t85 = ((x785<<(x786<x787))*x788);

	if (t85 != -65535) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x789 = UINT8_MAX;
	uint64_t x790 = 37629087LLU;
	int8_t x791 = -2;
	uint8_t x792 = UINT8_MAX;

	t86 = ((x789<<(x790<x791))*x792);

	if (t86 != 130050) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x798 = -1;
	int32_t x799 = INT32_MIN;
	uint32_t x800 = UINT32_MAX;
	volatile uint32_t t87 = 460297947U;

	t87 = ((x797<<(x798<x799))*x800);

	if (t87 != 4294253884U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x825 = 1;
	uint32_t x827 = 540U;
	int8_t x828 = INT8_MIN;

	t88 = ((x825<<(x826<x827))*x828);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x833 = 1;
	uint32_t x836 = 62U;
	static uint32_t t89 = 4140U;

	t89 = ((x833<<(x834<x835))*x836);

	if (t89 != 62U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x846 = INT64_MAX;
	static uint8_t x847 = 8U;
	uint64_t x848 = UINT64_MAX;
	uint64_t t90 = 62861346633LLU;

	t90 = ((x845<<(x846<x847))*x848);

	if (t90 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x849 = UINT16_MAX;
	static int16_t x850 = -232;
	volatile int32_t t91 = -1;

	t91 = ((x849<<(x850<x851))*x852);

	if (t91 != 8322945) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x857 = UINT64_MAX;
	uint64_t t92 = 1691438639748849LLU;

	t92 = ((x857<<(x858<x859))*x860);

	if (t92 != 2147483648LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x874 = UINT64_MAX;
	uint8_t x875 = 69U;
	int32_t t93 = -879;

	t93 = ((x873<<(x874<x875))*x876);

	if (t93 != -480) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x877 = INT8_MAX;
	static int8_t x878 = -62;
	volatile int64_t x879 = -1LL;
	static uint64_t t94 = 8491787976530LLU;

	t94 = ((x877<<(x878<x879))*x880);

	if (t94 != 21139122232974LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x909 = 7;
	volatile int32_t x910 = -15;
	static int32_t x911 = -1;
	uint8_t x912 = UINT8_MAX;
	int32_t t95 = -37;

	t95 = ((x909<<(x910<x911))*x912);

	if (t95 != 3570) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x917 = 6U;
	volatile int16_t x918 = -6084;
	static int8_t x919 = -1;
	int16_t x920 = 5;

	t96 = ((x917<<(x918<x919))*x920);

	if (t96 != 60) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x925 = 23U;
	static int64_t x927 = INT64_MIN;
	volatile int32_t t97 = 113;

	t97 = ((x925<<(x926<x927))*x928);

	if (t97 != 5865) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x941 = 3097324945505259565LLU;
	int8_t x943 = INT8_MIN;
	volatile uint64_t t98 = 1855449968LLU;

	t98 = ((x941<<(x942<x943))*x944);

	if (t98 != 18419809443302072230LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x953 = 6570U;
	volatile int16_t x954 = INT16_MAX;
	int64_t x955 = INT64_MIN;
	uint16_t x956 = 40U;
	int32_t t99 = -11604323;

	t99 = ((x953<<(x954<x955))*x956);

	if (t99 != 262800) { NG(); } else { ; }
	
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

