#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -69;
int8_t x24 = -1;
static int32_t t1 = 353425031;
uint16_t x92 = 2U;
int32_t x108 = -1;
volatile int64_t x112 = -1LL;
int64_t t8 = -10714988915533LL;
int64_t x158 = INT64_MIN;
int32_t x171 = -1;
volatile uint8_t x186 = UINT8_MAX;
static volatile int16_t x222 = INT16_MIN;
int16_t x223 = 2;
volatile int8_t x225 = -1;
static volatile int32_t x226 = 469295;
volatile uint64_t t17 = 4264057710036LLU;
volatile uint64_t t18 = 1815773035858456LLU;
volatile uint64_t t19 = 7516781317849041LLU;
int8_t x259 = 8;
static volatile int64_t t21 = -3450433382LL;
volatile int32_t x296 = 4;
volatile uint64_t t22 = 53LLU;
uint16_t x301 = 3U;
static int8_t x303 = 23;
int64_t x329 = -113LL;
int16_t x330 = INT16_MAX;
static uint64_t x342 = 567332330251744044LLU;
uint32_t x348 = UINT32_MAX;
static int8_t x355 = INT8_MAX;
int8_t x356 = INT8_MAX;
int8_t x402 = -1;
static int8_t x417 = 1;
static volatile uint32_t x420 = 48156U;
uint32_t x425 = 21102U;
int32_t x428 = -1;
uint16_t x433 = 1003U;
int64_t x436 = -1LL;
volatile uint64_t t34 = 58248665LLU;
volatile uint16_t x525 = 15411U;
uint32_t x538 = UINT32_MAX;
volatile uint16_t x572 = 53U;
volatile int32_t x589 = -1;
uint32_t x597 = UINT32_MAX;
int8_t x600 = INT8_MAX;
int64_t t42 = -74976426076189LL;
static volatile int32_t x615 = INT32_MIN;
uint16_t x633 = 4541U;
uint64_t x634 = 343268207730573LLU;
static int32_t x654 = INT32_MIN;
volatile int32_t t46 = -912974;
static uint32_t x665 = 70U;
int8_t x695 = 10;
volatile int32_t x696 = -1;
int16_t x722 = 4408;
static int32_t t51 = -1186066;
volatile int32_t t53 = 15265557;
int8_t x776 = -1;
static volatile int32_t t54 = -8786137;
uint8_t x859 = 1U;
uint32_t x875 = UINT32_MAX;
int32_t x898 = -23;
static uint8_t x903 = 1U;
int32_t x941 = -1;
static int32_t x942 = INT32_MIN;
volatile int32_t x965 = 16;
int32_t x966 = -53;
static int32_t x968 = -6385;
static int16_t x971 = -13419;
uint32_t x987 = UINT32_MAX;
uint64_t x1005 = 476108851208565303LLU;
volatile uint64_t x1006 = 3590900641015356191LLU;
static int16_t x1135 = 1;
int32_t x1154 = INT32_MIN;
int32_t t73 = 10729773;
int64_t x1157 = INT64_MAX;
int8_t x1168 = -1;
static volatile int32_t t75 = 113698;
volatile uint64_t x1169 = 89LLU;
uint64_t x1278 = UINT64_MAX;
uint64_t x1305 = 879061634LLU;
int8_t x1309 = -1;
static int64_t t83 = 128111614932112329LL;
int64_t x1340 = -1LL;
uint8_t x1388 = 1U;
uint32_t x1443 = UINT32_MAX;
uint16_t x1518 = UINT16_MAX;
volatile uint64_t x1519 = 1792583709962LLU;
int64_t t90 = 17414297884LL;
static volatile uint64_t t91 = 1593092011282617LLU;
static volatile int16_t x1549 = INT16_MIN;
int32_t x1553 = -12;
static int32_t t96 = -4176;
static volatile int8_t x1575 = -1;
volatile uint64_t t98 = 220980213897023825LLU;
volatile uint8_t x1601 = UINT8_MAX;
int32_t x1603 = INT32_MIN;
volatile int32_t t99 = 1;


