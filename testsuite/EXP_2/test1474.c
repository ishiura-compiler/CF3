
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

int8_t x9 = INT8_MIN;
int16_t x23 = 1639;
static volatile int16_t x24 = -1;
int8_t x32 = INT8_MIN;
uint16_t x34 = 11415U;
volatile int64_t x35 = 423519395184LL;
volatile uint64_t x57 = 22407479912354LLU;
static int16_t x63 = -1;
int32_t t12 = 0;
int16_t x66 = -5;
volatile int32_t t15 = 137610919;
volatile uint64_t x81 = UINT64_MAX;
static volatile int8_t x87 = -5;
int8_t x92 = INT8_MAX;
int32_t x96 = INT32_MIN;
static volatile int32_t x106 = -1;
int64_t x111 = 2539219777LL;
static volatile int32_t x112 = INT32_MAX;
uint64_t x118 = UINT64_MAX;
int32_t t26 = -5919;
int32_t t32 = 635;
int16_t x147 = INT16_MAX;
volatile int16_t x151 = INT16_MAX;
int8_t x158 = -1;
static int32_t x167 = INT32_MIN;
static uint16_t x169 = 362U;
int32_t t40 = -248;
uint16_t x181 = UINT16_MAX;
volatile uint64_t x188 = 66257797LLU;
uint32_t x196 = 1053462981U;
volatile uint8_t x197 = 110U;
uint64_t x205 = UINT64_MAX;
uint8_t x206 = 0U;
uint32_t x212 = 34740U;
uint32_t x213 = 178U;
uint16_t x215 = 0U;
int8_t x221 = INT8_MIN;
uint32_t x232 = 162401656U;
int64_t x236 = -1LL;
uint64_t x242 = 2022658321845734370LLU;
static int64_t x248 = INT64_MAX;
static int8_t x249 = 29;
int64_t x252 = 1249528LL;
volatile int64_t t56 = -13843170650LL;
int8_t x258 = 0;
static uint32_t x263 = 135505U;
int32_t x269 = INT32_MIN;
static volatile int32_t t63 = -64006356;
int8_t x284 = 63;
int32_t x288 = -1;
int8_t x292 = 1;
uint16_t x298 = 7314U;
static int32_t x301 = 128902;
volatile int64_t x302 = INT64_MIN;
int64_t x305 = 509712643649LL;
int64_t x308 = INT64_MIN;
uint16_t x315 = 5518U;
volatile uint64_t x316 = 311802748LLU;
int16_t x325 = -7347;
int64_t x326 = INT64_MAX;
static int8_t x329 = INT8_MIN;
uint8_t x335 = 57U;
volatile int32_t t76 = 362;
int8_t x355 = -14;
uint8_t x361 = 8U;
static volatile int16_t x366 = 815;
static int32_t t85 = 11574300;
uint8_t x376 = 4U;
int32_t t86 = -627992578;
static volatile int32_t t90 = -1454808;
int32_t x393 = INT32_MIN;
int32_t x395 = -1;
static uint32_t x400 = 311486U;
uint32_t t92 = 376842U;
int8_t x406 = INT8_MIN;
int64_t x407 = INT64_MIN;
int32_t t94 = 38748140;
int16_t x411 = INT16_MIN;
int64_t x421 = -9350LL;
int16_t x423 = -7248;
int32_t x425 = 7539054;
int8_t x432 = INT8_MAX;
uint64_t x437 = UINT64_MAX;
int16_t x438 = INT16_MIN;
int64_t x442 = INT64_MIN;
int8_t x444 = -1;
volatile int32_t t103 = -5670;
int16_t x450 = -1;
int8_t x451 = INT8_MIN;
uint32_t x460 = 3050698U;
int8_t x463 = 9;
int8_t x464 = INT8_MAX;
uint64_t x466 = 26422663862LLU;
int16_t x472 = -1;
uint32_t x473 = 30U;
volatile uint16_t x474 = 1729U;
static int16_t x475 = INT16_MAX;
int32_t x479 = INT32_MIN;
volatile uint8_t x487 = UINT8_MAX;
static int8_t x492 = -1;
int32_t t114 = 156205;
static volatile uint16_t x495 = UINT16_MAX;
int32_t x503 = -13571;
int8_t x505 = 6;
volatile uint32_t t118 = 9224U;
int16_t x514 = -7339;
int16_t x520 = -1;
volatile int32_t x521 = INT32_MIN;
int16_t x523 = -1;
volatile int64_t x528 = -1LL;
int64_t x535 = -235344056LL;
static uint16_t x541 = 847U;
uint8_t x542 = UINT8_MAX;
volatile uint8_t x543 = 0U;
volatile int16_t x545 = INT16_MAX;
static int16_t x548 = INT16_MIN;
static volatile uint64_t x556 = UINT64_MAX;
static volatile uint64_t t129 = 153223164LLU;
int16_t x557 = 123;
uint64_t x566 = 2070890037LLU;
static int32_t t132 = 122;
int32_t x572 = INT32_MIN;
uint8_t x577 = UINT8_MAX;
volatile int32_t t136 = 1627;
int16_t x588 = 2342;
static int16_t x590 = INT16_MAX;
int64_t x591 = 115823388627LL;
uint64_t x606 = 33509985445807708LLU;
volatile uint8_t x610 = 0U;
uint16_t x613 = 105U;
uint64_t x614 = 7320616LLU;
int64_t x622 = 1185807949592071LL;
uint64_t t144 = 1391512680752427514LLU;
int16_t x629 = INT16_MIN;
int32_t x630 = INT32_MAX;
static uint8_t x632 = 1U;
int32_t x635 = INT32_MIN;
static uint16_t x637 = UINT16_MAX;
int16_t x638 = -11;
int32_t x641 = INT32_MAX;
uint64_t x646 = 27148507994216LLU;
volatile uint32_t x649 = 319149U;
int32_t x655 = -17850;
static uint16_t x660 = 3U;
static uint16_t x666 = 16U;
volatile int64_t x667 = INT64_MAX;
static int64_t x670 = INT64_MIN;
int8_t x672 = INT8_MIN;
volatile int32_t t156 = -3;
static int8_t x679 = INT8_MIN;
int16_t x682 = INT16_MAX;
static uint32_t x684 = 5U;
uint32_t t158 = 142243183U;
static int8_t x687 = INT8_MIN;
volatile int8_t x689 = INT8_MIN;
static int32_t x696 = INT32_MIN;
int64_t x698 = INT64_MIN;
volatile int32_t t165 = 3;
int64_t x713 = -1LL;
int8_t x716 = -10;
volatile int32_t t166 = 203856044;
volatile int8_t x720 = -48;
static uint64_t x722 = 29662682739074LLU;
int32_t x733 = INT32_MAX;
int16_t x736 = 3;
uint64_t x740 = 1973LLU;
uint64_t t172 = 6184951044614577LLU;
int64_t x742 = INT64_MIN;
volatile uint32_t x743 = UINT32_MAX;
int32_t t173 = 2995256;
volatile int8_t x747 = 14;
int16_t x749 = 2;
static int8_t x752 = INT8_MIN;
int32_t t175 = 57332087;
uint16_t x753 = 29368U;
int8_t x759 = -1;
uint8_t x772 = UINT8_MAX;
int32_t x773 = INT32_MIN;
uint8_t x780 = 53U;
static int32_t t183 = 14638865;
uint32_t x789 = 88651U;
int32_t t186 = 242162739;
uint16_t x797 = 85U;
int32_t x804 = INT32_MIN;
int64_t x808 = -700LL;
int64_t x812 = -1LL;
int32_t x815 = INT32_MIN;
volatile int8_t x816 = 1;
uint32_t x822 = 157632687U;
int16_t x828 = INT16_MIN;
uint16_t x829 = UINT16_MAX;
int32_t x830 = INT32_MIN;
int8_t x837 = 0;
static uint32_t x844 = 257402322U;
volatile uint8_t x845 = 54U;


