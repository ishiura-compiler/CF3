#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = 4326;
uint32_t t1 = 16630U;
int32_t x30 = INT32_MIN;
int8_t x31 = INT8_MIN;
volatile int32_t t3 = -35967;
volatile int32_t x51 = 6148;
int8_t x52 = 7;
int16_t x65 = INT16_MAX;
int16_t x66 = INT16_MIN;
uint32_t x67 = UINT32_MAX;
uint64_t t6 = 12LLU;
volatile uint8_t x73 = 108U;
int8_t x84 = -1;
volatile int64_t x190 = -248680633168816LL;
volatile int32_t t12 = 126492934;
static int32_t t14 = 2786869;
int32_t x268 = -1;
static int8_t x270 = INT8_MIN;
static int32_t x293 = INT32_MIN;
volatile int32_t x296 = INT32_MAX;
int8_t x314 = INT8_MIN;
uint16_t x323 = UINT16_MAX;
static volatile uint64_t t21 = UINT64_MAX;
uint16_t x365 = UINT16_MAX;
int64_t x380 = INT64_MAX;
volatile uint32_t x385 = 1116971U;
static int32_t x387 = -29;
volatile int16_t x415 = 475;
static int32_t x424 = INT32_MAX;
uint8_t x428 = UINT8_MAX;
int16_t x429 = INT16_MAX;
int16_t x430 = INT16_MAX;
uint64_t x431 = UINT64_MAX;
int16_t x435 = 59;
static int64_t t30 = INT64_MIN;
uint64_t x444 = UINT64_MAX;
volatile uint64_t t31 = 0LLU;
uint16_t x457 = 419U;
uint8_t x459 = UINT8_MAX;
static uint8_t x489 = 4U;
int32_t x497 = -393861;
uint64_t x536 = UINT64_MAX;
uint64_t x539 = UINT64_MAX;
int8_t x588 = -1;
volatile uint8_t x594 = 17U;
uint8_t x612 = UINT8_MAX;
static int64_t x613 = 12473316LL;
int32_t t41 = 0;
uint16_t x630 = UINT16_MAX;
volatile int64_t t43 = INT64_MAX;
int64_t x654 = INT64_MIN;
int32_t x655 = INT32_MIN;
uint32_t x675 = 1487491806U;
static volatile int64_t t46 = -3709585695956516169LL;
uint32_t x721 = 998U;
volatile uint64_t x722 = 41LLU;
volatile int32_t x724 = 57;
int16_t x741 = 7;
uint32_t t50 = 359853694U;
int32_t x799 = -1;
int32_t x806 = -5127881;
static int16_t x814 = INT16_MIN;
volatile int32_t t56 = INT32_MAX;
uint8_t x827 = 40U;
int16_t x864 = INT16_MAX;
static int16_t x873 = -3;
volatile uint8_t x875 = 22U;
volatile int32_t t62 = -34310;
int16_t x909 = -14;
static uint32_t x921 = 32819821U;
static int16_t x923 = -603;
uint16_t x942 = 949U;
int32_t x967 = 496;
uint16_t x980 = 12957U;
int32_t t73 = -1;
static int64_t x1005 = 295080055850020239LL;
volatile int8_t x1006 = INT8_MIN;
volatile int64_t t75 = -17042LL;
uint16_t x1026 = 6037U;
int32_t x1055 = 99976573;
int16_t x1074 = INT16_MIN;
volatile int32_t t80 = -495;
int16_t x1110 = INT16_MIN;
uint8_t x1151 = 5U;
int32_t x1168 = -1;
static volatile uint16_t x1197 = UINT16_MAX;
int8_t x1234 = INT8_MIN;
volatile int32_t t91 = INT32_MIN;
int32_t x1238 = INT32_MIN;
int8_t x1245 = -1;
int16_t x1265 = -1;
int32_t t94 = -842807808;
int64_t x1311 = 1398802068894643929LL;
static int64_t t95 = 7983096LL;
volatile uint64_t t96 = 693049268183LLU;
int32_t x1356 = INT32_MAX;
uint8_t x1362 = 36U;
int64_t t99 = -438LL;


