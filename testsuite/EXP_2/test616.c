
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

static volatile int16_t x1 = -1;
uint32_t x4 = UINT32_MAX;
uint64_t x10 = 1518630LLU;
static int16_t x18 = INT16_MAX;
static uint16_t x29 = 179U;
uint16_t x30 = UINT16_MAX;
int16_t x45 = INT16_MIN;
int8_t x52 = 5;
int64_t t12 = 1802108604487425367LL;
volatile uint8_t x56 = 122U;
uint32_t t13 = 15141023U;
int8_t x64 = -1;
static volatile int8_t x70 = INT8_MIN;
uint64_t x72 = 258408321820LLU;
int8_t x79 = INT8_MIN;
uint32_t x89 = 27875U;
volatile int8_t x93 = INT8_MIN;
int64_t x96 = 28341765237599LL;
volatile int64_t t23 = -15367LL;
uint8_t x107 = UINT8_MAX;
volatile uint16_t x108 = 13U;
int32_t x115 = 721727163;
static int64_t x116 = 1764790924591LL;
uint32_t x122 = UINT32_MAX;
uint8_t x123 = 32U;
volatile uint64_t x128 = 1121364995LLU;
static volatile int8_t x141 = -50;
int16_t x142 = -1;
volatile int32_t x160 = INT32_MIN;
int32_t x177 = INT32_MIN;
int16_t x178 = 24;
volatile int32_t t42 = -200094;
static uint8_t x181 = 3U;
volatile int8_t x182 = INT8_MIN;
static uint32_t x184 = 15U;
volatile uint64_t t45 = 2451124403LLU;
int32_t t46 = 252;
static int16_t x199 = INT16_MAX;
uint16_t x201 = UINT16_MAX;
volatile int64_t t48 = 222333920964739098LL;
static int8_t x206 = 1;
uint16_t x210 = 2U;
volatile int16_t x215 = INT16_MIN;
volatile uint64_t x226 = 401654684074666LLU;
static volatile uint64_t t53 = 1994196467922660553LLU;
int64_t x237 = INT64_MIN;
static volatile int8_t x265 = INT8_MIN;
uint8_t x267 = 68U;
uint64_t x269 = 436966LLU;
volatile uint64_t t63 = 912084LLU;
static uint32_t x276 = UINT32_MAX;
static uint16_t x278 = UINT16_MAX;
uint64_t x282 = UINT64_MAX;
uint32_t x283 = 84U;
volatile int8_t x287 = INT8_MIN;
int32_t t67 = 1949;
int16_t x292 = 1;
volatile int16_t x299 = 3400;
volatile int64_t t71 = -616LL;
int64_t t72 = 51131LL;
static int64_t x310 = INT64_MIN;
static volatile int64_t x313 = 62489577LL;
volatile int64_t t74 = 11LL;
static volatile uint16_t x317 = UINT16_MAX;
volatile int64_t t76 = 0LL;
uint16_t x326 = UINT16_MAX;
int16_t x331 = INT16_MIN;
static int64_t x332 = INT64_MAX;
uint8_t x338 = UINT8_MAX;
static int8_t x341 = INT8_MIN;
int64_t x346 = -1LL;
int32_t x347 = -1;
static uint16_t x350 = UINT16_MAX;
static int8_t x359 = -1;
uint64_t x364 = 4LLU;
volatile int64_t x366 = 108488917LL;
int64_t x374 = -6857072555LL;
int32_t x375 = INT32_MIN;
static int8_t x380 = -1;
static uint16_t x381 = UINT16_MAX;
int16_t x382 = 178;
int64_t x383 = 10190164463014790LL;
int8_t x385 = INT8_MIN;
volatile int64_t x390 = INT64_MAX;
volatile uint32_t x391 = 1U;
static int16_t x392 = -230;
int8_t x394 = INT8_MIN;
uint64_t t92 = 7635665111472833541LLU;
static volatile uint8_t x405 = UINT8_MAX;
uint64_t x412 = UINT64_MAX;
volatile int64_t x423 = -13LL;
volatile int64_t x424 = 1LL;
static uint16_t x432 = 1059U;
uint16_t x433 = UINT16_MAX;
uint32_t x442 = 3U;
uint64_t x444 = 1449LLU;
volatile uint64_t t103 = 6123329233783772LLU;
int32_t x445 = 40;
volatile uint32_t x449 = UINT32_MAX;
volatile int64_t t106 = -5919893LL;
int64_t x457 = -1LL;
volatile uint64_t t107 = 56274802LLU;
volatile int32_t x461 = INT32_MIN;
int32_t x464 = INT32_MIN;
int64_t x466 = 548830885LL;
uint64_t x469 = 65613881395LLU;
uint16_t x473 = 53U;
volatile int32_t x476 = INT32_MIN;
int16_t x478 = -7;
volatile int8_t x481 = INT8_MAX;
int64_t x484 = INT64_MIN;
volatile int8_t x486 = 1;
uint64_t x487 = 3911315342376299LLU;
int8_t x495 = INT8_MIN;
int16_t x496 = INT16_MIN;
volatile int64_t x497 = -1LL;
static volatile int16_t x498 = 0;
int16_t x500 = -1;
static int64_t x502 = INT64_MIN;
uint16_t x515 = 7770U;
int32_t t119 = 66413;
volatile int32_t x527 = -1;
uint16_t x531 = UINT16_MAX;
uint32_t t122 = 7704330U;
int16_t x534 = -1;
uint64_t x536 = 11809774103251LLU;
volatile uint64_t t123 = 6012922LLU;
uint8_t x537 = 89U;
uint64_t x544 = UINT64_MAX;
uint64_t t125 = 128065748082519LLU;
int8_t x545 = -3;
volatile uint64_t t126 = 587LLU;
int8_t x556 = -1;
int8_t x559 = INT8_MAX;
int32_t x561 = 1;
uint16_t x564 = 9U;
int32_t t130 = -14;
uint32_t x565 = 10U;
int64_t x567 = INT64_MIN;
uint64_t x569 = UINT64_MAX;
volatile uint64_t t132 = 3LLU;
static int64_t t133 = 625LL;
int8_t x577 = INT8_MIN;
uint64_t t137 = 872801691LLU;
uint8_t x598 = UINT8_MAX;
static volatile uint64_t x600 = 1898249285LLU;
int8_t x601 = 11;
uint64_t t139 = 381LLU;
int64_t x605 = INT64_MIN;
static uint16_t x608 = 16060U;
volatile uint32_t t141 = 41001U;
uint32_t x615 = 29861527U;
static volatile uint32_t t143 = 5250375U;
static int8_t x625 = 46;
static int8_t x627 = INT8_MIN;
int32_t t144 = 35;
volatile uint8_t x631 = UINT8_MAX;
int16_t x634 = -1;
static int64_t t147 = 183LL;
int64_t x646 = INT64_MIN;
int16_t x648 = -1;
uint64_t t149 = 3979823345730349983LLU;
int16_t x651 = INT16_MAX;
int16_t x658 = INT16_MIN;
static uint64_t t153 = 546LLU;
int16_t x670 = INT16_MIN;
static int8_t x672 = -1;
volatile int64_t t156 = 79701LL;
static int64_t x683 = INT64_MIN;
uint32_t x687 = 3U;
int32_t x688 = INT32_MIN;
int32_t x689 = -1;
uint8_t x692 = 21U;
static uint8_t x703 = 1U;
uint8_t x706 = UINT8_MAX;
uint64_t x709 = UINT64_MAX;
int64_t t164 = -1432LL;
volatile int64_t x718 = 18396516742675803LL;
volatile int64_t t165 = 139635625899737LL;
int16_t x723 = INT16_MIN;
int32_t x725 = INT32_MIN;
int64_t x727 = INT64_MIN;
uint16_t x740 = 7U;
int16_t x741 = INT16_MIN;
uint64_t t170 = 55510784807LLU;
uint64_t t171 = 2071767043LLU;
int64_t x759 = INT64_MIN;
int16_t x765 = INT16_MIN;
int64_t x768 = INT64_MAX;
int8_t x779 = -1;
int32_t x781 = -1;
int32_t x792 = -151701;
int16_t x796 = -1;
int32_t x799 = INT32_MAX;
int64_t x802 = INT64_MIN;
int8_t x803 = 15;
uint64_t x804 = 746719053454391236LLU;
int64_t t186 = 28593389552LL;
static int16_t x816 = INT16_MIN;
uint32_t x819 = 10723U;
uint32_t x821 = 5U;
volatile int64_t x822 = INT64_MIN;
uint8_t x824 = 6U;
int32_t x832 = 261110;
int8_t x835 = INT8_MIN;
uint32_t t192 = 85322834U;
int16_t x837 = -1;
int8_t x839 = 7;
volatile uint64_t x850 = 1LLU;
uint16_t x851 = UINT16_MAX;
static volatile uint64_t t196 = 373945983LLU;
int64_t t197 = 1784644507868132031LL;
uint64_t x863 = 656643091328555LLU;


