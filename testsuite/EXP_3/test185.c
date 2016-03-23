
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

static int32_t x10 = 7473634;
int64_t x25 = INT64_MAX;
uint32_t t8 = 750892176U;
int8_t x53 = INT8_MAX;
uint64_t x54 = UINT64_MAX;
int8_t x56 = INT8_MIN;
int64_t x64 = INT64_MAX;
volatile uint64_t t10 = 123677162740189278LLU;
volatile uint64_t t12 = 2204660099LLU;
uint8_t x87 = 3U;
int16_t x88 = INT16_MIN;
static volatile int32_t t14 = -247;
int16_t x107 = INT16_MIN;
int64_t x115 = 5390502LL;
static uint64_t x117 = 4736647341152035LLU;
uint64_t t19 = 93738614LLU;
volatile int32_t x125 = INT32_MIN;
int32_t t20 = -248;
int8_t x131 = 0;
volatile int16_t x146 = INT16_MIN;
int8_t x163 = 1;
int8_t x164 = -1;
int32_t t25 = 416602442;
int8_t x173 = INT8_MIN;
static volatile int16_t x188 = -1;
uint64_t x195 = 42LLU;
static uint64_t t31 = 8644225LLU;
static int32_t x197 = -241676;
static uint32_t x205 = 31935U;
int16_t x213 = INT16_MIN;
int16_t x214 = INT16_MIN;
volatile int32_t t35 = -226;
int32_t x222 = INT32_MAX;
int16_t x224 = -4;
int8_t x231 = INT8_MAX;
volatile uint16_t x240 = 4U;
uint64_t t39 = 12155809692LLU;
int32_t x247 = 15322154;
int64_t x254 = -1LL;
static int64_t x258 = -569LL;
uint32_t x259 = 64U;
static int16_t x262 = INT16_MIN;
volatile uint16_t x264 = 27U;
volatile int32_t t43 = -101074;
int16_t x266 = 182;
static volatile int16_t x272 = INT16_MIN;
int16_t x283 = -4;
uint8_t x284 = UINT8_MAX;
volatile uint16_t x298 = 1U;
int8_t x313 = INT8_MIN;
volatile int16_t x317 = -10244;
int64_t x319 = -1LL;
uint32_t x324 = 4616U;
uint16_t x326 = 11U;
int8_t x336 = INT8_MIN;
int32_t t56 = 25275007;
int8_t x339 = -6;
uint64_t x355 = UINT64_MAX;
int32_t x358 = INT32_MIN;
uint32_t x359 = 218769067U;
uint64_t x372 = 116858398289LLU;
volatile int32_t x377 = INT32_MIN;
static volatile uint16_t x378 = 4486U;
volatile int64_t x380 = 21LL;
int64_t t65 = 8935094543255LL;
uint64_t t69 = 4096197919177LLU;
uint32_t x409 = 49U;
static int16_t x410 = 0;
uint32_t x419 = UINT32_MAX;
volatile int64_t x422 = INT64_MIN;
static int16_t x424 = INT16_MIN;
volatile int16_t x459 = -5;
volatile int64_t x475 = -1LL;
volatile int8_t x477 = INT8_MIN;
static uint32_t x495 = 61328055U;
volatile int32_t x496 = 187646314;
static volatile uint64_t t81 = 8696075764754177LLU;
uint16_t x509 = 0U;
static volatile int8_t x516 = INT8_MAX;
volatile int16_t x523 = INT16_MIN;
uint64_t x525 = UINT64_MAX;
static int16_t x535 = INT16_MAX;
int8_t x573 = -1;
int32_t t90 = -100893476;
static int32_t x579 = 5;
volatile int32_t t91 = 3204;
int32_t t92 = -8;
static uint16_t x586 = 1U;
volatile int32_t x599 = 25859;
int32_t t95 = 0;
uint16_t x601 = 8381U;
int64_t x607 = -131503561LL;
int64_t t97 = 15570293LL;
static volatile int8_t x618 = -1;
uint8_t x619 = 119U;
int8_t x622 = INT8_MIN;
int8_t x624 = INT8_MAX;
int8_t x628 = INT8_MIN;
volatile int16_t x639 = -1;
int32_t t101 = -417;
int8_t x641 = INT8_MIN;
uint16_t x642 = 1U;
int8_t x643 = INT8_MIN;
static volatile int32_t t102 = 7268;
uint64_t x659 = 984387788804941LLU;
int32_t x664 = -1;
uint32_t t107 = 40U;
static int8_t x673 = -1;
int32_t x676 = INT32_MIN;
uint32_t x687 = 28427367U;
uint8_t x692 = 1U;
uint32_t x696 = 1147181901U;
volatile uint64_t t113 = 2635LLU;
volatile uint64_t t114 = 5228523LLU;
uint8_t x705 = 25U;
static uint16_t x707 = UINT16_MAX;
int8_t x717 = 8;
static int8_t x720 = INT8_MAX;
uint64_t x721 = 37LLU;
int32_t x724 = INT32_MIN;
static uint64_t t119 = 422LLU;
uint64_t x738 = UINT64_MAX;
uint16_t x739 = UINT16_MAX;
volatile uint64_t t122 = 947LLU;
static uint32_t x742 = 1826591U;
uint32_t x743 = 32424U;
static uint32_t t123 = 4109732U;
uint16_t x778 = 313U;
int16_t x782 = INT16_MIN;
uint64_t x797 = 4361125LLU;
int8_t x813 = INT8_MIN;
uint64_t x818 = 3135084139671459LLU;
uint16_t x831 = 243U;
static uint16_t x837 = 904U;
static volatile int32_t x838 = -1927;
int64_t t135 = -1722LL;
int64_t x849 = -1LL;
int64_t x852 = -1LL;
static uint16_t x853 = 2877U;
static volatile uint16_t x858 = 14U;
volatile int16_t x869 = 49;
int8_t x876 = INT8_MAX;
volatile int16_t x879 = INT16_MIN;
static uint16_t x885 = 65U;
static volatile int16_t x888 = -192;
static volatile uint64_t t144 = 59374067LLU;
int16_t x901 = INT16_MAX;
int16_t x904 = INT16_MIN;
int8_t x907 = INT8_MIN;
int16_t x908 = INT16_MIN;
volatile uint16_t x925 = 2U;
volatile uint64_t t151 = 12025LLU;
volatile uint32_t x943 = 419859U;
static uint16_t x944 = UINT16_MAX;
uint32_t x951 = 95U;
static int32_t x952 = INT32_MIN;
volatile uint64_t t154 = 361823LLU;
volatile int64_t x971 = -1LL;
int16_t x974 = INT16_MIN;
uint64_t t156 = 15LLU;
int32_t x1006 = INT32_MIN;
uint8_t x1007 = 3U;
int32_t x1010 = -1;
int64_t x1012 = -1LL;
static int32_t t161 = 0;
int8_t x1029 = 1;
int8_t x1031 = INT8_MAX;
static int64_t x1035 = -1LL;
int8_t x1055 = INT8_MAX;
volatile int16_t x1062 = INT16_MAX;
uint64_t x1068 = UINT64_MAX;
int8_t x1076 = -1;
int16_t x1110 = INT16_MIN;
int32_t t177 = 343;
volatile int64_t t178 = -21376489LL;
static volatile uint8_t x1148 = UINT8_MAX;
int64_t t181 = -30LL;
int64_t x1153 = -24607358LL;
uint16_t x1156 = 3U;
uint8_t x1175 = 0U;
int16_t x1186 = -1;
uint32_t x1201 = 18743U;
uint8_t x1203 = UINT8_MAX;
int8_t x1208 = INT8_MIN;
uint64_t x1221 = 8732102725194070LLU;
static int16_t x1226 = INT16_MAX;
static int16_t x1228 = -1;
volatile int32_t x1240 = -1;
volatile int32_t x1244 = -1;
int8_t x1245 = -1;
volatile uint64_t t196 = 4LLU;
volatile int8_t x1257 = -1;
static volatile uint32_t x1259 = UINT32_MAX;
static int8_t x1264 = INT8_MIN;
volatile uint32_t x1265 = 1645604615U;
static int8_t x1268 = 13;


