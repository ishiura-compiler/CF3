
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

int32_t x1 = INT32_MIN;
static uint8_t x4 = 5U;
uint32_t x11 = 327187U;
int64_t x19 = INT64_MIN;
uint16_t x20 = 6222U;
int16_t x31 = INT16_MAX;
volatile int32_t t8 = -49867857;
int8_t x43 = INT8_MIN;
volatile uint32_t t11 = 312467U;
int8_t x59 = INT8_MIN;
static uint64_t x87 = 444112365839180LLU;
int8_t x93 = INT8_MIN;
static int64_t x100 = INT64_MAX;
static volatile int64_t t20 = 7151LL;
int16_t x123 = INT16_MAX;
static int16_t x126 = INT16_MIN;
int64_t x130 = -1LL;
volatile uint32_t x131 = UINT32_MAX;
int32_t t25 = -307;
static int8_t x134 = -21;
static int32_t x135 = -1;
uint16_t x143 = 56U;
uint16_t x144 = UINT16_MAX;
static uint8_t x151 = 0U;
int32_t t29 = 115324494;
int64_t x156 = 18487305774235LL;
int8_t x158 = INT8_MIN;
static int8_t x168 = INT8_MIN;
int8_t x171 = -1;
int64_t x180 = INT64_MAX;
int16_t x182 = INT16_MIN;
static volatile int32_t t39 = 687646;
int16_t x201 = -688;
volatile int32_t x203 = -15931;
uint32_t x204 = 12173368U;
int64_t x224 = -211415652634875334LL;
volatile int64_t t45 = 45LL;
int8_t x236 = INT8_MAX;
int8_t x243 = INT8_MIN;
int8_t x244 = -1;
int16_t x249 = -1;
int8_t x250 = 6;
volatile int64_t x254 = INT64_MIN;
int64_t x277 = INT64_MIN;
uint32_t x284 = 250078U;
volatile int32_t t58 = -1656904;
int8_t x298 = -12;
uint32_t x317 = 167U;
int32_t t64 = 4231;
uint64_t x328 = UINT64_MAX;
static volatile int16_t x330 = 1762;
int64_t x331 = INT64_MAX;
static volatile int32_t t67 = 13877638;
volatile uint8_t x339 = UINT8_MAX;
static int16_t x354 = INT16_MAX;
int8_t x361 = 0;
volatile int32_t t72 = 5759;
volatile int8_t x382 = -1;
uint8_t x383 = 11U;
int8_t x384 = -6;
int32_t t74 = 6224;
uint16_t x403 = 375U;
int32_t x415 = 1296;
uint16_t x424 = UINT16_MAX;
int64_t x433 = 239281082096LL;
int16_t x434 = -1;
uint16_t x442 = UINT16_MAX;
volatile uint32_t x445 = 1U;
int32_t x455 = INT32_MAX;
static int32_t x466 = INT32_MAX;
static volatile int16_t x471 = INT16_MIN;
int16_t x475 = INT16_MAX;
int32_t x476 = INT32_MAX;
uint8_t x493 = 39U;
int64_t x504 = INT64_MAX;
uint32_t x506 = 45079480U;
volatile int32_t t94 = 169040;
volatile int32_t t97 = -48737410;
volatile int8_t x539 = INT8_MIN;
int16_t x540 = 1;
volatile int64_t x550 = 26246798LL;
uint8_t x553 = 27U;
int32_t t103 = -207645;
static int64_t x571 = INT64_MIN;
int8_t x572 = -1;
volatile int16_t x584 = INT16_MIN;
volatile int32_t x586 = INT32_MAX;
int16_t x590 = INT16_MIN;
int16_t x591 = INT16_MAX;
static volatile int32_t t108 = -988;
int8_t x594 = -1;
static int32_t t109 = -13266;
static uint64_t x603 = 23417104238LLU;
int32_t t113 = -1;
int32_t t116 = 81;
int16_t x634 = INT16_MIN;
static int64_t t118 = -1035447642LL;
static int32_t t119 = 35168;
uint16_t x667 = 122U;
volatile uint64_t t122 = 168361151796494957LLU;
static uint64_t t123 = 3881309567810593329LLU;
int8_t x676 = 0;
int16_t x687 = INT16_MIN;
uint32_t t127 = 27021U;
volatile uint64_t x690 = UINT64_MAX;
static volatile int32_t t128 = 465859;
int16_t x694 = 0;
int64_t x702 = -1LL;
static volatile int16_t x707 = -96;
int16_t x718 = 0;
int16_t x724 = INT16_MAX;
volatile int32_t t136 = -1;
uint16_t x731 = 9054U;
int16_t x739 = 1;
volatile int16_t x755 = INT16_MIN;
int32_t t139 = -1;
static int64_t x758 = -10276743004018LL;
int8_t x759 = -3;
static int64_t x760 = 320LL;
int32_t x767 = INT32_MIN;
uint8_t x769 = 7U;
int16_t x779 = INT16_MIN;
static int8_t x792 = -1;
static int8_t x795 = 6;
int64_t x803 = 1232465526LL;
uint16_t x810 = 11057U;
int32_t t149 = 1;
uint16_t x813 = 2957U;
volatile int32_t x814 = 131;
volatile int16_t x822 = -1;
int16_t x823 = INT16_MIN;
static volatile uint32_t x826 = UINT32_MAX;
int64_t x827 = -61054833LL;
int16_t x833 = 1;
static uint8_t x835 = 3U;
int8_t x836 = INT8_MAX;
static int8_t x837 = 1;
int8_t x839 = INT8_MIN;
int64_t x840 = -131816919658LL;
volatile int8_t x846 = 4;
volatile int32_t t157 = -868802;
static volatile uint64_t x849 = 938LLU;
static int32_t x850 = -1;
volatile uint32_t x852 = 13U;
static int64_t x860 = -1LL;
uint8_t x863 = 14U;
uint32_t x864 = 28411012U;
uint32_t x871 = UINT32_MAX;
volatile uint64_t t163 = 61307995374608426LLU;
static volatile int8_t x893 = -1;
static volatile int32_t x898 = -1;
volatile int64_t x901 = -1LL;
int16_t x920 = INT16_MIN;
volatile int32_t t170 = -404520860;
volatile int64_t x927 = -98027957LL;
uint32_t x930 = UINT32_MAX;
int16_t x932 = 632;
volatile int32_t t173 = -199924;
int64_t x941 = INT64_MAX;
int8_t x943 = -1;
int32_t x944 = 968735;
volatile int8_t x952 = -25;
int64_t x964 = -1LL;
uint64_t x969 = UINT64_MAX;
uint64_t x971 = 649546LLU;
volatile int8_t x972 = INT8_MAX;
volatile int16_t x977 = INT16_MIN;
static int8_t x985 = INT8_MIN;
static volatile int32_t t182 = -12934494;
int16_t x995 = -1;
int32_t x998 = INT32_MAX;
volatile uint32_t x999 = 81U;
volatile uint64_t t185 = 89LLU;
static volatile uint64_t t186 = 61LLU;
int16_t x1010 = INT16_MIN;
int64_t x1011 = -994022285775226887LL;
static volatile int64_t t188 = -1637480826LL;
int16_t x1014 = INT16_MAX;
volatile int32_t t189 = 551;
int16_t x1019 = INT16_MIN;
int32_t t191 = 11965814;
int8_t x1026 = INT8_MAX;
int32_t t192 = -3673562;
static volatile uint32_t x1029 = UINT32_MAX;
int8_t x1036 = INT8_MIN;
static volatile int16_t x1043 = INT16_MIN;
int8_t x1054 = -1;
static volatile int32_t t198 = 28;
int16_t x1063 = -1;


