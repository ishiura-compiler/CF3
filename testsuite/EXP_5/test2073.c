#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 456418;
uint16_t x17 = 29037U;
volatile int32_t x18 = INT32_MAX;
volatile int32_t t1 = -251043;
uint32_t x22 = 1U;
static int8_t x28 = INT8_MIN;
int64_t x72 = INT64_MAX;
static volatile int8_t x79 = INT8_MIN;
int64_t x80 = INT64_MIN;
int32_t t6 = 1936614;
uint8_t x93 = 1U;
static volatile int64_t t8 = -331984LL;
static uint32_t x131 = 101736275U;
volatile int64_t t10 = -512174008LL;
int32_t x134 = INT32_MAX;
int16_t x156 = INT16_MAX;
uint32_t x194 = UINT32_MAX;
volatile int64_t x196 = INT64_MIN;
static volatile uint16_t x197 = 3U;
static uint8_t x198 = 2U;
uint64_t x206 = UINT64_MAX;
int64_t x232 = INT64_MAX;
int8_t x246 = INT8_MIN;
int32_t t19 = 16562905;
uint32_t x257 = 100502367U;
uint16_t x312 = UINT16_MAX;
uint32_t t23 = 640U;
int8_t x341 = INT8_MAX;
int32_t x343 = -1;
int16_t x371 = INT16_MIN;
int64_t x419 = INT64_MIN;
int32_t x438 = 8;
int64_t x440 = -1696581923409305148LL;
volatile int64_t x552 = INT64_MAX;
int64_t x555 = -36593824890LL;
int32_t x556 = INT32_MIN;
uint64_t t36 = 856135177095036LLU;
uint32_t x586 = UINT32_MAX;
static volatile int64_t t39 = INT64_MAX;
int32_t t41 = -952578335;
static int64_t x653 = INT64_MAX;
int64_t t42 = INT64_MAX;
uint64_t x712 = 188758041991LLU;
volatile int32_t t48 = -3370090;
static int32_t x762 = -1;
static int8_t x763 = INT8_MIN;
volatile int16_t x768 = INT16_MIN;
uint64_t x776 = 481137680674865LLU;
volatile int16_t x829 = 15;
uint8_t x841 = 26U;
int8_t x852 = -1;
volatile int32_t t55 = 704;
static int64_t t56 = -1202349996116LL;
volatile int16_t x916 = INT16_MIN;
static uint16_t x941 = UINT16_MAX;
volatile uint32_t x943 = UINT32_MAX;
static int64_t x952 = INT64_MIN;
int32_t x990 = INT32_MAX;
uint64_t x992 = UINT64_MAX;
static uint8_t x1009 = 2U;
volatile uint32_t x1014 = 295U;
int32_t t65 = 5207;
int8_t x1051 = INT8_MIN;
uint16_t x1061 = UINT16_MAX;
int64_t x1107 = INT64_MIN;
static volatile int8_t x1138 = INT8_MIN;
int16_t x1139 = -1;
volatile uint8_t x1167 = UINT8_MAX;
volatile int8_t x1175 = INT8_MIN;
int8_t x1177 = INT8_MAX;
volatile int32_t x1248 = INT32_MAX;
static int32_t x1260 = INT32_MIN;
volatile uint8_t x1281 = 0U;
uint8_t x1283 = 2U;
volatile int32_t t84 = -1311;
uint32_t x1307 = 2374726U;
int32_t x1316 = INT32_MAX;
volatile uint8_t x1329 = UINT8_MAX;
static int32_t x1343 = INT32_MIN;
volatile uint32_t t88 = UINT32_MAX;
static int8_t x1355 = INT8_MIN;
int16_t x1358 = 6;
volatile int16_t x1359 = -1;
static volatile uint16_t x1386 = 9585U;
int64_t x1400 = -211082824315LL;
int8_t x1405 = 0;
int8_t x1433 = 19;
int8_t x1434 = INT8_MIN;
int64_t t95 = INT64_MAX;
int64_t t96 = 1036892168628159768LL;
int8_t x1486 = -1;