void f0(void) {
	static int64_t x9 = -458928LL;
	int32_t x11 = -76967;
	int32_t x12 = -1;
	volatile int64_t t0 = -245743351245LL;

	t0 = ((x9/x10)<<(x11%x12));

	if (t0 != 6651LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = 8567657;
	volatile int8_t x23 = -1;

	t1 = ((x21/x22)<<(x23%x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x61 = -10482976783447LL;
	volatile int16_t x62 = INT16_MIN;
	static int32_t x63 = INT32_MAX;
	int16_t x64 = INT16_MAX;
	volatile int64_t t2 = 12657048387LL;

	t2 = ((x61/x62)<<(x63%x64));

	if (t2 != 639830124LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x65 = INT16_MIN;
	static int32_t x66 = -30703739;
	int16_t x67 = INT16_MIN;
	volatile int32_t x68 = 2;
	static volatile int32_t t3 = 626;

	t3 = ((x65/x66)<<(x67%x68));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x77 = -1;
	static int64_t x78 = INT64_MIN;
	volatile uint8_t x79 = 4U;
	volatile int16_t x80 = INT16_MIN;
	int64_t t4 = 21704661312015700LL;

	t4 = ((x77/x78)<<(x79%x80));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x85 = INT8_MAX;
	int32_t x86 = INT32_MIN;
	volatile int8_t x87 = INT8_MIN;
	int32_t x88 = -1;
	int32_t t5 = -12;

	t5 = ((x85/x86)<<(x87%x88));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x89 = -1;
	static int8_t x90 = INT8_MAX;
	int32_t x91 = 3092;
	int32_t t6 = 41855568;

	t6 = ((x89/x90)<<(x91%x92));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x105 = 14LLU;
	volatile int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MAX;
	volatile uint64_t t7 = 337LLU;

	t7 = ((x105/x106)<<(x107%x108));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x109 = INT64_MIN;
	volatile int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MIN;

	t8 = ((x109/x110)<<(x111%x112));

	if (t8 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x145 = UINT64_MAX;
	int64_t x146 = -28867468988LL;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = -62;
	volatile uint64_t t9 = 2LLU;

	t9 = ((x145/x146)<<(x147%x148));

	if (t9 != 128LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x157 = 2;
	int8_t x159 = INT8_MIN;
	int32_t x160 = -1;
	int64_t t10 = 54649LL;

	t10 = ((x157/x158)<<(x159%x160));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x169 = UINT8_MAX;
	int32_t x170 = INT32_MIN;
	volatile int8_t x172 = -1;
	int32_t t11 = -1198;

	t11 = ((x169/x170)<<(x171%x172));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x177 = -1;
	static uint16_t x178 = 7U;
	uint32_t x179 = UINT32_MAX;
	int32_t x180 = -1;
	static volatile int32_t t12 = -2;

	t12 = ((x177/x178)<<(x179%x180));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x185 = -1;
	static int16_t x187 = INT16_MAX;
	volatile int32_t x188 = -1;
	volatile int32_t t13 = 16;

	t13 = ((x185/x186)<<(x187%x188));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x221 = 53373135017988LLU;
	int32_t x224 = -1;
	static volatile uint64_t t14 = 781334088103968510LLU;

	t14 = ((x221/x222)<<(x223%x224));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x227 = INT8_MIN;
	int64_t x228 = 1LL;
	volatile int32_t t15 = 3903972;

	t15 = ((x225/x226)<<(x227%x228));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x229 = 17034492620628LLU;
	int32_t x230 = INT32_MIN;
	uint16_t x231 = 849U;
	int16_t x232 = -1;
	uint64_t t16 = 66132608513521508LLU;

	t16 = ((x229/x230)<<(x231%x232));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x233 = INT32_MIN;
	volatile uint64_t x234 = 95693707LLU;
	static volatile uint32_t x235 = UINT32_MAX;
	int8_t x236 = -1;

	t17 = ((x233/x234)<<(x235%x236));

	if (t17 != 192768622408LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x245 = 30U;
	volatile uint64_t x246 = 58692918LLU;
	uint8_t x247 = 13U;
	int32_t x248 = INT32_MIN;

	t18 = ((x245/x246)<<(x247%x248));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x249 = 61LLU;
	int8_t x250 = INT8_MAX;
	int16_t x251 = 1;
	volatile int64_t x252 = -1LL;

	t19 = ((x249/x250)<<(x251%x252));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x257 = -1;
	static int16_t x258 = -24;
	int8_t x260 = INT8_MAX;
	int32_t t20 = -414265;

	t20 = ((x257/x258)<<(x259%x260));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x285 = -21433280673369LL;
	int32_t x286 = -1;
	uint64_t x287 = 233246110798899LLU;
	volatile uint8_t x288 = 11U;

	t21 = ((x285/x286)<<(x287%x288));

	if (t21 != 21433280673369LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x293 = UINT8_MAX;
	uint64_t x294 = UINT64_MAX;
	uint64_t x295 = 236LLU;

	t22 = ((x293/x294)<<(x295%x296));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x302 = 234389257771545325LL;
	uint64_t x304 = 30658716LLU;
	volatile int64_t t23 = -16481746LL;

	t23 = ((x301/x302)<<(x303%x304));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x331 = 0U;
	volatile uint16_t x332 = UINT16_MAX;
	int64_t t24 = -41384461107096088LL;

	t24 = ((x329/x330)<<(x331%x332));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x333 = UINT8_MAX;
	int64_t x334 = 27354900069LL;
	int16_t x335 = -1;
	static uint64_t x336 = UINT64_MAX;
	int64_t t25 = -22379206LL;

	t25 = ((x333/x334)<<(x335%x336));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x341 = INT64_MIN;
	volatile uint8_t x343 = UINT8_MAX;
	int64_t x344 = -1LL;
	uint64_t t26 = 5241773935144LLU;

	t26 = ((x341/x342)<<(x343%x344));

	if (t26 != 16LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x345 = 336780291U;
	volatile uint64_t x346 = 323377723315LLU;
	uint64_t x347 = UINT64_MAX;
	static uint64_t t27 = 29832345LLU;

	t27 = ((x345/x346)<<(x347%x348));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x353 = -1;
	int8_t x354 = 18;
	int32_t t28 = 193;

	t28 = ((x353/x354)<<(x355%x356));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x377 = -1;
	static int32_t x378 = 11095;
	static volatile uint8_t x379 = UINT8_MAX;
	int16_t x380 = -1;
	int32_t t29 = 5141480;

	t29 = ((x377/x378)<<(x379%x380));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x401 = 45661134743550908LLU;
	int8_t x403 = INT8_MIN;
	int8_t x404 = 1;
	uint64_t t30 = 279998752LLU;

	t30 = ((x401/x402)<<(x403%x404));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x418 = 44;
	int64_t x419 = 1LL;
	volatile int32_t t31 = -2;

	t31 = ((x417/x418)<<(x419%x420));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x426 = UINT16_MAX;
	volatile int16_t x427 = 45;
	static uint32_t t32 = 16313916U;

	t32 = ((x425/x426)<<(x427%x428));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x434 = INT64_MAX;
	int16_t x435 = INT16_MIN;
	static int64_t t33 = 103433567385LL;

	t33 = ((x433/x434)<<(x435%x436));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x481 = 288847017U;
	uint64_t x482 = 5996554110548870LLU;
	int64_t x483 = 5944396056992369LL;
	int8_t x484 = INT8_MAX;

	t34 = ((x481/x482)<<(x483%x484));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x485 = -71;
	static int32_t x486 = INT32_MIN;
	int32_t x487 = 0;
	int64_t x488 = -1LL;
	volatile int32_t t35 = -490704105;

	t35 = ((x485/x486)<<(x487%x488));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x521 = INT16_MAX;
	static volatile uint32_t x522 = 3U;
	uint32_t x523 = 2U;
	int32_t x524 = INT32_MIN;
	uint32_t t36 = 19U;

	t36 = ((x521/x522)<<(x523%x524));

	if (t36 != 43688U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x526 = INT16_MIN;
	uint16_t x527 = 11210U;
	static uint8_t x528 = 10U;
	volatile int32_t t37 = 26296;

	t37 = ((x525/x526)<<(x527%x528));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x537 = 15778U;
	uint8_t x539 = 0U;
	uint32_t x540 = 18754U;
	static volatile uint32_t t38 = 118U;

	t38 = ((x537/x538)<<(x539%x540));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x549 = 1012431315408252LLU;
	int8_t x550 = INT8_MIN;
	int8_t x551 = INT8_MAX;
	int32_t x552 = -1;
	volatile uint64_t t39 = 1390322436401LLU;

	t39 = ((x549/x550)<<(x551%x552));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x569 = INT64_MAX;
	int8_t x570 = 11;
	int16_t x571 = 2;
	int64_t t40 = 67782518318802LL;

	t40 = ((x569/x570)<<(x571%x572));

	if (t40 != 3353953467947191200LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x590 = -1151037573LL;
	static int16_t x591 = -1;
	int16_t x592 = -1;
	volatile int64_t t41 = -232946366448711748LL;

	t41 = ((x589/x590)<<(x591%x592));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x598 = INT64_MIN;
	uint8_t x599 = 1U;

	t42 = ((x597/x598)<<(x599%x600));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x609 = 306504918LLU;
	int16_t x610 = INT16_MAX;
	int64_t x611 = INT64_MAX;
	int32_t x612 = 5;
	volatile uint64_t t43 = 7489951779682092432LLU;

	t43 = ((x609/x610)<<(x611%x612));

	if (t43 != 37416LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x613 = UINT32_MAX;
	uint64_t x614 = UINT64_MAX;
	volatile int16_t x616 = INT16_MIN;
	uint64_t t44 = 271246803LLU;

	t44 = ((x613/x614)<<(x615%x616));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x635 = 361;
	volatile uint8_t x636 = 14U;
	volatile uint64_t t45 = 78LLU;

	t45 = ((x633/x634)<<(x635%x636));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x653 = INT32_MAX;
	int8_t x655 = INT8_MIN;
	static int32_t x656 = -1;

	t46 = ((x653/x654)<<(x655%x656));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x666 = 88744481674265LL;
	static int64_t x667 = INT64_MIN;
	int16_t x668 = 1;
	static volatile int64_t t47 = -263467174920992947LL;

	t47 = ((x665/x666)<<(x667%x668));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x693 = 2908922LLU;
	volatile uint32_t x694 = UINT32_MAX;
	uint64_t t48 = 2141922699191702LLU;

	t48 = ((x693/x694)<<(x695%x696));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x717 = -819552571;
	uint32_t x718 = UINT32_MAX;
	int32_t x719 = INT32_MIN;
	volatile int32_t x720 = -1;
	uint32_t t49 = 4U;

	t49 = ((x717/x718)<<(x719%x720));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x721 = INT16_MAX;
	int64_t x723 = -1249561260857530LL;
	static volatile uint64_t x724 = 1LLU;
	volatile int32_t t50 = -689914590;

	t50 = ((x721/x722)<<(x723%x724));

	if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x745 = -15;
	int16_t x746 = -55;
	volatile int8_t x747 = -1;
	volatile int8_t x748 = -1;

	t51 = ((x745/x746)<<(x747%x748));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x749 = 48U;
	static int32_t x750 = INT32_MIN;
	static int8_t x751 = 33;
	volatile int16_t x752 = -1;
	volatile int32_t t52 = 33174;

	t52 = ((x749/x750)<<(x751%x752));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x761 = INT32_MIN;
	int32_t x762 = INT32_MIN;
	volatile int16_t x763 = 18;
	int16_t x764 = INT16_MIN;

	t53 = ((x761/x762)<<(x763%x764));

	if (t53 != 262144) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x773 = 28U;
	static int32_t x774 = INT32_MIN;
	int8_t x775 = INT8_MIN;

	t54 = ((x773/x774)<<(x775%x776));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x801 = 252;
	volatile uint8_t x802 = UINT8_MAX;
	volatile uint32_t x803 = UINT32_MAX;
	volatile uint16_t x804 = UINT16_MAX;
	volatile int32_t t55 = -7;

	t55 = ((x801/x802)<<(x803%x804));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x805 = INT16_MIN;
	static uint64_t x806 = 1LLU;
	static int8_t x807 = 14;
	int16_t x808 = INT16_MAX;
	uint64_t t56 = 67LLU;

	t56 = ((x805/x806)<<(x807%x808));

	if (t56 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x825 = INT16_MAX;
	static int64_t x826 = -76362LL;
	static volatile int32_t x827 = INT32_MIN;
	volatile int8_t x828 = INT8_MIN;
	static volatile int64_t t57 = -381813710871LL;

	t57 = ((x825/x826)<<(x827%x828));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x857 = -1LL;
	int16_t x858 = -1;
	int8_t x860 = -1;
	volatile int64_t t58 = -739LL;

	t58 = ((x857/x858)<<(x859%x860));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x873 = INT64_MIN;
	int64_t x874 = INT64_MIN;
	volatile int32_t x876 = INT32_MAX;
	static int64_t t59 = 1651624564985LL;

	t59 = ((x873/x874)<<(x875%x876));

	if (t59 != 2LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x897 = 0;
	int8_t x899 = 49;
	volatile int16_t x900 = -1;
	static volatile int32_t t60 = -989;

	t60 = ((x897/x898)<<(x899%x900));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x901 = 18966LLU;
	uint8_t x902 = 17U;
	int8_t x904 = INT8_MIN;
	volatile uint64_t t61 = 280617578552742LLU;

	t61 = ((x901/x902)<<(x903%x904));

	if (t61 != 2230LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x943 = 0U;
	int8_t x944 = 1;
	volatile int32_t t62 = 1185;

	t62 = ((x941/x942)<<(x943%x944));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x967 = 5LLU;
	int32_t t63 = 358485506;

	t63 = ((x965/x966)<<(x967%x968));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x969 = INT8_MIN;
	uint8_t x970 = UINT8_MAX;
	int32_t x972 = -1;
	int32_t t64 = -1;

	t64 = ((x969/x970)<<(x971%x972));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x985 = INT16_MIN;
	uint32_t x986 = 1U;
	int8_t x988 = INT8_MAX;
	uint32_t t65 = 29932272U;

	t65 = ((x985/x986)<<(x987%x988));

	if (t65 != 3221225472U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x989 = -1;
	uint8_t x990 = 42U;
	int64_t x991 = INT64_MAX;
	int8_t x992 = 1;
	volatile int32_t t66 = 245777;

	t66 = ((x989/x990)<<(x991%x992));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x1007 = INT8_MIN;
	volatile int8_t x1008 = -1;
	uint64_t t67 = 1895361616489809LLU;

	t67 = ((x1005/x1006)<<(x1007%x1008));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x1049 = -1;
	int8_t x1050 = 23;
	uint16_t x1051 = 0U;
	uint64_t x1052 = 574402038021LLU;
	int32_t t68 = 28884;

	t68 = ((x1049/x1050)<<(x1051%x1052));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1113 = 11;
	int32_t x1114 = 6998422;
	int64_t x1115 = INT64_MAX;
	int8_t x1116 = -1;
	volatile int32_t t69 = -4408;

	t69 = ((x1113/x1114)<<(x1115%x1116));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x1129 = -3;
	uint64_t x1130 = 667008LLU;
	uint8_t x1131 = 0U;
	int32_t x1132 = INT32_MIN;
	volatile uint64_t t70 = 16681LLU;

	t70 = ((x1129/x1130)<<(x1131%x1132));

	if (t70 != 27655956260958LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1133 = INT8_MIN;
	int64_t x1134 = -1LL;
	uint8_t x1136 = UINT8_MAX;
	static int64_t t71 = 17638368355LL;

	t71 = ((x1133/x1134)<<(x1135%x1136));

	if (t71 != 256LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x1137 = INT16_MIN;
	int16_t x1138 = INT16_MIN;
	uint8_t x1139 = 6U;
	int8_t x1140 = INT8_MIN;
	int32_t t72 = -61665;

	t72 = ((x1137/x1138)<<(x1139%x1140));

	if (t72 != 64) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1153 = 1;
	int16_t x1155 = INT16_MIN;
	int16_t x1156 = -1;

	t73 = ((x1153/x1154)<<(x1155%x1156));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1158 = INT64_MIN;
	uint64_t x1159 = UINT64_MAX;
	uint64_t x1160 = UINT64_MAX;
	volatile int64_t t74 = 11128339690197LL;

	t74 = ((x1157/x1158)<<(x1159%x1160));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x1165 = -593640;
	int32_t x1166 = -1;
	int8_t x1167 = INT8_MIN;

	t75 = ((x1165/x1166)<<(x1167%x1168));

	if (t75 != 593640) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1170 = 190LL;
	uint16_t x1171 = 12U;
	int16_t x1172 = INT16_MAX;
	static volatile uint64_t t76 = 24971LLU;

	t76 = ((x1169/x1170)<<(x1171%x1172));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1209 = INT16_MAX;
	static int64_t x1210 = INT64_MIN;
	volatile int64_t x1211 = INT64_MIN;
	int8_t x1212 = -1;
	volatile int64_t t77 = 63274906736LL;

	t77 = ((x1209/x1210)<<(x1211%x1212));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x1265 = 3U;
	int32_t x1266 = INT32_MAX;
	static int32_t x1267 = -191;
	static int32_t x1268 = -1;
	int32_t t78 = 1036524447;

	t78 = ((x1265/x1266)<<(x1267%x1268));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1277 = -44LL;
	int64_t x1279 = 1LL;
	int32_t x1280 = -1;
	static volatile uint64_t t79 = 3356LLU;

	t79 = ((x1277/x1278)<<(x1279%x1280));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1281 = 15562111;
	uint64_t x1282 = 3397003626337LLU;
	uint8_t x1283 = 1U;
	int64_t x1284 = -1023478338384LL;
	uint64_t t80 = 551098291428092157LLU;

	t80 = ((x1281/x1282)<<(x1283%x1284));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1285 = 2U;
	int64_t x1286 = -1070751622565LL;
	volatile uint16_t x1287 = 2U;
	int32_t x1288 = -671657;
	int64_t t81 = -45363816LL;

	t81 = ((x1285/x1286)<<(x1287%x1288));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x1306 = UINT16_MAX;
	int8_t x1307 = -1;
	uint32_t x1308 = UINT32_MAX;
	static volatile uint64_t t82 = 12961LLU;

	t82 = ((x1305/x1306)<<(x1307%x1308));

	if (t82 != 13413LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1310 = INT64_MIN;
	int64_t x1311 = INT64_MIN;
	int8_t x1312 = -1;

	t83 = ((x1309/x1310)<<(x1311%x1312));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x1337 = 1116821LLU;
	int64_t x1338 = INT64_MIN;
	volatile uint8_t x1339 = UINT8_MAX;
	volatile uint64_t t84 = 49106LLU;

	t84 = ((x1337/x1338)<<(x1339%x1340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1385 = -1;
	int64_t x1386 = -14043LL;
	static int8_t x1387 = -1;
	volatile int64_t t85 = 223600878880312515LL;

	t85 = ((x1385/x1386)<<(x1387%x1388));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x1441 = -1860938;
	int32_t x1442 = INT32_MAX;
	static int64_t x1444 = -1LL;
	volatile int32_t t86 = 1;

	t86 = ((x1441/x1442)<<(x1443%x1444));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1445 = INT16_MIN;
	static uint64_t x1446 = 1713863069LLU;
	uint16_t x1447 = 29U;
	int32_t x1448 = INT32_MIN;
	static uint64_t t87 = 16108996LLU;

	t87 = ((x1445/x1446)<<(x1447%x1448));

	if (t87 != 5778478160181985280LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1453 = 60;
	volatile int8_t x1454 = INT8_MIN;
	uint16_t x1455 = 0U;
	volatile int16_t x1456 = INT16_MIN;
	int32_t t88 = -330;

	t88 = ((x1453/x1454)<<(x1455%x1456));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1517 = 4252661LLU;
	uint32_t x1520 = 1U;
	volatile uint64_t t89 = 521110500066LLU;

	t89 = ((x1517/x1518)<<(x1519%x1520));

	if (t89 != 64LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1525 = 22LL;
	int8_t x1526 = INT8_MIN;
	int8_t x1527 = 3;
	int64_t x1528 = 201339129632LL;

	t90 = ((x1525/x1526)<<(x1527%x1528));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x1529 = 705U;
	uint64_t x1530 = 11336984LLU;
	uint64_t x1531 = 259693133336562427LLU;
	int16_t x1532 = 11;

	t91 = ((x1529/x1530)<<(x1531%x1532));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1541 = 755137700337823758LLU;
	int64_t x1542 = INT64_MIN;
	static volatile uint8_t x1543 = 0U;
	int64_t x1544 = -1816092701363280572LL;
	static uint64_t t92 = 7LLU;

	t92 = ((x1541/x1542)<<(x1543%x1544));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1550 = 1983364U;
	static int32_t x1551 = INT32_MAX;
	uint8_t x1552 = 2U;
	uint32_t t93 = 2222U;

	t93 = ((x1549/x1550)<<(x1551%x1552));

	if (t93 != 4330U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x1554 = -1111580LL;
	int64_t x1555 = INT64_MAX;
	int8_t x1556 = 1;
	int64_t t94 = 0LL;

	t94 = ((x1553/x1554)<<(x1555%x1556));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x1557 = UINT32_MAX;
	uint32_t x1558 = 50347U;
	static int8_t x1559 = -1;
	uint64_t x1560 = UINT64_MAX;
	static uint32_t t95 = 1298U;

	t95 = ((x1557/x1558)<<(x1559%x1560));

	if (t95 != 85307U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x1569 = INT8_MIN;
	uint16_t x1570 = 134U;
	int8_t x1571 = INT8_MAX;
	int8_t x1572 = INT8_MAX;

	t96 = ((x1569/x1570)<<(x1571%x1572));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x1573 = 3916615LLU;
	static volatile int32_t x1574 = INT32_MIN;
	static volatile uint32_t x1576 = UINT32_MAX;
	uint64_t t97 = 502892LLU;

	t97 = ((x1573/x1574)<<(x1575%x1576));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1589 = INT16_MAX;
	volatile uint64_t x1590 = 5280139486LLU;
	int64_t x1591 = INT64_MIN;
	int64_t x1592 = -2LL;

	t98 = ((x1589/x1590)<<(x1591%x1592));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1602 = UINT8_MAX;
	volatile int32_t x1604 = INT32_MIN;

	t99 = ((x1601/x1602)<<(x1603%x1604));

	if (t99 != 1) { NG(); } else { ; }
	
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

