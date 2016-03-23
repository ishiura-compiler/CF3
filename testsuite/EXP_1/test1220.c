
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

static int8_t x1 = INT8_MIN;
int32_t x2 = INT32_MIN;
int8_t x4 = INT8_MAX;
uint32_t x13 = UINT32_MAX;
uint64_t x14 = 119247665625639785LLU;
volatile int64_t x25 = INT64_MIN;
uint16_t x31 = 2U;
uint64_t x39 = 9LLU;
static volatile int64_t x40 = INT64_MIN;
int32_t x43 = INT32_MAX;
int32_t t10 = -6;
int64_t x50 = 1LL;
int16_t x52 = INT16_MIN;
static uint64_t x55 = UINT64_MAX;
int8_t x74 = INT8_MIN;
static int8_t x76 = INT8_MAX;
uint64_t x78 = UINT64_MAX;
static volatile uint64_t x80 = UINT64_MAX;
static volatile uint16_t x86 = UINT16_MAX;
uint32_t x89 = UINT32_MAX;
int16_t x96 = INT16_MIN;
uint64_t x102 = 118LLU;
int8_t x107 = 18;
uint32_t x108 = 48955U;
int32_t t25 = -26162103;
static int8_t x119 = 26;
volatile int32_t x122 = -1;
static uint16_t x123 = 52U;
uint64_t t27 = UINT64_MAX;
static int32_t x125 = -1;
static uint8_t x133 = 63U;
int64_t x141 = INT64_MAX;
int16_t x142 = INT16_MIN;
uint32_t x143 = 4260048U;
static uint8_t x150 = 8U;
static uint64_t x152 = UINT64_MAX;
volatile uint64_t t34 = 2739455154LLU;
static uint32_t x162 = UINT32_MAX;
int32_t x164 = 562426789;
int32_t x165 = -1;
volatile int64_t t38 = -980LL;
static volatile uint16_t x171 = 64U;
int32_t x185 = INT32_MAX;
volatile uint32_t t42 = 2U;
int32_t x199 = INT32_MIN;
uint64_t x200 = 916LLU;
volatile uint64_t x204 = 140145258591181LLU;
uint8_t x208 = UINT8_MAX;
volatile uint64_t t47 = 6LLU;
int64_t x211 = -1LL;
static int16_t x213 = 1632;
static int16_t x216 = INT16_MAX;
int32_t t50 = 102812;
int64_t x225 = -1LL;
volatile uint64_t x227 = 288LLU;
uint64_t t52 = 32721LLU;
volatile int32_t t53 = -12;
volatile int8_t x236 = 7;
static int64_t x248 = INT64_MAX;
int16_t x249 = -2;
int8_t x258 = INT8_MAX;
volatile int64_t t59 = -5746883LL;
uint16_t x273 = 57U;
static volatile uint64_t x284 = UINT64_MAX;
static volatile uint64_t t64 = 0LLU;
uint16_t x301 = UINT16_MAX;
int16_t x303 = INT16_MAX;
int32_t t69 = -63501;
int16_t x305 = -1;
uint16_t x309 = 677U;
volatile int64_t x325 = 54432332052180LL;
volatile uint16_t x337 = UINT16_MAX;
volatile int16_t x338 = INT16_MIN;
volatile uint32_t x346 = 593U;
uint32_t x347 = 444362U;
volatile int32_t t80 = 814;
uint16_t x354 = 419U;
uint32_t x364 = 862U;
int64_t x365 = INT64_MAX;
int8_t x366 = INT8_MAX;
volatile int16_t x370 = INT16_MIN;
static volatile int8_t x373 = INT8_MAX;
static int64_t x383 = INT64_MIN;
uint16_t x386 = 3069U;
int64_t x387 = 56LL;
int8_t x388 = INT8_MAX;
int64_t t90 = INT64_MAX;
volatile uint32_t t91 = 94335U;
static uint8_t x402 = 0U;
int32_t t93 = -29038763;
static uint8_t x407 = 11U;
volatile int64_t x409 = INT64_MIN;
int16_t x414 = INT16_MIN;
int8_t x420 = INT8_MIN;
int16_t x426 = 1;
int32_t x428 = INT32_MAX;
int64_t x431 = -1LL;
volatile int32_t x434 = -1467;
static int32_t x437 = INT32_MIN;
int8_t x438 = INT8_MIN;
uint16_t x440 = UINT16_MAX;
volatile int8_t x442 = 3;
volatile int8_t x453 = INT8_MAX;
uint16_t x472 = 17U;
int8_t x481 = INT8_MIN;
int64_t x482 = INT64_MIN;
int8_t x496 = INT8_MIN;
uint64_t x507 = 17879952057069219LLU;
int32_t x508 = 1;
uint64_t t119 = UINT64_MAX;
int32_t x512 = 752625250;
uint32_t x513 = UINT32_MAX;
volatile int32_t x515 = INT32_MIN;
volatile int64_t t121 = 113066002LL;
volatile int64_t x519 = INT64_MAX;
int16_t x521 = INT16_MAX;
int32_t x526 = -2;
int32_t x532 = 217;
int32_t t125 = 2863;
int64_t x551 = INT64_MAX;
uint64_t x562 = 9LLU;
int8_t x564 = 6;
int32_t x566 = -3;
uint32_t x569 = 416098495U;
volatile uint16_t x578 = 29130U;
int32_t t136 = -4125305;
static int8_t x598 = INT8_MAX;
volatile uint64_t t142 = 12LLU;
uint8_t x624 = 50U;
uint64_t t145 = 5916107924617777308LLU;
uint64_t x630 = UINT64_MAX;
uint64_t x637 = 8LLU;
int16_t x638 = INT16_MAX;
static uint8_t x640 = 3U;
int8_t x650 = -1;
static int16_t x656 = 222;
static uint16_t x659 = 19071U;
int16_t x660 = INT16_MAX;
static int16_t x666 = 164;
static uint32_t x669 = UINT32_MAX;
volatile int32_t x670 = 14053856;
static volatile int16_t x671 = -1;
int32_t x672 = INT32_MAX;
static int32_t x687 = -1;
volatile int16_t x689 = INT16_MIN;
uint32_t t160 = 2212U;
static uint16_t x704 = 62U;
int32_t t163 = 1920;
uint8_t x710 = 7U;
volatile uint64_t t164 = 803013613423LLU;
int64_t x715 = -1LL;
static int32_t x718 = -1;
int32_t t166 = 6777;
static int8_t x721 = -3;
int8_t x750 = 0;
static int64_t t175 = 547448416338862LL;
static int8_t x762 = -1;
volatile int64_t x767 = INT64_MIN;
volatile uint64_t t179 = 7693290512LLU;
static volatile int64_t t180 = -17258932614658LL;
int8_t x790 = INT8_MAX;
int64_t x794 = -219057964362004LL;
int32_t x797 = INT32_MIN;
int16_t x801 = -7;
int8_t x805 = -1;
int64_t x810 = INT64_MIN;
int16_t x824 = 1;
static int32_t x835 = -1;
uint64_t x840 = 53555965LLU;
volatile int32_t x844 = INT32_MAX;
int16_t x847 = INT16_MIN;
uint64_t x849 = 14164443171278LLU;
static volatile int32_t t198 = -3286438;
uint8_t x859 = 12U;