void f0(void) {
    	volatile uint64_t x5 = 7756725260LLU;
	int8_t x6 = -1;
	volatile int64_t x7 = 2287LL;
	int32_t x8 = INT32_MIN;
	int32_t t0 = 29917903;

    t0 = ((x5==(x6==x7))/x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x10 = -2239;
	int16_t x11 = 0;
	volatile int16_t x12 = -1;
	static int32_t t1 = 15889358;

    t1 = ((x9==(x10==x11))/x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	int16_t x14 = -1;
	int8_t x15 = -1;
	volatile int32_t x16 = 113606;
	int32_t t2 = -10;

    t2 = ((x13==(x14==x15))/x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -1;
	int32_t x18 = INT32_MIN;
	int16_t x19 = 13;
	int8_t x20 = -1;
	volatile int32_t t3 = 1;

    t3 = ((x17==(x18==x19))/x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = -1;
	static int8_t x22 = INT8_MIN;
	volatile int32_t t4 = -247191251;

    t4 = ((x21==(x22==x23))/x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = -50923487618849LL;
	uint8_t x30 = UINT8_MAX;
	volatile int8_t x31 = INT8_MIN;
	volatile int32_t t5 = -80;

    t5 = ((x29==(x30==x31))/x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x33 = INT8_MIN;
	volatile int64_t x36 = -65743289895337LL;
	int64_t t6 = -1208450093LL;

    t6 = ((x33==(x34==x35))/x36);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = INT64_MIN;
	int64_t x38 = 1784494762LL;
	int16_t x39 = INT16_MAX;
	int32_t x40 = 2410068;
	int32_t t7 = 29743;

    t7 = ((x37==(x38==x39))/x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = -28;
	uint64_t x42 = UINT64_MAX;
	uint16_t x43 = 3U;
	int16_t x44 = INT16_MAX;
	volatile int32_t t8 = -159;

    t8 = ((x41==(x42==x43))/x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = INT32_MAX;
	static uint16_t x46 = 5301U;
	int8_t x47 = INT8_MAX;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t9 = 0;

    t9 = ((x45==(x46==x47))/x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x49 = 3104U;
	int32_t x50 = INT32_MIN;
	int64_t x51 = -1LL;
	volatile uint32_t x52 = UINT32_MAX;
	uint32_t t10 = 543073U;

    t10 = ((x49==(x50==x51))/x52);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x58 = INT16_MIN;
	int32_t x59 = -1;
	static volatile int64_t x60 = 747997932LL;
	int64_t t11 = -30371749816LL;

    t11 = ((x57==(x58==x59))/x60);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x61 = 3296725073LLU;
	static int32_t x62 = 1248907;
	static uint16_t x64 = 33U;

    t12 = ((x61==(x62==x63))/x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x65 = INT16_MIN;
	volatile int8_t x67 = -1;
	int32_t x68 = -1;
	static int32_t t13 = -159443;

    t13 = ((x65==(x66==x67))/x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x69 = UINT8_MAX;
	int16_t x70 = 57;
	uint32_t x71 = 0U;
	uint32_t x72 = 3664U;
	uint32_t t14 = 192098U;

    t14 = ((x69==(x70==x71))/x72);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x73 = 3U;
	int16_t x74 = -1;
	volatile int32_t x75 = -122522;
	int32_t x76 = INT32_MAX;

    t15 = ((x73==(x74==x75))/x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x77 = UINT64_MAX;
	volatile int16_t x78 = 48;
	static volatile uint64_t x79 = 986806064120021560LLU;
	static int16_t x80 = -1;
	static volatile int32_t t16 = -19;

    t16 = ((x77==(x78==x79))/x80);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x82 = INT64_MIN;
	uint16_t x83 = UINT16_MAX;
	static volatile uint32_t x84 = UINT32_MAX;
	volatile uint32_t t17 = 162786540U;

    t17 = ((x81==(x82==x83))/x84);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x85 = INT8_MIN;
	int16_t x86 = 8;
	int8_t x88 = -1;
	volatile int32_t t18 = -259739932;

    t18 = ((x85==(x86==x87))/x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x89 = -1LL;
	int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MIN;
	static volatile int32_t t19 = -172;

    t19 = ((x89==(x90==x91))/x92);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x93 = 6U;
	int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	volatile int32_t t20 = 481;

    t20 = ((x93==(x94==x95))/x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x97 = INT64_MIN;
	static uint16_t x98 = 1731U;
	volatile int8_t x99 = 38;
	uint8_t x100 = 100U;
	int32_t t21 = -231;

    t21 = ((x97==(x98==x99))/x100);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = INT16_MIN;
	static int32_t x102 = 98026;
	static int64_t x103 = -1LL;
	uint64_t x104 = 181249382722099LLU;
	static uint64_t t22 = 108LLU;

    t22 = ((x101==(x102==x103))/x104);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x105 = INT64_MIN;
	int64_t x107 = -2398514444LL;
	static uint32_t x108 = 3814217U;
	volatile uint32_t t23 = 5152806U;

    t23 = ((x105==(x106==x107))/x108);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x109 = 0;
	static uint32_t x110 = UINT32_MAX;
	static int32_t t24 = -1413706;

    t24 = ((x109==(x110==x111))/x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = INT16_MIN;
	static uint32_t x114 = 61U;
	volatile int64_t x115 = 127319060826952971LL;
	volatile uint32_t x116 = UINT32_MAX;
	static uint32_t t25 = 2U;

    t25 = ((x113==(x114==x115))/x116);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x117 = INT64_MIN;
	int32_t x119 = INT32_MAX;
	volatile int32_t x120 = -1;

    t26 = ((x117==(x118==x119))/x120);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MAX;
	int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MIN;
	int64_t t27 = -31792867LL;

    t27 = ((x121==(x122==x123))/x124);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x125 = 492508990U;
	int64_t x126 = INT64_MIN;
	int64_t x127 = 2LL;
	int64_t x128 = -1LL;
	static int64_t t28 = 26958LL;

    t28 = ((x125==(x126==x127))/x128);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x129 = INT32_MIN;
	volatile int64_t x130 = INT64_MAX;
	uint32_t x131 = 265U;
	static int16_t x132 = -4;
	volatile int32_t t29 = 6;

    t29 = ((x129==(x130==x131))/x132);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x133 = UINT32_MAX;
	static int8_t x134 = -23;
	int64_t x135 = -11376746LL;
	int32_t x136 = INT32_MIN;
	volatile int32_t t30 = -702;

    t30 = ((x133==(x134==x135))/x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x137 = INT64_MIN;
	uint8_t x138 = UINT8_MAX;
	int8_t x139 = 18;
	uint64_t x140 = 4681933623329501535LLU;
	volatile uint64_t t31 = 126269562808LLU;

    t31 = ((x137==(x138==x139))/x140);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = INT32_MIN;
	int64_t x142 = -1LL;
	static uint32_t x143 = UINT32_MAX;
	int32_t x144 = INT32_MAX;

    t32 = ((x141==(x142==x143))/x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = INT32_MIN;
	uint8_t x146 = UINT8_MAX;
	uint16_t x148 = 1U;
	int32_t t33 = -4;

    t33 = ((x145==(x146==x147))/x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = -1;
	int32_t x150 = -1;
	uint32_t x152 = 105249515U;
	volatile uint32_t t34 = 251U;

    t34 = ((x149==(x150==x151))/x152);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x153 = -1;
	int64_t x154 = INT64_MIN;
	volatile uint16_t x155 = 1U;
	uint16_t x156 = 24671U;
	volatile int32_t t35 = -119;

    t35 = ((x153==(x154==x155))/x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x157 = 124949;
	int32_t x159 = INT32_MAX;
	uint16_t x160 = 436U;
	volatile int32_t t36 = 224767;

    t36 = ((x157==(x158==x159))/x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = INT64_MAX;
	int32_t x162 = -22575735;
	int32_t x163 = -1;
	uint8_t x164 = 44U;
	volatile int32_t t37 = 456;

    t37 = ((x161==(x162==x163))/x164);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x165 = -1;
	static uint8_t x166 = UINT8_MAX;
	int8_t x168 = -1;
	volatile int32_t t38 = -44739;

    t38 = ((x165==(x166==x167))/x168);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x170 = INT16_MAX;
	int16_t x171 = INT16_MAX;
	uint16_t x172 = 114U;
	static int32_t t39 = 450514;

    t39 = ((x169==(x170==x171))/x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x173 = INT8_MIN;
	uint16_t x174 = UINT16_MAX;
	volatile int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MAX;

    t40 = ((x173==(x174==x175))/x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x177 = INT16_MAX;
	uint16_t x178 = UINT16_MAX;
	uint64_t x179 = UINT64_MAX;
	static volatile uint8_t x180 = 14U;
	volatile int32_t t41 = -9;

    t41 = ((x177==(x178==x179))/x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x182 = -1;
	int8_t x183 = INT8_MIN;
	uint8_t x184 = 9U;
	static int32_t t42 = 15;

    t42 = ((x181==(x182==x183))/x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x185 = -1LL;
	volatile uint16_t x186 = 30U;
	int64_t x187 = -1LL;
	uint64_t t43 = 1189251523329528LLU;

    t43 = ((x185==(x186==x187))/x188);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = -6;
	static int32_t x190 = INT32_MIN;
	int8_t x191 = -46;
	volatile int32_t x192 = INT32_MAX;
	volatile int32_t t44 = -408578;

    t44 = ((x189==(x190==x191))/x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x193 = INT16_MIN;
	volatile int64_t x194 = -1LL;
	uint8_t x195 = UINT8_MAX;
	volatile uint32_t t45 = 1925833883U;

    t45 = ((x193==(x194==x195))/x196);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x198 = UINT64_MAX;
	static uint16_t x199 = UINT16_MAX;
	volatile uint16_t x200 = UINT16_MAX;
	volatile int32_t t46 = -229340;

    t46 = ((x197==(x198==x199))/x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x207 = 11564LLU;
	int8_t x208 = -1;
	static volatile int32_t t47 = 0;

    t47 = ((x205==(x206==x207))/x208);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x209 = UINT16_MAX;
	int16_t x210 = 4;
	int8_t x211 = INT8_MAX;
	static volatile uint32_t t48 = 268U;

    t48 = ((x209==(x210==x211))/x212);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x214 = 75219261105392012LL;
	static int16_t x216 = -15423;
	int32_t t49 = -713592;

    t49 = ((x213==(x214==x215))/x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x222 = -3937;
	int64_t x223 = INT64_MAX;
	static uint8_t x224 = UINT8_MAX;
	static int32_t t50 = 108;

    t50 = ((x221==(x222==x223))/x224);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x229 = INT64_MAX;
	static uint64_t x230 = UINT64_MAX;
	static volatile int32_t x231 = 51;
	volatile uint32_t t51 = 215U;

    t51 = ((x229==(x230==x231))/x232);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x233 = 22043502483579751LLU;
	uint64_t x234 = UINT64_MAX;
	uint8_t x235 = UINT8_MAX;
	int64_t t52 = 249244LL;

    t52 = ((x233==(x234==x235))/x236);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x237 = 7013085287LLU;
	uint8_t x238 = 6U;
	uint16_t x239 = UINT16_MAX;
	int16_t x240 = INT16_MIN;
	static volatile int32_t t53 = 1040997582;

    t53 = ((x237==(x238==x239))/x240);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x241 = INT8_MIN;
	uint32_t x243 = 175753856U;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t54 = 24679942;

    t54 = ((x241==(x242==x243))/x244);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x245 = INT8_MIN;
	uint64_t x246 = 83536699943436406LLU;
	static volatile int64_t x247 = 5LL;
	volatile int64_t t55 = -4730LL;

    t55 = ((x245==(x246==x247))/x248);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x250 = UINT64_MAX;
	uint64_t x251 = UINT64_MAX;

    t56 = ((x249==(x250==x251))/x252);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x253 = INT8_MIN;
	static int32_t x254 = 6;
	static int16_t x255 = 14238;
	int64_t x256 = INT64_MIN;
	int64_t t57 = -1047LL;

    t57 = ((x253==(x254==x255))/x256);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x257 = INT32_MIN;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = -1;
	static int32_t t58 = 1;

    t58 = ((x257==(x258==x259))/x260);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x261 = INT16_MAX;
	static int16_t x262 = -1;
	static int64_t x264 = -1LL;
	int64_t t59 = 24876929082869LL;

    t59 = ((x261==(x262==x263))/x264);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x265 = INT32_MIN;
	int16_t x266 = -1;
	static int64_t x267 = INT64_MIN;
	static int8_t x268 = -1;
	int32_t t60 = 1;

    t60 = ((x265==(x266==x267))/x268);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x270 = -314093977841LL;
	int16_t x271 = INT16_MAX;
	volatile int8_t x272 = -1;
	volatile int32_t t61 = 30000;

    t61 = ((x269==(x270==x271))/x272);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x273 = -3329;
	static int64_t x274 = INT64_MIN;
	static int64_t x275 = 1861976LL;
	uint32_t x276 = 101288648U;
	static volatile uint32_t t62 = 29450U;

    t62 = ((x273==(x274==x275))/x276);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x277 = 181670588494965LLU;
	uint8_t x278 = 32U;
	uint64_t x279 = 22539057030119530LLU;
	int16_t x280 = INT16_MAX;

    t63 = ((x277==(x278==x279))/x280);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x281 = 9259650U;
	static int16_t x282 = -1;
	int16_t x283 = INT16_MIN;
	volatile int32_t t64 = 380897648;

    t64 = ((x281==(x282==x283))/x284);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x285 = -1LL;
	uint16_t x286 = 8U;
	volatile int16_t x287 = INT16_MIN;
	int32_t t65 = -3;

    t65 = ((x285==(x286==x287))/x288);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x289 = INT32_MAX;
	volatile uint32_t x290 = 2U;
	uint32_t x291 = 380497U;
	volatile int32_t t66 = 500;

    t66 = ((x289==(x290==x291))/x292);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x293 = 10U;
	int8_t x294 = INT8_MAX;
	int8_t x295 = INT8_MIN;
	static uint64_t x296 = 76934678627339482LLU;
	volatile uint64_t t67 = 2771125LLU;

    t67 = ((x293==(x294==x295))/x296);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x297 = INT8_MIN;
	uint64_t x299 = 17629135236914LLU;
	int16_t x300 = INT16_MIN;
	int32_t t68 = 238;

    t68 = ((x297==(x298==x299))/x300);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x303 = 1885329529136LLU;
	static uint16_t x304 = UINT16_MAX;
	static volatile int32_t t69 = 0;

    t69 = ((x301==(x302==x303))/x304);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x306 = 276657908816781520LLU;
	int64_t x307 = -1LL;
	int64_t t70 = -131186256LL;

    t70 = ((x305==(x306==x307))/x308);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x309 = -1;
	uint8_t x310 = 121U;
	int16_t x311 = INT16_MAX;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t71 = 53412;

    t71 = ((x309==(x310==x311))/x312);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x313 = -13;
	static uint32_t x314 = UINT32_MAX;
	uint64_t t72 = 720522926634LLU;

    t72 = ((x313==(x314==x315))/x316);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MAX;
	int64_t x319 = INT64_MIN;
	int8_t x320 = -1;
	volatile int32_t t73 = -5009;

    t73 = ((x317==(x318==x319))/x320);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint8_t x327 = 0U;
	int8_t x328 = INT8_MIN;
	volatile int32_t t74 = 32395;

    t74 = ((x325==(x326==x327))/x328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x330 = INT16_MIN;
	int16_t x331 = -92;
	int32_t x332 = -1;
	volatile int32_t t75 = 31493;

    t75 = ((x329==(x330==x331))/x332);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int16_t x333 = -1;
	static volatile int8_t x334 = -1;
	int32_t x336 = INT32_MIN;

    t76 = ((x333==(x334==x335))/x336);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x337 = -5;
	int8_t x338 = INT8_MIN;
	volatile int64_t x339 = -8283116617LL;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t77 = -8378960;

    t77 = ((x337==(x338==x339))/x340);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x341 = 1;
	uint8_t x342 = UINT8_MAX;
	static int32_t x343 = 610;
	int32_t x344 = INT32_MAX;
	volatile int32_t t78 = 127070;

    t78 = ((x341==(x342==x343))/x344);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x345 = 40U;
	volatile int16_t x346 = INT16_MIN;
	int16_t x347 = -1;
	uint32_t x348 = 106U;
	static volatile uint32_t t79 = 217408723U;

    t79 = ((x345==(x346==x347))/x348);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MIN;
	static int32_t x351 = INT32_MAX;
	int64_t x352 = -2239641060LL;
	int64_t t80 = 17987738665964LL;

    t80 = ((x349==(x350==x351))/x352);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x353 = 129252U;
	uint32_t x354 = 498658747U;
	uint8_t x356 = 3U;
	int32_t t81 = -63;

    t81 = ((x353==(x354==x355))/x356);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x357 = -1;
	static int64_t x358 = 1902LL;
	int16_t x359 = 15;
	static int16_t x360 = INT16_MIN;
	static volatile int32_t t82 = -20340635;

    t82 = ((x357==(x358==x359))/x360);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x362 = UINT8_MAX;
	volatile uint32_t x363 = 4U;
	int32_t x364 = INT32_MIN;
	int32_t t83 = 17;

    t83 = ((x361==(x362==x363))/x364);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x365 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	volatile uint8_t x368 = UINT8_MAX;
	static volatile int32_t t84 = 124728;

    t84 = ((x365==(x366==x367))/x368);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x369 = INT16_MIN;
	static int64_t x370 = INT64_MAX;
	uint32_t x371 = 7300134U;
	static volatile int8_t x372 = 38;

    t85 = ((x369==(x370==x371))/x372);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x373 = UINT32_MAX;
	int32_t x374 = -1;
	uint64_t x375 = UINT64_MAX;

    t86 = ((x373==(x374==x375))/x376);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x377 = -1;
	int64_t x378 = INT64_MIN;
	int64_t x379 = INT64_MAX;
	uint64_t x380 = 564376106LLU;
	static uint64_t t87 = 76107988920LLU;

    t87 = ((x377==(x378==x379))/x380);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint64_t x381 = 57557283104350957LLU;
	int8_t x382 = INT8_MIN;
	int32_t x383 = -1618;
	int8_t x384 = 7;
	volatile int32_t t88 = -187771591;

    t88 = ((x381==(x382==x383))/x384);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x385 = 4U;
	uint8_t x386 = UINT8_MAX;
	int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MIN;
	static volatile int64_t t89 = -132404396889718LL;

    t89 = ((x385==(x386==x387))/x388);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x389 = 26247U;
	uint32_t x390 = UINT32_MAX;
	uint8_t x391 = 2U;
	int16_t x392 = 321;

    t90 = ((x389==(x390==x391))/x392);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x394 = 55128U;
	int8_t x396 = INT8_MAX;
	volatile int32_t t91 = 322992359;

    t91 = ((x393==(x394==x395))/x396);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x397 = INT16_MAX;
	uint32_t x398 = 478U;
	static uint8_t x399 = 1U;

    t92 = ((x397==(x398==x399))/x400);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x401 = -1492185043566638LL;
	uint32_t x402 = UINT32_MAX;
	int16_t x403 = INT16_MAX;
	volatile uint64_t x404 = UINT64_MAX;
	uint64_t t93 = 2525274955222LLU;

    t93 = ((x401==(x402==x403))/x404);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x405 = INT32_MIN;
	int8_t x408 = INT8_MIN;

    t94 = ((x405==(x406==x407))/x408);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x409 = INT16_MAX;
	static int16_t x410 = INT16_MIN;
	uint16_t x412 = 1896U;
	volatile int32_t t95 = 470;

    t95 = ((x409==(x410==x411))/x412);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x413 = 33U;
	int16_t x414 = INT16_MIN;
	volatile int32_t x415 = -1;
	int32_t x416 = INT32_MIN;
	volatile int32_t t96 = -112135;

    t96 = ((x413==(x414==x415))/x416);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x417 = INT32_MIN;
	int16_t x418 = -338;
	int32_t x419 = -21689;
	volatile int64_t x420 = INT64_MAX;
	int64_t t97 = 678821LL;

    t97 = ((x417==(x418==x419))/x420);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x422 = 0;
	uint8_t x424 = UINT8_MAX;
	int32_t t98 = -42;

    t98 = ((x421==(x422==x423))/x424);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x426 = INT8_MIN;
	int64_t x427 = -4368060LL;
	int32_t x428 = -1;
	static volatile int32_t t99 = 0;

    t99 = ((x425==(x426==x427))/x428);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x429 = INT32_MIN;
	int8_t x430 = INT8_MAX;
	static volatile int32_t x431 = -1;
	volatile int32_t t100 = -129;

    t100 = ((x429==(x430==x431))/x432);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x433 = 31969LLU;
	int32_t x434 = 3088;
	int64_t x435 = INT64_MAX;
	int32_t x436 = -20408;
	int32_t t101 = -67;

    t101 = ((x433==(x434==x435))/x436);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x439 = UINT64_MAX;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t102 = 1;

    t102 = ((x437==(x438==x439))/x440);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x441 = INT64_MIN;
	uint16_t x443 = UINT16_MAX;

    t103 = ((x441==(x442==x443))/x444);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x445 = INT32_MIN;
	int32_t x446 = INT32_MIN;
	uint8_t x447 = UINT8_MAX;
	int8_t x448 = -10;
	volatile int32_t t104 = 496;

    t104 = ((x445==(x446==x447))/x448);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x449 = INT8_MIN;
	static int64_t x452 = INT64_MAX;
	static int64_t t105 = -2141217404298837413LL;

    t105 = ((x449==(x450==x451))/x452);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x457 = -947519;
	int16_t x458 = INT16_MAX;
	uint32_t x459 = 214126174U;
	uint32_t t106 = 844257U;

    t106 = ((x457==(x458==x459))/x460);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x461 = -17972524545635117LL;
	int32_t x462 = -6;
	volatile int32_t t107 = 1;

    t107 = ((x461==(x462==x463))/x464);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x465 = 12220451232215213LLU;
	int8_t x467 = -31;
	int32_t x468 = -1;
	int32_t t108 = -527697409;

    t108 = ((x465==(x466==x467))/x468);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x469 = INT32_MIN;
	static uint64_t x470 = 2LLU;
	uint64_t x471 = 3LLU;
	volatile int32_t t109 = -636;

    t109 = ((x469==(x470==x471))/x472);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x476 = INT32_MIN;
	volatile int32_t t110 = -72;

    t110 = ((x473==(x474==x475))/x476);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x477 = 208527072542045292LL;
	int8_t x478 = INT8_MIN;
	static int8_t x480 = INT8_MIN;
	static volatile int32_t t111 = -9;

    t111 = ((x477==(x478==x479))/x480);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x481 = UINT16_MAX;
	static int32_t x482 = 1927674;
	int64_t x483 = -1LL;
	int16_t x484 = -1;
	volatile int32_t t112 = -2710186;

    t112 = ((x481==(x482==x483))/x484);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x485 = 7U;
	static uint32_t x486 = UINT32_MAX;
	volatile uint64_t x488 = 123984LLU;
	uint64_t t113 = 5LLU;

    t113 = ((x485==(x486==x487))/x488);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x489 = -1LL;
	int32_t x490 = INT32_MIN;
	int8_t x491 = INT8_MAX;

    t114 = ((x489==(x490==x491))/x492);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x493 = INT32_MIN;
	volatile int16_t x494 = 1;
	uint8_t x496 = UINT8_MAX;
	volatile int32_t t115 = -584;

    t115 = ((x493==(x494==x495))/x496);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x497 = 40U;
	volatile uint64_t x498 = 299093014369184286LLU;
	int64_t x499 = -725622498497798LL;
	static uint32_t x500 = 329U;
	static volatile uint32_t t116 = 3856331U;

    t116 = ((x497==(x498==x499))/x500);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x501 = INT8_MIN;
	volatile int32_t x502 = INT32_MAX;
	int64_t x504 = 1952LL;
	int64_t t117 = -1906091LL;

    t117 = ((x501==(x502==x503))/x504);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x506 = INT8_MIN;
	int32_t x507 = 24661535;
	volatile uint32_t x508 = UINT32_MAX;

    t118 = ((x505==(x506==x507))/x508);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x509 = INT16_MAX;
	volatile uint16_t x510 = UINT16_MAX;
	int32_t x511 = -41635887;
	int16_t x512 = 5769;
	volatile int32_t t119 = 8879;

    t119 = ((x509==(x510==x511))/x512);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x513 = 2772;
	uint8_t x515 = 24U;
	uint64_t x516 = 113648140336LLU;
	volatile uint64_t t120 = 1451274713517LLU;

    t120 = ((x513==(x514==x515))/x516);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x517 = -5;
	volatile uint16_t x518 = 45U;
	static int64_t x519 = 519162LL;
	volatile int32_t t121 = -92031898;

    t121 = ((x517==(x518==x519))/x520);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x522 = INT32_MIN;
	volatile int8_t x524 = INT8_MIN;
	volatile int32_t t122 = 6166676;

    t122 = ((x521==(x522==x523))/x524);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x525 = -39;
	volatile int32_t x526 = INT32_MIN;
	int16_t x527 = INT16_MIN;
	volatile int64_t t123 = -981LL;

    t123 = ((x525==(x526==x527))/x528);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x529 = 3U;
	int64_t x530 = -1LL;
	int32_t x531 = -1;
	int32_t x532 = INT32_MIN;
	volatile int32_t t124 = -32399;

    t124 = ((x529==(x530==x531))/x532);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x533 = INT16_MIN;
	static volatile uint64_t x534 = UINT64_MAX;
	int64_t x536 = 152LL;
	static volatile int64_t t125 = 2LL;

    t125 = ((x533==(x534==x535))/x536);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x537 = INT8_MAX;
	int32_t x538 = INT32_MIN;
	int64_t x539 = INT64_MIN;
	int64_t x540 = 1378814537762LL;
	volatile int64_t t126 = 9814LL;

    t126 = ((x537==(x538==x539))/x540);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x544 = INT8_MIN;
	volatile int32_t t127 = -19729203;

    t127 = ((x541==(x542==x543))/x544);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x546 = 6U;
	int32_t x547 = 50;
	int32_t t128 = -46;

    t128 = ((x545==(x546==x547))/x548);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x553 = 1514812815LLU;
	volatile int32_t x554 = INT32_MAX;
	int8_t x555 = INT8_MIN;

    t129 = ((x553==(x554==x555))/x556);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x558 = 0;
	int8_t x559 = INT8_MAX;
	static uint16_t x560 = 1U;
	volatile int32_t t130 = 5075;

    t130 = ((x557==(x558==x559))/x560);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x561 = INT8_MIN;
	int8_t x562 = -22;
	volatile uint8_t x563 = UINT8_MAX;
	int8_t x564 = -2;
	volatile int32_t t131 = -225295609;

    t131 = ((x561==(x562==x563))/x564);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x565 = 4;
	uint64_t x567 = 1247958LLU;
	static int16_t x568 = INT16_MAX;

    t132 = ((x565==(x566==x567))/x568);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x569 = UINT32_MAX;
	int16_t x570 = 1103;
	volatile int16_t x571 = INT16_MAX;
	volatile int32_t t133 = 2269783;

    t133 = ((x569==(x570==x571))/x572);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x573 = 1;
	volatile int8_t x574 = INT8_MIN;
	int8_t x575 = -1;
	int16_t x576 = 1;
	volatile int32_t t134 = 1928;

    t134 = ((x573==(x574==x575))/x576);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x578 = -1269643719989846220LL;
	uint8_t x579 = 16U;
	volatile int16_t x580 = -1;
	volatile int32_t t135 = 196842630;

    t135 = ((x577==(x578==x579))/x580);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x581 = -1;
	int64_t x582 = INT64_MIN;
	static int8_t x583 = 0;
	int8_t x584 = 13;

    t136 = ((x581==(x582==x583))/x584);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x585 = 114U;
	int16_t x586 = -1;
	volatile int32_t x587 = INT32_MIN;
	int32_t t137 = 185;

    t137 = ((x585==(x586==x587))/x588);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	int8_t x592 = -1;
	volatile int32_t t138 = 24546;

    t138 = ((x589==(x590==x591))/x592);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x597 = INT8_MAX;
	uint8_t x598 = 11U;
	int8_t x599 = INT8_MIN;
	int32_t x600 = INT32_MIN;
	int32_t t139 = -481034;

    t139 = ((x597==(x598==x599))/x600);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x605 = UINT64_MAX;
	static int64_t x607 = -1465307LL;
	volatile int16_t x608 = INT16_MAX;
	int32_t t140 = 234;

    t140 = ((x605==(x606==x607))/x608);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x609 = INT16_MAX;
	int16_t x611 = 1236;
	uint64_t x612 = 100LLU;
	volatile uint64_t t141 = 135166756591LLU;

    t141 = ((x609==(x610==x611))/x612);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x615 = INT16_MIN;
	uint64_t x616 = 7970217071041022LLU;
	uint64_t t142 = 145673285890739LLU;

    t142 = ((x613==(x614==x615))/x616);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x617 = 246;
	uint16_t x618 = UINT16_MAX;
	static int64_t x619 = INT64_MIN;
	static uint32_t x620 = UINT32_MAX;
	uint32_t t143 = 1304U;

    t143 = ((x617==(x618==x619))/x620);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x621 = INT64_MIN;
	static int8_t x623 = -1;
	uint64_t x624 = 1374843560262LLU;

    t144 = ((x621==(x622==x623))/x624);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x625 = 5515638397LLU;
	int8_t x626 = INT8_MAX;
	static volatile int64_t x627 = 2967099003492595702LL;
	int64_t x628 = INT64_MIN;
	volatile int64_t t145 = 198LL;

    t145 = ((x625==(x626==x627))/x628);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x631 = 39U;
	int32_t t146 = 122529;

    t146 = ((x629==(x630==x631))/x632);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x633 = -36;
	int8_t x634 = INT8_MIN;
	uint32_t x636 = 15309U;
	volatile uint32_t t147 = 236U;

    t147 = ((x633==(x634==x635))/x636);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x639 = INT64_MIN;
	int32_t x640 = INT32_MIN;
	int32_t t148 = -469146;

    t148 = ((x637==(x638==x639))/x640);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x642 = 8U;
	int16_t x643 = INT16_MIN;
	int32_t x644 = INT32_MAX;
	static volatile int32_t t149 = -1;

    t149 = ((x641==(x642==x643))/x644);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x645 = -13611387188415LL;
	volatile int64_t x647 = INT64_MAX;
	static int64_t x648 = INT64_MAX;
	volatile int64_t t150 = 4282911500LL;

    t150 = ((x645==(x646==x647))/x648);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x650 = 1;
	static int16_t x651 = -3899;
	int8_t x652 = INT8_MIN;
	int32_t t151 = 4993764;

    t151 = ((x649==(x650==x651))/x652);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x653 = 11U;
	volatile uint64_t x654 = 254432312212636LLU;
	int8_t x656 = INT8_MIN;
	volatile int32_t t152 = -231947;

    t152 = ((x653==(x654==x655))/x656);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x657 = 1;
	int8_t x658 = -18;
	uint64_t x659 = 3LLU;
	volatile int32_t t153 = -1;

    t153 = ((x657==(x658==x659))/x660);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x661 = 1U;
	static uint16_t x662 = 1563U;
	static uint16_t x663 = 37U;
	static int64_t x664 = INT64_MIN;
	volatile int64_t t154 = -3387437234539LL;

    t154 = ((x661==(x662==x663))/x664);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x665 = 10276961LLU;
	int64_t x668 = INT64_MIN;
	int64_t t155 = 20590491809694410LL;

    t155 = ((x665==(x666==x667))/x668);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x669 = UINT8_MAX;
	uint16_t x671 = 2U;

    t156 = ((x669==(x670==x671))/x672);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x677 = INT8_MIN;
	int32_t x678 = INT32_MIN;
	static uint8_t x680 = 45U;
	static int32_t t157 = 1;

    t157 = ((x677==(x678==x679))/x680);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x681 = INT16_MIN;
	static uint32_t x683 = 71U;

    t158 = ((x681==(x682==x683))/x684);

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x685 = INT32_MIN;
	uint8_t x686 = UINT8_MAX;
	int32_t x688 = INT32_MIN;
	volatile int32_t t159 = 21839429;

    t159 = ((x685==(x686==x687))/x688);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x690 = INT64_MIN;
	volatile int8_t x691 = INT8_MAX;
	int16_t x692 = -1;
	volatile int32_t t160 = -69004;

    t160 = ((x689==(x690==x691))/x692);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x693 = INT64_MIN;
	static int32_t x694 = INT32_MIN;
	static int64_t x695 = INT64_MIN;
	int32_t t161 = -78;

    t161 = ((x693==(x694==x695))/x696);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x697 = INT64_MIN;
	uint16_t x699 = UINT16_MAX;
	volatile int32_t x700 = -1;
	int32_t t162 = -181376;

    t162 = ((x697==(x698==x699))/x700);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x701 = INT8_MAX;
	static volatile uint16_t x702 = 3U;
	volatile int32_t x703 = 62;
	int64_t x704 = INT64_MAX;
	volatile int64_t t163 = -626194669389660775LL;

    t163 = ((x701==(x702==x703))/x704);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x705 = -153271;
	int8_t x706 = INT8_MIN;
	int16_t x707 = -1;
	int16_t x708 = INT16_MIN;
	volatile int32_t t164 = -1;

    t164 = ((x705==(x706==x707))/x708);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x709 = -1LL;
	int64_t x710 = INT64_MIN;
	volatile int32_t x711 = INT32_MIN;
	static int8_t x712 = -1;

    t165 = ((x709==(x710==x711))/x712);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x714 = UINT32_MAX;
	int32_t x715 = INT32_MAX;

    t166 = ((x713==(x714==x715))/x716);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x717 = INT8_MIN;
	static int8_t x718 = INT8_MIN;
	volatile int32_t x719 = -1;
	volatile int32_t t167 = -3;

    t167 = ((x717==(x718==x719))/x720);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x721 = INT64_MIN;
	static int16_t x723 = INT16_MIN;
	static int8_t x724 = -12;
	int32_t t168 = 7044355;

    t168 = ((x721==(x722==x723))/x724);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x725 = -1LL;
	volatile int16_t x726 = INT16_MIN;
	int64_t x727 = INT64_MIN;
	int16_t x728 = INT16_MIN;
	int32_t t169 = 1945113;

    t169 = ((x725==(x726==x727))/x728);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x729 = 1U;
	uint64_t x730 = 4925062LLU;
	int16_t x731 = INT16_MIN;
	static int8_t x732 = INT8_MAX;
	int32_t t170 = -1;

    t170 = ((x729==(x730==x731))/x732);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x734 = -37;
	int32_t x735 = 456102;
	static volatile int32_t t171 = 69408;

    t171 = ((x733==(x734==x735))/x736);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x737 = INT32_MIN;
	static volatile int64_t x738 = -1LL;
	volatile uint64_t x739 = 206132468358998241LLU;

    t172 = ((x737==(x738==x739))/x740);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x741 = 0U;
	volatile int16_t x744 = INT16_MAX;

    t173 = ((x741==(x742==x743))/x744);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x745 = INT32_MIN;
	volatile int16_t x746 = 5176;
	uint64_t x748 = 430LLU;
	volatile uint64_t t174 = 6964143LLU;

    t174 = ((x745==(x746==x747))/x748);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x750 = 219U;
	int8_t x751 = -33;

    t175 = ((x749==(x750==x751))/x752);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x754 = -3;
	static int32_t x755 = -717432;
	static int16_t x756 = 230;
	int32_t t176 = 2902733;

    t176 = ((x753==(x754==x755))/x756);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x757 = -277;
	int32_t x758 = INT32_MIN;
	uint32_t x760 = 137539159U;
	static uint32_t t177 = 564U;

    t177 = ((x757==(x758==x759))/x760);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x761 = INT32_MIN;
	uint16_t x762 = 2U;
	volatile int8_t x763 = 0;
	int16_t x764 = -135;
	volatile int32_t t178 = -71000735;

    t178 = ((x761==(x762==x763))/x764);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x765 = 0LLU;
	volatile uint64_t x766 = 9246407139355LLU;
	int64_t x767 = 241154201LL;
	int16_t x768 = -1;
	int32_t t179 = -354633;

    t179 = ((x765==(x766==x767))/x768);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x769 = 1U;
	volatile int8_t x770 = -1;
	static volatile int64_t x771 = 117507147LL;
	static volatile int32_t t180 = -5;

    t180 = ((x769==(x770==x771))/x772);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x774 = INT64_MAX;
	int16_t x775 = INT16_MIN;
	int16_t x776 = 14402;
	int32_t t181 = -212;

    t181 = ((x773==(x774==x775))/x776);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x777 = UINT32_MAX;
	volatile int32_t x778 = INT32_MIN;
	static uint8_t x779 = 5U;
	int32_t t182 = -478690;

    t182 = ((x777==(x778==x779))/x780);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x781 = 461256U;
	static int8_t x782 = INT8_MAX;
	static volatile int8_t x783 = INT8_MAX;
	int32_t x784 = 14;

    t183 = ((x781==(x782==x783))/x784);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint8_t x785 = UINT8_MAX;
	volatile int64_t x786 = -446304503339107LL;
	volatile int8_t x787 = 36;
	uint32_t x788 = 18535879U;
	uint32_t t184 = 346813U;

    t184 = ((x785==(x786==x787))/x788);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x790 = 11;
	uint16_t x791 = 0U;
	volatile int64_t x792 = INT64_MAX;
	int64_t t185 = -15521208418041LL;

    t185 = ((x789==(x790==x791))/x792);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x793 = 8U;
	int64_t x794 = -1LL;
	int32_t x795 = -15;
	uint8_t x796 = UINT8_MAX;

    t186 = ((x793==(x794==x795))/x796);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x798 = 1;
	int32_t x799 = -353;
	int16_t x800 = -1;
	volatile int32_t t187 = -327;

    t187 = ((x797==(x798==x799))/x800);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint8_t x801 = 2U;
	int8_t x802 = INT8_MAX;
	volatile uint8_t x803 = 32U;
	volatile int32_t t188 = -816;

    t188 = ((x801==(x802==x803))/x804);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x805 = UINT32_MAX;
	volatile uint32_t x806 = UINT32_MAX;
	static int8_t x807 = INT8_MAX;
	static volatile int64_t t189 = 8142LL;

    t189 = ((x805==(x806==x807))/x808);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x809 = -1;
	static volatile int16_t x810 = INT16_MAX;
	static uint32_t x811 = 0U;
	int64_t t190 = 413319LL;

    t190 = ((x809==(x810==x811))/x812);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x813 = 13LLU;
	uint32_t x814 = 1636U;
	volatile int32_t t191 = 258;

    t191 = ((x813==(x814==x815))/x816);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x817 = -191;
	int16_t x818 = INT16_MIN;
	static volatile int64_t x819 = INT64_MIN;
	volatile int32_t x820 = INT32_MIN;
	int32_t t192 = -189;

    t192 = ((x817==(x818==x819))/x820);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x821 = 1U;
	int32_t x823 = 5738364;
	static int64_t x824 = INT64_MIN;
	int64_t t193 = -15984117244LL;

    t193 = ((x821==(x822==x823))/x824);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x825 = 0;
	int16_t x826 = -1;
	int64_t x827 = -1LL;
	static volatile int32_t t194 = 11029;

    t194 = ((x825==(x826==x827))/x828);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x831 = INT8_MIN;
	int16_t x832 = -1;
	int32_t t195 = 7726;

    t195 = ((x829==(x830==x831))/x832);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x838 = -1;
	int32_t x839 = INT32_MIN;
	volatile uint32_t x840 = 54743732U;
	static uint32_t t196 = 142U;

    t196 = ((x837==(x838==x839))/x840);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x841 = -1;
	uint16_t x842 = 396U;
	int8_t x843 = 3;
	uint32_t t197 = 14U;

    t197 = ((x841==(x842==x843))/x844);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint16_t x846 = 2858U;
	static int32_t x847 = INT32_MIN;
	uint64_t x848 = UINT64_MAX;
	volatile uint64_t t198 = 65089983881005LLU;

    t198 = ((x845==(x846==x847))/x848);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x849 = 3107608933010006LL;
	static volatile int8_t x850 = INT8_MIN;
	uint32_t x851 = 2750U;
	int64_t x852 = INT64_MIN;
	volatile int64_t t199 = -10LL;

    t199 = ((x849==(x850==x851))/x852);

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