void f0(void) {
    	static volatile uint32_t x9 = 113978986U;
	volatile int8_t x11 = INT8_MIN;
	int16_t x12 = -1;
	static uint32_t t0 = 337U;

    t0 = ((x9^x10)*(x11+x12));

    if (t0 != 2628981880U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x13 = INT8_MIN;
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = 1;
	int8_t x16 = INT8_MIN;
	volatile int32_t t1 = -1;

    t1 = ((x13^x14)*(x15+x16));

    if (t1 != 16383) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x17 = 17U;
	int32_t x18 = INT32_MIN;
	static volatile int16_t x19 = -12322;
	volatile int8_t x20 = INT8_MIN;
	volatile uint32_t t2 = 348726099U;

    t2 = ((x17^x18)*(x19+x20));

    if (t2 != 4294755646U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x21 = -1;
	volatile int64_t x22 = 48867105837503LL;
	uint64_t x23 = 0LLU;
	int32_t x24 = -1;
	volatile uint64_t t3 = 45716LLU;

    t3 = ((x21^x22)*(x23+x24));

    if (t3 != 48867105837504LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x26 = INT64_MIN;
	static volatile uint8_t x27 = 1U;
	int32_t x28 = INT32_MIN;
	static int64_t t4 = 214653LL;

    t4 = ((x25^x26)*(x27+x28));

    if (t4 != 2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = INT32_MAX;
	int8_t x30 = INT8_MIN;
	volatile uint32_t x31 = UINT32_MAX;
	int64_t x32 = -1LL;
	int64_t t5 = -48600203618470508LL;

    t5 = ((x29^x30)*(x31+x32));

    if (t5 != -9223371487098962174LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = 448LL;
	static int8_t x34 = INT8_MIN;
	int32_t x35 = -1;
	volatile uint64_t x36 = 47584LLU;
	volatile uint64_t t6 = 56209394LLU;

    t6 = ((x33^x34)*(x35+x36));

    if (t6 != 18446744073688234432LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x41 = -1;
	volatile int8_t x42 = -2;
	int64_t x43 = 141270604LL;
	int32_t x44 = -1;
	volatile int64_t t7 = -511449434303LL;

    t7 = ((x41^x42)*(x43+x44));

    if (t7 != 141270603LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x49 = -1;
	int32_t x50 = -57;
	uint32_t x51 = 1U;
	uint8_t x52 = 2U;

    t8 = ((x49^x50)*(x51+x52));

    if (t8 != 168U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x55 = INT16_MIN;
	uint64_t t9 = 44583LLU;

    t9 = ((x53^x54)*(x55+x56));

    if (t9 != 4210688LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x61 = INT32_MIN;
	uint32_t x62 = 99559005U;
	uint64_t x63 = UINT64_MAX;

    t10 = ((x61^x62)*(x63+x64));

    if (t10 != 9223372032360690502LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x65 = -1;
	uint8_t x66 = UINT8_MAX;
	volatile int32_t x67 = 162186;
	int64_t x68 = -1LL;
	int64_t t11 = 67539214652420779LL;

    t11 = ((x65^x66)*(x67+x68));

    if (t11 != -41519360LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x73 = 86580929LLU;
	static uint8_t x74 = UINT8_MAX;
	uint64_t x75 = 6439LLU;
	uint8_t x76 = UINT8_MAX;

    t12 = ((x73^x74)*(x75+x76));

    if (t12 != 579571861812LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	volatile int16_t x83 = INT16_MIN;
	volatile uint32_t x84 = UINT32_MAX;
	uint32_t t13 = 395106U;

    t13 = ((x81^x82)*(x83+x84));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x85 = 50U;
	static volatile int8_t x86 = INT8_MIN;

    t14 = ((x85^x86)*(x87+x88));

    if (t14 != 2555670) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x89 = UINT32_MAX;
	int8_t x90 = INT8_MIN;
	int64_t x91 = 8712898047LL;
	int16_t x92 = 578;
	static int64_t t15 = 5954666LL;

    t15 = ((x89^x90)*(x91+x92));

    if (t15 != 1106538125375LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x97 = -48;
	static int64_t x98 = INT64_MAX;
	volatile int32_t x99 = INT32_MIN;
	uint64_t x100 = 2LLU;
	uint64_t t16 = 742989239197LLU;

    t16 = ((x97^x98)*(x99+x100));

    if (t16 != 18446743972777820254LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x105 = UINT64_MAX;
	int32_t x106 = -966;
	uint8_t x108 = UINT8_MAX;
	volatile uint64_t t17 = 0LLU;

    t17 = ((x105^x106)*(x107+x108));

    if (t17 != 18446744073678176571LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x113 = 2U;
	static uint64_t x114 = 833611527LLU;
	static int16_t x116 = 1;
	volatile uint64_t t18 = 51670266LLU;

    t18 = ((x113^x114)*(x115+x116));

    if (t18 != 4493585426347075LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x118 = INT8_MIN;
	uint8_t x119 = 17U;
	static int16_t x120 = INT16_MIN;

    t19 = ((x117^x118)*(x119+x120));

    if (t19 != 7555984480395784915LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x126 = INT32_MIN;
	volatile uint16_t x127 = 22U;
	volatile int32_t x128 = 1210;

    t20 = ((x125^x126)*(x127+x128));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x129 = 111365883806LLU;
	int8_t x130 = INT8_MIN;
	static int16_t x132 = -1;
	uint64_t t21 = 4478498343LLU;

    t21 = ((x129^x130)*(x131+x132));

    if (t21 != 111365883874LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x133 = INT8_MIN;
	static uint32_t x134 = 798U;
	int64_t x135 = -133289600LL;
	int8_t x136 = -1;
	volatile int64_t t22 = -1037353LL;

    t22 = ((x133^x134)*(x135+x136));

    if (t22 != -572474361763094430LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x145 = 8U;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = -35;
	int32_t t23 = 29;

    t23 = ((x145^x146)*(x147+x148));

    if (t23 != -7207200) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x149 = 9566;
	int8_t x150 = -51;
	int64_t x151 = INT64_MIN;
	uint64_t x152 = 45LLU;
	uint64_t t24 = 3465252323LLU;

    t24 = ((x149^x150)*(x151+x152));

    if (t24 != 9223372036854344663LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x161 = 16U;
	static int32_t x162 = 2227510;

    t25 = ((x161^x162)*(x163+x164));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x169 = INT8_MIN;
	static int32_t x170 = -43;
	int16_t x171 = -1;
	uint16_t x172 = 1U;
	int32_t t26 = -1;

    t26 = ((x169^x170)*(x171+x172));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x174 = INT8_MIN;
	int16_t x175 = -1;
	int16_t x176 = INT16_MAX;
	int32_t t27 = 106579;

    t27 = ((x173^x174)*(x175+x176));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x177 = -1;
	volatile int8_t x178 = INT8_MIN;
	volatile int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MIN;
	int32_t t28 = 23636;

    t28 = ((x177^x178)*(x179+x180));

    if (t28 != -4177792) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x181 = 65U;
	uint64_t x182 = 1941322273894370LLU;
	uint16_t x183 = 3U;
	volatile int64_t x184 = INT64_MIN;
	volatile uint64_t t29 = 1143233690269LLU;

    t29 = ((x181^x182)*(x183+x184));

    if (t29 != 9229196003676458729LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MAX;
	static volatile uint64_t x187 = 251786941682988LLU;
	volatile uint64_t t30 = 1293LLU;

    t30 = ((x185^x186)*(x187+x188));

    if (t30 != 2654221371788410965LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x193 = -1;
	int8_t x194 = 0;
	int16_t x196 = -1886;

    t31 = ((x193^x194)*(x195+x196));

    if (t31 != 1844LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x198 = -1;
	int16_t x199 = 201;
	int32_t x200 = -101;
	int32_t t32 = 61147882;

    t32 = ((x197^x198)*(x199+x200));

    if (t32 != 24167500) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x201 = 108U;
	static int64_t x202 = INT64_MIN;
	volatile int16_t x203 = INT16_MAX;
	uint64_t x204 = 2065887LLU;
	volatile uint64_t t33 = 39629554081771329LLU;

    t33 = ((x201^x202)*(x203+x204));

    if (t33 != 226654632LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x206 = INT8_MAX;
	static uint8_t x207 = UINT8_MAX;
	static volatile int16_t x208 = INT16_MIN;
	uint32_t t34 = 91363346U;

    t34 = ((x205^x206)*(x207+x208));

    if (t34 != 3256632128U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x215 = -427841;
	int32_t x216 = -428;

    t35 = ((x213^x214)*(x215+x216));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x221 = INT32_MAX;
	uint64_t x223 = UINT64_MAX;
	uint64_t t36 = 964502733223606LLU;

    t36 = ((x221^x222)*(x223+x224));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x229 = 0;
	static int16_t x230 = -28;
	volatile int16_t x232 = INT16_MIN;
	int32_t t37 = 251441697;

    t37 = ((x229^x230)*(x231+x232));

    if (t37 != 913948) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	uint32_t x238 = 1574149424U;
	int32_t x239 = -74120;
	uint64_t t38 = 56094LLU;

    t38 = ((x237^x238)*(x239+x240));

    if (t38 != 116669658783300LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x241 = 1255LLU;
	volatile uint16_t x242 = 102U;
	int16_t x243 = -13120;
	int32_t x244 = INT32_MAX;

    t39 = ((x241^x242)*(x243+x244));

    if (t39 != 2476033517631LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x245 = INT8_MIN;
	static int16_t x246 = 68;
	int64_t x248 = 495208116791836LL;
	int64_t t40 = -2693098543532LL;

    t40 = ((x245^x246)*(x247+x248));

    if (t40 != -29712487926839400LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x253 = 85950602726112748LLU;
	int64_t x255 = -551044LL;
	int8_t x256 = -1;
	static volatile uint64_t t41 = 7140444LLU;

    t41 = ((x253^x254)*(x255+x256));

    if (t41 != 9857841998380774433LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x257 = 1442U;
	static int8_t x260 = INT8_MIN;
	int64_t t42 = -4976184891284560LL;

    t42 = ((x257^x258)*(x259+x260));

    if (t42 != -8362301200704LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x261 = -37813;
	int16_t x263 = INT16_MIN;

    t43 = ((x261^x262)*(x263+x264));

    if (t43 != -1980535831) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x265 = INT32_MIN;
	uint32_t x267 = 329295430U;
	volatile uint8_t x268 = 0U;
	volatile uint32_t t44 = 3239148U;

    t44 = ((x265^x266)*(x267+x268));

    if (t44 != 4097193412U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x269 = UINT64_MAX;
	int8_t x270 = INT8_MIN;
	volatile int64_t x271 = INT64_MAX;
	static volatile uint64_t t45 = 2151951820498149LLU;

    t45 = ((x269^x270)*(x271+x272));

    if (t45 != 9223372036850614145LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x273 = 8U;
	volatile uint32_t x274 = 2U;
	int64_t x275 = INT64_MAX;
	uint64_t x276 = UINT64_MAX;
	static uint64_t t46 = 4016168428114LLU;

    t46 = ((x273^x274)*(x275+x276));

    if (t46 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x281 = INT8_MAX;
	uint8_t x282 = 3U;
	int32_t t47 = -5;

    t47 = ((x281^x282)*(x283+x284));

    if (t47 != 31124) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x293 = -1LL;
	static uint16_t x294 = 25114U;
	static uint16_t x295 = UINT16_MAX;
	int8_t x296 = -1;
	volatile int64_t t48 = 102192686LL;

    t48 = ((x293^x294)*(x295+x296));

    if (t48 != -1645886410LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x297 = 1;
	uint32_t x299 = 31177U;
	static int64_t x300 = 30850813313625832LL;
	int64_t t49 = 27598LL;

    t49 = ((x297^x298)*(x299+x300));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint16_t x305 = UINT16_MAX;
	static uint64_t x306 = UINT64_MAX;
	volatile int8_t x307 = -1;
	int32_t x308 = INT32_MAX;
	volatile uint64_t t50 = 515956LLU;

    t50 = ((x305^x306)*(x307+x308));

    if (t50 != 18446603336221327360LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x309 = INT16_MIN;
	uint64_t x310 = 2597815687521318389LLU;
	uint16_t x311 = 1825U;
	static int64_t x312 = INT64_MIN;
	uint64_t t51 = 1320271LLU;

    t51 = ((x309^x310)*(x311+x312));

    if (t51 != 9022969253794097045LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x314 = 127;
	int8_t x315 = -26;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t52 = 0U;

    t52 = ((x313^x314)*(x315+x316));

    if (t52 != 27U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x318 = UINT8_MAX;
	uint16_t x320 = UINT16_MAX;
	static volatile int64_t t53 = 1355121198LL;

    t53 = ((x317^x318)*(x319+x320));

    if (t53 != -687648262LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x321 = 27112154548385LLU;
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = -1LL;
	static uint64_t t54 = 192414322563LLU;

    t54 = ((x321^x322)*(x323+x324));

    if (t54 != 18321621480468750226LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x325 = -2016761915554LL;
	static uint64_t x327 = 1474020669138645LLU;
	int16_t x328 = -236;
	volatile uint64_t t55 = 50264357502884LLU;

    t55 = ((x325^x326)*(x327+x328));

    if (t55 != 8182037032370292061LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x333 = UINT8_MAX;
	static int8_t x334 = INT8_MAX;
	uint8_t x335 = 118U;

    t56 = ((x333^x334)*(x335+x336));

    if (t56 != -1280) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x337 = 602679U;
	uint64_t x338 = 90133100419LLU;
	volatile uint16_t x340 = 1U;
	uint64_t t57 = 755LLU;

    t57 = ((x337^x338)*(x339+x340));

    if (t57 != 18446743623047062396LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x349 = -98;
	int64_t x350 = -35376266LL;
	static volatile int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	static int64_t t58 = 16375331367LL;

    t58 = ((x349^x350)*(x351+x352));

    if (t58 != -9056348160LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x353 = INT8_MAX;
	static uint64_t x354 = 624050LLU;
	int64_t x356 = -1LL;
	uint64_t t59 = 17846222766LLU;

    t59 = ((x353^x354)*(x355+x356));

    if (t59 != 18446744073708303462LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x357 = UINT32_MAX;
	uint64_t x360 = 2944LLU;
	uint64_t t60 = 641967226161LLU;

    t60 = ((x357^x358)*(x359+x360));

    if (t60 != 469809316043804117LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x361 = UINT8_MAX;
	uint8_t x362 = 1U;
	int16_t x363 = INT16_MAX;
	uint8_t x364 = 3U;
	volatile int32_t t61 = -1;

    t61 = ((x361^x362)*(x363+x364));

    if (t61 != 8323580) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x365 = 7342926161025562238LLU;
	uint32_t x366 = UINT32_MAX;
	int16_t x367 = INT16_MAX;
	int16_t x368 = 0;
	uint64_t t62 = 4041781848LLU;

    t62 = ((x365^x366)*(x367+x368));

    if (t62 != 4778600277577725567LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x369 = INT16_MAX;
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = -1;
	volatile uint64_t t63 = 83403593992LLU;

    t63 = ((x369^x370)*(x371+x372));

    if (t63 != 18442914857714450432LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x373 = 5;
	int16_t x374 = INT16_MIN;
	uint16_t x375 = 12468U;
	volatile int16_t x376 = INT16_MIN;
	int32_t t64 = -41;

    t64 = ((x373^x374)*(x375+x376));

    if (t64 != 665088900) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x379 = INT32_MIN;

    t65 = ((x377^x378)*(x379+x380));

    if (t65 != 4611676339718680574LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x381 = INT32_MIN;
	static int32_t x382 = -3;
	static volatile int32_t x383 = 20385;
	uint64_t x384 = 97LLU;
	volatile uint64_t t66 = 57341164LLU;

    t66 = ((x381^x382)*(x383+x384));

    if (t66 != 43984760016890LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x385 = -1065;
	volatile int8_t x386 = -47;
	uint16_t x387 = 3U;
	static uint32_t x388 = UINT32_MAX;
	static volatile uint32_t t67 = 1903183U;

    t67 = ((x385^x386)*(x387+x388));

    if (t67 != 2060U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x389 = -3;
	int8_t x390 = 1;
	static int8_t x391 = 1;
	uint32_t x392 = UINT32_MAX;
	volatile uint32_t t68 = 208U;

    t68 = ((x389^x390)*(x391+x392));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x393 = 2U;
	uint32_t x394 = 379213396U;
	uint32_t x395 = UINT32_MAX;
	uint64_t x396 = 377179276LLU;

    t69 = ((x393^x394)*(x395+x396));

    if (t69 != 1771740577142958258LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x397 = UINT16_MAX;
	int8_t x398 = 0;
	int16_t x399 = 519;
	static int64_t x400 = 251648LL;
	volatile int64_t t70 = -55896364LL;

    t70 = ((x397^x398)*(x399+x400));

    if (t70 != 16525764345LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x401 = INT16_MAX;
	uint8_t x402 = 3U;
	static uint32_t x403 = UINT32_MAX;
	int8_t x404 = -1;
	static volatile uint32_t t71 = 57U;

    t71 = ((x401^x402)*(x403+x404));

    if (t71 != 4294901768U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x411 = INT32_MIN;
	int8_t x412 = 0;
	volatile uint32_t t72 = 1U;

    t72 = ((x409^x410)*(x411+x412));

    if (t72 != 2147483648U) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x417 = -1;
	uint64_t x418 = 1756148476700633935LLU;
	uint64_t x420 = 398LLU;
	uint64_t t73 = 153850799356799LLU;

    t73 = ((x417^x418)*(x419+x420));

    if (t73 != 428552093450982640LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x421 = -35;
	static int16_t x423 = INT16_MAX;
	volatile int64_t t74 = -10035200799922042LL;

    t74 = ((x421^x422)*(x423+x424));

    if (t74 != -9223372036854775773LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x457 = 1110U;
	uint64_t x458 = 48538422504LLU;
	int8_t x460 = -1;
	uint64_t t75 = 249955757LLU;

    t75 = ((x457^x458)*(x459+x460));

    if (t75 != 18446743782479022988LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x465 = -1LL;
	int64_t x466 = INT64_MIN;
	uint64_t x467 = UINT64_MAX;
	static int64_t x468 = INT64_MIN;
	uint64_t t76 = 65330025226386809LLU;

    t76 = ((x465^x466)*(x467+x468));

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x473 = INT8_MAX;
	int8_t x474 = INT8_MIN;
	static volatile uint32_t x476 = 5376U;
	static int64_t t77 = 500608427163786693LL;

    t77 = ((x473^x474)*(x475+x476));

    if (t77 != -5375LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x478 = -1;
	static int64_t x479 = INT64_MAX;
	uint64_t x480 = UINT64_MAX;
	volatile uint64_t t78 = 39753642832345463LLU;

    t78 = ((x477^x478)*(x479+x480));

    if (t78 != 9223372036854775554LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x485 = UINT16_MAX;
	uint64_t x486 = 531862155798262616LLU;
	volatile int16_t x487 = INT16_MIN;
	uint64_t x488 = 8595855683502LLU;
	uint64_t t79 = 131954643LLU;

    t79 = ((x485^x486)*(x487+x488));

    if (t79 != 1165157920022315650LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x493 = 492219U;
	int16_t x494 = 0;
	volatile uint32_t t80 = 229U;

    t80 = ((x493^x494)*(x495+x496));

    if (t80 != 1613078043U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x501 = INT8_MIN;
	int8_t x502 = INT8_MIN;
	uint64_t x503 = UINT64_MAX;
	volatile int32_t x504 = INT32_MIN;

    t81 = ((x501^x502)*(x503+x504));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x510 = UINT16_MAX;
	uint16_t x511 = UINT16_MAX;
	uint32_t x512 = 336U;
	static uint32_t t82 = 110204U;

    t82 = ((x509^x510)*(x511+x512));

    if (t82 != 21888689U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x513 = INT16_MIN;
	int64_t x514 = -1LL;
	volatile int8_t x515 = INT8_MAX;
	volatile int64_t t83 = -171LL;

    t83 = ((x513^x514)*(x515+x516));

    if (t83 != 8322818LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x521 = 1230726093LLU;
	static uint8_t x522 = UINT8_MAX;
	static uint8_t x524 = 43U;
	uint64_t t84 = 3965155522816959LLU;

    t84 = ((x521^x522)*(x523+x524));

    if (t84 != 18446703798203230566LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x526 = INT16_MAX;
	uint8_t x527 = 47U;
	static uint8_t x528 = 1U;
	volatile uint64_t t85 = 92419407505292LLU;

    t85 = ((x525^x526)*(x527+x528));

    if (t85 != 18446744073707978752LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x533 = -1LL;
	volatile int64_t x534 = INT64_MAX;
	volatile uint64_t x536 = UINT64_MAX;
	volatile uint64_t t86 = 364951LLU;

    t86 = ((x533^x534)*(x535+x536));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x541 = INT16_MIN;
	int16_t x542 = INT16_MIN;
	static int64_t x543 = -1LL;
	static uint8_t x544 = UINT8_MAX;
	static int64_t t87 = 14228LL;

    t87 = ((x541^x542)*(x543+x544));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x549 = -1;
	static int16_t x550 = 11;
	static uint64_t x551 = UINT64_MAX;
	int8_t x552 = INT8_MAX;
	uint64_t t88 = 5257LLU;

    t88 = ((x549^x550)*(x551+x552));

    if (t88 != 18446744073709550104LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x553 = 4;
	static int32_t x554 = -1;
	int64_t x555 = -153965557LL;
	static int64_t x556 = -45LL;
	static volatile int64_t t89 = 199LL;

    t89 = ((x553^x554)*(x555+x556));

    if (t89 != 769828010LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x574 = -1;
	int16_t x575 = 3;
	uint8_t x576 = UINT8_MAX;

    t90 = ((x573^x574)*(x575+x576));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x577 = -29;
	uint8_t x578 = 100U;
	int16_t x580 = INT16_MIN;

    t91 = ((x577^x578)*(x579+x580));

    if (t91 != 3964323) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x581 = -1;
	uint16_t x582 = 9144U;
	static uint16_t x583 = 2277U;
	int16_t x584 = INT16_MIN;

    t92 = ((x581^x582)*(x583+x584));

    if (t92 != 278840195) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x585 = INT16_MAX;
	volatile int16_t x587 = INT16_MIN;
	static int16_t x588 = 1;
	int32_t t93 = -84269441;

    t93 = ((x585^x586)*(x587+x588));

    if (t93 != -1073643522) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x593 = INT32_MAX;
	int64_t x594 = 65752857LL;
	uint32_t x595 = 13674749U;
	int32_t x596 = 250890;
	static int64_t t94 = -29LL;

    t94 = ((x593^x594)*(x595+x596));

    if (t94 != 28989431476724810LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x597 = INT16_MIN;
	int8_t x598 = 0;
	uint16_t x600 = 19667U;

    t95 = ((x597^x598)*(x599+x600));

    if (t95 != -1491795968) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x602 = -1LL;
	volatile uint64_t x603 = UINT64_MAX;
	static uint8_t x604 = 45U;
	uint64_t t96 = 1752LLU;

    t96 = ((x601^x602)*(x603+x604));

    if (t96 != 18446744073709182808LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x605 = -1;
	int8_t x606 = INT8_MAX;
	static volatile int32_t x608 = INT32_MIN;

    t97 = ((x605^x606)*(x607+x608));

    if (t97 != 291710362752LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x617 = UINT64_MAX;
	int32_t x620 = 671338989;
	uint64_t t98 = 1667085122980529LLU;

    t98 = ((x617^x618)*(x619+x620));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x621 = -1LL;
	uint32_t x623 = UINT32_MAX;
	static int64_t t99 = -72943609023LL;

    t99 = ((x621^x622)*(x623+x624));

    if (t99 != 16002LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x625 = 8U;
	int32_t x626 = INT32_MIN;
	volatile uint64_t x627 = UINT64_MAX;
	uint64_t t100 = 2290734LLU;

    t100 = ((x625^x626)*(x627+x628));

    if (t100 != 277025389560LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x637 = -1;
	int8_t x638 = INT8_MIN;
	int16_t x640 = INT16_MAX;

    t101 = ((x637^x638)*(x639+x640));

    if (t101 != 4161282) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x644 = 200U;

    t102 = ((x641^x642)*(x643+x644));

    if (t102 != -9144) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x649 = UINT8_MAX;
	int8_t x650 = 0;
	static int32_t x651 = -1062;
	int8_t x652 = -9;
	static volatile int32_t t103 = -1818;

    t103 = ((x649^x650)*(x651+x652));

    if (t103 != -273105) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x653 = -1;
	uint16_t x654 = 185U;
	uint64_t x655 = 7469732LLU;
	volatile int16_t x656 = INT16_MAX;
	static uint64_t t104 = 17582993875860LLU;

    t104 = ((x653^x654)*(x655+x656));

    if (t104 != 18446744072314086802LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x657 = -12861;
	int8_t x658 = 10;
	volatile uint8_t x660 = 1U;
	volatile uint64_t t105 = 103376871810052916LLU;

    t105 = ((x657^x658)*(x659+x660));

    if (t105 != 5792439048622022206LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x661 = 4U;
	static uint32_t x662 = 31477995U;
	static uint32_t x663 = 110273234U;
	volatile uint32_t t106 = 1660U;

    t106 = ((x661^x662)*(x663+x664));

    if (t106 != 1034375455U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x665 = -1886995;
	static int16_t x666 = INT16_MIN;
	int8_t x667 = INT8_MIN;
	uint32_t x668 = UINT32_MAX;

    t107 = ((x665^x666)*(x667+x668));

    if (t107 != 4052276371U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x674 = INT32_MIN;
	int32_t x675 = INT32_MAX;
	int32_t t108 = 82508;

    t108 = ((x673^x674)*(x675+x676));

    if (t108 != -2147483647) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int64_t x677 = -1LL;
	static volatile int8_t x678 = INT8_MAX;
	int16_t x679 = 9417;
	int64_t x680 = 1325509LL;
	volatile int64_t t109 = -863994877LL;

    t109 = ((x677^x678)*(x679+x680));

    if (t109 != -170870528LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x681 = UINT16_MAX;
	static int16_t x682 = -7;
	uint32_t x683 = UINT32_MAX;
	int8_t x684 = -2;
	volatile uint32_t t110 = 226547U;

    t110 = ((x681^x682)*(x683+x684));

    if (t110 != 196590U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x685 = 7U;
	int8_t x686 = INT8_MIN;
	int16_t x688 = -1;
	uint32_t t111 = 399867U;

    t111 = ((x685^x686)*(x687+x688));

    if (t111 != 855256010U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x689 = 7U;
	int32_t x690 = 27;
	int16_t x691 = -1;
	static int32_t t112 = -403;

    t112 = ((x689^x690)*(x691+x692));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x693 = UINT64_MAX;
	static int16_t x694 = INT16_MAX;
	volatile int8_t x695 = INT8_MIN;

    t113 = ((x693^x694)*(x695+x696));

    if (t113 != 18446706482857213952LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x701 = INT8_MAX;
	uint64_t x702 = 5944545847059LLU;
	uint64_t x703 = 2766693LLU;
	volatile uint16_t x704 = 3U;

    t114 = ((x701^x702)*(x703+x704));

    if (t114 != 16446751217120983008LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x706 = INT64_MIN;
	uint64_t x708 = 532LLU;
	volatile uint64_t t115 = 943236936579062374LLU;

    t115 = ((x705^x706)*(x707+x708));

    if (t115 != 9223372036856427483LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x709 = INT64_MAX;
	int64_t x710 = -20489934LL;
	volatile uint64_t x711 = UINT64_MAX;
	volatile int32_t x712 = -251074719;
	uint64_t t116 = 4610LLU;

    t116 = ((x709^x710)*(x711+x712));

    if (t116 != 18441599569518757856LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x713 = INT64_MAX;
	volatile int8_t x714 = INT8_MIN;
	int8_t x715 = -1;
	uint64_t x716 = 1269680151583508398LLU;
	volatile uint64_t t117 = 5272786476LLU;

    t117 = ((x713^x714)*(x715+x716));

    if (t117 != 4452054624574377683LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x718 = 8976977;
	static int8_t x719 = -1;
	volatile int32_t t118 = -1978509;

    t118 = ((x717^x718)*(x719+x720));

    if (t118 != 1131100110) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x722 = 28885769606933351LLU;
	int32_t x723 = INT32_MAX;

    t119 = ((x721^x722)*(x723+x724));

    if (t119 != 18417858304102618302LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x725 = INT8_MIN;
	uint32_t x726 = UINT32_MAX;
	int16_t x727 = INT16_MAX;
	uint8_t x728 = UINT8_MAX;
	static uint32_t t120 = 205650852U;

    t120 = ((x725^x726)*(x727+x728));

    if (t120 != 4193794U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x733 = 62U;
	static int8_t x734 = -1;
	uint32_t x735 = UINT32_MAX;
	int8_t x736 = INT8_MAX;
	uint32_t t121 = 1574214U;

    t121 = ((x733^x734)*(x735+x736));

    if (t121 != 4294959358U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x737 = INT8_MAX;
	volatile int8_t x740 = INT8_MAX;

    t122 = ((x737^x738)*(x739+x740));

    if (t122 != 18446744073701146880LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x741 = 4088U;
	volatile int8_t x744 = 4;

    t123 = ((x741^x742)*(x743+x744));

    if (t123 != 3280080180U) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x761 = 96U;
	volatile uint16_t x762 = UINT16_MAX;
	uint64_t x763 = UINT64_MAX;
	int64_t x764 = INT64_MAX;
	volatile uint64_t t124 = 586277021691LLU;

    t124 = ((x761^x762)*(x763+x764));

    if (t124 != 9223372036854644930LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x773 = UINT32_MAX;
	uint16_t x774 = UINT16_MAX;
	int16_t x775 = INT16_MIN;
	static uint32_t x776 = 5723539U;
	uint32_t t125 = 55178U;

    t125 = ((x773^x774)*(x775+x776));

    if (t125 != 711786496U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x777 = 354680U;
	volatile uint64_t x779 = 461615955657LLU;
	uint16_t x780 = UINT16_MAX;
	uint64_t t126 = 79LLU;

    t126 = ((x777^x778)*(x779+x780));

    if (t126 != 163582407813787848LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x781 = 0U;
	static int16_t x783 = INT16_MIN;
	uint32_t x784 = 3364U;
	uint32_t t127 = 16162U;

    t127 = ((x781^x782)*(x783+x784));

    if (t127 != 963510272U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x789 = 57U;
	int8_t x790 = INT8_MIN;
	int8_t x791 = -1;
	uint8_t x792 = UINT8_MAX;
	volatile int32_t t128 = 2;

    t128 = ((x789^x790)*(x791+x792));

    if (t128 != -18034) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x798 = UINT64_MAX;
	int8_t x799 = -14;
	int8_t x800 = INT8_MIN;
	volatile uint64_t t129 = 6921LLU;

    t129 = ((x797^x798)*(x799+x800));

    if (t129 != 619279892LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x814 = -2;
	int32_t x815 = -217942;
	static volatile int16_t x816 = -1;
	volatile int32_t t130 = 23249;

    t130 = ((x813^x814)*(x815+x816));

    if (t130 != -27460818) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x817 = -1;
	static uint8_t x819 = 1U;
	uint32_t x820 = UINT32_MAX;
	uint64_t t131 = 12684568234899LLU;

    t131 = ((x817^x818)*(x819+x820));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x821 = INT8_MAX;
	int8_t x822 = -3;
	static int16_t x823 = INT16_MIN;
	int16_t x824 = INT16_MIN;
	static volatile int32_t t132 = -173;

    t132 = ((x821^x822)*(x823+x824));

    if (t132 != 8257536) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x829 = INT32_MIN;
	uint8_t x830 = UINT8_MAX;
	int64_t x832 = -35523LL;
	volatile int64_t t133 = -5299620674LL;

    t133 = ((x829^x830)*(x831+x832));

    if (t133 != 75763214105040LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x833 = -47536756234720023LL;
	uint64_t x834 = 438143485885538078LLU;
	int8_t x835 = -12;
	int8_t x836 = -20;
	uint64_t t134 = 245295932642028LLU;

    t134 = ((x833^x834)*(x835+x836));

    if (t134 != 15532748037349277984LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x839 = 156874U;
	int64_t x840 = -1LL;

    t135 = ((x837^x838)*(x839+x840));

    if (t135 != -162991047LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x850 = -549338154519360LL;
	volatile int32_t x851 = -1;
	int64_t t136 = 3LL;

    t136 = ((x849^x850)*(x851+x852));

    if (t136 != -1098676309038718LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x854 = INT16_MAX;
	static uint8_t x855 = UINT8_MAX;
	int64_t x856 = -1LL;
	static int64_t t137 = 1549480964120770535LL;

    t137 = ((x853^x854)*(x855+x856));

    if (t137 != 7592060LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x857 = INT16_MAX;
	int8_t x859 = -22;
	int8_t x860 = INT8_MIN;
	static volatile int32_t t138 = -41804185;

    t138 = ((x857^x858)*(x859+x860));

    if (t138 != -4912950) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x861 = 28U;
	static volatile int8_t x862 = 5;
	int16_t x863 = INT16_MIN;
	static int8_t x864 = 50;
	uint32_t t139 = 107U;

    t139 = ((x861^x862)*(x863+x864));

    if (t139 != 4294149346U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x865 = 105U;
	int8_t x866 = INT8_MIN;
	uint8_t x867 = 41U;
	int16_t x868 = -246;
	uint32_t t140 = 1479157U;

    t140 = ((x865^x866)*(x867+x868));

    if (t140 != 4715U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x870 = 1U;
	int8_t x871 = 1;
	static uint8_t x872 = 1U;
	volatile int32_t t141 = -362950;

    t141 = ((x869^x870)*(x871+x872));

    if (t141 != 96) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x873 = 127532LLU;
	static int64_t x874 = 308831LL;
	int64_t x875 = INT64_MIN;
	uint64_t t142 = 231773990737414LLU;

    t142 = ((x873^x874)*(x875+x876));

    if (t142 != 9223372036898616589LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x877 = 0U;
	uint8_t x878 = 101U;
	volatile int16_t x880 = INT16_MIN;
	int32_t t143 = -17;

    t143 = ((x877^x878)*(x879+x880));

    if (t143 != -6619136) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x886 = UINT8_MAX;
	static uint64_t x887 = 320267221128525LLU;

    t144 = ((x885^x886)*(x887+x888));

    if (t144 != 60850772014383270LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x893 = -1;
	int64_t x894 = -2171386371LL;
	volatile uint8_t x895 = 0U;
	int16_t x896 = INT16_MAX;
	volatile int64_t t145 = -5305LL;

    t145 = ((x893^x894)*(x895+x896));

    if (t145 != 71149817185790LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x897 = -39976679LL;
	int32_t x898 = -1;
	uint16_t x899 = 1U;
	int16_t x900 = -1;
	int64_t t146 = 50284462426064042LL;

    t146 = ((x897^x898)*(x899+x900));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x902 = 8U;
	int16_t x903 = 0;
	static volatile int32_t t147 = 13;

    t147 = ((x901^x902)*(x903+x904));

    if (t147 != -1073446912) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x905 = -1;
	static int32_t x906 = -1;
	int32_t t148 = -11752706;

    t148 = ((x905^x906)*(x907+x908));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x917 = -1;
	uint64_t x918 = 294LLU;
	static int64_t x919 = -1LL;
	int16_t x920 = INT16_MAX;
	volatile uint64_t t149 = 178LLU;

    t149 = ((x917^x918)*(x919+x920));

    if (t149 != 18446744073699885646LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x926 = -1;
	volatile uint64_t x927 = 183LLU;
	volatile uint16_t x928 = 27381U;
	uint64_t t150 = 3933060LLU;

    t150 = ((x925^x926)*(x927+x928));

    if (t150 != 18446744073709468924LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x929 = 20969;
	volatile int16_t x930 = -1;
	static uint64_t x931 = UINT64_MAX;
	static uint32_t x932 = 304446U;

    t151 = ((x929^x930)*(x931+x932));

    if (t151 != 18446744067325339966LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x941 = INT16_MIN;
	volatile int64_t x942 = -1LL;
	volatile int64_t t152 = -669LL;

    t152 = ((x941^x942)*(x943+x944));

    if (t152 != 15904905198LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x949 = INT8_MAX;
	uint8_t x950 = 88U;
	volatile uint32_t t153 = 173939U;

    t153 = ((x949^x950)*(x951+x952));

    if (t153 != 2147487353U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x957 = INT16_MIN;
	volatile int8_t x958 = -1;
	static volatile int8_t x959 = 51;
	uint64_t x960 = 184932733763990960LLU;

    t154 = ((x957^x958)*(x959+x960));

    if (t154 != 9158831067960527389LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x969 = INT32_MIN;
	volatile int8_t x970 = INT8_MAX;
	uint8_t x972 = UINT8_MAX;
	volatile int64_t t155 = -432LL;

    t155 = ((x969^x970)*(x971+x972));

    if (t155 != -545460814334LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x973 = 986911333LLU;
	static int32_t x975 = 233;
	volatile uint16_t x976 = UINT16_MAX;

    t156 = ((x973^x974)*(x975+x976));

    if (t156 != 18446679164989320072LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x977 = 877347U;
	int8_t x978 = 2;
	uint16_t x979 = 0U;
	volatile int32_t x980 = INT32_MIN;
	volatile uint32_t t157 = 214058518U;

    t157 = ((x977^x978)*(x979+x980));

    if (t157 != 2147483648U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x1001 = -906;
	volatile int64_t x1002 = -3442699LL;
	uint64_t x1003 = UINT64_MAX;
	int8_t x1004 = INT8_MIN;
	static volatile uint64_t t158 = 90531572619604640LLU;

    t158 = ((x1001^x1002)*(x1003+x1004));

    if (t158 != 18446744073265328893LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1005 = 4138507U;
	static int32_t x1008 = INT32_MIN;
	volatile uint32_t t159 = 1513376190U;

    t159 = ((x1005^x1006)*(x1007+x1008));

    if (t159 != 12415521U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1009 = 32U;
	static int8_t x1011 = 1;
	volatile int64_t t160 = 5LL;

    t160 = ((x1009^x1010)*(x1011+x1012));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x1017 = 14U;
	uint16_t x1018 = 13466U;
	int16_t x1019 = INT16_MIN;
	int32_t x1020 = -1;

    t161 = ((x1017^x1018)*(x1019+x1020));

    if (t161 != -441070740) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x1030 = -1;
	int32_t x1032 = -336;
	static int32_t t162 = -285;

    t162 = ((x1029^x1030)*(x1031+x1032));

    if (t162 != 418) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1033 = 40;
	static uint16_t x1034 = 566U;
	int16_t x1036 = INT16_MIN;
	volatile int64_t t163 = -4558043048LL;

    t163 = ((x1033^x1034)*(x1035+x1036));

    if (t163 != -17760798LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x1037 = 8067032LLU;
	int64_t x1038 = INT64_MAX;
	volatile int16_t x1039 = INT16_MAX;
	int16_t x1040 = -1;
	volatile uint64_t t164 = 1LLU;

    t164 = ((x1037^x1038)*(x1039+x1040));

    if (t164 != 18446743809385148338LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x1045 = -7263LL;
	uint8_t x1046 = UINT8_MAX;
	uint64_t x1047 = UINT64_MAX;
	volatile int32_t x1048 = INT32_MAX;
	uint64_t t165 = 613LLU;

    t165 = ((x1045^x1046)*(x1047+x1048));

    if (t165 != 18446728332654426436LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1053 = INT16_MAX;
	uint32_t x1054 = 229577U;
	uint32_t x1056 = UINT32_MAX;
	static volatile uint32_t t166 = 65996228U;

    t166 = ((x1053^x1054)*(x1055+x1056));

    if (t166 != 33004692U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1061 = 839025U;
	int8_t x1063 = INT8_MIN;
	static int32_t x1064 = -7391;
	uint32_t t167 = 221720279U;

    t167 = ((x1061^x1062)*(x1063+x1064));

    if (t167 != 2333058894U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x1065 = -1;
	static int16_t x1066 = INT16_MIN;
	int8_t x1067 = INT8_MAX;
	volatile uint64_t t168 = 817783LLU;

    t168 = ((x1065^x1066)*(x1067+x1068));

    if (t168 != 4128642LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1069 = 17;
	volatile int8_t x1070 = 5;
	int64_t x1071 = -21623279LL;
	volatile int8_t x1072 = -20;
	volatile int64_t t169 = 0LL;

    t169 = ((x1069^x1070)*(x1071+x1072));

    if (t169 != -432465980LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1073 = UINT64_MAX;
	uint8_t x1074 = 1U;
	static int8_t x1075 = INT8_MIN;
	static uint64_t t170 = 6646850142LLU;

    t170 = ((x1073^x1074)*(x1075+x1076));

    if (t170 != 258LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1089 = 29214;
	volatile uint16_t x1090 = UINT16_MAX;
	static uint16_t x1091 = 0U;
	static uint64_t x1092 = 16790LLU;
	volatile uint64_t t171 = 142302991225302055LLU;

    t171 = ((x1089^x1090)*(x1091+x1092));

    if (t171 != 609829590LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1093 = -40342LL;
	uint8_t x1094 = 1U;
	static volatile int8_t x1095 = 4;
	volatile uint64_t x1096 = 1LLU;
	volatile uint64_t t172 = 2790LLU;

    t172 = ((x1093^x1094)*(x1095+x1096));

    if (t172 != 18446744073709349911LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1097 = INT32_MAX;
	static int64_t x1098 = INT64_MIN;
	static int64_t x1099 = INT64_MAX;
	volatile uint64_t x1100 = UINT64_MAX;
	uint64_t t173 = 2607614926LLU;

    t173 = ((x1097^x1098)*(x1099+x1100));

    if (t173 != 9223372032559808514LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x1101 = -1;
	static uint32_t x1102 = UINT32_MAX;
	volatile int8_t x1103 = -1;
	static int64_t x1104 = -1LL;
	volatile int64_t t174 = 18680078803446LL;

    t174 = ((x1101^x1102)*(x1103+x1104));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1105 = INT8_MAX;
	uint64_t x1106 = UINT64_MAX;
	static volatile int16_t x1107 = INT16_MIN;
	int64_t x1108 = -1LL;
	uint64_t t175 = 15800882LLU;

    t175 = ((x1105^x1106)*(x1107+x1108));

    if (t175 != 4194432LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x1109 = 8U;
	volatile uint8_t x1111 = 6U;
	volatile uint16_t x1112 = 30850U;
	int32_t t176 = 186351761;

    t176 = ((x1109^x1110)*(x1111+x1112));

    if (t176 != -1010842560) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1113 = -1;
	uint16_t x1114 = 456U;
	int8_t x1115 = 0;
	uint16_t x1116 = 1U;

    t177 = ((x1113^x1114)*(x1115+x1116));

    if (t177 != -457) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x1121 = UINT32_MAX;
	volatile uint32_t x1122 = 1684U;
	int16_t x1123 = -1;
	volatile int64_t x1124 = -60514056LL;

    t178 = ((x1121^x1122)*(x1123+x1124));

    if (t178 != -259905793797093827LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x1137 = -13LL;
	volatile int16_t x1138 = -1;
	static volatile uint32_t x1139 = UINT32_MAX;
	uint8_t x1140 = 1U;
	volatile int64_t t179 = -4LL;

    t179 = ((x1137^x1138)*(x1139+x1140));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1145 = INT16_MIN;
	uint8_t x1146 = UINT8_MAX;
	uint64_t x1147 = 513740539LLU;
	static volatile uint64_t t180 = 8785168LLU;

    t180 = ((x1145^x1146)*(x1147+x1148));

    if (t180 != 18446727370455116294LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1149 = 5834U;
	int16_t x1150 = -2;
	int64_t x1151 = 4275LL;
	static int16_t x1152 = INT16_MAX;

    t181 = ((x1149^x1150)*(x1151+x1152));

    if (t181 != 159093962401320LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1154 = 3;
	uint64_t x1155 = UINT64_MAX;
	uint64_t t182 = 17683817275186LLU;

    t182 = ((x1153^x1154)*(x1155+x1156));

    if (t182 != 18446744073660336898LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1165 = 5385U;
	uint32_t x1166 = UINT32_MAX;
	int32_t x1167 = INT32_MAX;
	uint32_t x1168 = UINT32_MAX;
	uint32_t t183 = 0U;

    t183 = ((x1165^x1166)*(x1167+x1168));

    if (t183 != 10772U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1169 = 120958366544LLU;
	int64_t x1170 = -82310222104LL;
	volatile int16_t x1171 = INT16_MIN;
	static uint64_t x1172 = 15241152LLU;
	static volatile uint64_t t184 = 124364165LLU;

    t184 = ((x1169^x1170)*(x1171+x1172));

    if (t184 != 17465998170490409472LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x1173 = INT16_MIN;
	volatile int16_t x1174 = INT16_MAX;
	static int64_t x1176 = 5733121LL;
	static int64_t t185 = 46904663089796127LL;

    t185 = ((x1173^x1174)*(x1175+x1176));

    if (t185 != -5733121LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x1177 = 0U;
	volatile int32_t x1178 = INT32_MAX;
	uint64_t x1179 = 2302404679LLU;
	uint8_t x1180 = 28U;
	uint64_t t186 = 14731711038998LLU;

    t186 = ((x1177^x1178)*(x1179+x1180));

    if (t186 != 4944376457058326429LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1185 = 7LLU;
	int64_t x1187 = -244067535LL;
	int64_t x1188 = INT64_MAX;
	volatile uint64_t t187 = 5995467019325058169LLU;

    t187 = ((x1185^x1186)*(x1187+x1188));

    if (t187 != 1952540288LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1189 = 15U;
	uint8_t x1190 = 113U;
	volatile int8_t x1191 = -1;
	int8_t x1192 = 40;
	static volatile uint32_t t188 = 1227U;

    t188 = ((x1189^x1190)*(x1191+x1192));

    if (t188 != 4914U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x1202 = 1464;
	uint32_t x1204 = UINT32_MAX;
	volatile uint32_t t189 = 291U;

    t189 = ((x1201^x1202)*(x1203+x1204));

    if (t189 != 4978146U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1205 = INT32_MIN;
	uint64_t x1206 = 142434752116LLU;
	int8_t x1207 = -2;
	volatile uint64_t t190 = 2441785412703931LLU;

    t190 = ((x1205^x1206)*(x1207+x1208));

    if (t190 != 18613474498840LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1222 = 11U;
	volatile int8_t x1223 = -13;
	volatile uint32_t x1224 = 1514U;
	volatile uint64_t t191 = 31258229118552708LLU;

    t191 = ((x1221^x1222)*(x1223+x1224));

    if (t191 != 13106886190516309577LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1225 = INT8_MIN;
	int16_t x1227 = INT16_MAX;
	static int32_t t192 = 257573068;

    t192 = ((x1225^x1226)*(x1227+x1228));

    if (t192 != -1069515006) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1233 = UINT16_MAX;
	volatile int16_t x1234 = 1993;
	volatile uint64_t x1235 = 1503543079LLU;
	static int8_t x1236 = INT8_MIN;
	static uint64_t t193 = 13585LLU;

    t193 = ((x1233^x1234)*(x1235+x1236));

    if (t193 != 95538126192442LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x1237 = UINT16_MAX;
	uint16_t x1238 = 2U;
	uint16_t x1239 = 19U;
	int32_t t194 = -183044;

    t194 = ((x1237^x1238)*(x1239+x1240));

    if (t194 != 1179594) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1241 = UINT32_MAX;
	int32_t x1242 = INT32_MAX;
	uint16_t x1243 = UINT16_MAX;
	volatile uint32_t t195 = 17185746U;

    t195 = ((x1241^x1242)*(x1243+x1244));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1246 = 2U;
	uint64_t x1247 = 58390515710819007LLU;
	int16_t x1248 = INT16_MIN;

    t196 = ((x1245^x1246)*(x1247+x1248));

    if (t196 != 18271572526577192899LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1258 = -1LL;
	volatile int32_t x1260 = -1;
	static volatile int64_t t197 = -3524LL;

    t197 = ((x1257^x1258)*(x1259+x1260));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1261 = INT8_MAX;
	uint16_t x1262 = 1136U;
	int8_t x1263 = 5;
	volatile int32_t t198 = -70451;

    t198 = ((x1261^x1262)*(x1263+x1264));

    if (t198 != -127797) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1266 = INT32_MAX;
	int32_t x1267 = INT32_MIN;
	static volatile uint32_t t199 = 891905U;

    t199 = ((x1265^x1266)*(x1267+x1268));

    if (t199 != 2229460120U) { NG(); } else { ; }
	
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