void f0(void) {
    	uint64_t x2 = 485LLU;
	static uint32_t x3 = UINT32_MAX;
	volatile uint64_t t0 = 2908LLU;

    t0 = ((x1-(x2/x3))^x4);

    if (t0 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MIN;
	int64_t x6 = 23951233026LL;
	static volatile int16_t x7 = INT16_MIN;
	volatile int16_t x8 = INT16_MIN;
	volatile int64_t t1 = -13LL;

    t1 = ((x5-(x6/x7))^x8);

    if (t1 != -710859LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int64_t x11 = INT64_MAX;
	int16_t x12 = -1;
	volatile uint64_t t2 = 104593619LLU;

    t2 = ((x9-(x10/x11))^x12);

    if (t2 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = 4156;
	static int16_t x14 = INT16_MIN;
	volatile int8_t x15 = -1;
	int16_t x16 = -1;
	int32_t t3 = -18;

    t3 = ((x13-(x14/x15))^x16);

    if (t3 != 28611) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 55U;
	int16_t x19 = -1;
	static uint32_t x20 = 41398U;
	volatile uint32_t t4 = 5795U;

    t4 = ((x17-(x18/x19))^x20);

    if (t4 != 8576U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 680951858397856LL;
	uint64_t x22 = UINT64_MAX;
	volatile uint32_t x23 = 95U;
	uint64_t x24 = 1736187094022588303LLU;
	uint64_t t5 = 10873777982LLU;

    t5 = ((x21-(x22/x23))^x24);

    if (t5 != 16521664118736839539LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -315;
	uint8_t x26 = UINT8_MAX;
	int32_t x27 = INT32_MAX;
	volatile int16_t x28 = -1;
	static int32_t t6 = 3;

    t6 = ((x25-(x26/x27))^x28);

    if (t6 != 314) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x31 = UINT16_MAX;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -93040677;

    t7 = ((x29-(x30/x31))^x32);

    if (t7 != -32590) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	int32_t x34 = INT32_MIN;
	volatile int8_t x35 = INT8_MAX;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -803424698;

    t8 = ((x33-(x34/x35))^x36);

    if (t8 != -2130508793) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = 0;
	int16_t x38 = 306;
	int64_t x39 = INT64_MIN;
	int8_t x40 = -1;
	static volatile int64_t t9 = -3895434973405813LL;

    t9 = ((x37-(x38/x39))^x40);

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -4;
	uint16_t x42 = 78U;
	uint64_t x43 = 16856403544LLU;
	volatile uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = 708LLU;

    t10 = ((x41-(x42/x43))^x44);

    if (t10 != 3LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = -1;
	int8_t x47 = -2;
	static int16_t x48 = INT16_MIN;
	int32_t t11 = 629582;

    t11 = ((x45-(x46/x47))^x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 0U;
	int64_t x50 = -1LL;
	volatile int32_t x51 = INT32_MIN;

    t12 = ((x49-(x50/x51))^x52);

    if (t12 != 5LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = 852U;
	int8_t x54 = INT8_MIN;
	int16_t x55 = 1691;

    t13 = ((x53-(x54/x55))^x56);

    if (t13 != 814U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 0U;
	int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MIN;
	uint32_t x60 = UINT32_MAX;
	uint32_t t14 = UINT32_MAX;

    t14 = ((x57-(x58/x59))^x60);

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	volatile int16_t x62 = INT16_MIN;
	int8_t x63 = 3;
	int32_t t15 = 83196498;

    t15 = ((x61-(x62/x63))^x64);

    if (t15 != -10922) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = INT16_MIN;
	int32_t x66 = -1;
	int16_t x67 = -13;
	int64_t x68 = -1LL;
	volatile int64_t t16 = -13201472LL;

    t16 = ((x65-(x66/x67))^x68);

    if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = 1;
	static uint8_t x71 = UINT8_MAX;
	volatile uint64_t t17 = 862459LLU;

    t17 = ((x69-(x70/x71))^x72);

    if (t17 != 258408321821LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = 9444;
	uint8_t x74 = UINT8_MAX;
	int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MIN;
	int32_t t18 = 138840;

    t18 = ((x73-(x74/x75))^x76);

    if (t18 != -2147474203) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = INT64_MIN;
	uint8_t x78 = 63U;
	volatile int8_t x80 = -1;
	volatile int64_t t19 = INT64_MAX;

    t19 = ((x77-(x78/x79))^x80);

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	uint16_t x82 = UINT16_MAX;
	uint64_t x83 = UINT64_MAX;
	uint8_t x84 = UINT8_MAX;
	volatile uint64_t t20 = 297554945386LLU;

    t20 = ((x81-(x82/x83))^x84);

    if (t20 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 290638668338LL;
	volatile uint8_t x86 = 115U;
	int32_t x87 = INT32_MIN;
	uint32_t x88 = 137U;
	int64_t t21 = -4443115213269678715LL;

    t21 = ((x85-(x86/x87))^x88);

    if (t21 != 290638668475LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = -1;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MAX;
	int64_t t22 = 1LL;

    t22 = ((x89-(x90/x91))^x92);

    if (t22 != 9223372036854747932LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x94 = INT32_MIN;
	uint32_t x95 = UINT32_MAX;

    t23 = ((x93-(x94/x95))^x96);

    if (t23 != 28338918167775LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MIN;
	uint64_t x98 = 745637LLU;
	static uint64_t x99 = 1445507LLU;
	int16_t x100 = INT16_MAX;
	volatile uint64_t t24 = 82200447LLU;

    t24 = ((x97-(x98/x99))^x100);

    if (t24 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = 37;
	uint16_t x106 = UINT16_MAX;
	volatile int32_t t25 = 259400;

    t25 = ((x105-(x106/x107))^x108);

    if (t25 != -215) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MIN;
	uint16_t x110 = 30U;
	int64_t x111 = INT64_MIN;
	uint64_t x112 = UINT64_MAX;
	uint64_t t26 = 1239236094580894LLU;

    t26 = ((x109-(x110/x111))^x112);

    if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = INT8_MIN;
	volatile int64_t x114 = INT64_MAX;
	int64_t t27 = -30LL;

    t27 = ((x113-(x114/x115))^x116);

    if (t27 != -1752816713956LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = 771U;
	int64_t x118 = -1LL;
	int16_t x119 = INT16_MIN;
	static uint8_t x120 = 120U;
	volatile int64_t t28 = -4576LL;

    t28 = ((x117-(x118/x119))^x120);

    if (t28 != 891LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = -1;
	static int32_t x124 = INT32_MAX;
	volatile uint32_t t29 = 27845863U;

    t29 = ((x121-(x122/x123))^x124);

    if (t29 != 2281701375U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MIN;
	volatile int32_t x126 = INT32_MAX;
	int16_t x127 = -13848;
	uint64_t t30 = 2074123740LLU;

    t30 = ((x125-(x126/x127))^x128);

    if (t30 != 1121415616LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x129 = UINT8_MAX;
	uint8_t x130 = 3U;
	int8_t x131 = INT8_MIN;
	uint16_t x132 = UINT16_MAX;
	int32_t t31 = -215148;

    t31 = ((x129-(x130/x131))^x132);

    if (t31 != 65280) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = -13;
	static volatile int16_t x134 = INT16_MAX;
	int32_t x135 = INT32_MIN;
	int32_t x136 = 2;
	int32_t t32 = 3151205;

    t32 = ((x133-(x134/x135))^x136);

    if (t32 != -15) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x137 = INT16_MIN;
	int32_t x138 = 3483;
	int16_t x139 = -1;
	static volatile int32_t x140 = 26991397;
	volatile int32_t t33 = 1497;

    t33 = ((x137-(x138/x139))^x140);

    if (t33 != -26978626) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x143 = INT8_MIN;
	int64_t x144 = 0LL;
	static volatile int64_t t34 = 107695310721LL;

    t34 = ((x141-(x142/x143))^x144);

    if (t34 != -50LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = 3025017;
	uint8_t x146 = UINT8_MAX;
	int8_t x147 = -1;
	int8_t x148 = 14;
	static int32_t t35 = -62222;

    t35 = ((x145-(x146/x147))^x148);

    if (t35 != 3025270) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = 1631;
	int32_t x150 = INT32_MIN;
	uint64_t x151 = UINT64_MAX;
	uint16_t x152 = UINT16_MAX;
	uint64_t t36 = 120467095LLU;

    t36 = ((x149-(x150/x151))^x152);

    if (t36 != 63904LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = INT32_MAX;
	static volatile int64_t x154 = -554LL;
	int8_t x155 = -3;
	static uint8_t x156 = 1U;
	static int64_t t37 = 5469714LL;

    t37 = ((x153-(x154/x155))^x156);

    if (t37 != 2147483462LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x157 = 48548LLU;
	volatile int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MIN;
	static volatile uint64_t t38 = 2555455512LLU;

    t38 = ((x157-(x158/x159))^x160);

    if (t38 != 2130754980LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = INT16_MIN;
	volatile int64_t x162 = -1LL;
	int64_t x163 = -1LL;
	volatile int8_t x164 = -1;
	int64_t t39 = 190872LL;

    t39 = ((x161-(x162/x163))^x164);

    if (t39 != 32768LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = -1;
	int32_t x166 = INT32_MIN;
	static int16_t x167 = INT16_MAX;
	int64_t x168 = -1LL;
	int64_t t40 = -37722387622829LL;

    t40 = ((x165-(x166/x167))^x168);

    if (t40 != -65538LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x169 = 689634943778LLU;
	int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MIN;
	int64_t x172 = INT64_MIN;
	uint64_t t41 = 96LLU;

    t41 = ((x169-(x170/x171))^x172);

    if (t41 != 9223372726489719585LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x179 = -1;
	static volatile int32_t x180 = -1;

    t42 = ((x177-(x178/x179))^x180);

    if (t42 != 2147483623) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x183 = -1LL;
	int64_t t43 = -637942LL;

    t43 = ((x181-(x182/x183))^x184);

    if (t43 != -116LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x185 = -64;
	uint16_t x186 = 18863U;
	int32_t x187 = 63;
	static uint32_t x188 = 4U;
	static uint32_t t44 = 7849U;

    t44 = ((x185-(x186/x187))^x188);

    if (t44 != 4294966929U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x189 = UINT32_MAX;
	volatile uint64_t x190 = 8175LLU;
	int8_t x191 = -1;
	int64_t x192 = INT64_MIN;

    t45 = ((x189-(x190/x191))^x192);

    if (t45 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = INT32_MIN;
	int8_t x194 = INT8_MIN;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = 53U;

    t46 = ((x193-(x194/x195))^x196);

    if (t46 != -2147483595) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = -24;
	int16_t x198 = INT16_MAX;
	volatile int16_t x200 = 231;
	volatile int32_t t47 = -445036;

    t47 = ((x197-(x198/x199))^x200);

    if (t47 != -256) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x202 = -73376LL;
	static uint16_t x203 = UINT16_MAX;
	int16_t x204 = INT16_MIN;

    t48 = ((x201-(x202/x203))^x204);

    if (t48 != -98304LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = -1;
	int16_t x207 = INT16_MAX;
	uint16_t x208 = 1729U;
	int32_t t49 = -130032;

    t49 = ((x205-(x206/x207))^x208);

    if (t49 != -1730) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = 53;
	int32_t x211 = -4075405;
	int64_t x212 = -1LL;
	int64_t t50 = 5LL;

    t50 = ((x209-(x210/x211))^x212);

    if (t50 != -54LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x213 = 1343U;
	uint64_t x214 = UINT64_MAX;
	int16_t x216 = INT16_MIN;
	uint64_t t51 = 41LLU;

    t51 = ((x213-(x214/x215))^x216);

    if (t51 != 18446744073709520190LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x221 = -1;
	uint32_t x222 = 247582643U;
	int32_t x223 = INT32_MIN;
	int8_t x224 = INT8_MAX;
	volatile uint32_t t52 = 120612541U;

    t52 = ((x221-(x222/x223))^x224);

    if (t52 != 4294967168U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x225 = INT32_MIN;
	static int32_t x227 = 150;
	int32_t x228 = INT32_MIN;

    t53 = ((x225-(x226/x227))^x228);

    if (t53 != 2678126324281LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x229 = INT8_MAX;
	volatile int64_t x230 = -17988537299240LL;
	int64_t x231 = -8638059335790LL;
	int32_t x232 = INT32_MAX;
	static int64_t t54 = 14988853360044LL;

    t54 = ((x229-(x230/x231))^x232);

    if (t54 != 2147483522LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint32_t x233 = UINT32_MAX;
	int8_t x234 = INT8_MIN;
	static int16_t x235 = -1;
	int32_t x236 = INT32_MIN;
	uint32_t t55 = 25U;

    t55 = ((x233-(x234/x235))^x236);

    if (t55 != 2147483519U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x238 = INT8_MIN;
	static volatile uint64_t x239 = 38365308215650LLU;
	volatile int8_t x240 = INT8_MIN;
	volatile uint64_t t56 = 208531796LLU;

    t56 = ((x237-(x238/x239))^x240);

    if (t56 != 9223372036855256654LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x241 = INT16_MAX;
	static volatile int64_t x242 = -361101010168499LL;
	int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MAX;
	int64_t t57 = 7321512LL;

    t57 = ((x241-(x242/x243))^x244);

    if (t57 != 32640LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x249 = INT8_MAX;
	static uint32_t x250 = 3U;
	int32_t x251 = -1;
	int64_t x252 = INT64_MIN;
	volatile int64_t t58 = -4553408660811323LL;

    t58 = ((x249-(x250/x251))^x252);

    if (t58 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x253 = INT32_MAX;
	static int16_t x254 = 7;
	int16_t x255 = INT16_MIN;
	static int32_t x256 = INT32_MIN;
	int32_t t59 = 1491;

    t59 = ((x253-(x254/x255))^x256);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x257 = 26U;
	int32_t x258 = INT32_MIN;
	uint16_t x259 = UINT16_MAX;
	uint32_t x260 = 1U;
	static uint32_t t60 = 2006662U;

    t60 = ((x257-(x258/x259))^x260);

    if (t60 != 32795U) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x261 = 103U;
	int8_t x262 = 0;
	int32_t x263 = INT32_MIN;
	volatile int64_t x264 = -1597369048530LL;
	int64_t t61 = -421050169LL;

    t61 = ((x261-(x262/x263))^x264);

    if (t61 != -1597369048503LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x266 = -35544LL;
	volatile uint32_t x268 = 26U;
	int64_t t62 = -339450812835948949LL;

    t62 = ((x265-(x266/x267))^x268);

    if (t62 != 400LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x270 = -1;
	static int8_t x271 = -1;
	int8_t x272 = INT8_MIN;

    t63 = ((x269-(x270/x271))^x272);

    if (t63 != 18446744073709114725LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = -1;
	static uint64_t x274 = 179LLU;
	int8_t x275 = INT8_MIN;
	static volatile uint64_t t64 = 71993970561661146LLU;

    t64 = ((x273-(x274/x275))^x276);

    if (t64 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x277 = -1;
	int16_t x279 = INT16_MIN;
	volatile int8_t x280 = -1;
	int32_t t65 = 132;

    t65 = ((x277-(x278/x279))^x280);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x281 = 229;
	uint8_t x284 = UINT8_MAX;
	volatile uint64_t t66 = 238313512470LLU;

    t66 = ((x281-(x282/x283))^x284);

    if (t66 != 18227139977593961766LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x285 = -1;
	volatile int8_t x286 = -18;
	int8_t x288 = INT8_MAX;

    t67 = ((x285-(x286/x287))^x288);

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = -1LL;
	uint8_t x290 = 2U;
	static int8_t x291 = INT8_MIN;
	int64_t t68 = 1454090692559LL;

    t68 = ((x289-(x290/x291))^x292);

    if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x293 = 677;
	int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MAX;
	int8_t x296 = -1;
	volatile int64_t t69 = -10252888976299LL;

    t69 = ((x293-(x294/x295))^x296);

    if (t69 != -678LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x297 = -5041LL;
	static uint64_t x298 = UINT64_MAX;
	volatile int32_t x300 = INT32_MIN;
	uint64_t t70 = 209622602207149LLU;

    t70 = ((x297-(x298/x299))^x300);

    if (t70 != 5425513604569353LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x301 = -7;
	int32_t x302 = -1;
	uint32_t x303 = UINT32_MAX;
	volatile int64_t x304 = -28908932135LL;

    t71 = ((x301-(x302/x303))^x304);

    if (t71 != -26925642719LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x305 = -1;
	int64_t x306 = -5028159476LL;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = 8U;

    t72 = ((x305-(x306/x307))^x308);

    if (t72 != -39282488LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x309 = INT32_MIN;
	int8_t x311 = 15;
	volatile int16_t x312 = INT16_MIN;
	volatile int64_t t73 = 0LL;

    t73 = ((x309-(x310/x311))^x312);

    if (t73 != -614891466976196472LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	uint8_t x316 = UINT8_MAX;

    t74 = ((x313-(x314/x315))^x316);

    if (t74 != 62489367LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x318 = INT64_MIN;
	uint32_t x319 = 4914U;
	uint64_t x320 = 2LLU;
	static uint64_t t75 = 365434LLU;

    t75 = ((x317-(x318/x319))^x320);

    if (t75 != 1876958086523570LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x321 = INT8_MAX;
	int32_t x322 = INT32_MAX;
	int64_t x323 = INT64_MIN;
	int8_t x324 = -1;

    t76 = ((x321-(x322/x323))^x324);

    if (t76 != -128LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x325 = INT32_MIN;
	uint64_t x327 = UINT64_MAX;
	static int64_t x328 = -1LL;
	uint64_t t77 = 15800LLU;

    t77 = ((x325-(x326/x327))^x328);

    if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x329 = -14693163613601823LL;
	static uint32_t x330 = UINT32_MAX;
	int64_t t78 = 29753215027LL;

    t78 = ((x329-(x330/x331))^x332);

    if (t78 != -9208678873241173985LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x337 = 1838635;
	static volatile int32_t x339 = -495246;
	static int64_t x340 = 310442700301239677LL;
	volatile int64_t t79 = -4905370LL;

    t79 = ((x337-(x338/x339))^x340);

    if (t79 != 310442700300979030LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x342 = UINT32_MAX;
	static volatile int8_t x343 = INT8_MAX;
	static int64_t x344 = INT64_MIN;
	int64_t t80 = 3243755602LL;

    t80 = ((x341-(x342/x343))^x344);

    if (t80 != -9223372032593627280LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x345 = INT8_MIN;
	int16_t x348 = 13797;
	int64_t t81 = 22LL;

    t81 = ((x345-(x346/x347))^x348);

    if (t81 != -13670LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x349 = INT32_MIN;
	static volatile int8_t x351 = -1;
	int16_t x352 = -1;
	volatile int32_t t82 = -530536;

    t82 = ((x349-(x350/x351))^x352);

    if (t82 != 2147418112) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MAX;
	int32_t x355 = INT32_MAX;
	int32_t x356 = -6804960;
	volatile int32_t t83 = -136491746;

    t83 = ((x353-(x354/x355))^x356);

    if (t83 != 6804831) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x357 = -1;
	int64_t x358 = -1755566445515749LL;
	int16_t x360 = 700;
	int64_t t84 = 35748184847656LL;

    t84 = ((x357-(x358/x359))^x360);

    if (t84 != -1755566445515098LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x361 = 103;
	uint64_t x362 = 276524339387886LLU;
	int16_t x363 = -1;
	uint64_t t85 = 13067147989207LLU;

    t85 = ((x361-(x362/x363))^x364);

    if (t85 != 99LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x365 = -1;
	uint16_t x367 = UINT16_MAX;
	static uint32_t x368 = UINT32_MAX;
	volatile int64_t t86 = 19924662LL;

    t86 = ((x365-(x366/x367))^x368);

    if (t86 != -4294965641LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint8_t x373 = UINT8_MAX;
	volatile int64_t x376 = 3595476256848610025LL;
	static int64_t t87 = 132651887919LL;

    t87 = ((x373-(x374/x375))^x376);

    if (t87 != 3595476256848609813LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x377 = UINT32_MAX;
	uint16_t x378 = 945U;
	int64_t x379 = -1LL;
	int64_t t88 = -2486207142LL;

    t88 = ((x377-(x378/x379))^x380);

    if (t88 != -4294968241LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x384 = -92;
	static volatile int64_t t89 = -5LL;

    t89 = ((x381-(x382/x383))^x384);

    if (t89 != -65445LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x386 = -1;
	int32_t x387 = 4464509;
	volatile uint64_t x388 = 208LLU;
	uint64_t t90 = 1158017612343797730LLU;

    t90 = ((x385-(x386/x387))^x388);

    if (t90 != 18446744073709551440LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x389 = 2726100U;
	int64_t t91 = -15712LL;

    t91 = ((x389-(x390/x391))^x392);

    if (t91 != 9223372036852049871LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x393 = INT8_MAX;
	uint64_t x395 = UINT64_MAX;
	static int8_t x396 = 9;

    t92 = ((x393-(x394/x395))^x396);

    if (t92 != 118LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x397 = INT16_MIN;
	int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MAX;
	int8_t x400 = INT8_MIN;
	volatile int64_t t93 = -11895461059LL;

    t93 = ((x397-(x398/x399))^x400);

    if (t93 != 32641LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x401 = 6U;
	uint64_t x402 = 483016LLU;
	uint8_t x403 = 2U;
	int64_t x404 = INT64_MAX;
	uint64_t t94 = 996574548377389LLU;

    t94 = ((x401-(x402/x403))^x404);

    if (t94 != 9223372036855017309LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x406 = INT32_MAX;
	volatile int64_t x407 = -1LL;
	int32_t x408 = -1;
	volatile int64_t t95 = -30068196086616LL;

    t95 = ((x405-(x406/x407))^x408);

    if (t95 != -2147483903LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x409 = 4080438004251524LLU;
	int64_t x410 = 48712167331734811LL;
	int8_t x411 = INT8_MAX;
	uint64_t t96 = 1LLU;

    t96 = ((x409-(x410/x411))^x412);

    if (t96 != 18443047196077990916LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x413 = INT8_MIN;
	uint64_t x414 = 13787LLU;
	int32_t x415 = -1;
	int8_t x416 = -1;
	static uint64_t t97 = 232475LLU;

    t97 = ((x413-(x414/x415))^x416);

    if (t97 != 127LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x417 = -1;
	int8_t x418 = INT8_MIN;
	volatile int8_t x419 = -31;
	static int32_t x420 = INT32_MIN;
	volatile int32_t t98 = -14;

    t98 = ((x417-(x418/x419))^x420);

    if (t98 != 2147483643) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x421 = INT8_MIN;
	int64_t x422 = -3895549906LL;
	volatile int64_t t99 = -1090LL;

    t99 = ((x421-(x422/x423))^x424);

    if (t99 != -299657814LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x429 = UINT16_MAX;
	int16_t x430 = INT16_MIN;
	uint32_t x431 = 393U;
	uint32_t t100 = 28294U;

    t100 = ((x429-(x430/x431))^x432);

    if (t100 != 4284103190U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x434 = UINT64_MAX;
	uint32_t x435 = UINT32_MAX;
	int64_t x436 = INT64_MIN;
	uint64_t t101 = 636647300LLU;

    t101 = ((x433-(x434/x435))^x436);

    if (t101 != 9223372032559874046LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x437 = -1;
	int64_t x438 = INT64_MIN;
	static int32_t x439 = -223533016;
	uint16_t x440 = 148U;
	int64_t t102 = 64576049LL;

    t102 = ((x437-(x438/x439))^x440);

    if (t102 != -41261788644LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x441 = INT16_MAX;
	uint16_t x443 = 1665U;

    t103 = ((x441-(x442/x443))^x444);

    if (t103 != 31318LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x446 = INT16_MAX;
	uint32_t x447 = UINT32_MAX;
	int64_t x448 = INT64_MIN;
	int64_t t104 = -1818LL;

    t104 = ((x445-(x446/x447))^x448);

    if (t104 != -9223372036854775768LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x450 = INT16_MIN;
	static volatile uint32_t x451 = UINT32_MAX;
	int64_t x452 = -3231687734067LL;
	int64_t t105 = -101412831610926724LL;

    t105 = ((x449-(x450/x451))^x452);

    if (t105 != -3232238046414LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x453 = 1503U;
	int64_t x454 = -1LL;
	static uint32_t x455 = UINT32_MAX;
	int8_t x456 = -6;

    t106 = ((x453-(x454/x455))^x456);

    if (t106 != -1499LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x458 = INT16_MIN;
	static int8_t x459 = -1;
	uint64_t x460 = 165332291LLU;

    t107 = ((x457-(x458/x459))^x460);

    if (t107 != 18446744073544252092LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x462 = -1LL;
	static uint16_t x463 = 6U;
	int64_t t108 = 111471095175LL;

    t108 = ((x461-(x462/x463))^x464);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x465 = 36U;
	static int16_t x467 = -1;
	int32_t x468 = -1;
	int64_t t109 = 30LL;

    t109 = ((x465-(x466/x467))^x468);

    if (t109 != -548830922LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x470 = 460011380854189842LL;
	int8_t x471 = -1;
	static int32_t x472 = INT32_MIN;
	volatile uint64_t t110 = 1324971LLU;

    t110 = ((x469-(x470/x471))^x472);

    if (t110 != 17986732626548346693LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x474 = -1583779161LL;
	static int32_t x475 = INT32_MAX;
	volatile int64_t t111 = -69860684119484LL;

    t111 = ((x473-(x474/x475))^x476);

    if (t111 != -2147483595LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x477 = 2U;
	static volatile uint16_t x479 = UINT16_MAX;
	volatile int64_t x480 = INT64_MIN;
	volatile int64_t t112 = -152157800754LL;

    t112 = ((x477-(x478/x479))^x480);

    if (t112 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x482 = -989614738245714016LL;
	int16_t x483 = -122;
	volatile int64_t t113 = 244725173065LL;

    t113 = ((x481-(x482/x483))^x484);

    if (t113 != 9215260440639647132LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x485 = 1789U;
	int16_t x488 = 910;
	uint64_t t114 = 48730961292LLU;

    t114 = ((x485-(x486/x487))^x488);

    if (t114 != 1395LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x493 = 7U;
	int8_t x494 = 25;
	int32_t t115 = 4;

    t115 = ((x493-(x494/x495))^x496);

    if (t115 != -32761) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x499 = 21U;
	volatile int64_t t116 = -3034046311213LL;

    t116 = ((x497-(x498/x499))^x500);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x501 = 0;
	uint8_t x503 = UINT8_MAX;
	volatile uint16_t x504 = 6U;
	int64_t t117 = 13944750LL;

    t117 = ((x501-(x502/x503))^x504);

    if (t117 != 36170086419038342LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x505 = INT16_MIN;
	int8_t x506 = INT8_MIN;
	static int16_t x507 = INT16_MIN;
	volatile int16_t x508 = 20;
	static int32_t t118 = 847987161;

    t118 = ((x505-(x506/x507))^x508);

    if (t118 != -32748) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x513 = 7;
	uint8_t x514 = 46U;
	int8_t x516 = -1;

    t119 = ((x513-(x514/x515))^x516);

    if (t119 != -8) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x517 = 1U;
	volatile uint64_t x518 = 162353550LLU;
	volatile int16_t x519 = -1;
	static int64_t x520 = -12543LL;
	uint64_t t120 = 11545341632989501LLU;

    t120 = ((x517-(x518/x519))^x520);

    if (t120 != 18446744073709539072LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x525 = -105;
	int8_t x526 = INT8_MIN;
	uint8_t x528 = 4U;
	volatile int32_t t121 = -20897;

    t121 = ((x525-(x526/x527))^x528);

    if (t121 != -237) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x529 = 27164U;
	volatile int32_t x530 = -1;
	int8_t x532 = 1;

    t122 = ((x529-(x530/x531))^x532);

    if (t122 != 27165U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x533 = INT8_MIN;
	static int32_t x535 = INT32_MAX;

    t123 = ((x533-(x534/x535))^x536);

    if (t123 != 18446732263935448403LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x538 = 6;
	volatile uint32_t x539 = 33934863U;
	static uint32_t x540 = 43073U;
	uint32_t t124 = 226783879U;

    t124 = ((x537-(x538/x539))^x540);

    if (t124 != 43032U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x541 = -1362509765LL;
	static int32_t x542 = -88;
	uint32_t x543 = UINT32_MAX;

    t125 = ((x541-(x542/x543))^x544);

    if (t125 != 1362509764LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x546 = INT64_MIN;
	uint64_t x547 = 8438773789742LLU;
	int16_t x548 = 0;

    t126 = ((x545-(x546/x547))^x548);

    if (t126 != 18446744073708458638LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x549 = UINT8_MAX;
	uint32_t x550 = UINT32_MAX;
	volatile int8_t x551 = INT8_MIN;
	static int32_t x552 = 2;
	uint32_t t127 = 264205757U;

    t127 = ((x549-(x550/x551))^x552);

    if (t127 != 252U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x553 = 227639685LL;
	int32_t x554 = INT32_MAX;
	volatile uint8_t x555 = 7U;
	volatile int64_t t128 = 2355443527882157030LL;

    t128 = ((x553-(x554/x555))^x556);

    if (t128 != 79143692LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x557 = -1LL;
	int64_t x558 = -1LL;
	static int16_t x560 = INT16_MIN;
	int64_t t129 = -18268450405LL;

    t129 = ((x557-(x558/x559))^x560);

    if (t129 != 32767LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x562 = 25;
	int32_t x563 = -9317059;

    t130 = ((x561-(x562/x563))^x564);

    if (t130 != 8) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x566 = INT16_MIN;
	static int64_t x568 = -1LL;
	int64_t t131 = -23124LL;

    t131 = ((x565-(x566/x567))^x568);

    if (t131 != -11LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x570 = 1314865765771639499LLU;
	int32_t x571 = INT32_MAX;
	uint32_t x572 = 45633U;

    t132 = ((x569-(x570/x571))^x572);

    if (t132 != 18446744073097306971LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x573 = UINT16_MAX;
	int8_t x574 = -1;
	int16_t x575 = -1;
	int64_t x576 = -1870012542312664405LL;

    t133 = ((x573-(x574/x575))^x576);

    if (t133 != -1870012542312690347LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x578 = 16U;
	uint16_t x579 = UINT16_MAX;
	volatile int8_t x580 = INT8_MAX;
	int32_t t134 = 414774;

    t134 = ((x577-(x578/x579))^x580);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x581 = -1;
	int64_t x582 = 3543292739853821215LL;
	int32_t x583 = -23;
	int64_t x584 = INT64_MIN;
	int64_t t135 = 6941788884LL;

    t135 = ((x581-(x582/x583))^x584);

    if (t135 != -9069315830774174887LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x589 = INT32_MAX;
	volatile int8_t x590 = INT8_MIN;
	int32_t x591 = INT32_MAX;
	static volatile int32_t x592 = INT32_MAX;
	volatile int32_t t136 = 2653843;

    t136 = ((x589-(x590/x591))^x592);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x593 = INT16_MIN;
	uint64_t x594 = 299752242104LLU;
	static int64_t x595 = -11941504223LL;
	static uint64_t x596 = 112206199LLU;

    t137 = ((x593-(x594/x595))^x596);

    if (t137 != 18446744073597329783LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x597 = INT8_MIN;
	int16_t x599 = INT16_MIN;
	volatile uint64_t t138 = 6385LLU;

    t138 = ((x597-(x598/x599))^x600);

    if (t138 != 18446744071811302341LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x602 = UINT64_MAX;
	volatile int64_t x603 = -238870769966062903LL;
	uint64_t x604 = 270107065205169LLU;

    t139 = ((x601-(x602/x603))^x604);

    if (t139 != 270107065205179LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x606 = UINT32_MAX;
	uint64_t x607 = UINT64_MAX;
	static volatile uint64_t t140 = 854LLU;

    t140 = ((x605-(x606/x607))^x608);

    if (t140 != 9223372036854791868LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x609 = 1167U;
	uint32_t x610 = 1U;
	static uint16_t x611 = 3U;
	int16_t x612 = -2181;

    t141 = ((x609-(x610/x611))^x612);

    if (t141 != 4294964212U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x613 = UINT32_MAX;
	int32_t x614 = -56;
	volatile int32_t x616 = -232013303;
	volatile uint32_t t142 = 68956U;

    t142 = ((x613-(x614/x615))^x616);

    if (t142 != 232013177U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x617 = 2756;
	volatile uint32_t x618 = 2897U;
	uint32_t x619 = 31U;
	uint16_t x620 = 60U;

    t143 = ((x617-(x618/x619))^x620);

    if (t143 != 2651U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x626 = -1;
	int8_t x628 = INT8_MAX;

    t144 = ((x625-(x626/x627))^x628);

    if (t144 != 81) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x629 = -1;
	int32_t x630 = INT32_MIN;
	uint32_t x632 = 45599U;
	uint32_t t145 = 7026446U;

    t145 = ((x629-(x630/x631))^x632);

    if (t145 != 8401504U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x633 = INT8_MAX;
	uint32_t x635 = 12735372U;
	static volatile int16_t x636 = INT16_MIN;
	uint32_t t146 = 26U;

    t146 = ((x633-(x634/x635))^x636);

    if (t146 != 32558U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x637 = UINT32_MAX;
	volatile int8_t x638 = -1;
	static volatile int64_t x639 = INT64_MAX;
	volatile uint16_t x640 = 40U;

    t147 = ((x637-(x638/x639))^x640);

    if (t147 != 4294967255LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x641 = 34;
	int16_t x642 = INT16_MAX;
	static int32_t x643 = INT32_MIN;
	uint64_t x644 = 114LLU;
	uint64_t t148 = 1012198342307081LLU;

    t148 = ((x641-(x642/x643))^x644);

    if (t148 != 80LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x645 = 786380091928LLU;
	volatile uint8_t x647 = 30U;

    t149 = ((x645-(x646/x647))^x648);

    if (t149 != 18139297552767633827LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x649 = -1;
	int16_t x650 = -2;
	static uint8_t x652 = 114U;
	volatile int32_t t150 = 441950;

    t150 = ((x649-(x650/x651))^x652);

    if (t150 != -115) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x657 = -389348298;
	volatile int16_t x659 = INT16_MAX;
	int64_t x660 = INT64_MIN;
	volatile int64_t t151 = 1323037LL;

    t151 = ((x657-(x658/x659))^x660);

    if (t151 != 9223372036465427511LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x661 = -1LL;
	int64_t x662 = INT64_MIN;
	int8_t x663 = -3;
	volatile int16_t x664 = INT16_MIN;
	int64_t t152 = -20LL;

    t152 = ((x661-(x662/x663))^x664);

    if (t152 != 3074457345618269525LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x665 = INT8_MIN;
	static int32_t x666 = -4096037;
	volatile uint8_t x667 = 5U;
	uint64_t x668 = UINT64_MAX;

    t153 = ((x665-(x666/x667))^x668);

    if (t153 != 18446744073708732536LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x669 = 96U;
	volatile uint32_t x671 = 1618735657U;
	volatile uint32_t t154 = 3199U;

    t154 = ((x669-(x670/x671))^x672);

    if (t154 != 4294967201U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x673 = 29835848;
	volatile int8_t x674 = INT8_MAX;
	uint64_t x675 = 1062033050050035447LLU;
	volatile uint16_t x676 = UINT16_MAX;
	static volatile uint64_t t155 = 1LLU;

    t155 = ((x673-(x674/x675))^x676);

    if (t155 != 29867447LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x677 = INT32_MAX;
	static int16_t x678 = INT16_MAX;
	int64_t x679 = INT64_MIN;
	int8_t x680 = -1;

    t156 = ((x677-(x678/x679))^x680);

    if (t156 != -2147483648LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x681 = UINT8_MAX;
	static uint16_t x682 = 1U;
	static int32_t x684 = 784584;
	volatile int64_t t157 = 25LL;

    t157 = ((x681-(x682/x683))^x684);

    if (t157 != 784439LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x685 = INT32_MIN;
	int16_t x686 = -27;
	volatile uint32_t t158 = 1865711200U;

    t158 = ((x685-(x686/x687))^x688);

    if (t158 != 2863311540U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x690 = 735519903369937LLU;
	volatile int16_t x691 = INT16_MIN;
	volatile uint64_t t159 = 10379725639LLU;

    t159 = ((x689-(x690/x691))^x692);

    if (t159 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x693 = -1;
	uint64_t x694 = UINT64_MAX;
	int16_t x695 = INT16_MAX;
	volatile uint64_t x696 = 0LLU;
	volatile uint64_t t160 = 10017920059204836LLU;

    t160 = ((x693-(x694/x695))^x696);

    if (t160 != 18446181106575736815LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x701 = -1;
	static volatile int32_t x702 = 0;
	volatile int8_t x704 = INT8_MIN;
	static volatile int32_t t161 = 114;

    t161 = ((x701-(x702/x703))^x704);

    if (t161 != 127) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x705 = 27;
	int16_t x707 = -11198;
	int32_t x708 = 27004346;
	int32_t t162 = 99008610;

    t162 = ((x705-(x706/x707))^x708);

    if (t162 != 27004321) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x710 = 69054647835180LL;
	uint64_t x711 = UINT64_MAX;
	int32_t x712 = INT32_MAX;
	uint64_t t163 = 1976639509580591LLU;

    t163 = ((x709-(x710/x711))^x712);

    if (t163 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x713 = -1LL;
	volatile int32_t x714 = -1;
	uint8_t x715 = 1U;
	int8_t x716 = -49;

    t164 = ((x713-(x714/x715))^x716);

    if (t164 != -49LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x717 = 0;
	static volatile int64_t x719 = INT64_MIN;
	int16_t x720 = INT16_MIN;

    t165 = ((x717-(x718/x719))^x720);

    if (t165 != -32768LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x721 = -1;
	static uint8_t x722 = UINT8_MAX;
	int8_t x724 = INT8_MIN;
	int32_t t166 = 608867;

    t166 = ((x721-(x722/x723))^x724);

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x726 = UINT32_MAX;
	uint32_t x728 = UINT32_MAX;
	volatile int64_t t167 = -3217188LL;

    t167 = ((x725-(x726/x727))^x728);

    if (t167 != -2147483649LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x729 = -1;
	uint32_t x730 = 157514U;
	uint8_t x731 = 2U;
	int32_t x732 = INT32_MIN;
	static uint32_t t168 = 95229383U;

    t168 = ((x729-(x730/x731))^x732);

    if (t168 != 2147404890U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x737 = 1405957623904LLU;
	uint16_t x738 = 111U;
	uint64_t x739 = UINT64_MAX;
	volatile uint64_t t169 = 1971044LLU;

    t169 = ((x737-(x738/x739))^x740);

    if (t169 != 1405957623911LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x742 = -1;
	int64_t x743 = INT64_MAX;
	volatile uint64_t x744 = 1792787794139LLU;

    t170 = ((x741-(x742/x743))^x744);

    if (t170 != 18446742280921762011LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x745 = INT64_MIN;
	volatile int64_t x746 = -1LL;
	uint64_t x747 = UINT64_MAX;
	int64_t x748 = -32571552LL;

    t171 = ((x745-(x746/x747))^x748);

    if (t171 != 9223372036887347359LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x749 = -159;
	uint16_t x750 = 124U;
	static int8_t x751 = 63;
	volatile uint16_t x752 = 820U;
	static int32_t t172 = 40455606;

    t172 = ((x749-(x750/x751))^x752);

    if (t172 != -940) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x757 = 12;
	int64_t x758 = -408927889029025293LL;
	int64_t x760 = 7135628099305LL;
	static volatile int64_t t173 = -240066512607838391LL;

    t173 = ((x757-(x758/x759))^x760);

    if (t173 != 7135628099301LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x761 = INT64_MIN;
	volatile int16_t x762 = 275;
	volatile int64_t x763 = INT64_MIN;
	int8_t x764 = -1;
	volatile int64_t t174 = INT64_MAX;

    t174 = ((x761-(x762/x763))^x764);

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x766 = 26LL;
	volatile uint64_t x767 = UINT64_MAX;
	uint64_t t175 = 49690LLU;

    t175 = ((x765-(x766/x767))^x768);

    if (t175 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x769 = INT32_MIN;
	int8_t x770 = -3;
	uint8_t x771 = 23U;
	int16_t x772 = INT16_MIN;
	volatile int32_t t176 = -11;

    t176 = ((x769-(x770/x771))^x772);

    if (t176 != 2147450880) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x773 = INT8_MIN;
	uint64_t x774 = UINT64_MAX;
	volatile int16_t x775 = INT16_MIN;
	int64_t x776 = -620731LL;
	static uint64_t t177 = 3768700265946305325LLU;

    t177 = ((x773-(x774/x775))^x776);

    if (t177 != 620602LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x777 = 1U;
	int16_t x778 = INT16_MAX;
	uint8_t x780 = 1U;
	int32_t t178 = 95098;

    t178 = ((x777-(x778/x779))^x780);

    if (t178 != 32769) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x782 = INT16_MIN;
	volatile int64_t x783 = -1139893989007896673LL;
	int64_t x784 = INT64_MIN;
	int64_t t179 = INT64_MAX;

    t179 = ((x781-(x782/x783))^x784);

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x786 = INT16_MIN;
	int64_t x787 = -2LL;
	int16_t x788 = -1;
	volatile int64_t t180 = 32782520715591706LL;

    t180 = ((x785-(x786/x787))^x788);

    if (t180 != 49151LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x789 = 11U;
	uint32_t x790 = 15379939U;
	int32_t x791 = 1287;
	volatile uint32_t t181 = 452U;

    t181 = ((x789-(x790/x791))^x792);

    if (t181 != 163382U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x793 = INT32_MIN;
	static int32_t x794 = -1;
	volatile uint8_t x795 = UINT8_MAX;
	volatile int32_t t182 = INT32_MAX;

    t182 = ((x793-(x794/x795))^x796);

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x797 = INT8_MAX;
	int8_t x798 = INT8_MIN;
	uint64_t x800 = 1343282421LLU;
	static volatile uint64_t t183 = 907LLU;

    t183 = ((x797-(x798/x799))^x800);

    if (t183 != 1343282314LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x801 = -3;
	uint64_t t184 = 310191169LLU;

    t184 = ((x801-(x802/x803))^x804);

    if (t184 != 203903938802663233LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x805 = UINT64_MAX;
	int32_t x806 = -1;
	volatile uint32_t x807 = UINT32_MAX;
	volatile uint64_t x808 = 0LLU;
	volatile uint64_t t185 = 144261222241158LLU;

    t185 = ((x805-(x806/x807))^x808);

    if (t185 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x809 = 0;
	int64_t x810 = -267320659LL;
	static int8_t x811 = INT8_MIN;
	int32_t x812 = INT32_MIN;

    t186 = ((x809-(x810/x811))^x812);

    if (t186 != 2145395206LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x813 = 2U;
	int32_t x814 = INT32_MIN;
	int64_t x815 = INT64_MIN;
	int64_t t187 = 1136LL;

    t187 = ((x813-(x814/x815))^x816);

    if (t187 != -32766LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x817 = -1;
	uint64_t x818 = UINT64_MAX;
	int16_t x820 = -1;
	volatile uint64_t t188 = 7249998717509628082LLU;

    t188 = ((x817-(x818/x819))^x820);

    if (t188 != 1720296938702746LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x823 = INT32_MIN;
	int64_t t189 = 2601LL;

    t189 = ((x821-(x822/x823))^x824);

    if (t189 != -4294967293LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x825 = UINT16_MAX;
	volatile uint32_t x826 = UINT32_MAX;
	static volatile uint32_t x827 = 1404U;
	int16_t x828 = -880;
	volatile uint32_t t190 = 896223U;

    t190 = ((x825-(x826/x827))^x828);

    if (t190 != 2993914U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x829 = INT16_MIN;
	static int8_t x830 = -1;
	static int8_t x831 = -1;
	int32_t t191 = -1;

    t191 = ((x829-(x830/x831))^x832);

    if (t191 != -228343) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x833 = 2U;
	uint16_t x834 = 764U;
	static uint32_t x836 = 667U;

    t192 = ((x833-(x834/x835))^x836);

    if (t192 != 668U) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x838 = 10U;
	int32_t x840 = -1;
	volatile int32_t t193 = -10;

    t193 = ((x837-(x838/x839))^x840);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x841 = INT32_MIN;
	int32_t x842 = INT32_MIN;
	uint16_t x843 = 26U;
	static int32_t x844 = INT32_MIN;
	int32_t t194 = -115325055;

    t194 = ((x841-(x842/x843))^x844);

    if (t194 != 82595524) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x845 = UINT32_MAX;
	int64_t x846 = INT64_MAX;
	volatile int16_t x847 = 31;
	int32_t x848 = INT32_MIN;
	static volatile int64_t t195 = 20LL;

    t195 = ((x845-(x846/x847))^x848);

    if (t195 != 297528127519448823LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x849 = INT16_MIN;
	int64_t x852 = 320554404581638LL;

    t196 = ((x849-(x850/x851))^x852);

    if (t196 != 18446423519304945926LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x853 = INT16_MIN;
	int64_t x854 = INT64_MIN;
	int32_t x855 = -127121;
	static int64_t x856 = INT64_MIN;

    t197 = ((x853-(x854/x855))^x856);

    if (t197 != 9223299481006088178LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x857 = INT32_MIN;
	int64_t x858 = 2227989729383918LL;
	uint16_t x859 = UINT16_MAX;
	int32_t x860 = INT32_MIN;
	int64_t t198 = 753554983439893107LL;

    t198 = ((x857-(x858/x859))^x860);

    if (t198 != 34722532670LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x861 = UINT32_MAX;
	int8_t x862 = INT8_MIN;
	volatile int8_t x864 = -1;
	volatile uint64_t t199 = 14068598922771LLU;

    t199 = ((x861-(x862/x863))^x864);

    if (t199 != 18446744069414612412LLU) { NG(); } else { ; }
	
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