void f0(void) {
    	int16_t x3 = -1;
	int32_t t0 = 6;

    t0 = (((x1!=x2)/x3)-x4);

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	int32_t x6 = -4981603;
	uint8_t x7 = 1U;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -2650928;

    t1 = (((x5!=x6)/x7)-x8);

    if (t1 != 129) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int32_t x10 = INT32_MAX;
	volatile int64_t x11 = INT64_MIN;
	static volatile int64_t x12 = -1LL;
	int64_t t2 = 944880413LL;

    t2 = (((x9!=x10)/x11)-x12);

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x15 = INT64_MIN;
	static uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 538386093288598871LLU;

    t3 = (((x13!=x14)/x15)-x16);

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	int16_t x22 = -1;
	int64_t x23 = -1LL;
	int16_t x24 = 1;
	int64_t t4 = -1817LL;

    t4 = (((x21!=x22)/x23)-x24);

    if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x26 = -1186;
	int32_t x27 = INT32_MIN;
	uint16_t x28 = UINT16_MAX;
	int32_t t5 = -151895;

    t5 = (((x25!=x26)/x27)-x28);

    if (t5 != -65535) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x29 = 64U;
	int64_t x30 = INT64_MAX;
	uint16_t x32 = 5U;
	static volatile int32_t t6 = -376881071;

    t6 = (((x29!=x30)/x31)-x32);

    if (t6 != -5) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x33 = UINT32_MAX;
	volatile int16_t x34 = INT16_MAX;
	volatile int8_t x35 = INT8_MAX;
	static uint32_t x36 = UINT32_MAX;
	uint32_t t7 = 5691788U;

    t7 = (((x33!=x34)/x35)-x36);

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = INT8_MIN;
	int16_t x38 = -1;
	volatile uint64_t t8 = 3306760428402254LLU;

    t8 = (((x37!=x38)/x39)-x40);

    if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MAX;
	volatile int64_t x42 = INT64_MAX;
	static uint16_t x44 = 7U;
	static int32_t t9 = 852666;

    t9 = (((x41!=x42)/x43)-x44);

    if (t9 != -7) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 0U;
	static uint32_t x46 = 76U;
	int32_t x47 = 770308;
	int8_t x48 = 20;

    t10 = (((x45!=x46)/x47)-x48);

    if (t10 != -20) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x49 = 0U;
	volatile int16_t x51 = INT16_MIN;
	volatile int32_t t11 = 419;

    t11 = (((x49!=x50)/x51)-x52);

    if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MIN;
	static uint64_t x56 = 569963LLU;
	uint64_t t12 = 5832057LLU;

    t12 = (((x53!=x54)/x55)-x56);

    if (t12 != 18446744073708981653LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x57 = UINT32_MAX;
	static int64_t x58 = -1LL;
	uint8_t x59 = 76U;
	int8_t x60 = 0;
	volatile int32_t t13 = 52096337;

    t13 = (((x57!=x58)/x59)-x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MAX;
	int64_t x62 = INT64_MAX;
	static int8_t x63 = INT8_MIN;
	uint16_t x64 = UINT16_MAX;
	int32_t t14 = -1;

    t14 = (((x61!=x62)/x63)-x64);

    if (t14 != -65535) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x65 = -26;
	static int64_t x66 = -2799958LL;
	int32_t x67 = INT32_MIN;
	static volatile int32_t x68 = INT32_MAX;
	static int32_t t15 = -33210325;

    t15 = (((x65!=x66)/x67)-x68);

    if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = 370;
	uint8_t x75 = 2U;
	int32_t t16 = -2;

    t16 = (((x73!=x74)/x75)-x76);

    if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = 1;
	int16_t x79 = -1;
	static volatile uint64_t t17 = 2299849433388LLU;

    t17 = (((x77!=x78)/x79)-x80);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = -1;
	uint32_t x82 = 0U;
	volatile int8_t x83 = INT8_MAX;
	int8_t x84 = -1;
	int32_t t18 = 218240670;

    t18 = (((x81!=x82)/x83)-x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = INT16_MIN;
	static uint16_t x87 = 45U;
	uint8_t x88 = 12U;
	volatile int32_t t19 = 0;

    t19 = (((x85!=x86)/x87)-x88);

    if (t19 != -12) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x90 = UINT32_MAX;
	int32_t x91 = -1;
	int8_t x92 = 1;
	volatile int32_t t20 = -498018451;

    t20 = (((x89!=x90)/x91)-x92);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x93 = UINT64_MAX;
	static volatile int32_t x94 = INT32_MAX;
	int8_t x95 = -1;
	volatile int32_t t21 = 719;

    t21 = (((x93!=x94)/x95)-x96);

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x97 = 1466LL;
	int64_t x98 = INT64_MAX;
	int32_t x99 = -29;
	volatile uint8_t x100 = UINT8_MAX;
	int32_t t22 = -8195;

    t22 = (((x97!=x98)/x99)-x100);

    if (t22 != -255) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = -1;
	int64_t x103 = INT64_MIN;
	int8_t x104 = -1;
	static int64_t t23 = -129526104481052LL;

    t23 = (((x101!=x102)/x103)-x104);

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x105 = -1;
	int32_t x106 = INT32_MAX;
	volatile uint32_t t24 = 1969052U;

    t24 = (((x105!=x106)/x107)-x108);

    if (t24 != 4294918341U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x113 = 0;
	volatile int64_t x114 = -64621511566240621LL;
	uint8_t x115 = UINT8_MAX;
	volatile int8_t x116 = 23;

    t25 = (((x113!=x114)/x115)-x116);

    if (t25 != -23) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x117 = 7128835648068968095LLU;
	uint32_t x118 = 532780302U;
	int8_t x120 = INT8_MIN;
	static int32_t t26 = 358491;

    t26 = (((x117!=x118)/x119)-x120);

    if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x121 = 50U;
	uint64_t x124 = 1LLU;

    t27 = (((x121!=x122)/x123)-x124);

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x126 = UINT64_MAX;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = -8798725;
	uint64_t t28 = 17LLU;

    t28 = (((x125!=x126)/x127)-x128);

    if (t28 != 8798725LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x129 = 91;
	uint32_t x130 = 800122898U;
	int16_t x131 = INT16_MIN;
	uint32_t x132 = 0U;
	volatile uint32_t t29 = 7285516U;

    t29 = (((x129!=x130)/x131)-x132);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x134 = INT64_MIN;
	volatile uint16_t x135 = UINT16_MAX;
	volatile uint64_t x136 = UINT64_MAX;
	volatile uint64_t t30 = 282LLU;

    t30 = (((x133!=x134)/x135)-x136);

    if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = 3;
	uint32_t x138 = 9688860U;
	uint32_t x139 = 38977508U;
	volatile uint8_t x140 = 0U;
	static volatile uint32_t t31 = 1268U;

    t31 = (((x137!=x138)/x139)-x140);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x144 = 0;
	uint32_t t32 = 401483U;

    t32 = (((x141!=x142)/x143)-x144);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x145 = 4876335LLU;
	int64_t x146 = INT64_MIN;
	int16_t x147 = 347;
	static int64_t x148 = -114LL;
	static int64_t t33 = 6LL;

    t33 = (((x145!=x146)/x147)-x148);

    if (t33 != 114LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = INT32_MIN;
	int16_t x151 = -12427;

    t34 = (((x149!=x150)/x151)-x152);

    if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x153 = UINT8_MAX;
	int64_t x154 = -1LL;
	int32_t x155 = -1260;
	static uint32_t x156 = UINT32_MAX;
	uint32_t t35 = 57665U;

    t35 = (((x153!=x154)/x155)-x156);

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x157 = INT32_MIN;
	volatile int32_t x158 = INT32_MIN;
	int16_t x159 = -26;
	int8_t x160 = -1;
	int32_t t36 = 7141847;

    t36 = (((x157!=x158)/x159)-x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x161 = 365U;
	static volatile uint32_t x163 = UINT32_MAX;
	volatile uint32_t t37 = 507U;

    t37 = (((x161!=x162)/x163)-x164);

    if (t37 != 3732540507U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x166 = -1;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = -1LL;

    t38 = (((x165!=x166)/x167)-x168);

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x169 = INT16_MIN;
	static uint64_t x170 = 14959855LLU;
	uint16_t x172 = 128U;
	volatile int32_t t39 = -4;

    t39 = (((x169!=x170)/x171)-x172);

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = -1;
	int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MIN;
	int16_t x176 = -1;
	volatile int64_t t40 = -534445644646170386LL;

    t40 = (((x173!=x174)/x175)-x176);

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x181 = UINT64_MAX;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = -1;
	static uint64_t x184 = 28222935807272LLU;
	volatile uint64_t t41 = 4931762137171579506LLU;

    t41 = (((x181!=x182)/x183)-x184);

    if (t41 != 18446715850773744344LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x186 = 135U;
	int32_t x187 = 323;
	uint32_t x188 = UINT32_MAX;

    t42 = (((x185!=x186)/x187)-x188);

    if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x189 = -2;
	uint16_t x190 = 9U;
	volatile int16_t x191 = INT16_MIN;
	int64_t x192 = -55431537438090672LL;
	static int64_t t43 = -78LL;

    t43 = (((x189!=x190)/x191)-x192);

    if (t43 != 55431537438090672LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x193 = -1;
	uint16_t x194 = 441U;
	volatile int64_t x195 = INT64_MIN;
	volatile int16_t x196 = -1;
	volatile int64_t t44 = 44516982029LL;

    t44 = (((x193!=x194)/x195)-x196);

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x197 = UINT32_MAX;
	uint16_t x198 = 44U;
	volatile uint64_t t45 = 615363838607327LLU;

    t45 = (((x197!=x198)/x199)-x200);

    if (t45 != 18446744073709550700LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x201 = 6U;
	uint8_t x202 = UINT8_MAX;
	int64_t x203 = INT64_MIN;
	volatile uint64_t t46 = 146986232204863934LLU;

    t46 = (((x201!=x202)/x203)-x204);

    if (t46 != 18446603928450960435LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x205 = INT64_MIN;
	static volatile int8_t x206 = -3;
	volatile uint64_t x207 = 40396LLU;

    t47 = (((x205!=x206)/x207)-x208);

    if (t47 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x209 = -13344;
	int8_t x210 = INT8_MAX;
	int32_t x212 = INT32_MIN;
	static int64_t t48 = 1858362526LL;

    t48 = (((x209!=x210)/x211)-x212);

    if (t48 != 2147483647LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x214 = INT8_MIN;
	uint16_t x215 = 270U;
	int32_t t49 = 5607276;

    t49 = (((x213!=x214)/x215)-x216);

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x217 = INT64_MIN;
	uint64_t x218 = 63846349074LLU;
	static int16_t x219 = -1;
	static uint8_t x220 = 3U;

    t50 = (((x217!=x218)/x219)-x220);

    if (t50 != -4) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x221 = -1;
	volatile int8_t x222 = INT8_MIN;
	static int32_t x223 = -1;
	int32_t x224 = -1;
	volatile int32_t t51 = 164;

    t51 = (((x221!=x222)/x223)-x224);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x226 = -1LL;
	int16_t x228 = -3401;

    t52 = (((x225!=x226)/x227)-x228);

    if (t52 != 3401LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x229 = 26014068243694LL;
	int8_t x230 = INT8_MIN;
	static volatile int16_t x231 = -3480;
	uint8_t x232 = 87U;

    t53 = (((x229!=x230)/x231)-x232);

    if (t53 != -87) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x233 = -18;
	uint32_t x234 = UINT32_MAX;
	volatile int32_t x235 = INT32_MAX;
	static int32_t t54 = -3740;

    t54 = (((x233!=x234)/x235)-x236);

    if (t54 != -7) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x237 = 1U;
	static int32_t x238 = 154;
	int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MIN;
	volatile int32_t t55 = 1;

    t55 = (((x237!=x238)/x239)-x240);

    if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x241 = UINT64_MAX;
	static volatile uint64_t x242 = 30962034LLU;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = UINT16_MAX;
	int32_t t56 = -3816;

    t56 = (((x241!=x242)/x243)-x244);

    if (t56 != -65535) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x245 = 37871LL;
	static int16_t x246 = INT16_MIN;
	uint32_t x247 = UINT32_MAX;
	static volatile int64_t t57 = 10525080LL;

    t57 = (((x245!=x246)/x247)-x248);

    if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x250 = INT16_MIN;
	volatile int32_t x251 = 2398;
	static uint32_t x252 = UINT32_MAX;
	static volatile uint32_t t58 = 9U;

    t58 = (((x249!=x250)/x251)-x252);

    if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x257 = UINT16_MAX;
	int64_t x259 = INT64_MIN;
	uint32_t x260 = 99U;

    t59 = (((x257!=x258)/x259)-x260);

    if (t59 != -99LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x265 = -1LL;
	uint32_t x266 = UINT32_MAX;
	uint64_t x267 = 202897298104285LLU;
	int64_t x268 = INT64_MIN;
	uint64_t t60 = 1613051862304LLU;

    t60 = (((x265!=x266)/x267)-x268);

    if (t60 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x269 = 7LLU;
	static int8_t x270 = INT8_MIN;
	uint16_t x271 = 1331U;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t61 = 61559790454487LLU;

    t61 = (((x269!=x270)/x271)-x272);

    if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x274 = 121941566969LLU;
	int8_t x275 = -1;
	volatile int32_t x276 = 22;
	static int32_t t62 = 367;

    t62 = (((x273!=x274)/x275)-x276);

    if (t62 != -23) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x277 = 847284108729334489LLU;
	int32_t x278 = -77741131;
	int8_t x279 = -1;
	uint32_t x280 = 58596U;
	uint32_t t63 = 48892208U;

    t63 = (((x277!=x278)/x279)-x280);

    if (t63 != 4294908699U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x281 = -1;
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MAX;

    t64 = (((x281!=x282)/x283)-x284);

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x285 = -51;
	uint8_t x286 = UINT8_MAX;
	static int8_t x287 = INT8_MAX;
	static volatile int16_t x288 = INT16_MIN;
	volatile int32_t t65 = -33;

    t65 = (((x285!=x286)/x287)-x288);

    if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x289 = INT8_MIN;
	static int32_t x290 = INT32_MAX;
	int32_t x291 = -1;
	int64_t x292 = INT64_MIN;
	int64_t t66 = INT64_MAX;

    t66 = (((x289!=x290)/x291)-x292);

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x293 = 54711U;
	int8_t x294 = 7;
	int64_t x295 = -328904282808LL;
	uint64_t x296 = 482731728872548LLU;
	static uint64_t t67 = 11299117125819LLU;

    t67 = (((x293!=x294)/x295)-x296);

    if (t67 != 18446261341980679068LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x297 = INT8_MIN;
	volatile int32_t x298 = -12;
	uint64_t x299 = 283553630252LLU;
	int64_t x300 = INT64_MIN;
	uint64_t t68 = 961089295LLU;

    t68 = (((x297!=x298)/x299)-x300);

    if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x302 = 28459666U;
	volatile uint16_t x304 = 3858U;

    t69 = (((x301!=x302)/x303)-x304);

    if (t69 != -3858) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x306 = INT8_MIN;
	volatile uint8_t x307 = 18U;
	static int8_t x308 = -2;
	int32_t t70 = -15614072;

    t70 = (((x305!=x306)/x307)-x308);

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x310 = -1LL;
	uint64_t x311 = 81394059LLU;
	int32_t x312 = -199844;
	uint64_t t71 = 93197045140LLU;

    t71 = (((x309!=x310)/x311)-x312);

    if (t71 != 199844LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x313 = INT16_MIN;
	int64_t x314 = -1LL;
	uint8_t x315 = 71U;
	static int64_t x316 = -316LL;
	volatile int64_t t72 = -79735LL;

    t72 = (((x313!=x314)/x315)-x316);

    if (t72 != 316LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x317 = 1U;
	int16_t x318 = -1;
	int8_t x319 = -1;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t73 = 263444771;

    t73 = (((x317!=x318)/x319)-x320);

    if (t73 != -256) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x326 = UINT8_MAX;
	int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MAX;
	static volatile int32_t t74 = 71119;

    t74 = (((x325!=x326)/x327)-x328);

    if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x329 = 467LLU;
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MAX;
	static int8_t x332 = INT8_MAX;
	int32_t t75 = -3559647;

    t75 = (((x329!=x330)/x331)-x332);

    if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x333 = 62118U;
	int8_t x334 = INT8_MAX;
	uint64_t x335 = 164487403422864104LLU;
	uint64_t x336 = UINT64_MAX;
	uint64_t t76 = 23799LLU;

    t76 = (((x333!=x334)/x335)-x336);

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x339 = -1;
	volatile int32_t x340 = INT32_MIN;
	volatile int32_t t77 = INT32_MAX;

    t77 = (((x337!=x338)/x339)-x340);

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x341 = -1;
	int64_t x342 = INT64_MIN;
	int16_t x343 = -13955;
	int16_t x344 = 12;
	volatile int32_t t78 = 1875;

    t78 = (((x341!=x342)/x343)-x344);

    if (t78 != -12) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x345 = 1989;
	uint64_t x348 = 4692723875820601153LLU;
	static uint64_t t79 = 49531630287LLU;

    t79 = (((x345!=x346)/x347)-x348);

    if (t79 != 13754020197888950463LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x349 = 1U;
	int8_t x350 = -1;
	int32_t x351 = INT32_MAX;
	static int32_t x352 = 7;

    t80 = (((x349!=x350)/x351)-x352);

    if (t80 != -7) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x353 = 295;
	static int64_t x355 = 6856303811854LL;
	int64_t x356 = -1LL;
	static int64_t t81 = 2506LL;

    t81 = (((x353!=x354)/x355)-x356);

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x357 = 27U;
	volatile uint32_t x358 = 25498U;
	int32_t x359 = INT32_MIN;
	int64_t x360 = 1549995LL;
	int64_t t82 = 255529LL;

    t82 = (((x357!=x358)/x359)-x360);

    if (t82 != -1549995LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x361 = -24437;
	static int64_t x362 = INT64_MIN;
	uint8_t x363 = 92U;
	uint32_t t83 = 481U;

    t83 = (((x361!=x362)/x363)-x364);

    if (t83 != 4294966434U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x367 = -31;
	int16_t x368 = INT16_MIN;
	int32_t t84 = -614403;

    t84 = (((x365!=x366)/x367)-x368);

    if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x369 = 124U;
	uint32_t x371 = 2623U;
	int32_t x372 = INT32_MIN;
	volatile uint32_t t85 = 719907U;

    t85 = (((x369!=x370)/x371)-x372);

    if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x374 = 164U;
	volatile int16_t x375 = INT16_MIN;
	uint64_t x376 = 4818135213501LLU;
	volatile uint64_t t86 = 5507LLU;

    t86 = (((x373!=x374)/x375)-x376);

    if (t86 != 18446739255574338115LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x377 = 13738U;
	static volatile int32_t x378 = INT32_MAX;
	int8_t x379 = INT8_MAX;
	uint16_t x380 = UINT16_MAX;
	int32_t t87 = -31;

    t87 = (((x377!=x378)/x379)-x380);

    if (t87 != -65535) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x381 = UINT64_MAX;
	uint8_t x382 = 1U;
	int8_t x384 = INT8_MIN;
	int64_t t88 = 48LL;

    t88 = (((x381!=x382)/x383)-x384);

    if (t88 != 128LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x385 = INT64_MAX;
	int64_t t89 = -356968491LL;

    t89 = (((x385!=x386)/x387)-x388);

    if (t89 != -127LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x389 = 0;
	volatile uint16_t x390 = 402U;
	int64_t x391 = -1LL;
	int64_t x392 = INT64_MIN;

    t90 = (((x389!=x390)/x391)-x392);

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint64_t x393 = 187LLU;
	uint64_t x394 = UINT64_MAX;
	static uint32_t x395 = 16110938U;
	volatile int8_t x396 = -1;

    t91 = (((x393!=x394)/x395)-x396);

    if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x397 = -1;
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = -1664;
	int32_t x400 = -1;
	int32_t t92 = -24311;

    t92 = (((x397!=x398)/x399)-x400);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x401 = -1;
	volatile uint8_t x403 = 26U;
	static int8_t x404 = INT8_MIN;

    t93 = (((x401!=x402)/x403)-x404);

    if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x405 = -175344675;
	int8_t x406 = 0;
	int8_t x408 = 2;
	volatile int32_t t94 = 7;

    t94 = (((x405!=x406)/x407)-x408);

    if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x410 = INT8_MIN;
	uint8_t x411 = 1U;
	volatile uint32_t x412 = 1139U;
	volatile uint32_t t95 = 48447957U;

    t95 = (((x409!=x410)/x411)-x412);

    if (t95 != 4294966158U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x413 = INT64_MIN;
	static int8_t x415 = INT8_MIN;
	static int16_t x416 = -3;
	int32_t t96 = 17;

    t96 = (((x413!=x414)/x415)-x416);

    if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x417 = 2238922929160470LL;
	volatile uint64_t x418 = 926845LLU;
	volatile int32_t x419 = -1696817;
	int32_t t97 = 59602;

    t97 = (((x417!=x418)/x419)-x420);

    if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x421 = 0;
	int16_t x422 = -1808;
	static int16_t x423 = INT16_MAX;
	int32_t x424 = 56224;
	volatile int32_t t98 = -107312674;

    t98 = (((x421!=x422)/x423)-x424);

    if (t98 != -56224) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x425 = -2280853;
	static int32_t x427 = -1;
	volatile int32_t t99 = INT32_MIN;

    t99 = (((x425!=x426)/x427)-x428);

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x429 = INT8_MAX;
	uint32_t x430 = UINT32_MAX;
	uint64_t x432 = UINT64_MAX;
	static volatile uint64_t t100 = 273907665723144822LLU;

    t100 = (((x429!=x430)/x431)-x432);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x433 = 18U;
	int32_t x435 = -2416369;
	volatile int64_t x436 = -1885907969911332221LL;
	int64_t t101 = 74068709568090322LL;

    t101 = (((x433!=x434)/x435)-x436);

    if (t101 != 1885907969911332221LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x439 = INT16_MIN;
	int32_t t102 = 1816428;

    t102 = (((x437!=x438)/x439)-x440);

    if (t102 != -65535) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x441 = -13;
	uint64_t x443 = 466878127541LLU;
	uint8_t x444 = UINT8_MAX;
	volatile uint64_t t103 = 11LLU;

    t103 = (((x441!=x442)/x443)-x444);

    if (t103 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x445 = INT32_MIN;
	uint16_t x446 = 3U;
	static volatile int8_t x447 = INT8_MIN;
	volatile int16_t x448 = 0;
	volatile int32_t t104 = -15;

    t104 = (((x445!=x446)/x447)-x448);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x449 = 0U;
	int16_t x450 = INT16_MIN;
	volatile uint32_t x451 = 3U;
	uint32_t x452 = UINT32_MAX;
	static uint32_t t105 = 471515U;

    t105 = (((x449!=x450)/x451)-x452);

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x454 = 1;
	static uint32_t x455 = 4579357U;
	static int32_t x456 = -1;
	volatile uint32_t t106 = 819231731U;

    t106 = (((x453!=x454)/x455)-x456);

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x457 = 22U;
	int32_t x458 = INT32_MIN;
	static volatile int16_t x459 = INT16_MAX;
	static int16_t x460 = INT16_MIN;
	volatile int32_t t107 = -214400;

    t107 = (((x457!=x458)/x459)-x460);

    if (t107 != 32768) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x461 = UINT64_MAX;
	volatile int64_t x462 = -1LL;
	int32_t x463 = -1;
	static volatile uint16_t x464 = 39U;
	int32_t t108 = -133868;

    t108 = (((x461!=x462)/x463)-x464);

    if (t108 != -39) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x465 = 6U;
	int64_t x466 = 6740LL;
	volatile uint16_t x467 = UINT16_MAX;
	static uint64_t x468 = UINT64_MAX;
	uint64_t t109 = 121683LLU;

    t109 = (((x465!=x466)/x467)-x468);

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x469 = UINT64_MAX;
	uint32_t x470 = 10425U;
	int8_t x471 = 10;
	volatile int32_t t110 = 20720;

    t110 = (((x469!=x470)/x471)-x472);

    if (t110 != -17) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x473 = 5418;
	int64_t x474 = INT64_MAX;
	volatile int64_t x475 = 9257717LL;
	uint8_t x476 = UINT8_MAX;
	int64_t t111 = 55LL;

    t111 = (((x473!=x474)/x475)-x476);

    if (t111 != -255LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x477 = INT64_MAX;
	int64_t x478 = -1LL;
	static uint8_t x479 = 5U;
	uint8_t x480 = 4U;
	static volatile int32_t t112 = 4022;

    t112 = (((x477!=x478)/x479)-x480);

    if (t112 != -4) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x483 = -31765;
	int8_t x484 = -1;
	int32_t t113 = -3;

    t113 = (((x481!=x482)/x483)-x484);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x485 = INT64_MIN;
	int16_t x486 = INT16_MAX;
	int8_t x487 = INT8_MAX;
	static uint16_t x488 = 23018U;
	volatile int32_t t114 = -8165;

    t114 = (((x485!=x486)/x487)-x488);

    if (t114 != -23018) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x489 = INT64_MIN;
	static volatile int32_t x490 = INT32_MAX;
	int64_t x491 = INT64_MAX;
	uint64_t x492 = 574LLU;
	volatile uint64_t t115 = 1027998LLU;

    t115 = (((x489!=x490)/x491)-x492);

    if (t115 != 18446744073709551042LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x493 = 422;
	static int16_t x494 = 1452;
	static int64_t x495 = 4010906603LL;
	volatile int64_t t116 = 1561440068543391067LL;

    t116 = (((x493!=x494)/x495)-x496);

    if (t116 != 128LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x497 = 2426726LL;
	uint16_t x498 = UINT16_MAX;
	int16_t x499 = INT16_MIN;
	int8_t x500 = INT8_MIN;
	volatile int32_t t117 = 1048703;

    t117 = (((x497!=x498)/x499)-x500);

    if (t117 != 128) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x501 = -1;
	int16_t x502 = INT16_MAX;
	int32_t x503 = INT32_MIN;
	uint16_t x504 = UINT16_MAX;
	int32_t t118 = -1022477055;

    t118 = (((x501!=x502)/x503)-x504);

    if (t118 != -65535) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x505 = UINT32_MAX;
	volatile int16_t x506 = INT16_MIN;

    t119 = (((x505!=x506)/x507)-x508);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x509 = INT16_MAX;
	int16_t x510 = 16;
	volatile int32_t x511 = -1;
	volatile int32_t t120 = -9;

    t120 = (((x509!=x510)/x511)-x512);

    if (t120 != -752625251) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x514 = 3U;
	static int64_t x516 = 326983013086201LL;

    t121 = (((x513!=x514)/x515)-x516);

    if (t121 != -326983013086201LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x517 = -1;
	static volatile int64_t x518 = -426211662LL;
	int64_t x520 = INT64_MAX;
	static volatile int64_t t122 = -1137599LL;

    t122 = (((x517!=x518)/x519)-x520);

    if (t122 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x522 = 177;
	int16_t x523 = 22;
	static uint32_t x524 = 422U;
	volatile uint32_t t123 = 1209012862U;

    t123 = (((x521!=x522)/x523)-x524);

    if (t123 != 4294966874U) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x525 = 479880U;
	int16_t x527 = INT16_MIN;
	static int16_t x528 = -1;
	volatile int32_t t124 = -139812230;

    t124 = (((x525!=x526)/x527)-x528);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x529 = INT16_MIN;
	int64_t x530 = INT64_MAX;
	volatile int16_t x531 = -2;

    t125 = (((x529!=x530)/x531)-x532);

    if (t125 != -217) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x533 = INT16_MIN;
	volatile int64_t x534 = -38186514371028620LL;
	static int64_t x535 = INT64_MAX;
	int16_t x536 = -30;
	volatile int64_t t126 = -94713LL;

    t126 = (((x533!=x534)/x535)-x536);

    if (t126 != 30LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x537 = -24148297;
	uint32_t x538 = UINT32_MAX;
	int16_t x539 = INT16_MAX;
	int64_t x540 = -1LL;
	volatile int64_t t127 = 9LL;

    t127 = (((x537!=x538)/x539)-x540);

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x541 = INT16_MIN;
	int32_t x542 = -7;
	static volatile int16_t x543 = INT16_MIN;
	static int16_t x544 = INT16_MIN;
	volatile int32_t t128 = -830;

    t128 = (((x541!=x542)/x543)-x544);

    if (t128 != 32768) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x545 = 3040;
	volatile int64_t x546 = INT64_MAX;
	int64_t x547 = INT64_MIN;
	uint16_t x548 = 4885U;
	volatile int64_t t129 = -806382LL;

    t129 = (((x545!=x546)/x547)-x548);

    if (t129 != -4885LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x549 = INT64_MAX;
	static uint8_t x550 = UINT8_MAX;
	static int16_t x552 = -1;
	volatile int64_t t130 = -1744LL;

    t130 = (((x549!=x550)/x551)-x552);

    if (t130 != 1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x553 = -39;
	int16_t x554 = INT16_MIN;
	volatile uint16_t x555 = 1U;
	volatile int8_t x556 = 14;
	volatile int32_t t131 = -12546;

    t131 = (((x553!=x554)/x555)-x556);

    if (t131 != -13) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x561 = UINT8_MAX;
	volatile int16_t x563 = -1;
	volatile int32_t t132 = -62866753;

    t132 = (((x561!=x562)/x563)-x564);

    if (t132 != -7) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x565 = INT16_MAX;
	static int8_t x567 = -1;
	static uint32_t x568 = 4992920U;
	static uint32_t t133 = 52U;

    t133 = (((x565!=x566)/x567)-x568);

    if (t133 != 4289974375U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x570 = INT8_MIN;
	int64_t x571 = INT64_MIN;
	int32_t x572 = INT32_MAX;
	volatile int64_t t134 = -18260470303216149LL;

    t134 = (((x569!=x570)/x571)-x572);

    if (t134 != -2147483647LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x577 = UINT32_MAX;
	uint64_t x579 = UINT64_MAX;
	static int32_t x580 = INT32_MIN;
	volatile uint64_t t135 = 392828583588677296LLU;

    t135 = (((x577!=x578)/x579)-x580);

    if (t135 != 2147483648LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x585 = INT16_MIN;
	volatile int8_t x586 = -45;
	uint16_t x587 = UINT16_MAX;
	static int16_t x588 = 329;

    t136 = (((x585!=x586)/x587)-x588);

    if (t136 != -329) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x589 = 4U;
	int32_t x590 = 43121;
	static int64_t x591 = 82560241544285LL;
	uint32_t x592 = UINT32_MAX;
	volatile int64_t t137 = -39161LL;

    t137 = (((x589!=x590)/x591)-x592);

    if (t137 != -4294967295LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x593 = INT32_MIN;
	volatile uint64_t x594 = 17LLU;
	int32_t x595 = -1;
	int8_t x596 = INT8_MIN;
	volatile int32_t t138 = -222432911;

    t138 = (((x593!=x594)/x595)-x596);

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x597 = 1669533;
	static volatile int8_t x599 = INT8_MIN;
	int8_t x600 = 14;
	int32_t t139 = -154;

    t139 = (((x597!=x598)/x599)-x600);

    if (t139 != -14) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x601 = UINT8_MAX;
	uint8_t x602 = 29U;
	static uint32_t x603 = UINT32_MAX;
	int8_t x604 = -1;
	uint32_t t140 = 3733U;

    t140 = (((x601!=x602)/x603)-x604);

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x605 = UINT32_MAX;
	int64_t x606 = INT64_MIN;
	int8_t x607 = INT8_MIN;
	static int16_t x608 = -1;
	static volatile int32_t t141 = -2482;

    t141 = (((x605!=x606)/x607)-x608);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x609 = 1U;
	int16_t x610 = -122;
	uint64_t x611 = UINT64_MAX;
	int64_t x612 = -1LL;

    t142 = (((x609!=x610)/x611)-x612);

    if (t142 != 1LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x613 = -9;
	int64_t x614 = INT64_MAX;
	int8_t x615 = INT8_MIN;
	static uint32_t x616 = 15197U;
	uint32_t t143 = 41634U;

    t143 = (((x613!=x614)/x615)-x616);

    if (t143 != 4294952099U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x617 = 1;
	uint16_t x618 = 446U;
	static volatile int8_t x619 = INT8_MIN;
	uint32_t x620 = UINT32_MAX;
	static uint32_t t144 = 2U;

    t144 = (((x617!=x618)/x619)-x620);

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x621 = INT8_MAX;
	uint64_t x622 = UINT64_MAX;
	uint64_t x623 = 5LLU;

    t145 = (((x621!=x622)/x623)-x624);

    if (t145 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x629 = UINT32_MAX;
	uint16_t x631 = 11729U;
	volatile int64_t x632 = -2649777283LL;
	int64_t t146 = -17284523235346270LL;

    t146 = (((x629!=x630)/x631)-x632);

    if (t146 != 2649777283LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x639 = 15U;
	int32_t t147 = -456;

    t147 = (((x637!=x638)/x639)-x640);

    if (t147 != -3) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x645 = UINT8_MAX;
	int64_t x646 = INT64_MIN;
	volatile int16_t x647 = INT16_MAX;
	int32_t x648 = -1;
	static int32_t t148 = 20;

    t148 = (((x645!=x646)/x647)-x648);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x649 = INT32_MIN;
	uint8_t x651 = 21U;
	int16_t x652 = INT16_MIN;
	volatile int32_t t149 = 41684679;

    t149 = (((x649!=x650)/x651)-x652);

    if (t149 != 32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x653 = INT8_MAX;
	int16_t x654 = -4154;
	static uint64_t x655 = UINT64_MAX;
	volatile uint64_t t150 = 6881143139LLU;

    t150 = (((x653!=x654)/x655)-x656);

    if (t150 != 18446744073709551394LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x657 = 3;
	int64_t x658 = 82709565854858LL;
	volatile int32_t t151 = -1;

    t151 = (((x657!=x658)/x659)-x660);

    if (t151 != -32767) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x661 = UINT64_MAX;
	int64_t x662 = INT64_MAX;
	uint64_t x663 = 480LLU;
	int16_t x664 = -1;
	static uint64_t t152 = 6352508619207830579LLU;

    t152 = (((x661!=x662)/x663)-x664);

    if (t152 != 1LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x665 = 51;
	uint8_t x667 = UINT8_MAX;
	int16_t x668 = -1;
	int32_t t153 = -417371;

    t153 = (((x665!=x666)/x667)-x668);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t t154 = INT32_MIN;

    t154 = (((x669!=x670)/x671)-x672);

    if (t154 != INT32_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x673 = INT8_MIN;
	static uint64_t x674 = UINT64_MAX;
	volatile int16_t x675 = INT16_MIN;
	volatile int32_t x676 = 29311;
	volatile int32_t t155 = -24;

    t155 = (((x673!=x674)/x675)-x676);

    if (t155 != -29311) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x677 = INT64_MAX;
	uint64_t x678 = UINT64_MAX;
	int64_t x679 = 158311479464663LL;
	int32_t x680 = INT32_MAX;
	static int64_t t156 = -1503769LL;

    t156 = (((x677!=x678)/x679)-x680);

    if (t156 != -2147483647LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x681 = UINT64_MAX;
	uint64_t x682 = UINT64_MAX;
	int32_t x683 = INT32_MIN;
	int32_t x684 = 454166;
	static volatile int32_t t157 = 42616342;

    t157 = (((x681!=x682)/x683)-x684);

    if (t157 != -454166) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x685 = INT32_MIN;
	int64_t x686 = -403LL;
	static volatile int64_t x688 = -1LL;
	int64_t t158 = 663779109860846190LL;

    t158 = (((x685!=x686)/x687)-x688);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x690 = INT16_MIN;
	int64_t x691 = INT64_MIN;
	uint64_t x692 = 7472158LLU;
	volatile uint64_t t159 = 15337683LLU;

    t159 = (((x689!=x690)/x691)-x692);

    if (t159 != 18446744073702079458LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x693 = INT16_MIN;
	static uint16_t x694 = UINT16_MAX;
	int32_t x695 = -364454;
	static uint32_t x696 = UINT32_MAX;

    t160 = (((x693!=x694)/x695)-x696);

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x697 = INT64_MIN;
	uint32_t x698 = 721U;
	static int64_t x699 = -95692867LL;
	int8_t x700 = INT8_MIN;
	static int64_t t161 = -2397753LL;

    t161 = (((x697!=x698)/x699)-x700);

    if (t161 != 128LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x701 = INT16_MIN;
	uint8_t x702 = 0U;
	uint8_t x703 = UINT8_MAX;
	volatile int32_t t162 = -5122;

    t162 = (((x701!=x702)/x703)-x704);

    if (t162 != -62) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x705 = 109U;
	static uint64_t x706 = 263LLU;
	uint16_t x707 = 84U;
	int8_t x708 = 6;

    t163 = (((x705!=x706)/x707)-x708);

    if (t163 != -6) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x709 = INT8_MIN;
	uint64_t x711 = UINT64_MAX;
	int8_t x712 = INT8_MAX;

    t164 = (((x709!=x710)/x711)-x712);

    if (t164 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x713 = 86U;
	static int64_t x714 = 414969346505944715LL;
	int16_t x716 = -5;
	int64_t t165 = -14202372852LL;

    t165 = (((x713!=x714)/x715)-x716);

    if (t165 != 4LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x717 = INT16_MIN;
	volatile int32_t x719 = INT32_MIN;
	int16_t x720 = -1;

    t166 = (((x717!=x718)/x719)-x720);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x722 = 13U;
	static volatile uint8_t x723 = UINT8_MAX;
	volatile int16_t x724 = -1;
	volatile int32_t t167 = 137439920;

    t167 = (((x721!=x722)/x723)-x724);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x729 = INT16_MIN;
	volatile uint16_t x730 = 15610U;
	int16_t x731 = -52;
	uint64_t x732 = 83011LLU;
	static uint64_t t168 = 311449LLU;

    t168 = (((x729!=x730)/x731)-x732);

    if (t168 != 18446744073709468605LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x733 = -6;
	volatile uint16_t x734 = 1618U;
	uint32_t x735 = 751877417U;
	static int8_t x736 = -37;
	static uint32_t t169 = 29U;

    t169 = (((x733!=x734)/x735)-x736);

    if (t169 != 37U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x737 = UINT32_MAX;
	uint8_t x738 = 12U;
	static int16_t x739 = -1;
	int64_t x740 = -1LL;
	volatile int64_t t170 = 643LL;

    t170 = (((x737!=x738)/x739)-x740);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x741 = -1;
	static int8_t x742 = INT8_MIN;
	uint64_t x743 = UINT64_MAX;
	int8_t x744 = 13;
	static volatile uint64_t t171 = 4LLU;

    t171 = (((x741!=x742)/x743)-x744);

    if (t171 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x745 = INT64_MAX;
	uint32_t x746 = 654275U;
	int8_t x747 = INT8_MIN;
	static uint16_t x748 = UINT16_MAX;
	int32_t t172 = -2;

    t172 = (((x745!=x746)/x747)-x748);

    if (t172 != -65535) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x749 = -1;
	int8_t x751 = INT8_MIN;
	static volatile int16_t x752 = INT16_MAX;
	static int32_t t173 = 11117426;

    t173 = (((x749!=x750)/x751)-x752);

    if (t173 != -32767) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x753 = 7901LLU;
	int8_t x754 = -1;
	static int8_t x755 = INT8_MAX;
	int16_t x756 = INT16_MIN;
	int32_t t174 = 8148;

    t174 = (((x753!=x754)/x755)-x756);

    if (t174 != 32768) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x757 = 1U;
	volatile int8_t x758 = 1;
	int8_t x759 = INT8_MIN;
	int64_t x760 = -1LL;

    t175 = (((x757!=x758)/x759)-x760);

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x761 = 121U;
	uint32_t x763 = 4U;
	static uint64_t x764 = 3LLU;
	static volatile uint64_t t176 = 7068221053LLU;

    t176 = (((x761!=x762)/x763)-x764);

    if (t176 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x765 = INT16_MAX;
	static int16_t x766 = 1886;
	int16_t x768 = INT16_MIN;
	volatile int64_t t177 = -24842LL;

    t177 = (((x765!=x766)/x767)-x768);

    if (t177 != 32768LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x769 = INT16_MIN;
	volatile uint64_t x770 = 4233115806409763LLU;
	static uint32_t x771 = 483U;
	uint16_t x772 = 19U;
	static uint32_t t178 = 11U;

    t178 = (((x769!=x770)/x771)-x772);

    if (t178 != 4294967277U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x777 = 10U;
	volatile uint16_t x778 = 11U;
	uint32_t x779 = 367483624U;
	static uint64_t x780 = UINT64_MAX;

    t179 = (((x777!=x778)/x779)-x780);

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x781 = 12U;
	uint8_t x782 = 1U;
	static volatile int64_t x783 = INT64_MIN;
	int8_t x784 = -1;

    t180 = (((x781!=x782)/x783)-x784);

    if (t180 != 1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x785 = 15U;
	int8_t x786 = -1;
	uint32_t x787 = 101757U;
	static uint8_t x788 = UINT8_MAX;
	static volatile uint32_t t181 = 199460865U;

    t181 = (((x785!=x786)/x787)-x788);

    if (t181 != 4294967041U) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x789 = 800U;
	volatile uint8_t x791 = UINT8_MAX;
	volatile uint8_t x792 = 14U;
	volatile int32_t t182 = -2019;

    t182 = (((x789!=x790)/x791)-x792);

    if (t182 != -14) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x793 = -1;
	static uint16_t x795 = UINT16_MAX;
	int16_t x796 = -78;
	volatile int32_t t183 = 33556;

    t183 = (((x793!=x794)/x795)-x796);

    if (t183 != 78) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x798 = 15;
	static uint32_t x799 = 46U;
	int32_t x800 = INT32_MAX;
	volatile uint32_t t184 = 15321U;

    t184 = (((x797!=x798)/x799)-x800);

    if (t184 != 2147483649U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x802 = -1;
	int64_t x803 = INT64_MAX;
	static uint8_t x804 = 27U;
	volatile int64_t t185 = -1645397728915LL;

    t185 = (((x801!=x802)/x803)-x804);

    if (t185 != -27LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x806 = UINT32_MAX;
	int32_t x807 = 340886649;
	int64_t x808 = -1LL;
	int64_t t186 = 968LL;

    t186 = (((x805!=x806)/x807)-x808);

    if (t186 != 1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x809 = INT64_MIN;
	static int32_t x811 = INT32_MIN;
	int64_t x812 = 242340567985250093LL;
	int64_t t187 = -796800382LL;

    t187 = (((x809!=x810)/x811)-x812);

    if (t187 != -242340567985250093LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x813 = INT64_MIN;
	int32_t x814 = INT32_MAX;
	uint64_t x815 = 1384LLU;
	static volatile uint64_t x816 = 3273LLU;
	static volatile uint64_t t188 = 3422645LLU;

    t188 = (((x813!=x814)/x815)-x816);

    if (t188 != 18446744073709548343LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x817 = 10352U;
	int8_t x818 = INT8_MAX;
	uint8_t x819 = UINT8_MAX;
	volatile int16_t x820 = INT16_MIN;
	static int32_t t189 = 0;

    t189 = (((x817!=x818)/x819)-x820);

    if (t189 != 32768) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x821 = INT64_MAX;
	uint8_t x822 = 1U;
	int8_t x823 = -8;
	volatile int32_t t190 = 27899179;

    t190 = (((x821!=x822)/x823)-x824);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x825 = INT64_MIN;
	uint32_t x826 = UINT32_MAX;
	uint16_t x827 = 13U;
	static int32_t x828 = 16390743;
	int32_t t191 = -22126;

    t191 = (((x825!=x826)/x827)-x828);

    if (t191 != -16390743) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x829 = 0;
	int8_t x830 = INT8_MAX;
	int8_t x831 = -1;
	int8_t x832 = -6;
	int32_t t192 = -532520870;

    t192 = (((x829!=x830)/x831)-x832);

    if (t192 != 5) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x833 = INT8_MAX;
	volatile int16_t x834 = INT16_MAX;
	int8_t x836 = INT8_MIN;
	volatile int32_t t193 = -1;

    t193 = (((x833!=x834)/x835)-x836);

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x837 = -5;
	volatile int32_t x838 = -1;
	int8_t x839 = -1;
	static volatile uint64_t t194 = 5LLU;

    t194 = (((x837!=x838)/x839)-x840);

    if (t194 != 18446744073655995650LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x841 = -1;
	uint16_t x842 = 220U;
	int16_t x843 = INT16_MIN;
	int32_t t195 = 221;

    t195 = (((x841!=x842)/x843)-x844);

    if (t195 != -2147483647) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x845 = 79639212476292633LLU;
	uint32_t x846 = 255214903U;
	volatile int8_t x848 = INT8_MIN;
	volatile int32_t t196 = 121435621;

    t196 = (((x845!=x846)/x847)-x848);

    if (t196 != 128) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x850 = -115071385875LL;
	uint16_t x851 = 8398U;
	static uint16_t x852 = 115U;
	volatile int32_t t197 = -96481030;

    t197 = (((x849!=x850)/x851)-x852);

    if (t197 != -115) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x853 = UINT32_MAX;
	int8_t x854 = INT8_MAX;
	uint8_t x855 = UINT8_MAX;
	static int32_t x856 = -294445791;

    t198 = (((x853!=x854)/x855)-x856);

    if (t198 != 294445791) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x857 = 34LLU;
	volatile int64_t x858 = INT64_MAX;
	volatile uint32_t x860 = UINT32_MAX;
	volatile uint32_t t199 = 27U;

    t199 = (((x857!=x858)/x859)-x860);

    if (t199 != 1U) { NG(); } else { ; }
	
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