void f0(void) {
	volatile uint8_t x5 = 1U;
	volatile uint8_t x6 = UINT8_MAX;
	int32_t x8 = -363879;
	int32_t t0 = -3441367;

	t0 = (x5/((x6<x7)&x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x17 = 5U;
	uint64_t x18 = 198LLU;
	uint64_t x19 = UINT64_MAX;
	int16_t x20 = -1103;

	t1 = (x17/((x18<x19)&x20));

	if (t1 != 5U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x29 = 7871U;
	int16_t x32 = -1;
	int32_t t2 = 9;

	t2 = (x29/((x30<x31)&x32));

	if (t2 != 7871) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x41 = 4495;
	volatile int8_t x42 = INT8_MIN;
	uint16_t x43 = UINT16_MAX;
	static volatile uint16_t x44 = 5U;

	t3 = (x41/((x42<x43)&x44));

	if (t3 != 4495) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x49 = INT16_MAX;
	int8_t x50 = INT8_MIN;
	static volatile int32_t t4 = 30818;

	t4 = (x49/((x50<x51)&x52));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x61 = INT64_MIN;
	uint64_t x62 = 1013LLU;
	static int64_t x63 = INT64_MIN;
	int64_t x64 = INT64_MAX;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x61/((x62<x63)&x64));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x68 = UINT64_MAX;

	t6 = (x65/((x66<x67)&x68));

	if (t6 != 32767LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x74 = -1;
	int32_t x75 = 0;
	int32_t x76 = 1;
	volatile int32_t t7 = 0;

	t7 = (x73/((x74<x75)&x76));

	if (t7 != 108) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x81 = UINT64_MAX;
	int64_t x82 = 17LL;
	uint64_t x83 = UINT64_MAX;
	static uint64_t t8 = UINT64_MAX;

	t8 = (x81/((x82<x83)&x84));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x117 = INT32_MIN;
	static int32_t x118 = -6675690;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = 195U;
	int32_t t9 = INT32_MIN;

	t9 = (x117/((x118<x119)&x120));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x141 = 4;
	int32_t x142 = -250892;
	int32_t x143 = -1;
	int16_t x144 = -3;
	int32_t t10 = 797253;

	t10 = (x141/((x142<x143)&x144));

	if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x189 = INT8_MIN;
	uint64_t x191 = UINT64_MAX;
	static int32_t x192 = INT32_MAX;
	int32_t t11 = -23936;

	t11 = (x189/((x190<x191)&x192));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x193 = 7U;
	int32_t x194 = -1;
	uint8_t x195 = 16U;
	int16_t x196 = INT16_MAX;

	t12 = (x193/((x194<x195)&x196));

	if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x213 = INT32_MAX;
	static int32_t x214 = INT32_MAX;
	volatile uint32_t x215 = UINT32_MAX;
	int32_t x216 = INT32_MAX;
	static int32_t t13 = INT32_MAX;

	t13 = (x213/((x214<x215)&x216));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x233 = UINT16_MAX;
	int32_t x234 = INT32_MIN;
	volatile int8_t x235 = INT8_MIN;
	volatile int8_t x236 = -1;

	t14 = (x233/((x234<x235)&x236));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x249 = 57;
	int64_t x250 = INT64_MIN;
	uint16_t x251 = 386U;
	int16_t x252 = 3;
	volatile int32_t t15 = 1;

	t15 = (x249/((x250<x251)&x252));

	if (t15 != 57) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x265 = INT32_MIN;
	uint64_t x266 = 11644414125883LLU;
	static int8_t x267 = -12;
	int32_t t16 = INT32_MIN;

	t16 = (x265/((x266<x267)&x268));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x269 = INT64_MIN;
	uint8_t x271 = 22U;
	volatile uint64_t x272 = 1557LLU;
	uint64_t t17 = 343647771LLU;

	t17 = (x269/((x270<x271)&x272));

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x281 = 9;
	int64_t x282 = -1767510LL;
	int16_t x283 = -10337;
	static volatile int32_t x284 = -1;
	int32_t t18 = 5131113;

	t18 = (x281/((x282<x283)&x284));

	if (t18 != 9) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x294 = -1;
	uint16_t x295 = UINT16_MAX;
	static volatile int32_t t19 = INT32_MIN;

	t19 = (x293/((x294<x295)&x296));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x313 = INT16_MIN;
	volatile int16_t x315 = 0;
	uint16_t x316 = UINT16_MAX;
	int32_t t20 = -92;

	t20 = (x313/((x314<x315)&x316));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x321 = UINT64_MAX;
	uint16_t x322 = 317U;
	int64_t x324 = 13LL;

	t21 = (x321/((x322<x323)&x324));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x366 = 0;
	uint16_t x367 = 10U;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t22 = 37519;

	t22 = (x365/((x366<x367)&x368));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x377 = 478U;
	static volatile int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MAX;
	static volatile int64_t t23 = -4244708639LL;

	t23 = (x377/((x378<x379)&x380));

	if (t23 != 478LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x381 = INT16_MIN;
	uint16_t x382 = UINT16_MAX;
	uint64_t x383 = 161815LLU;
	static uint16_t x384 = UINT16_MAX;
	volatile int32_t t24 = 4375;

	t24 = (x381/((x382<x383)&x384));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x386 = INT32_MIN;
	int8_t x388 = 5;
	volatile uint32_t t25 = 26U;

	t25 = (x385/((x386<x387)&x388));

	if (t25 != 1116971U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x413 = 5U;
	int16_t x414 = 0;
	int32_t x416 = -116045;
	volatile int32_t t26 = 57;

	t26 = (x413/((x414<x415)&x416));

	if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x421 = UINT8_MAX;
	int8_t x422 = -1;
	volatile int32_t x423 = INT32_MAX;
	volatile int32_t t27 = 14979;

	t27 = (x421/((x422<x423)&x424));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x425 = 8407484817LL;
	int8_t x426 = INT8_MAX;
	static int16_t x427 = INT16_MAX;
	static int64_t t28 = 6672LL;

	t28 = (x425/((x426<x427)&x428));

	if (t28 != 8407484817LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x432 = INT16_MAX;
	int32_t t29 = 56128;

	t29 = (x429/((x430<x431)&x432));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x433 = INT64_MIN;
	int16_t x434 = INT16_MIN;
	static volatile int8_t x436 = -1;

	t30 = (x433/((x434<x435)&x436));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x441 = INT64_MIN;
	uint64_t x442 = 407992LLU;
	int32_t x443 = INT32_MIN;

	t31 = (x441/((x442<x443)&x444));

	if (t31 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x458 = -1;
	int64_t x460 = -1LL;
	volatile int64_t t32 = 3134150289LL;

	t32 = (x457/((x458<x459)&x460));

	if (t32 != 419LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x490 = -1;
	int32_t x491 = INT32_MAX;
	static uint32_t x492 = UINT32_MAX;
	uint32_t t33 = 1488U;

	t33 = (x489/((x490<x491)&x492));

	if (t33 != 4U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x498 = -123786373;
	static int32_t x499 = INT32_MAX;
	uint32_t x500 = 370089U;
	volatile uint32_t t34 = 761004686U;

	t34 = (x497/((x498<x499)&x500));

	if (t34 != 4294573435U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x533 = INT8_MAX;
	uint32_t x534 = 110563U;
	static int64_t x535 = 142482112LL;
	static uint64_t t35 = 27830195888169376LLU;

	t35 = (x533/((x534<x535)&x536));

	if (t35 != 127LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x537 = INT32_MIN;
	uint64_t x538 = 2269286080454LLU;
	static volatile int8_t x540 = -1;
	volatile int32_t t36 = INT32_MIN;

	t36 = (x537/((x538<x539)&x540));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x585 = -1;
	int8_t x586 = 0;
	static uint8_t x587 = UINT8_MAX;
	int32_t t37 = 30;

	t37 = (x585/((x586<x587)&x588));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x593 = INT16_MAX;
	uint32_t x595 = UINT32_MAX;
	static int32_t x596 = -1;
	volatile int32_t t38 = -34309;

	t38 = (x593/((x594<x595)&x596));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x609 = 20688151LLU;
	uint64_t x610 = 56032160051769LLU;
	int32_t x611 = -371340039;
	volatile uint64_t t39 = 7427LLU;

	t39 = (x609/((x610<x611)&x612));

	if (t39 != 20688151LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x614 = 183;
	int32_t x615 = INT32_MAX;
	int8_t x616 = 9;
	volatile int64_t t40 = 5046472010LL;

	t40 = (x613/((x614<x615)&x616));

	if (t40 != 12473316LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x617 = -1;
	int64_t x618 = INT64_MIN;
	int64_t x619 = 238990058LL;
	int8_t x620 = -1;

	t41 = (x617/((x618<x619)&x620));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x625 = INT64_MIN;
	volatile int32_t x626 = -107;
	int32_t x627 = INT32_MAX;
	uint16_t x628 = UINT16_MAX;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x625/((x626<x627)&x628));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x629 = INT64_MAX;
	uint32_t x631 = 149172U;
	static int16_t x632 = -1;

	t43 = (x629/((x630<x631)&x632));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x653 = -1;
	int64_t x656 = -54357LL;
	volatile int64_t t44 = -52322085684226LL;

	t44 = (x653/((x654<x655)&x656));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x665 = 2;
	int64_t x666 = 355LL;
	static int16_t x667 = 479;
	uint32_t x668 = 601U;
	uint32_t t45 = 316171930U;

	t45 = (x665/((x666<x667)&x668));

	if (t45 != 2U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x673 = -1;
	static uint8_t x674 = 26U;
	static int64_t x676 = 877257LL;

	t46 = (x673/((x674<x675)&x676));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x677 = 193U;
	static uint8_t x678 = UINT8_MAX;
	uint64_t x679 = 42001043282036LLU;
	int8_t x680 = -1;
	int32_t t47 = -182908863;

	t47 = (x677/((x678<x679)&x680));

	if (t47 != 193) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x709 = 43U;
	int16_t x710 = -69;
	uint8_t x711 = 1U;
	uint32_t x712 = 4121807U;
	volatile uint32_t t48 = 61357U;

	t48 = (x709/((x710<x711)&x712));

	if (t48 != 43U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x723 = UINT8_MAX;
	volatile uint32_t t49 = 143377U;

	t49 = (x721/((x722<x723)&x724));

	if (t49 != 998U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x742 = 102U;
	uint32_t x743 = UINT32_MAX;
	static uint32_t x744 = UINT32_MAX;

	t50 = (x741/((x742<x743)&x744));

	if (t50 != 7U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x753 = 3U;
	uint64_t x754 = 6LLU;
	int8_t x755 = -1;
	volatile uint16_t x756 = UINT16_MAX;
	volatile int32_t t51 = -77033;

	t51 = (x753/((x754<x755)&x756));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x765 = INT8_MIN;
	uint32_t x766 = 0U;
	static volatile uint8_t x767 = 69U;
	volatile int64_t x768 = -1708590201661LL;
	volatile int64_t t52 = 44782LL;

	t52 = (x765/((x766<x767)&x768));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x785 = INT32_MIN;
	int64_t x786 = -1577880130095792LL;
	static int8_t x787 = INT8_MAX;
	volatile int8_t x788 = 5;
	int32_t t53 = INT32_MIN;

	t53 = (x785/((x786<x787)&x788));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x797 = UINT8_MAX;
	uint64_t x798 = 445391164295LLU;
	int8_t x800 = -1;
	volatile int32_t t54 = -234497;

	t54 = (x797/((x798<x799)&x800));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x805 = INT32_MIN;
	uint64_t x807 = UINT64_MAX;
	uint16_t x808 = UINT16_MAX;
	int32_t t55 = INT32_MIN;

	t55 = (x805/((x806<x807)&x808));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x813 = INT32_MAX;
	int32_t x815 = -1;
	int16_t x816 = INT16_MAX;

	t56 = (x813/((x814<x815)&x816));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x825 = 9;
	uint64_t x826 = 1LLU;
	uint8_t x828 = 37U;
	static int32_t t57 = 353954144;

	t57 = (x825/((x826<x827)&x828));

	if (t57 != 9) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x833 = 15759U;
	uint16_t x834 = 11U;
	uint16_t x835 = 1581U;
	int64_t x836 = INT64_MAX;
	volatile int64_t t58 = -81297LL;

	t58 = (x833/((x834<x835)&x836));

	if (t58 != 15759LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x837 = 32863601984318628LLU;
	int8_t x838 = INT8_MAX;
	uint32_t x839 = 38282U;
	static uint16_t x840 = 653U;
	volatile uint64_t t59 = 29LLU;

	t59 = (x837/((x838<x839)&x840));

	if (t59 != 32863601984318628LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x857 = INT32_MIN;
	int64_t x858 = -1LL;
	uint32_t x859 = 282110U;
	int16_t x860 = INT16_MAX;
	volatile int32_t t60 = INT32_MIN;

	t60 = (x857/((x858<x859)&x860));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x861 = -1;
	static uint64_t x862 = 2740177355337150213LLU;
	volatile int32_t x863 = -1;
	int32_t t61 = 9;

	t61 = (x861/((x862<x863)&x864));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x874 = -6;
	static uint16_t x876 = 793U;

	t62 = (x873/((x874<x875)&x876));

	if (t62 != -3) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x910 = INT64_MIN;
	static int16_t x911 = INT16_MAX;
	int8_t x912 = INT8_MAX;
	volatile int32_t t63 = 576172873;

	t63 = (x909/((x910<x911)&x912));

	if (t63 != -14) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x922 = 1U;
	int16_t x924 = INT16_MAX;
	static volatile uint32_t t64 = 35U;

	t64 = (x921/((x922<x923)&x924));

	if (t64 != 32819821U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x933 = INT64_MIN;
	volatile int16_t x934 = -5;
	static uint8_t x935 = 1U;
	static uint16_t x936 = UINT16_MAX;
	int64_t t65 = INT64_MIN;

	t65 = (x933/((x934<x935)&x936));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x937 = UINT32_MAX;
	static volatile uint64_t x938 = 6LLU;
	uint64_t x939 = 9146LLU;
	uint64_t x940 = 1029904531LLU;
	static volatile uint64_t t66 = 121459380LLU;

	t66 = (x937/((x938<x939)&x940));

	if (t66 != 4294967295LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x941 = INT8_MIN;
	int32_t x943 = INT32_MAX;
	int16_t x944 = -1;
	static int32_t t67 = 2;

	t67 = (x941/((x942<x943)&x944));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x949 = UINT8_MAX;
	volatile int32_t x950 = INT32_MIN;
	static int16_t x951 = INT16_MIN;
	int32_t x952 = INT32_MAX;
	volatile int32_t t68 = -3097;

	t68 = (x949/((x950<x951)&x952));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x961 = INT8_MAX;
	int32_t x962 = INT32_MIN;
	int8_t x963 = INT8_MAX;
	int8_t x964 = 1;
	int32_t t69 = 1;

	t69 = (x961/((x962<x963)&x964));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x965 = 18685U;
	int8_t x966 = -1;
	uint8_t x968 = UINT8_MAX;
	uint32_t t70 = 3201494U;

	t70 = (x965/((x966<x967)&x968));

	if (t70 != 18685U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x977 = 28405U;
	int8_t x978 = INT8_MIN;
	int32_t x979 = -1;
	volatile int32_t t71 = 0;

	t71 = (x977/((x978<x979)&x980));

	if (t71 != 28405) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x981 = 13928U;
	volatile uint16_t x982 = UINT16_MAX;
	uint32_t x983 = UINT32_MAX;
	int8_t x984 = INT8_MAX;
	int32_t t72 = -172740;

	t72 = (x981/((x982<x983)&x984));

	if (t72 != 13928) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x993 = INT8_MAX;
	volatile int64_t x994 = -1LL;
	uint16_t x995 = 0U;
	int8_t x996 = -1;

	t73 = (x993/((x994<x995)&x996));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x997 = 1696609LLU;
	int64_t x998 = INT64_MIN;
	static uint8_t x999 = UINT8_MAX;
	uint8_t x1000 = 25U;
	volatile uint64_t t74 = 199756136LLU;

	t74 = (x997/((x998<x999)&x1000));

	if (t74 != 1696609LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x1007 = 1U;
	uint8_t x1008 = UINT8_MAX;

	t75 = (x1005/((x1006<x1007)&x1008));

	if (t75 != 295080055850020239LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1009 = 0U;
	int64_t x1010 = -161220124040476LL;
	uint8_t x1011 = UINT8_MAX;
	static int16_t x1012 = INT16_MAX;
	volatile int32_t t76 = 3844;

	t76 = (x1009/((x1010<x1011)&x1012));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1025 = -1;
	static uint64_t x1027 = 34264577956690LLU;
	int64_t x1028 = -138553881LL;
	volatile int64_t t77 = -334609225048181776LL;

	t77 = (x1025/((x1026<x1027)&x1028));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x1053 = INT16_MAX;
	uint16_t x1054 = 1U;
	int32_t x1056 = INT32_MAX;
	int32_t t78 = 832;

	t78 = (x1053/((x1054<x1055)&x1056));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x1057 = 0U;
	static int32_t x1058 = INT32_MIN;
	int16_t x1059 = INT16_MAX;
	static uint8_t x1060 = 1U;
	int32_t t79 = 0;

	t79 = (x1057/((x1058<x1059)&x1060));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x1073 = INT16_MAX;
	uint64_t x1075 = UINT64_MAX;
	uint16_t x1076 = 457U;

	t80 = (x1073/((x1074<x1075)&x1076));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x1077 = INT16_MIN;
	int16_t x1078 = -1;
	int32_t x1079 = 2777022;
	uint32_t x1080 = UINT32_MAX;
	volatile uint32_t t81 = 887465362U;

	t81 = (x1077/((x1078<x1079)&x1080));

	if (t81 != 4294934528U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x1109 = 91U;
	static int64_t x1111 = INT64_MAX;
	uint8_t x1112 = UINT8_MAX;
	int32_t t82 = -876;

	t82 = (x1109/((x1110<x1111)&x1112));

	if (t82 != 91) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1117 = 62;
	uint64_t x1118 = 338246LLU;
	int32_t x1119 = -1;
	static int64_t x1120 = INT64_MAX;
	int64_t t83 = -246524LL;

	t83 = (x1117/((x1118<x1119)&x1120));

	if (t83 != 62LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x1133 = INT16_MIN;
	static int16_t x1134 = -11506;
	int8_t x1135 = INT8_MIN;
	int8_t x1136 = INT8_MAX;
	int32_t t84 = 39;

	t84 = (x1133/((x1134<x1135)&x1136));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x1145 = -1LL;
	int64_t x1146 = -1LL;
	uint8_t x1147 = UINT8_MAX;
	int8_t x1148 = -31;
	int64_t t85 = 74LL;

	t85 = (x1145/((x1146<x1147)&x1148));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1149 = -746;
	static int64_t x1150 = INT64_MIN;
	uint64_t x1152 = 55LLU;
	volatile uint64_t t86 = 547564623478805988LLU;

	t86 = (x1149/((x1150<x1151)&x1152));

	if (t86 != 18446744073709550870LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1165 = INT16_MAX;
	volatile int16_t x1166 = -505;
	volatile int16_t x1167 = -1;
	volatile int32_t t87 = 80941123;

	t87 = (x1165/((x1166<x1167)&x1168));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1198 = 1495U;
	uint64_t x1199 = 4824987132LLU;
	static int16_t x1200 = -3939;
	volatile int32_t t88 = 5583;

	t88 = (x1197/((x1198<x1199)&x1200));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1201 = INT8_MAX;
	uint32_t x1202 = 2849U;
	int32_t x1203 = INT32_MAX;
	int64_t x1204 = INT64_MAX;
	int64_t t89 = -6037655514LL;

	t89 = (x1201/((x1202<x1203)&x1204));

	if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1225 = -1;
	int32_t x1226 = -215986;
	volatile int16_t x1227 = -1;
	static uint16_t x1228 = 3405U;
	volatile int32_t t90 = -1393462;

	t90 = (x1225/((x1226<x1227)&x1228));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1233 = INT32_MIN;
	uint8_t x1235 = 1U;
	static int8_t x1236 = -1;

	t91 = (x1233/((x1234<x1235)&x1236));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1237 = 318485220611981LLU;
	volatile int8_t x1239 = 1;
	int64_t x1240 = INT64_MAX;
	volatile uint64_t t92 = 1418825318169LLU;

	t92 = (x1237/((x1238<x1239)&x1240));

	if (t92 != 318485220611981LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x1246 = 1;
	volatile uint16_t x1247 = 10183U;
	volatile uint64_t x1248 = UINT64_MAX;
	uint64_t t93 = UINT64_MAX;

	t93 = (x1245/((x1246<x1247)&x1248));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x1266 = -1LL;
	static uint8_t x1267 = UINT8_MAX;
	uint8_t x1268 = 13U;

	t94 = (x1265/((x1266<x1267)&x1268));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1309 = -1;
	static int8_t x1310 = INT8_MIN;
	static volatile int64_t x1312 = -1LL;

	t95 = (x1309/((x1310<x1311)&x1312));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1325 = INT16_MIN;
	static int8_t x1326 = INT8_MIN;
	int16_t x1327 = -1;
	static volatile uint64_t x1328 = UINT64_MAX;

	t96 = (x1325/((x1326<x1327)&x1328));

	if (t96 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1345 = -603;
	int16_t x1346 = INT16_MIN;
	int8_t x1347 = -26;
	uint8_t x1348 = 1U;
	volatile int32_t t97 = -14126289;

	t97 = (x1345/((x1346<x1347)&x1348));

	if (t97 != -603) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x1353 = UINT16_MAX;
	uint16_t x1354 = 185U;
	volatile uint8_t x1355 = UINT8_MAX;
	volatile int32_t t98 = 0;

	t98 = (x1353/((x1354<x1355)&x1356));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x1361 = 3477;
	uint16_t x1363 = UINT16_MAX;
	int64_t x1364 = -1LL;

	t99 = (x1361/((x1362<x1363)&x1364));

	if (t99 != 3477LL) { NG(); } else { ; }
	
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