void f0(void) {
	static volatile uint16_t x9 = 65U;
	volatile uint16_t x10 = 38U;
	static int16_t x11 = -1;
	uint8_t x12 = UINT8_MAX;

	t0 = (x9<<((x10^x11)/x12));

	if (t0 != 65) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x19 = INT32_MAX;
	int32_t x20 = INT32_MIN;

	t1 = (x17<<((x18^x19)/x20));

	if (t1 != 29037) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x21 = 9U;
	uint32_t x23 = 29U;
	int16_t x24 = INT16_MIN;
	int32_t t2 = -430;

	t2 = (x21<<((x22^x23)/x24));

	if (t2 != 9) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = 16331U;
	static int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MAX;
	int32_t t3 = -57258;

	t3 = (x25<<((x26^x27)/x28));

	if (t3 != 16331) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x53 = 3U;
	static uint32_t x54 = 2358505U;
	static int32_t x55 = 119437111;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t4 = 2;

	t4 = (x53<<((x54^x55)/x56));

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x69 = UINT16_MAX;
	int32_t x70 = -1;
	int16_t x71 = INT16_MIN;
	int32_t t5 = -9202;

	t5 = (x69<<((x70^x71)/x72));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x77 = 0;
	uint32_t x78 = 2U;

	t6 = (x77<<((x78^x79)/x80));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x94 = UINT64_MAX;
	static volatile int8_t x95 = INT8_MIN;
	int8_t x96 = -2;
	int32_t t7 = -4122750;

	t7 = (x93<<((x94^x95)/x96));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x101 = 18LL;
	uint8_t x102 = 12U;
	int64_t x103 = -1LL;
	int16_t x104 = INT16_MAX;

	t8 = (x101<<((x102^x103)/x104));

	if (t8 != 18LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x113 = 3U;
	uint16_t x114 = 8085U;
	int8_t x115 = -1;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t9 = -52344;

	t9 = (x113<<((x114^x115)/x116));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x129 = 882LL;
	uint16_t x130 = UINT16_MAX;
	int16_t x132 = INT16_MIN;

	t10 = (x129<<((x130^x131)/x132));

	if (t10 != 882LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x133 = 1268761U;
	int64_t x135 = -1LL;
	int64_t x136 = INT64_MAX;
	static volatile uint32_t t11 = 1436U;

	t11 = (x133<<((x134^x135)/x136));

	if (t11 != 1268761U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x153 = 8;
	volatile uint8_t x154 = 90U;
	static int16_t x155 = -1;
	int32_t t12 = 301;

	t12 = (x153<<((x154^x155)/x156));

	if (t12 != 8) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x185 = 95235439;
	int32_t x186 = -17619;
	int64_t x187 = 15LL;
	uint32_t x188 = UINT32_MAX;
	int32_t t13 = -1;

	t13 = (x185<<((x186^x187)/x188));

	if (t13 != 95235439) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x193 = INT8_MAX;
	uint32_t x195 = UINT32_MAX;
	int32_t t14 = -18738;

	t14 = (x193<<((x194^x195)/x196));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x199 = 58;
	int64_t x200 = -108501017023214LL;
	static int32_t t15 = 1518;

	t15 = (x197<<((x198^x199)/x200));

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x205 = 319U;
	int8_t x207 = 0;
	volatile int8_t x208 = INT8_MIN;
	volatile int32_t t16 = 37194158;

	t16 = (x205<<((x206^x207)/x208));

	if (t16 != 638) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x229 = 0;
	int32_t x230 = 123;
	volatile int32_t x231 = -27718;
	int32_t t17 = 4814527;

	t17 = (x229<<((x230^x231)/x232));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x245 = 1;
	int8_t x247 = -7;
	uint16_t x248 = 995U;
	volatile int32_t t18 = 1;

	t18 = (x245<<((x246^x247)/x248));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x253 = 49105616;
	static uint32_t x254 = 528700569U;
	static int32_t x255 = -414875849;
	volatile int16_t x256 = INT16_MIN;

	t19 = (x253<<((x254^x255)/x256));

	if (t19 != 49105616) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x258 = 60U;
	uint32_t x259 = 19425U;
	int64_t x260 = -1061099060351888LL;
	volatile uint32_t t20 = 106034U;

	t20 = (x257<<((x258^x259)/x260));

	if (t20 != 100502367U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x261 = 1U;
	int32_t x262 = 196162;
	volatile uint32_t x263 = 7662U;
	volatile int8_t x264 = -1;
	static volatile uint32_t t21 = 139U;

	t21 = (x261<<((x262^x263)/x264));

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x269 = UINT32_MAX;
	static uint64_t x270 = 2047471415266130930LLU;
	int64_t x271 = -1LL;
	int16_t x272 = INT16_MIN;
	static uint32_t t22 = UINT32_MAX;

	t22 = (x269<<((x270^x271)/x272));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x309 = 2660U;
	static uint32_t x310 = 919U;
	uint8_t x311 = 11U;

	t23 = (x309<<((x310^x311)/x312));

	if (t23 != 2660U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x342 = INT16_MAX;
	volatile int64_t x344 = -52328060LL;
	volatile int32_t t24 = 6761958;

	t24 = (x341<<((x342^x343)/x344));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x361 = INT16_MAX;
	static int8_t x362 = 1;
	int16_t x363 = -1;
	int64_t x364 = -8556766558005373LL;
	int32_t t25 = -1057722;

	t25 = (x361<<((x362^x363)/x364));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x369 = 404693185098373961LL;
	uint8_t x370 = 17U;
	static int32_t x372 = INT32_MIN;
	int64_t t26 = -327937720662626379LL;

	t26 = (x369<<((x370^x371)/x372));

	if (t26 != 404693185098373961LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x389 = 65U;
	static volatile int8_t x390 = -1;
	static volatile int32_t x391 = -1;
	int64_t x392 = 27188206041LL;
	volatile int32_t t27 = 3;

	t27 = (x389<<((x390^x391)/x392));

	if (t27 != 65) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x393 = 2;
	int32_t x394 = -1;
	uint16_t x395 = 1U;
	static int8_t x396 = INT8_MIN;
	int32_t t28 = -1510100;

	t28 = (x393<<((x394^x395)/x396));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x401 = UINT32_MAX;
	int32_t x402 = -1;
	uint8_t x403 = 3U;
	int16_t x404 = -1;
	static uint32_t t29 = 0U;

	t29 = (x401<<((x402^x403)/x404));

	if (t29 != 4294967280U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x417 = INT32_MAX;
	int32_t x418 = -390055037;
	static uint64_t x420 = UINT64_MAX;
	static volatile int32_t t30 = INT32_MAX;

	t30 = (x417<<((x418^x419)/x420));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x425 = UINT64_MAX;
	int64_t x426 = -3851466LL;
	uint8_t x427 = UINT8_MAX;
	int64_t x428 = INT64_MIN;
	uint64_t t31 = UINT64_MAX;

	t31 = (x425<<((x426^x427)/x428));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x437 = 8U;
	int8_t x439 = INT8_MIN;
	static int32_t t32 = 12518128;

	t32 = (x437<<((x438^x439)/x440));

	if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x505 = 40;
	int8_t x506 = 0;
	int8_t x507 = INT8_MIN;
	int64_t x508 = INT64_MIN;
	int32_t t33 = 50042;

	t33 = (x505<<((x506^x507)/x508));

	if (t33 != 40) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x513 = 2616533200273LL;
	int8_t x514 = 0;
	volatile uint16_t x515 = UINT16_MAX;
	int64_t x516 = INT64_MIN;
	int64_t t34 = 29502LL;

	t34 = (x513<<((x514^x515)/x516));

	if (t34 != 2616533200273LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x549 = 198LL;
	int8_t x550 = INT8_MIN;
	volatile uint8_t x551 = 7U;
	int64_t t35 = 2193097089910439284LL;

	t35 = (x549<<((x550^x551)/x552));

	if (t35 != 198LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x553 = 20573728LLU;
	volatile uint16_t x554 = 27683U;

	t36 = (x553<<((x554^x555)/x556));

	if (t36 != 2696639676416LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x561 = 255U;
	static volatile uint64_t x562 = UINT64_MAX;
	static uint32_t x563 = UINT32_MAX;
	volatile int16_t x564 = INT16_MIN;
	int32_t t37 = 1011976567;

	t37 = (x561<<((x562^x563)/x564));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x585 = INT16_MAX;
	int32_t x587 = INT32_MIN;
	static int8_t x588 = INT8_MIN;
	int32_t t38 = 684631348;

	t38 = (x585<<((x586^x587)/x588));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x593 = INT64_MAX;
	int32_t x594 = 1;
	uint32_t x595 = 949U;
	int32_t x596 = -1;

	t39 = (x593<<((x594^x595)/x596));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x601 = UINT8_MAX;
	int16_t x602 = INT16_MIN;
	uint64_t x603 = UINT64_MAX;
	volatile int32_t x604 = INT32_MIN;
	int32_t t40 = -73;

	t40 = (x601<<((x602^x603)/x604));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x641 = UINT16_MAX;
	int16_t x642 = -1;
	uint8_t x643 = 53U;
	int32_t x644 = 98782654;

	t41 = (x641<<((x642^x643)/x644));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x654 = 4473492263027539LLU;
	static uint32_t x655 = UINT32_MAX;
	static int64_t x656 = INT64_MAX;

	t42 = (x653<<((x654^x655)/x656));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x669 = 9;
	uint64_t x670 = 10323LLU;
	volatile int16_t x671 = INT16_MIN;
	static int8_t x672 = -44;
	volatile int32_t t43 = -3014229;

	t43 = (x669<<((x670^x671)/x672));

	if (t43 != 9) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x673 = 21U;
	volatile int16_t x674 = -1;
	volatile int8_t x675 = 0;
	static int64_t x676 = 58437135995303LL;
	volatile int32_t t44 = -134578990;

	t44 = (x673<<((x674^x675)/x676));

	if (t44 != 21) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x689 = 3638;
	int16_t x690 = INT16_MIN;
	int16_t x691 = INT16_MIN;
	int16_t x692 = 3232;
	volatile int32_t t45 = 1038967;

	t45 = (x689<<((x690^x691)/x692));

	if (t45 != 3638) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x709 = 1U;
	volatile uint32_t x710 = 3U;
	int8_t x711 = INT8_MIN;
	volatile int32_t t46 = 15703;

	t46 = (x709<<((x710^x711)/x712));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x713 = 34;
	uint8_t x714 = UINT8_MAX;
	int32_t x715 = INT32_MAX;
	int64_t x716 = INT64_MAX;
	int32_t t47 = 207;

	t47 = (x713<<((x714^x715)/x716));

	if (t47 != 34) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x733 = INT8_MAX;
	volatile int32_t x734 = 189;
	static volatile int8_t x735 = 0;
	volatile uint16_t x736 = UINT16_MAX;

	t48 = (x733<<((x734^x735)/x736));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x761 = UINT8_MAX;
	uint32_t x764 = 40U;
	volatile int32_t t49 = -2275;

	t49 = (x761<<((x762^x763)/x764));

	if (t49 != 2040) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x765 = 1;
	int32_t x766 = -1;
	int8_t x767 = INT8_MIN;
	int32_t t50 = 0;

	t50 = (x765<<((x766^x767)/x768));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x773 = 0U;
	static volatile uint32_t x774 = 4U;
	volatile int8_t x775 = -1;
	volatile int32_t t51 = 2248151;

	t51 = (x773<<((x774^x775)/x776));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x781 = 7U;
	int32_t x782 = 1;
	int8_t x783 = -1;
	int16_t x784 = INT16_MIN;
	volatile int32_t t52 = 2004;

	t52 = (x781<<((x782^x783)/x784));

	if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x830 = -5LL;
	uint8_t x831 = 60U;
	volatile int32_t x832 = 95942;
	int32_t t53 = -3;

	t53 = (x829<<((x830^x831)/x832));

	if (t53 != 15) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x842 = 73U;
	static int64_t x843 = 78LL;
	static int64_t x844 = INT64_MIN;
	volatile int32_t t54 = -175281751;

	t54 = (x841<<((x842^x843)/x844));

	if (t54 != 26) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x849 = 14;
	volatile uint64_t x850 = 27LLU;
	uint16_t x851 = 0U;

	t55 = (x849<<((x850^x851)/x852));

	if (t55 != 14) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x869 = 264860676663824LL;
	uint8_t x870 = 6U;
	volatile int8_t x871 = -1;
	int64_t x872 = INT64_MIN;

	t56 = (x869<<((x870^x871)/x872));

	if (t56 != 264860676663824LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x885 = 48U;
	int64_t x886 = INT64_MAX;
	static volatile int64_t x887 = INT64_MIN;
	volatile int8_t x888 = -1;
	volatile int32_t t57 = 4;

	t57 = (x885<<((x886^x887)/x888));

	if (t57 != 96) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x913 = INT32_MAX;
	uint32_t x914 = UINT32_MAX;
	volatile int16_t x915 = INT16_MIN;
	int32_t t58 = INT32_MAX;

	t58 = (x913<<((x914^x915)/x916));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x942 = INT16_MIN;
	int64_t x944 = 1216432460540LL;
	int32_t t59 = 2120789;

	t59 = (x941<<((x942^x943)/x944));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x949 = UINT16_MAX;
	int8_t x950 = 14;
	int8_t x951 = INT8_MAX;
	int32_t t60 = -249766762;

	t60 = (x949<<((x950^x951)/x952));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x953 = 13457156U;
	volatile int64_t x954 = -1LL;
	int16_t x955 = INT16_MAX;
	int64_t x956 = 3160740LL;
	volatile uint32_t t61 = 15513357U;

	t61 = (x953<<((x954^x955)/x956));

	if (t61 != 13457156U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x989 = UINT16_MAX;
	static uint8_t x991 = 60U;
	volatile int32_t t62 = -1;

	t62 = (x989<<((x990^x991)/x992));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x997 = 21U;
	uint32_t x998 = UINT32_MAX;
	static volatile int32_t x999 = -1;
	volatile int8_t x1000 = -27;
	volatile int32_t t63 = 117341847;

	t63 = (x997<<((x998^x999)/x1000));

	if (t63 != 21) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1010 = 14815701797LLU;
	static volatile uint32_t x1011 = UINT32_MAX;
	int16_t x1012 = INT16_MIN;
	static volatile int32_t t64 = 1636532;

	t64 = (x1009<<((x1010^x1011)/x1012));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x1013 = INT16_MAX;
	volatile int8_t x1015 = INT8_MIN;
	volatile int64_t x1016 = INT64_MIN;

	t65 = (x1013<<((x1014^x1015)/x1016));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1029 = UINT8_MAX;
	volatile uint32_t x1030 = 102U;
	uint16_t x1031 = 56U;
	static uint8_t x1032 = 5U;
	volatile int32_t t66 = 607;

	t66 = (x1029<<((x1030^x1031)/x1032));

	if (t66 != 66846720) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x1037 = INT64_MAX;
	uint8_t x1038 = 6U;
	volatile int8_t x1039 = 0;
	uint32_t x1040 = 959U;
	volatile int64_t t67 = INT64_MAX;

	t67 = (x1037<<((x1038^x1039)/x1040));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1049 = 0;
	uint32_t x1050 = 1288043U;
	int64_t x1052 = INT64_MIN;
	volatile int32_t t68 = 6;

	t68 = (x1049<<((x1050^x1051)/x1052));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x1053 = 4U;
	volatile uint8_t x1054 = UINT8_MAX;
	int32_t x1055 = INT32_MIN;
	static int64_t x1056 = INT64_MIN;
	uint32_t t69 = 6U;

	t69 = (x1053<<((x1054^x1055)/x1056));

	if (t69 != 4U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x1062 = INT64_MIN;
	int64_t x1063 = INT64_MIN;
	static volatile int16_t x1064 = INT16_MIN;
	volatile int32_t t70 = 577603;

	t70 = (x1061<<((x1062^x1063)/x1064));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1085 = 33;
	uint64_t x1086 = 516304496LLU;
	int32_t x1087 = INT32_MAX;
	int16_t x1088 = -1;
	volatile int32_t t71 = 7157;

	t71 = (x1085<<((x1086^x1087)/x1088));

	if (t71 != 33) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x1105 = UINT8_MAX;
	volatile int8_t x1106 = INT8_MAX;
	volatile int64_t x1108 = INT64_MAX;
	volatile int32_t t72 = 68891;

	t72 = (x1105<<((x1106^x1107)/x1108));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1137 = 3U;
	int32_t x1140 = INT32_MAX;
	static int32_t t73 = 670488764;

	t73 = (x1137<<((x1138^x1139)/x1140));

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1165 = 84080266LLU;
	uint16_t x1166 = 13274U;
	int64_t x1168 = -867462783403540LL;
	volatile uint64_t t74 = 182979LLU;

	t74 = (x1165<<((x1166^x1167)/x1168));

	if (t74 != 84080266LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1173 = 4287318U;
	uint32_t x1174 = UINT32_MAX;
	uint64_t x1176 = UINT64_MAX;
	volatile uint32_t t75 = 7U;

	t75 = (x1173<<((x1174^x1175)/x1176));

	if (t75 != 4287318U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x1178 = 24056495907253413LLU;
	uint64_t x1179 = UINT64_MAX;
	volatile int16_t x1180 = INT16_MIN;
	volatile int32_t t76 = 2995324;

	t76 = (x1177<<((x1178^x1179)/x1180));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x1201 = 2;
	uint8_t x1202 = UINT8_MAX;
	uint8_t x1203 = 19U;
	int64_t x1204 = INT64_MAX;
	int32_t t77 = -239;

	t77 = (x1201<<((x1202^x1203)/x1204));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x1209 = 1;
	volatile uint64_t x1210 = 498331197641LLU;
	uint8_t x1211 = 51U;
	int32_t x1212 = -52035174;
	volatile int32_t t78 = -1031655;

	t78 = (x1209<<((x1210^x1211)/x1212));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x1213 = 49061302529965LLU;
	int32_t x1214 = INT32_MAX;
	static int16_t x1215 = -1;
	int32_t x1216 = INT32_MIN;
	static uint64_t t79 = 3227117621847LLU;

	t79 = (x1213<<((x1214^x1215)/x1216));

	if (t79 != 98122605059930LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1245 = INT16_MAX;
	int8_t x1246 = INT8_MIN;
	static int32_t x1247 = INT32_MIN;
	static int32_t t80 = 997214849;

	t80 = (x1245<<((x1246^x1247)/x1248));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1249 = UINT8_MAX;
	int32_t x1250 = -1;
	uint64_t x1251 = UINT64_MAX;
	uint16_t x1252 = 43U;
	int32_t t81 = -89;

	t81 = (x1249<<((x1250^x1251)/x1252));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1257 = INT8_MAX;
	volatile int8_t x1258 = -1;
	uint32_t x1259 = UINT32_MAX;
	volatile int32_t t82 = 2;

	t82 = (x1257<<((x1258^x1259)/x1260));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1265 = INT8_MAX;
	volatile int8_t x1266 = -1;
	uint8_t x1267 = 56U;
	int64_t x1268 = 475LL;
	volatile int32_t t83 = 884;

	t83 = (x1265<<((x1266^x1267)/x1268));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1282 = -1;
	uint16_t x1284 = UINT16_MAX;

	t84 = (x1281<<((x1282^x1283)/x1284));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1305 = UINT32_MAX;
	uint16_t x1306 = 28032U;
	int64_t x1308 = INT64_MAX;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (x1305<<((x1306^x1307)/x1308));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1313 = 1LLU;
	static int16_t x1314 = INT16_MIN;
	static int8_t x1315 = INT8_MAX;
	volatile uint64_t t86 = 41591508822LLU;

	t86 = (x1313<<((x1314^x1315)/x1316));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x1330 = INT8_MIN;
	uint32_t x1331 = UINT32_MAX;
	volatile uint8_t x1332 = 32U;
	int32_t t87 = 5;

	t87 = (x1329<<((x1330^x1331)/x1332));

	if (t87 != 2040) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x1341 = UINT32_MAX;
	volatile int16_t x1342 = INT16_MIN;
	uint32_t x1344 = UINT32_MAX;

	t88 = (x1341<<((x1342^x1343)/x1344));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x1353 = UINT64_MAX;
	uint64_t x1354 = UINT64_MAX;
	volatile int16_t x1356 = -1;
	uint64_t t89 = UINT64_MAX;

	t89 = (x1353<<((x1354^x1355)/x1356));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x1357 = 1893U;
	int8_t x1360 = -1;
	volatile int32_t t90 = -13719579;

	t90 = (x1357<<((x1358^x1359)/x1360));

	if (t90 != 242304) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x1385 = 1;
	int32_t x1387 = -1;
	volatile int64_t x1388 = INT64_MAX;
	volatile int32_t t91 = 20278342;

	t91 = (x1385<<((x1386^x1387)/x1388));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1397 = 9203;
	int8_t x1398 = INT8_MAX;
	uint64_t x1399 = 11902150863136527LLU;
	volatile int32_t t92 = 76;

	t92 = (x1397<<((x1398^x1399)/x1400));

	if (t92 != 9203) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x1406 = UINT8_MAX;
	int32_t x1407 = -1;
	int64_t x1408 = -136106831231LL;
	volatile int32_t t93 = -32;

	t93 = (x1405<<((x1406^x1407)/x1408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1435 = INT8_MIN;
	int8_t x1436 = 1;
	static volatile int32_t t94 = 116;

	t94 = (x1433<<((x1434^x1435)/x1436));

	if (t94 != 19) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x1445 = INT64_MAX;
	static int8_t x1446 = -1;
	volatile uint16_t x1447 = 0U;
	int16_t x1448 = INT16_MAX;

	t95 = (x1445<<((x1446^x1447)/x1448));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1465 = 661034061664139177LL;
	int16_t x1466 = -1;
	volatile int32_t x1467 = -1;
	static uint64_t x1468 = 831057LLU;

	t96 = (x1465<<((x1466^x1467)/x1468));

	if (t96 != 661034061664139177LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1485 = 363;
	static int16_t x1487 = -1;
	int32_t x1488 = INT32_MIN;
	volatile int32_t t97 = 57;

	t97 = (x1485<<((x1486^x1487)/x1488));

	if (t97 != 363) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x1517 = UINT16_MAX;
	int16_t x1518 = -1;
	static uint64_t x1519 = UINT64_MAX;
	int16_t x1520 = -17;
	volatile int32_t t98 = 13849;

	t98 = (x1517<<((x1518^x1519)/x1520));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x1521 = INT16_MAX;
	static uint16_t x1522 = 183U;
	int8_t x1523 = INT8_MAX;
	uint16_t x1524 = UINT16_MAX;
	volatile int32_t t99 = 0;

	t99 = (x1521<<((x1522^x1523)/x1524));

	if (t99 != 32767) { NG(); } else { ; }
	
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