void f0(void) {
    	uint64_t x2 = UINT64_MAX;
	uint32_t x3 = UINT32_MAX;
	int32_t t0 = -592618554;

    t0 = (((x1+x2)!=x3)-x4);

    if (t0 != -4) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MAX;
	uint32_t x7 = 691269589U;
	static int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 269411;

    t1 = (((x5+x6)!=x7)-x8);

    if (t1 != 32769) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 6;
	volatile uint32_t x10 = 117900383U;
	int64_t x12 = INT64_MAX;
	volatile int64_t t2 = -64067LL;

    t2 = (((x9+x10)!=x11)-x12);

    if (t2 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	uint64_t x14 = 23875051791275555LLU;
	int32_t x15 = -3;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 7;

    t3 = (((x13+x14)!=x15)-x16);

    if (t3 != -65534) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	int8_t x18 = 23;
	int32_t t4 = -127;

    t4 = (((x17+x18)!=x19)-x20);

    if (t4 != -6221) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x21 = INT16_MIN;
	volatile int16_t x22 = -1;
	static volatile int64_t x23 = -55032LL;
	static int32_t x24 = 794;
	volatile int32_t t5 = -10894;

    t5 = (((x21+x22)!=x23)-x24);

    if (t5 != -793) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MIN;
	int64_t x30 = -148344302277LL;
	int8_t x32 = INT8_MIN;
	int32_t t6 = -2854692;

    t6 = (((x29+x30)!=x31)-x32);

    if (t6 != 129) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MAX;
	uint16_t x35 = 3312U;
	int8_t x36 = INT8_MAX;
	int32_t t7 = 0;

    t7 = (((x33+x34)!=x35)-x36);

    if (t7 != -126) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 11188898029LLU;
	static volatile int64_t x38 = INT64_MIN;
	uint16_t x39 = 32097U;
	uint8_t x40 = 47U;

    t8 = (((x37+x38)!=x39)-x40);

    if (t8 != -46) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -1;
	static int64_t x42 = INT64_MAX;
	uint32_t x44 = 520U;
	volatile uint32_t t9 = 112291663U;

    t9 = (((x41+x42)!=x43)-x44);

    if (t9 != 4294966777U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MIN;
	volatile uint32_t x46 = 0U;
	static int32_t x47 = -1;
	static volatile int32_t x48 = -1;
	volatile int32_t t10 = 0;

    t10 = (((x45+x46)!=x47)-x48);

    if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MIN;
	static uint8_t x50 = 1U;
	int64_t x51 = 21174849058LL;
	static volatile uint32_t x52 = 7835368U;

    t11 = (((x49+x50)!=x51)-x52);

    if (t11 != 4287131929U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x53 = UINT16_MAX;
	int16_t x54 = 1;
	static int32_t x55 = 4;
	static int8_t x56 = -1;
	volatile int32_t t12 = -156;

    t12 = (((x53+x54)!=x55)-x56);

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x57 = INT32_MIN;
	uint32_t x58 = 48094767U;
	volatile int16_t x60 = -1;
	int32_t t13 = -634;

    t13 = (((x57+x58)!=x59)-x60);

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = -3001;
	uint8_t x62 = 6U;
	int8_t x63 = -1;
	int16_t x64 = 56;
	volatile int32_t t14 = 9145;

    t14 = (((x61+x62)!=x63)-x64);

    if (t14 != -55) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x69 = INT32_MAX;
	int8_t x70 = -1;
	int64_t x71 = -141407445LL;
	volatile int64_t x72 = 11629732339163518LL;
	int64_t t15 = -183584LL;

    t15 = (((x69+x70)!=x71)-x72);

    if (t15 != -11629732339163517LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x81 = 14259491U;
	int8_t x82 = 25;
	uint16_t x83 = 2U;
	uint32_t x84 = UINT32_MAX;
	uint32_t t16 = 9953786U;

    t16 = (((x81+x82)!=x83)-x84);

    if (t16 != 2U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = -1LL;
	volatile uint32_t x86 = 912368U;
	volatile uint32_t x88 = UINT32_MAX;
	uint32_t t17 = 604251173U;

    t17 = (((x85+x86)!=x87)-x88);

    if (t17 != 2U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x89 = UINT64_MAX;
	uint8_t x90 = 1U;
	int8_t x91 = 6;
	volatile uint8_t x92 = UINT8_MAX;
	static volatile int32_t t18 = 27233581;

    t18 = (((x89+x90)!=x91)-x92);

    if (t18 != -254) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x94 = -1LL;
	volatile int16_t x95 = -1;
	int16_t x96 = -1;
	int32_t t19 = 1024528030;

    t19 = (((x93+x94)!=x95)-x96);

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x97 = 12119988509183LLU;
	int8_t x98 = 0;
	int32_t x99 = INT32_MIN;

    t20 = (((x97+x98)!=x99)-x100);

    if (t20 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x101 = -38;
	volatile int8_t x102 = INT8_MIN;
	static volatile int32_t x103 = 107496378;
	static int64_t x104 = -141246553079133LL;
	volatile int64_t t21 = 10589233LL;

    t21 = (((x101+x102)!=x103)-x104);

    if (t21 != 141246553079134LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x113 = -1;
	static uint8_t x114 = 1U;
	int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MAX;
	int32_t t22 = -240770;

    t22 = (((x113+x114)!=x115)-x116);

    if (t22 != -32766) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x121 = UINT64_MAX;
	int16_t x122 = 703;
	int16_t x124 = -1;
	volatile int32_t t23 = -5394;

    t23 = (((x121+x122)!=x123)-x124);

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x125 = 33476U;
	uint64_t x127 = UINT64_MAX;
	static uint8_t x128 = UINT8_MAX;
	int32_t t24 = 167147754;

    t24 = (((x125+x126)!=x127)-x128);

    if (t24 != -254) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x129 = 3553U;
	int16_t x132 = 2552;

    t25 = (((x129+x130)!=x131)-x132);

    if (t25 != -2551) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x133 = -6;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t26 = 41U;

    t26 = (((x133+x134)!=x135)-x136);

    if (t26 != 2U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x137 = 3;
	int32_t x138 = -775;
	static volatile int16_t x139 = INT16_MIN;
	int8_t x140 = INT8_MAX;
	static int32_t t27 = 438;

    t27 = (((x137+x138)!=x139)-x140);

    if (t27 != -126) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x141 = 30U;
	int8_t x142 = INT8_MIN;
	volatile int32_t t28 = 465786;

    t28 = (((x141+x142)!=x143)-x144);

    if (t28 != -65534) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x149 = 77590U;
	int8_t x150 = INT8_MIN;
	static volatile int32_t x152 = -128458847;

    t29 = (((x149+x150)!=x151)-x152);

    if (t29 != 128458848) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x153 = -1LL;
	static uint32_t x154 = 346917439U;
	volatile uint64_t x155 = 331926681031LLU;
	int64_t t30 = 0LL;

    t30 = (((x153+x154)!=x155)-x156);

    if (t30 != -18487305774234LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x157 = 1U;
	uint64_t x159 = 444622028LLU;
	int16_t x160 = INT16_MIN;
	static int32_t t31 = -9219;

    t31 = (((x157+x158)!=x159)-x160);

    if (t31 != 32769) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x165 = 502738U;
	static int8_t x166 = INT8_MAX;
	static int32_t x167 = -1;
	volatile int32_t t32 = -2763;

    t32 = (((x165+x166)!=x167)-x168);

    if (t32 != 129) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x169 = -1;
	static uint8_t x170 = UINT8_MAX;
	int8_t x172 = 3;
	int32_t t33 = -745;

    t33 = (((x169+x170)!=x171)-x172);

    if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x173 = UINT64_MAX;
	uint32_t x174 = 811886168U;
	uint8_t x175 = 26U;
	uint64_t x176 = 208013LLU;
	volatile uint64_t t34 = 2188576573217LLU;

    t34 = (((x173+x174)!=x175)-x176);

    if (t34 != 18446744073709343604LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x177 = 52440;
	static int64_t x178 = INT64_MIN;
	int64_t x179 = 372216607066690LL;
	static int64_t t35 = 31780279230187LL;

    t35 = (((x177+x178)!=x179)-x180);

    if (t35 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x181 = -1LL;
	static uint8_t x183 = 47U;
	int64_t x184 = INT64_MAX;
	static volatile int64_t t36 = 260061373769309LL;

    t36 = (((x181+x182)!=x183)-x184);

    if (t36 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x185 = INT32_MIN;
	volatile uint8_t x186 = 4U;
	uint16_t x187 = 2U;
	uint32_t x188 = 616U;
	uint32_t t37 = 1041459U;

    t37 = (((x185+x186)!=x187)-x188);

    if (t37 != 4294966681U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x189 = 1;
	int64_t x190 = INT64_MIN;
	int64_t x191 = -1LL;
	volatile int16_t x192 = INT16_MIN;
	volatile int32_t t38 = -106;

    t38 = (((x189+x190)!=x191)-x192);

    if (t38 != 32769) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x193 = UINT64_MAX;
	int32_t x194 = INT32_MAX;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -1;

    t39 = (((x193+x194)!=x195)-x196);

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x202 = INT16_MIN;
	uint32_t t40 = 14921429U;

    t40 = (((x201+x202)!=x203)-x204);

    if (t40 != 4282793929U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x205 = -50231840492967210LL;
	uint16_t x206 = UINT16_MAX;
	uint8_t x207 = 3U;
	int8_t x208 = INT8_MIN;
	static int32_t t41 = -32907500;

    t41 = (((x205+x206)!=x207)-x208);

    if (t41 != 129) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x209 = 323U;
	uint32_t x210 = 1473484610U;
	int8_t x211 = INT8_MIN;
	int16_t x212 = -1;
	int32_t t42 = 1;

    t42 = (((x209+x210)!=x211)-x212);

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x217 = -1;
	static uint32_t x218 = UINT32_MAX;
	volatile int32_t x219 = INT32_MAX;
	static int32_t x220 = -1;
	volatile int32_t t43 = -110458;

    t43 = (((x217+x218)!=x219)-x220);

    if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x221 = -1;
	uint8_t x222 = UINT8_MAX;
	int8_t x223 = INT8_MIN;
	volatile int64_t t44 = 4106201LL;

    t44 = (((x221+x222)!=x223)-x224);

    if (t44 != 211415652634875335LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MIN;
	int16_t x227 = -156;
	int64_t x228 = -1054455109465LL;

    t45 = (((x225+x226)!=x227)-x228);

    if (t45 != 1054455109466LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x233 = 0U;
	int16_t x234 = INT16_MAX;
	volatile int64_t x235 = -447883839LL;
	volatile int32_t t46 = 1;

    t46 = (((x233+x234)!=x235)-x236);

    if (t46 != -126) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x241 = UINT16_MAX;
	volatile int64_t x242 = -1LL;
	volatile int32_t t47 = -217371;

    t47 = (((x241+x242)!=x243)-x244);

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x251 = INT16_MAX;
	int16_t x252 = -46;
	volatile int32_t t48 = 458636;

    t48 = (((x249+x250)!=x251)-x252);

    if (t48 != 47) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x253 = 0U;
	static volatile int64_t x255 = 542993245980798749LL;
	int16_t x256 = -1;
	int32_t t49 = -4870439;

    t49 = (((x253+x254)!=x255)-x256);

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x261 = INT16_MIN;
	int32_t x262 = -235193026;
	int16_t x263 = INT16_MAX;
	volatile int16_t x264 = INT16_MAX;
	volatile int32_t t50 = 121;

    t50 = (((x261+x262)!=x263)-x264);

    if (t50 != -32766) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x265 = 15189776U;
	static uint8_t x266 = 0U;
	int16_t x267 = -87;
	int16_t x268 = INT16_MIN;
	int32_t t51 = -58131419;

    t51 = (((x265+x266)!=x267)-x268);

    if (t51 != 32769) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x269 = 120875LL;
	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MIN;
	int32_t x272 = -50767;
	static volatile int32_t t52 = -241;

    t52 = (((x269+x270)!=x271)-x272);

    if (t52 != 50768) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x273 = INT64_MIN;
	static uint64_t x274 = UINT64_MAX;
	static uint16_t x275 = 14U;
	volatile int8_t x276 = -24;
	int32_t t53 = -113144;

    t53 = (((x273+x274)!=x275)-x276);

    if (t53 != 25) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x278 = 4U;
	uint16_t x279 = 29574U;
	uint64_t x280 = 279LLU;
	volatile uint64_t t54 = 1895427203910093508LLU;

    t54 = (((x277+x278)!=x279)-x280);

    if (t54 != 18446744073709551338LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x281 = 250971747638LLU;
	static int32_t x282 = INT32_MIN;
	volatile int16_t x283 = INT16_MIN;
	uint32_t t55 = 3180375U;

    t55 = (((x281+x282)!=x283)-x284);

    if (t55 != 4294717219U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x285 = 0U;
	int16_t x286 = -1;
	int64_t x287 = 57760915663637832LL;
	int16_t x288 = 13005;
	int32_t t56 = -381275;

    t56 = (((x285+x286)!=x287)-x288);

    if (t56 != -13004) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x289 = INT8_MAX;
	int64_t x290 = -1LL;
	volatile int64_t x291 = 1880472182922LL;
	uint16_t x292 = UINT16_MAX;
	int32_t t57 = -72;

    t57 = (((x289+x290)!=x291)-x292);

    if (t57 != -65534) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x293 = UINT8_MAX;
	int32_t x294 = INT32_MIN;
	static uint64_t x295 = 544381283120543777LLU;
	volatile int16_t x296 = -7;

    t58 = (((x293+x294)!=x295)-x296);

    if (t58 != 8) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x297 = INT32_MAX;
	volatile uint64_t x299 = 205114LLU;
	static int8_t x300 = 0;
	int32_t t59 = -41133405;

    t59 = (((x297+x298)!=x299)-x300);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x301 = -1LL;
	volatile int32_t x302 = -13646;
	int16_t x303 = 3878;
	volatile uint16_t x304 = 450U;
	int32_t t60 = 23236;

    t60 = (((x301+x302)!=x303)-x304);

    if (t60 != -449) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x305 = INT32_MAX;
	int8_t x306 = INT8_MIN;
	uint32_t x307 = 154U;
	uint8_t x308 = 50U;
	int32_t t61 = -54;

    t61 = (((x305+x306)!=x307)-x308);

    if (t61 != -49) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x309 = -6;
	uint32_t x310 = 30932U;
	uint8_t x311 = 2U;
	uint32_t x312 = UINT32_MAX;
	uint32_t t62 = 970U;

    t62 = (((x309+x310)!=x311)-x312);

    if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x313 = -1LL;
	uint32_t x314 = 755764509U;
	uint16_t x315 = 4U;
	volatile int32_t x316 = INT32_MAX;
	int32_t t63 = 63648049;

    t63 = (((x313+x314)!=x315)-x316);

    if (t63 != -2147483646) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x318 = -1;
	int64_t x319 = 1LL;
	static int16_t x320 = 55;

    t64 = (((x317+x318)!=x319)-x320);

    if (t64 != -54) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x321 = -126058396LL;
	volatile int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t65 = -514621329;

    t65 = (((x321+x322)!=x323)-x324);

    if (t65 != -254) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x325 = 1U;
	int16_t x326 = 1648;
	uint32_t x327 = 100U;
	uint64_t t66 = 893103264LLU;

    t66 = (((x325+x326)!=x327)-x328);

    if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x329 = 4375220LLU;
	int8_t x332 = INT8_MIN;

    t67 = (((x329+x330)!=x331)-x332);

    if (t67 != 129) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x337 = 452;
	uint16_t x338 = UINT16_MAX;
	int64_t x340 = 24LL;
	static int64_t t68 = 1LL;

    t68 = (((x337+x338)!=x339)-x340);

    if (t68 != -23LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x349 = UINT8_MAX;
	volatile uint32_t x350 = 0U;
	uint64_t x351 = 7118125224384273LLU;
	volatile uint32_t x352 = 1327839543U;
	volatile uint32_t t69 = 15116731U;

    t69 = (((x349+x350)!=x351)-x352);

    if (t69 != 2967127754U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x353 = 139622519U;
	static int8_t x355 = -1;
	int8_t x356 = INT8_MIN;
	int32_t t70 = -1222711;

    t70 = (((x353+x354)!=x355)-x356);

    if (t70 != 129) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x357 = UINT64_MAX;
	static int32_t x358 = INT32_MIN;
	volatile int16_t x359 = 0;
	int64_t x360 = -1LL;
	static int64_t t71 = 41LL;

    t71 = (((x357+x358)!=x359)-x360);

    if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x362 = -1LL;
	static int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MIN;

    t72 = (((x361+x362)!=x363)-x364);

    if (t72 != 32769) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x381 = INT16_MIN;
	int32_t t73 = 18;

    t73 = (((x381+x382)!=x383)-x384);

    if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x389 = 102876U;
	int32_t x390 = INT32_MIN;
	static int32_t x391 = -1;
	volatile int32_t x392 = -1;

    t74 = (((x389+x390)!=x391)-x392);

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x401 = INT16_MAX;
	int32_t x402 = -175598510;
	uint8_t x404 = UINT8_MAX;
	int32_t t75 = 589368;

    t75 = (((x401+x402)!=x403)-x404);

    if (t75 != -254) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x405 = INT16_MIN;
	volatile int64_t x406 = 93671980080LL;
	int32_t x407 = 3048697;
	uint16_t x408 = UINT16_MAX;
	int32_t t76 = -21;

    t76 = (((x405+x406)!=x407)-x408);

    if (t76 != -65534) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x413 = INT64_MIN;
	uint16_t x414 = UINT16_MAX;
	volatile uint32_t x416 = UINT32_MAX;
	volatile uint32_t t77 = 1168U;

    t77 = (((x413+x414)!=x415)-x416);

    if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x417 = 23U;
	uint8_t x418 = UINT8_MAX;
	volatile int8_t x419 = INT8_MAX;
	uint32_t x420 = 0U;
	volatile uint32_t t78 = 30815U;

    t78 = (((x417+x418)!=x419)-x420);

    if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x421 = 31407172745805LL;
	static int8_t x422 = -1;
	int16_t x423 = -2561;
	volatile int32_t t79 = -12;

    t79 = (((x421+x422)!=x423)-x424);

    if (t79 != -65534) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x425 = 5034LLU;
	int32_t x426 = -1;
	int16_t x427 = -1;
	uint16_t x428 = 0U;
	volatile int32_t t80 = -1;

    t80 = (((x425+x426)!=x427)-x428);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x435 = INT32_MAX;
	int16_t x436 = INT16_MIN;
	int32_t t81 = 22091821;

    t81 = (((x433+x434)!=x435)-x436);

    if (t81 != 32769) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x441 = INT32_MIN;
	int16_t x443 = INT16_MIN;
	uint64_t x444 = 1811272726151LLU;
	uint64_t t82 = 75LLU;

    t82 = (((x441+x442)!=x443)-x444);

    if (t82 != 18446742262436825466LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x446 = -1;
	static int8_t x447 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t83 = -16;

    t83 = (((x445+x446)!=x447)-x448);

    if (t83 != -65534) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x453 = -172809272487915LL;
	int64_t x454 = INT64_MAX;
	static int16_t x456 = -13999;
	static int32_t t84 = 22846;

    t84 = (((x453+x454)!=x455)-x456);

    if (t84 != 14000) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x457 = INT64_MIN;
	uint64_t x458 = 24LLU;
	static int32_t x459 = INT32_MIN;
	volatile int8_t x460 = -1;
	int32_t t85 = -110088216;

    t85 = (((x457+x458)!=x459)-x460);

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x465 = 30547U;
	uint64_t x467 = 2090819634938LLU;
	int64_t x468 = INT64_MAX;
	int64_t t86 = -12469LL;

    t86 = (((x465+x466)!=x467)-x468);

    if (t86 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x469 = INT8_MAX;
	volatile int16_t x470 = INT16_MIN;
	uint16_t x472 = 2163U;
	int32_t t87 = 481629;

    t87 = (((x469+x470)!=x471)-x472);

    if (t87 != -2162) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x473 = 31410LLU;
	volatile uint16_t x474 = 12U;
	volatile int32_t t88 = -73898792;

    t88 = (((x473+x474)!=x475)-x476);

    if (t88 != -2147483646) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x477 = -1;
	static volatile uint32_t x478 = 3U;
	volatile uint16_t x479 = UINT16_MAX;
	uint8_t x480 = 1U;
	int32_t t89 = 646983130;

    t89 = (((x477+x478)!=x479)-x480);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x485 = INT32_MIN;
	uint8_t x486 = 59U;
	uint8_t x487 = 65U;
	int16_t x488 = INT16_MAX;
	int32_t t90 = -406096;

    t90 = (((x485+x486)!=x487)-x488);

    if (t90 != -32766) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x494 = -1868164691LL;
	int8_t x495 = INT8_MIN;
	volatile int8_t x496 = INT8_MIN;
	static int32_t t91 = 1689;

    t91 = (((x493+x494)!=x495)-x496);

    if (t91 != 129) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint32_t x497 = 19U;
	static volatile int8_t x498 = -1;
	int16_t x499 = 1;
	uint16_t x500 = 4U;
	volatile int32_t t92 = 1373;

    t92 = (((x497+x498)!=x499)-x500);

    if (t92 != -3) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x501 = 333LLU;
	static int16_t x502 = INT16_MAX;
	volatile int64_t x503 = INT64_MIN;
	volatile int64_t t93 = 10LL;

    t93 = (((x501+x502)!=x503)-x504);

    if (t93 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x505 = INT8_MIN;
	volatile int16_t x507 = INT16_MIN;
	int32_t x508 = INT32_MAX;

    t94 = (((x505+x506)!=x507)-x508);

    if (t94 != -2147483646) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x513 = INT64_MAX;
	int32_t x514 = -3174692;
	int32_t x515 = 791;
	static uint32_t x516 = UINT32_MAX;
	volatile uint32_t t95 = 7350U;

    t95 = (((x513+x514)!=x515)-x516);

    if (t95 != 2U) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x517 = -1;
	volatile int16_t x518 = -1;
	int64_t x519 = INT64_MIN;
	uint16_t x520 = UINT16_MAX;
	int32_t t96 = 39;

    t96 = (((x517+x518)!=x519)-x520);

    if (t96 != -65534) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x525 = 354111960508LL;
	int64_t x526 = -14710680LL;
	static int16_t x527 = 4832;
	int8_t x528 = -1;

    t97 = (((x525+x526)!=x527)-x528);

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x537 = INT32_MIN;
	uint8_t x538 = UINT8_MAX;
	int32_t t98 = -685346373;

    t98 = (((x537+x538)!=x539)-x540);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x545 = 123;
	uint16_t x546 = UINT16_MAX;
	int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MAX;
	volatile int32_t t99 = -675;

    t99 = (((x545+x546)!=x547)-x548);

    if (t99 != -2147483646) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x549 = INT32_MIN;
	uint64_t x551 = 3278255191216219550LLU;
	uint16_t x552 = 7851U;
	volatile int32_t t100 = 16773;

    t100 = (((x549+x550)!=x551)-x552);

    if (t100 != -7850) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x554 = INT64_MIN;
	uint8_t x555 = 7U;
	int64_t x556 = -18868LL;
	static int64_t t101 = 6047453LL;

    t101 = (((x553+x554)!=x555)-x556);

    if (t101 != 18869LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x557 = INT32_MIN;
	int32_t x558 = INT32_MAX;
	int64_t x559 = INT64_MIN;
	uint32_t x560 = UINT32_MAX;
	volatile uint32_t t102 = 2294215U;

    t102 = (((x557+x558)!=x559)-x560);

    if (t102 != 2U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x561 = INT16_MAX;
	volatile int64_t x562 = -1LL;
	int64_t x563 = INT64_MAX;
	static uint16_t x564 = 13U;

    t103 = (((x561+x562)!=x563)-x564);

    if (t103 != -12) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x565 = INT16_MAX;
	volatile int16_t x566 = INT16_MIN;
	uint16_t x567 = 0U;
	uint16_t x568 = 10664U;
	int32_t t104 = -1;

    t104 = (((x565+x566)!=x567)-x568);

    if (t104 != -10663) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x569 = -1;
	static uint32_t x570 = UINT32_MAX;
	static int32_t t105 = -25217679;

    t105 = (((x569+x570)!=x571)-x572);

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x581 = 902U;
	static int32_t x582 = -1;
	uint8_t x583 = 58U;
	int32_t t106 = -503858295;

    t106 = (((x581+x582)!=x583)-x584);

    if (t106 != 32769) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x585 = UINT64_MAX;
	uint8_t x587 = 1U;
	uint16_t x588 = 262U;
	int32_t t107 = 262212;

    t107 = (((x585+x586)!=x587)-x588);

    if (t107 != -261) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x589 = -1;
	int32_t x592 = INT32_MAX;

    t108 = (((x589+x590)!=x591)-x592);

    if (t108 != -2147483646) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x593 = INT16_MAX;
	int32_t x595 = INT32_MAX;
	volatile uint8_t x596 = 2U;

    t109 = (((x593+x594)!=x595)-x596);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x597 = 2;
	uint64_t x598 = 2020LLU;
	int32_t x599 = 207;
	int8_t x600 = -1;
	static int32_t t110 = 0;

    t110 = (((x597+x598)!=x599)-x600);

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x601 = 74U;
	int16_t x602 = INT16_MIN;
	volatile int8_t x604 = -22;
	int32_t t111 = -534421;

    t111 = (((x601+x602)!=x603)-x604);

    if (t111 != 23) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x605 = INT32_MIN;
	volatile uint64_t x606 = UINT64_MAX;
	uint16_t x607 = 4463U;
	static int32_t x608 = -1;
	int32_t t112 = 5;

    t112 = (((x605+x606)!=x607)-x608);

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x609 = 1U;
	int16_t x610 = INT16_MIN;
	uint32_t x611 = UINT32_MAX;
	int32_t x612 = 362831576;

    t113 = (((x609+x610)!=x611)-x612);

    if (t113 != -362831575) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x613 = INT32_MIN;
	uint8_t x614 = 12U;
	static volatile int8_t x615 = INT8_MAX;
	uint16_t x616 = 3U;
	int32_t t114 = -1043736453;

    t114 = (((x613+x614)!=x615)-x616);

    if (t114 != -2) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x621 = INT64_MIN;
	volatile int64_t x622 = INT64_MAX;
	static uint64_t x623 = 232853562390266542LLU;
	static int8_t x624 = -1;
	volatile int32_t t115 = 627873053;

    t115 = (((x621+x622)!=x623)-x624);

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x629 = 7810U;
	int32_t x630 = -1;
	int16_t x631 = 7532;
	volatile uint8_t x632 = 6U;

    t116 = (((x629+x630)!=x631)-x632);

    if (t116 != -5) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x633 = INT16_MIN;
	volatile int32_t x635 = -1;
	int32_t x636 = -30973;
	volatile int32_t t117 = -5183565;

    t117 = (((x633+x634)!=x635)-x636);

    if (t117 != 30974) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x637 = 50;
	int16_t x638 = -139;
	int32_t x639 = INT32_MIN;
	int64_t x640 = INT64_MAX;

    t118 = (((x637+x638)!=x639)-x640);

    if (t118 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x641 = 6;
	volatile uint8_t x642 = UINT8_MAX;
	uint32_t x643 = 34694U;
	int32_t x644 = 48857472;

    t119 = (((x641+x642)!=x643)-x644);

    if (t119 != -48857471) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x649 = INT32_MAX;
	static int16_t x650 = -1;
	uint32_t x651 = 90250U;
	int64_t x652 = INT64_MAX;
	static volatile int64_t t120 = 55180410075934988LL;

    t120 = (((x649+x650)!=x651)-x652);

    if (t120 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x653 = 49U;
	int32_t x654 = INT32_MIN;
	int16_t x655 = INT16_MAX;
	volatile int32_t x656 = -1;
	volatile int32_t t121 = 0;

    t121 = (((x653+x654)!=x655)-x656);

    if (t121 != 2) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x665 = -8223059;
	static volatile int16_t x666 = INT16_MIN;
	uint64_t x668 = UINT64_MAX;

    t122 = (((x665+x666)!=x667)-x668);

    if (t122 != 2LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x669 = INT32_MAX;
	int64_t x670 = INT64_MIN;
	static uint64_t x671 = UINT64_MAX;
	uint64_t x672 = UINT64_MAX;

    t123 = (((x669+x670)!=x671)-x672);

    if (t123 != 2LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x673 = INT32_MAX;
	uint64_t x674 = UINT64_MAX;
	static int64_t x675 = 78190469LL;
	static int32_t t124 = 21492950;

    t124 = (((x673+x674)!=x675)-x676);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x677 = INT8_MIN;
	volatile uint64_t x678 = 7797762LLU;
	uint32_t x679 = 146866U;
	int16_t x680 = -242;
	int32_t t125 = -3368821;

    t125 = (((x677+x678)!=x679)-x680);

    if (t125 != 243) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x681 = 2960U;
	int32_t x682 = -1;
	uint64_t x683 = UINT64_MAX;
	volatile uint16_t x684 = UINT16_MAX;
	volatile int32_t t126 = -5;

    t126 = (((x681+x682)!=x683)-x684);

    if (t126 != -65534) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x685 = -1;
	static int64_t x686 = 1733LL;
	uint32_t x688 = 557383264U;

    t127 = (((x685+x686)!=x687)-x688);

    if (t127 != 3737584033U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x689 = INT16_MIN;
	int16_t x691 = INT16_MIN;
	volatile int8_t x692 = INT8_MIN;

    t128 = (((x689+x690)!=x691)-x692);

    if (t128 != 129) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x693 = INT32_MIN;
	uint8_t x695 = 0U;
	uint16_t x696 = 0U;
	static int32_t t129 = -200013;

    t129 = (((x693+x694)!=x695)-x696);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x697 = 30203U;
	int16_t x698 = INT16_MAX;
	volatile int32_t x699 = INT32_MIN;
	uint64_t x700 = UINT64_MAX;
	volatile uint64_t t130 = 55339991545285666LLU;

    t130 = (((x697+x698)!=x699)-x700);

    if (t130 != 2LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x701 = 3234U;
	int8_t x703 = INT8_MIN;
	uint16_t x704 = 2U;
	volatile int32_t t131 = -11;

    t131 = (((x701+x702)!=x703)-x704);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x705 = INT8_MIN;
	static uint32_t x706 = 2074558U;
	uint8_t x708 = 2U;
	int32_t t132 = 2037573;

    t132 = (((x705+x706)!=x707)-x708);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x709 = UINT32_MAX;
	volatile int64_t x710 = -1LL;
	int64_t x711 = 3021273LL;
	uint16_t x712 = 13U;
	int32_t t133 = -14929810;

    t133 = (((x709+x710)!=x711)-x712);

    if (t133 != -12) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x713 = 1471U;
	uint32_t x714 = 3551289U;
	uint8_t x715 = 22U;
	int8_t x716 = -3;
	int32_t t134 = -818;

    t134 = (((x713+x714)!=x715)-x716);

    if (t134 != 4) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x717 = -5;
	volatile int16_t x719 = INT16_MAX;
	int8_t x720 = INT8_MIN;
	static int32_t t135 = -17;

    t135 = (((x717+x718)!=x719)-x720);

    if (t135 != 129) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x721 = INT64_MIN;
	uint8_t x722 = 124U;
	int8_t x723 = 1;

    t136 = (((x721+x722)!=x723)-x724);

    if (t136 != -32766) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x729 = INT16_MIN;
	volatile uint32_t x730 = 53071043U;
	uint64_t x732 = 95962096LLU;
	volatile uint64_t t137 = 22149971LLU;

    t137 = (((x729+x730)!=x731)-x732);

    if (t137 != 18446744073613589521LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x737 = 87;
	uint64_t x738 = 250995894743517LLU;
	int32_t x740 = -1;
	volatile int32_t t138 = 12914106;

    t138 = (((x737+x738)!=x739)-x740);

    if (t138 != 2) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x753 = INT8_MAX;
	uint16_t x754 = 1485U;
	static volatile int16_t x756 = INT16_MIN;

    t139 = (((x753+x754)!=x755)-x756);

    if (t139 != 32769) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x757 = 0;
	volatile int64_t t140 = -1647326077836224219LL;

    t140 = (((x757+x758)!=x759)-x760);

    if (t140 != -319LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x765 = 2;
	static uint64_t x766 = 1080644LLU;
	volatile int64_t x768 = INT64_MAX;
	volatile int64_t t141 = 1428951039609351247LL;

    t141 = (((x765+x766)!=x767)-x768);

    if (t141 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x770 = INT16_MAX;
	int64_t x771 = 30714540LL;
	uint32_t x772 = 6U;
	uint32_t t142 = 960017U;

    t142 = (((x769+x770)!=x771)-x772);

    if (t142 != 4294967291U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x777 = UINT16_MAX;
	uint8_t x778 = 78U;
	int16_t x780 = INT16_MIN;
	volatile int32_t t143 = -19;

    t143 = (((x777+x778)!=x779)-x780);

    if (t143 != 32769) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x781 = 7510LL;
	static int64_t x782 = INT64_MIN;
	int64_t x783 = INT64_MIN;
	int32_t x784 = -1;
	volatile int32_t t144 = -3352;

    t144 = (((x781+x782)!=x783)-x784);

    if (t144 != 2) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x785 = 154566713U;
	static uint16_t x786 = 32142U;
	uint64_t x787 = 55LLU;
	static volatile int16_t x788 = INT16_MIN;
	int32_t t145 = 30763;

    t145 = (((x785+x786)!=x787)-x788);

    if (t145 != 32769) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x789 = 5167556110883412LLU;
	uint64_t x790 = UINT64_MAX;
	uint64_t x791 = 19LLU;
	int32_t t146 = 259909;

    t146 = (((x789+x790)!=x791)-x792);

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x793 = -1;
	volatile uint64_t x794 = 215556635LLU;
	uint16_t x796 = 25069U;
	static volatile int32_t t147 = -51629;

    t147 = (((x793+x794)!=x795)-x796);

    if (t147 != -25068) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x801 = INT8_MIN;
	uint64_t x802 = 4231LLU;
	int64_t x804 = -5228800530742974LL;
	static volatile int64_t t148 = -1LL;

    t148 = (((x801+x802)!=x803)-x804);

    if (t148 != 5228800530742975LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x809 = 0U;
	volatile int16_t x811 = INT16_MIN;
	static int32_t x812 = INT32_MAX;

    t149 = (((x809+x810)!=x811)-x812);

    if (t149 != -2147483646) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x815 = 71U;
	int32_t x816 = -1;
	static volatile int32_t t150 = -197;

    t150 = (((x813+x814)!=x815)-x816);

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x817 = -1LL;
	volatile int8_t x818 = -1;
	static volatile int16_t x819 = INT16_MAX;
	uint32_t x820 = 2U;
	volatile uint32_t t151 = UINT32_MAX;

    t151 = (((x817+x818)!=x819)-x820);

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x821 = 4;
	int8_t x824 = -1;
	volatile int32_t t152 = 9754;

    t152 = (((x821+x822)!=x823)-x824);

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x825 = INT32_MAX;
	int64_t x828 = -1LL;
	volatile int64_t t153 = 2101737875162LL;

    t153 = (((x825+x826)!=x827)-x828);

    if (t153 != 2LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x829 = UINT32_MAX;
	uint32_t x830 = UINT32_MAX;
	uint32_t x831 = UINT32_MAX;
	int8_t x832 = INT8_MIN;
	int32_t t154 = 93;

    t154 = (((x829+x830)!=x831)-x832);

    if (t154 != 129) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x834 = -12;
	static int32_t t155 = 42415;

    t155 = (((x833+x834)!=x835)-x836);

    if (t155 != -126) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x838 = -3637767931LL;
	int64_t t156 = -65409852487165LL;

    t156 = (((x837+x838)!=x839)-x840);

    if (t156 != 131816919659LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x845 = -1;
	uint8_t x847 = 22U;
	int8_t x848 = -1;

    t157 = (((x845+x846)!=x847)-x848);

    if (t157 != 2) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x851 = INT16_MIN;
	uint32_t t158 = 1U;

    t158 = (((x849+x850)!=x851)-x852);

    if (t158 != 4294967284U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x857 = -1LL;
	int8_t x858 = INT8_MIN;
	uint32_t x859 = 4U;
	volatile int64_t t159 = 4132170365094LL;

    t159 = (((x857+x858)!=x859)-x860);

    if (t159 != 2LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x861 = 5;
	int64_t x862 = -1LL;
	volatile uint32_t t160 = 28423U;

    t160 = (((x861+x862)!=x863)-x864);

    if (t160 != 4266556285U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x865 = -1;
	int16_t x866 = INT16_MIN;
	int64_t x867 = INT64_MAX;
	static int16_t x868 = INT16_MAX;
	static volatile int32_t t161 = -30875263;

    t161 = (((x865+x866)!=x867)-x868);

    if (t161 != -32766) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x869 = -1;
	uint16_t x870 = 42U;
	int8_t x872 = INT8_MIN;
	int32_t t162 = -41482;

    t162 = (((x869+x870)!=x871)-x872);

    if (t162 != 129) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x881 = -1289;
	int8_t x882 = INT8_MIN;
	static int32_t x883 = INT32_MAX;
	static uint64_t x884 = 183800073LLU;

    t163 = (((x881+x882)!=x883)-x884);

    if (t163 != 18446744073525751544LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x889 = 2118601401U;
	static uint16_t x890 = 189U;
	uint64_t x891 = UINT64_MAX;
	uint16_t x892 = UINT16_MAX;
	static int32_t t164 = 0;

    t164 = (((x889+x890)!=x891)-x892);

    if (t164 != -65534) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x894 = INT8_MIN;
	int16_t x895 = 1;
	int64_t x896 = -1602831925422LL;
	volatile int64_t t165 = -82223046687LL;

    t165 = (((x893+x894)!=x895)-x896);

    if (t165 != 1602831925423LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x897 = -12;
	static int32_t x899 = -1;
	int8_t x900 = INT8_MIN;
	int32_t t166 = -62;

    t166 = (((x897+x898)!=x899)-x900);

    if (t166 != 129) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x902 = INT32_MIN;
	int64_t x903 = 3396LL;
	uint32_t x904 = 6335U;
	uint32_t t167 = 261548682U;

    t167 = (((x901+x902)!=x903)-x904);

    if (t167 != 4294960962U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x909 = INT8_MIN;
	int16_t x910 = -15;
	static int64_t x911 = INT64_MIN;
	static int16_t x912 = 7546;
	volatile int32_t t168 = 39411;

    t168 = (((x909+x910)!=x911)-x912);

    if (t168 != -7545) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x913 = UINT8_MAX;
	int16_t x914 = -1;
	uint8_t x915 = 1U;
	volatile int32_t x916 = -1;
	int32_t t169 = -33658;

    t169 = (((x913+x914)!=x915)-x916);

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x917 = INT16_MIN;
	uint16_t x918 = UINT16_MAX;
	static uint8_t x919 = 21U;

    t170 = (((x917+x918)!=x919)-x920);

    if (t170 != 32769) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x921 = -1LL;
	int64_t x922 = 2598501021210LL;
	static int16_t x923 = -1;
	int64_t x924 = -246LL;
	int64_t t171 = 1952738204403861LL;

    t171 = (((x921+x922)!=x923)-x924);

    if (t171 != 247LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x925 = 125;
	static volatile uint32_t x926 = UINT32_MAX;
	int16_t x928 = INT16_MIN;
	int32_t t172 = 105711422;

    t172 = (((x925+x926)!=x927)-x928);

    if (t172 != 32769) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x929 = 0U;
	int32_t x931 = -299374;

    t173 = (((x929+x930)!=x931)-x932);

    if (t173 != -631) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x942 = 0;
	static volatile int32_t t174 = 227722;

    t174 = (((x941+x942)!=x943)-x944);

    if (t174 != -968734) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x949 = UINT64_MAX;
	uint64_t x950 = UINT64_MAX;
	volatile uint8_t x951 = UINT8_MAX;
	volatile int32_t t175 = 18;

    t175 = (((x949+x950)!=x951)-x952);

    if (t175 != 26) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x953 = UINT16_MAX;
	volatile uint16_t x954 = 1U;
	int16_t x955 = INT16_MIN;
	int16_t x956 = -823;
	static volatile int32_t t176 = -1204;

    t176 = (((x953+x954)!=x955)-x956);

    if (t176 != 824) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x957 = 24528U;
	int64_t x958 = INT64_MIN;
	int32_t x959 = 43;
	uint64_t x960 = 3326406416034282652LLU;
	static uint64_t t177 = 188634960LLU;

    t177 = (((x957+x958)!=x959)-x960);

    if (t177 != 15120337657675268965LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x961 = -1;
	int16_t x962 = INT16_MIN;
	uint16_t x963 = 3853U;
	int64_t t178 = 0LL;

    t178 = (((x961+x962)!=x963)-x964);

    if (t178 != 2LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x970 = -1LL;
	volatile int32_t t179 = -1;

    t179 = (((x969+x970)!=x971)-x972);

    if (t179 != -126) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x978 = INT8_MIN;
	static int8_t x979 = -6;
	static int16_t x980 = 871;
	volatile int32_t t180 = -14;

    t180 = (((x977+x978)!=x979)-x980);

    if (t180 != -870) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x981 = 475;
	static int32_t x982 = INT32_MIN;
	int16_t x983 = INT16_MIN;
	uint16_t x984 = 1664U;
	int32_t t181 = 5378889;

    t181 = (((x981+x982)!=x983)-x984);

    if (t181 != -1663) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x986 = -1;
	int8_t x987 = INT8_MIN;
	volatile int8_t x988 = INT8_MAX;

    t182 = (((x985+x986)!=x987)-x988);

    if (t182 != -126) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x989 = UINT16_MAX;
	volatile uint32_t x990 = 353561U;
	static int8_t x991 = -1;
	uint64_t x992 = 2048316796209616LLU;
	uint64_t t183 = 304046296614290859LLU;

    t183 = (((x989+x990)!=x991)-x992);

    if (t183 != 18444695756913342001LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x993 = INT16_MIN;
	int8_t x994 = 7;
	uint16_t x996 = 3U;
	volatile int32_t t184 = -37439504;

    t184 = (((x993+x994)!=x995)-x996);

    if (t184 != -2) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x997 = INT32_MIN;
	uint64_t x1000 = 132549966564965LLU;

    t185 = (((x997+x998)!=x999)-x1000);

    if (t185 != 18446611523742986652LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x1001 = 98611979363LLU;
	int64_t x1002 = -58413256313859LL;
	static int8_t x1003 = INT8_MIN;
	uint64_t x1004 = 3963LLU;

    t186 = (((x1001+x1002)!=x1003)-x1004);

    if (t186 != 18446744073709547654LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x1005 = -1;
	int16_t x1006 = INT16_MIN;
	volatile int32_t x1007 = 15;
	static int32_t x1008 = -1;
	int32_t t187 = -9;

    t187 = (((x1005+x1006)!=x1007)-x1008);

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1009 = -10710414LL;
	int64_t x1012 = INT64_MAX;

    t188 = (((x1009+x1010)!=x1011)-x1012);

    if (t188 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x1013 = -1LL;
	uint32_t x1015 = UINT32_MAX;
	volatile uint8_t x1016 = UINT8_MAX;

    t189 = (((x1013+x1014)!=x1015)-x1016);

    if (t189 != -254) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1017 = UINT64_MAX;
	int32_t x1018 = 1;
	static volatile int64_t x1020 = INT64_MAX;
	int64_t t190 = -1LL;

    t190 = (((x1017+x1018)!=x1019)-x1020);

    if (t190 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1021 = INT8_MIN;
	int16_t x1022 = INT16_MIN;
	int32_t x1023 = INT32_MAX;
	int32_t x1024 = -1;

    t191 = (((x1021+x1022)!=x1023)-x1024);

    if (t191 != 2) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x1025 = 13348500LLU;
	int64_t x1027 = -4524549481235LL;
	static int8_t x1028 = INT8_MIN;

    t192 = (((x1025+x1026)!=x1027)-x1028);

    if (t192 != 129) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1030 = INT8_MIN;
	int64_t x1031 = 117183575084620LL;
	volatile uint16_t x1032 = 8U;
	volatile int32_t t193 = 0;

    t193 = (((x1029+x1030)!=x1031)-x1032);

    if (t193 != -7) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1033 = -337532;
	int8_t x1034 = -12;
	int8_t x1035 = -1;
	int32_t t194 = 1;

    t194 = (((x1033+x1034)!=x1035)-x1036);

    if (t194 != 129) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1041 = 90U;
	static int16_t x1042 = INT16_MAX;
	int64_t x1044 = INT64_MAX;
	int64_t t195 = -116327404019LL;

    t195 = (((x1041+x1042)!=x1043)-x1044);

    if (t195 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1045 = INT64_MIN;
	static int16_t x1046 = 1338;
	int64_t x1047 = INT64_MAX;
	int8_t x1048 = 60;
	static volatile int32_t t196 = 1;

    t196 = (((x1045+x1046)!=x1047)-x1048);

    if (t196 != -59) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1053 = INT8_MIN;
	int8_t x1055 = 0;
	static volatile int64_t x1056 = -494837355334LL;
	volatile int64_t t197 = -1071993LL;

    t197 = (((x1053+x1054)!=x1055)-x1056);

    if (t197 != 494837355335LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1057 = INT64_MIN;
	int16_t x1058 = 5;
	int32_t x1059 = INT32_MIN;
	int32_t x1060 = -22796;

    t198 = (((x1057+x1058)!=x1059)-x1060);

    if (t198 != 22797) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1061 = 114400810371218LLU;
	uint64_t x1062 = UINT64_MAX;
	uint32_t x1064 = 4502411U;
	volatile uint32_t t199 = 448138978U;

    t199 = (((x1061+x1062)!=x1063)-x1064);

    if (t199 != 4290464886U) { NG(); } else { ; }
	
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

