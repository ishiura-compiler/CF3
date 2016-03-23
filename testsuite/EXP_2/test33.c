
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

uint16_t x5 = 0U;
int16_t x7 = -786;
uint32_t x23 = 14989U;
static volatile uint64_t t3 = 2LLU;
volatile int32_t t4 = -36;
static int8_t x65 = -1;
int8_t x66 = INT8_MIN;
uint32_t x68 = 5U;
static uint32_t t7 = 1807917U;
volatile uint32_t x74 = UINT32_MAX;
int32_t x78 = INT32_MAX;
volatile uint64_t x82 = UINT64_MAX;
static volatile int16_t x83 = -95;
volatile uint64_t t11 = 872305LLU;
int32_t x110 = -1;
uint8_t x119 = 13U;
int32_t x133 = -33606;
uint8_t x136 = 9U;
int16_t x141 = INT16_MAX;
uint32_t x143 = 3U;
volatile uint32_t t20 = 10006U;
int32_t x145 = -1;
uint8_t x147 = UINT8_MAX;
uint32_t t21 = 60U;
int64_t x156 = 1LL;
volatile uint8_t x160 = 6U;
volatile int64_t t25 = 89899292621LL;
uint64_t t26 = 7LLU;
volatile int8_t x181 = -13;
uint8_t x185 = UINT8_MAX;
uint32_t x186 = 96235384U;
static int16_t x191 = -1;
uint64_t t29 = 1442LLU;
uint64_t x197 = UINT64_MAX;
int32_t x200 = -170600631;
volatile int16_t x204 = -139;
uint32_t x214 = 3984413U;
static int8_t x215 = INT8_MIN;
int8_t x231 = INT8_MIN;
int8_t x234 = 5;
static int16_t x236 = -1;
volatile uint32_t x237 = 65U;
volatile int32_t x244 = -1;
int16_t x254 = -3343;
int8_t x260 = INT8_MIN;
volatile int16_t x262 = 471;
int16_t x264 = INT16_MIN;
int16_t x269 = -2;
int32_t t43 = -409295215;
static int32_t x274 = -1;
volatile uint32_t t44 = 40886969U;
int64_t x285 = -1LL;
int32_t x287 = INT32_MIN;
static uint32_t x297 = 1668U;
int32_t x300 = INT32_MIN;
static uint64_t x317 = 632838489891LLU;
static volatile uint64_t t50 = 897823228160825LLU;
volatile int8_t x327 = -1;
uint64_t x329 = 127957LLU;
uint32_t x330 = 25532052U;
volatile int16_t x332 = INT16_MIN;
int8_t x335 = INT8_MIN;
int8_t x337 = INT8_MAX;
static uint32_t x345 = 6614U;
uint8_t x365 = 72U;
int8_t x375 = 3;
int32_t t60 = -192545;
int8_t x395 = INT8_MIN;
uint16_t x396 = 7U;
int8_t x404 = 1;
static int16_t x426 = INT16_MIN;
static int32_t x434 = -41;
int32_t x445 = -1;
uint16_t x446 = UINT16_MAX;
volatile uint64_t t72 = 527331183731155298LLU;
uint64_t t74 = 72LLU;
int32_t x477 = -1;
volatile int64_t x478 = INT64_MAX;
uint64_t x494 = UINT64_MAX;
static uint32_t x501 = 131085U;
volatile uint32_t x504 = 145590U;
volatile int16_t x510 = INT16_MAX;
uint32_t x522 = 556U;
int16_t x537 = INT16_MIN;
int16_t x557 = INT16_MAX;
volatile uint32_t t88 = 12067U;
uint64_t x569 = 617123LLU;
uint64_t x570 = UINT64_MAX;
uint64_t t90 = 11608387LLU;
uint16_t x582 = 1646U;
volatile uint64_t x589 = 11LLU;
uint32_t x592 = 10370U;
uint8_t x601 = UINT8_MAX;
volatile uint8_t x602 = UINT8_MAX;
int64_t x614 = INT64_MAX;
int8_t x615 = -1;
uint8_t x621 = 7U;
int8_t x633 = INT8_MIN;
int64_t x637 = INT64_MAX;
uint32_t x641 = 2091973U;
int16_t x642 = -11959;
volatile uint64_t x643 = UINT64_MAX;
static uint32_t x654 = 1932458U;
uint8_t x668 = UINT8_MAX;
static volatile int64_t x669 = -778375LL;
int16_t x670 = -1;
volatile int64_t t104 = 793834291644059LL;
int32_t x680 = -1;
volatile int64_t x682 = INT64_MIN;
static uint32_t x685 = 177071U;
static volatile uint32_t x688 = 3U;
int64_t x708 = INT64_MAX;
volatile uint64_t t110 = 13475761172368044LLU;
int64_t x720 = 3636178500599031862LL;
static int16_t x725 = -187;
volatile int16_t x726 = -1;
int16_t x727 = INT16_MAX;
uint64_t x729 = 33433821802014548LLU;
int8_t x735 = INT8_MIN;
uint8_t x741 = 3U;
static int64_t x743 = -219LL;
uint64_t t116 = 4495841LLU;
int8_t x753 = INT8_MIN;
int32_t x769 = INT32_MIN;
uint16_t x772 = 28218U;
static int64_t x775 = -2895967LL;
int8_t x782 = 3;
volatile int8_t x784 = -1;
int64_t t123 = 1LL;
int8_t x786 = -2;
volatile int16_t x787 = -1;
int8_t x799 = 0;
int16_t x810 = -1;
uint8_t x817 = 117U;
uint64_t t130 = 135560556338LLU;
uint16_t x828 = 6031U;
static int32_t x833 = 1;
volatile uint8_t x838 = 1U;
int32_t x839 = -22;
int32_t x847 = 15047;
int64_t t135 = -58LL;
volatile uint64_t x875 = 3LLU;
static uint8_t x876 = 49U;
volatile uint32_t t141 = 12U;
int16_t x881 = 3;
int64_t x884 = INT64_MIN;
uint64_t x890 = 0LLU;
static volatile uint8_t x891 = UINT8_MAX;
volatile uint64_t t143 = 8152296246298972LLU;
int8_t x901 = 1;
uint16_t x905 = 550U;
int64_t t148 = 337258LL;
int8_t x921 = INT8_MIN;
int16_t x923 = INT16_MIN;
static int64_t x924 = -1LL;
int64_t t149 = 16878354LL;
static int8_t x937 = INT8_MAX;
volatile uint64_t t151 = 71698767634094951LLU;
uint8_t x943 = 15U;
static uint64_t t152 = 46651957057LLU;
uint64_t t153 = 7190735LLU;
int32_t x953 = 43888738;
uint8_t x965 = 92U;
volatile uint64_t t155 = 10196061722LLU;
uint16_t x973 = 133U;
int32_t x980 = -273;
uint8_t x984 = 1U;
static int64_t t159 = 34LL;
int16_t x987 = -1;
volatile int16_t x988 = -1;
volatile int64_t x997 = -1LL;
volatile uint8_t x1005 = 18U;
volatile uint32_t t164 = 16198596U;
uint16_t x1021 = 626U;
int64_t x1024 = INT64_MAX;
int8_t x1040 = INT8_MAX;
uint16_t x1042 = 7260U;
uint64_t t168 = 31354535LLU;
int64_t x1048 = -1LL;
int64_t x1053 = INT64_MAX;
volatile uint32_t x1055 = 99U;
static uint16_t x1057 = 17U;
volatile int32_t x1077 = INT32_MIN;
uint32_t x1099 = 23556U;
int32_t x1106 = 0;
volatile int8_t x1108 = -1;
volatile uint16_t x1110 = 2U;
uint64_t x1113 = 898143483933657LLU;
int16_t x1137 = -49;
uint64_t x1142 = 54172978974LLU;
int8_t x1143 = 30;
uint64_t x1154 = UINT64_MAX;
volatile int64_t x1162 = -1LL;
static int8_t x1176 = INT8_MIN;
volatile uint64_t x1189 = 388629LLU;
uint16_t x1191 = 186U;
uint32_t x1192 = 1132972U;
int16_t x1203 = 1;
static int8_t x1224 = 1;
uint8_t x1227 = 12U;
int8_t x1232 = -3;
uint32_t t197 = 35651724U;
int64_t t198 = -30269444206045896LL;
uint16_t x1243 = 3U;


void f0(void) {
    	uint32_t x6 = UINT32_MAX;
	int32_t x8 = INT32_MIN;
	volatile uint32_t t0 = 57976U;

    t0 = ((x5*(x6+x7))%x8);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = 673U;
	uint64_t x10 = 10066489080444170LLU;
	uint64_t x11 = UINT64_MAX;
	static uint8_t x12 = UINT8_MAX;
	static volatile uint64_t t1 = 31LLU;

    t1 = ((x9*(x10+x11))%x12);

    if (t1 != 157LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x21 = -3799;
	uint64_t x22 = 2293LLU;
	uint16_t x24 = 8662U;
	volatile uint64_t t2 = 538515405156LLU;

    t2 = ((x21*(x22+x23))%x24);

    if (t2 != 1096LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x29 = UINT64_MAX;
	int32_t x30 = -275118999;
	int8_t x31 = INT8_MAX;
	static uint32_t x32 = UINT32_MAX;

    t3 = ((x29*(x30+x31))%x32);

    if (t3 != 275118872LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x33 = INT16_MIN;
	uint16_t x34 = UINT16_MAX;
	volatile int8_t x35 = INT8_MIN;
	int32_t x36 = INT32_MIN;

    t4 = ((x33*(x34+x35))%x36);

    if (t4 != -2143256576) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x37 = 52U;
	int8_t x38 = INT8_MAX;
	uint64_t x39 = 8755550LLU;
	static volatile int32_t x40 = -694;
	uint64_t t5 = 57727422754862LLU;

    t5 = ((x37*(x38+x39))%x40);

    if (t5 != 455295204LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x49 = UINT8_MAX;
	volatile int64_t x50 = -11578LL;
	static uint64_t x51 = UINT64_MAX;
	static volatile uint32_t x52 = UINT32_MAX;
	uint64_t t6 = 41LLU;

    t6 = ((x49*(x50+x51))%x52);

    if (t6 != 4292014651LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x67 = -1;

    t7 = ((x65*(x66+x67))%x68);

    if (t7 != 4U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x69 = INT32_MAX;
	int64_t x70 = -1LL;
	int32_t x71 = -1;
	static int8_t x72 = -30;
	volatile int64_t t8 = -165835743819500LL;

    t8 = ((x69*(x70+x71))%x72);

    if (t8 != -14LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x73 = -1;
	volatile int8_t x75 = -15;
	volatile int32_t x76 = INT32_MAX;
	volatile uint32_t t9 = 29U;

    t9 = ((x73*(x74+x75))%x76);

    if (t9 != 16U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x77 = UINT8_MAX;
	volatile uint64_t x79 = 8153287609723LLU;
	int32_t x80 = INT32_MAX;
	static uint64_t t10 = 6697917LLU;

    t10 = ((x77*(x78+x79))%x80);

    if (t10 != 2047636315LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x81 = INT16_MAX;
	static int64_t x84 = -5652821245604459LL;

    t11 = ((x81*(x82+x83))%x84);

    if (t11 != 5652821242458827LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x85 = -1;
	uint32_t x86 = 24344U;
	uint8_t x87 = 1U;
	static int32_t x88 = INT32_MIN;
	uint32_t t12 = 562833018U;

    t12 = ((x85*(x86+x87))%x88);

    if (t12 != 2147459303U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x89 = -1LL;
	int8_t x90 = INT8_MAX;
	static int64_t x91 = INT64_MIN;
	uint8_t x92 = 6U;
	volatile int64_t t13 = 759971605140LL;

    t13 = ((x89*(x90+x91))%x92);

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x109 = 17011916632609725LLU;
	int16_t x111 = INT16_MAX;
	int16_t x112 = INT16_MAX;
	uint64_t t14 = 51640650LLU;

    t14 = ((x109*(x110+x111))%x112);

    if (t14 != 26581LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x113 = 23208LLU;
	volatile int8_t x114 = 8;
	int64_t x115 = 98682814127074101LL;
	volatile uint32_t x116 = 509104U;
	volatile uint64_t t15 = 7685LLU;

    t15 = ((x113*(x114+x115))%x116);

    if (t15 != 427720LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x117 = 60U;
	static int16_t x118 = INT16_MIN;
	uint8_t x120 = 6U;
	volatile int32_t t16 = -219330320;

    t16 = ((x117*(x118+x119))%x120);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x121 = 21U;
	uint64_t x122 = 5699LLU;
	int64_t x123 = 988930914031883LL;
	uint32_t x124 = 795U;
	volatile uint64_t t17 = 1558317LLU;

    t17 = ((x121*(x122+x123))%x124);

    if (t17 != 777LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x125 = INT16_MIN;
	static uint16_t x126 = 4U;
	int16_t x127 = -148;
	volatile int16_t x128 = -1;
	volatile int32_t t18 = 1411;

    t18 = ((x125*(x126+x127))%x128);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x134 = -1;
	volatile int16_t x135 = INT16_MAX;
	int32_t t19 = 0;

    t19 = ((x133*(x134+x135))%x136);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x142 = -1;
	int8_t x144 = INT8_MIN;

    t20 = ((x141*(x142+x143))%x144);

    if (t20 != 65534U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x146 = INT16_MAX;
	uint32_t x148 = 11U;

    t21 = ((x145*(x146+x147))%x148);

    if (t21 != 4U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x153 = 1;
	int32_t x154 = INT32_MIN;
	uint64_t x155 = UINT64_MAX;
	volatile uint64_t t22 = 0LLU;

    t22 = ((x153*(x154+x155))%x156);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x157 = INT16_MIN;
	uint64_t x158 = 10845395322LLU;
	int8_t x159 = INT8_MIN;
	static uint64_t t23 = 49225LLU;

    t23 = ((x157*(x158+x159))%x160);

    if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x161 = 5846290U;
	uint32_t x162 = 1067U;
	int32_t x163 = 2946851;
	volatile int64_t x164 = INT64_MIN;
	volatile int64_t t24 = -428638136828LL;

    t24 = ((x161*(x162+x163))%x164);

    if (t24 != 2974732668LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x169 = INT16_MIN;
	uint16_t x170 = 297U;
	int8_t x171 = -2;
	int64_t x172 = -1LL;

    t25 = ((x169*(x170+x171))%x172);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x177 = UINT8_MAX;
	int64_t x178 = 614395105085LL;
	uint64_t x179 = 108313LLU;
	int32_t x180 = INT32_MIN;

    t26 = ((x177*(x178+x179))%x180);

    if (t26 != 156670779416490LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x182 = 84U;
	uint8_t x183 = UINT8_MAX;
	int8_t x184 = INT8_MIN;
	static uint32_t t27 = 104U;

    t27 = ((x181*(x182+x183))%x184);

    if (t27 != 4294962889U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x187 = 107LLU;
	int64_t x188 = INT64_MIN;
	volatile uint64_t t28 = 449LLU;

    t28 = ((x185*(x186+x187))%x188);

    if (t28 != 24540050205LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x189 = INT64_MIN;
	uint64_t x190 = 48527088788240LLU;
	uint32_t x192 = 86U;

    t29 = ((x189*(x190+x191))%x192);

    if (t29 != 42LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x198 = UINT16_MAX;
	uint16_t x199 = 2U;
	static uint64_t t30 = 64624486997374LLU;

    t30 = ((x197*(x198+x199))%x200);

    if (t30 != 170535094LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x201 = -18127797;
	int32_t x202 = -1;
	int32_t x203 = -10;
	volatile int32_t t31 = 62538;

    t31 = ((x201*(x202+x203))%x204);

    if (t31 != 120) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x205 = UINT8_MAX;
	volatile int64_t x206 = -1LL;
	uint8_t x207 = UINT8_MAX;
	static volatile int8_t x208 = INT8_MAX;
	int64_t t32 = -24845645591059035LL;

    t32 = ((x205*(x206+x207))%x208);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x213 = 1615129352U;
	uint64_t x216 = 542453508LLU;
	volatile uint64_t t33 = 75542348470718LLU;

    t33 = ((x213*(x214+x215))%x216);

    if (t33 != 75784656LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x225 = 2767959160LLU;
	uint32_t x226 = 1355077U;
	uint64_t x227 = UINT64_MAX;
	volatile int16_t x228 = -385;
	volatile uint64_t t34 = 64414431863548018LLU;

    t34 = ((x225*(x226+x227))%x228);

    if (t34 != 3750795026696160LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x229 = 933143741U;
	static int8_t x230 = INT8_MAX;
	int8_t x232 = INT8_MIN;
	static volatile uint32_t t35 = 1407U;

    t35 = ((x229*(x230+x231))%x232);

    if (t35 != 3361823555U) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x233 = -1742;
	volatile uint16_t x235 = 1922U;
	volatile int32_t t36 = -76;

    t36 = ((x233*(x234+x235))%x236);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x238 = INT32_MIN;
	int32_t x239 = 680190;
	static volatile int32_t x240 = INT32_MIN;
	uint32_t t37 = 440U;

    t37 = ((x237*(x238+x239))%x240);

    if (t37 != 44212350U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x241 = INT16_MIN;
	uint16_t x242 = 1015U;
	int16_t x243 = INT16_MAX;
	volatile int32_t t38 = 89277;

    t38 = ((x241*(x242+x243))%x244);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x245 = -3;
	static int8_t x246 = INT8_MAX;
	uint16_t x247 = 74U;
	uint8_t x248 = 3U;
	int32_t t39 = -557642947;

    t39 = ((x245*(x246+x247))%x248);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x253 = 5U;
	int64_t x255 = 164718380054LL;
	static uint16_t x256 = 6762U;
	int64_t t40 = -7LL;

    t40 = ((x253*(x254+x255))%x256);

    if (t40 != 1547LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x257 = 1;
	volatile int16_t x258 = -1;
	uint16_t x259 = 1549U;
	int32_t t41 = -23711244;

    t41 = ((x257*(x258+x259))%x260);

    if (t41 != 12) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x261 = -1;
	uint16_t x263 = UINT16_MAX;
	int32_t t42 = 559088247;

    t42 = ((x261*(x262+x263))%x264);

    if (t42 != -470) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x270 = INT16_MIN;
	int32_t x271 = -21793;
	static int16_t x272 = INT16_MAX;

    t43 = ((x269*(x270+x271))%x272);

    if (t43 != 10821) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x273 = 1U;
	uint32_t x275 = UINT32_MAX;
	static volatile uint16_t x276 = 886U;

    t44 = ((x273*(x274+x275))%x276);

    if (t44 != 782U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x281 = 2;
	uint8_t x282 = 12U;
	uint8_t x283 = UINT8_MAX;
	volatile int64_t x284 = INT64_MIN;
	static volatile int64_t t45 = 384648091193232LL;

    t45 = ((x281*(x282+x283))%x284);

    if (t45 != 534LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x286 = -15611696425200LL;
	int16_t x288 = -1;
	volatile int64_t t46 = -5039816011LL;

    t46 = ((x285*(x286+x287))%x288);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x293 = INT16_MIN;
	int64_t x294 = -1LL;
	uint8_t x295 = 1U;
	int32_t x296 = INT32_MAX;
	int64_t t47 = -9752522LL;

    t47 = ((x293*(x294+x295))%x296);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x298 = -1;
	uint32_t x299 = UINT32_MAX;
	uint32_t t48 = 28891U;

    t48 = ((x297*(x298+x299))%x300);

    if (t48 != 2147480312U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x313 = -1;
	uint16_t x314 = 890U;
	static int64_t x315 = 440228LL;
	int32_t x316 = INT32_MIN;
	volatile int64_t t49 = 19931676550295LL;

    t49 = ((x313*(x314+x315))%x316);

    if (t49 != -441118LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x318 = INT16_MIN;
	int16_t x319 = INT16_MIN;
	uint32_t x320 = 2635979U;

    t50 = ((x317*(x318+x319))%x320);

    if (t50 != 2428574LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x321 = 1;
	volatile int16_t x322 = -390;
	volatile int32_t x323 = INT32_MAX;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t51 = 8986997359405948LLU;

    t51 = ((x321*(x322+x323))%x324);

    if (t51 != 2147483257LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	static uint16_t x328 = 11U;
	int32_t t52 = 22;

    t52 = ((x325*(x326+x327))%x328);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x331 = 319029096;
	volatile uint64_t t53 = 854LLU;

    t53 = ((x329*(x330+x331))%x332);

    if (t53 != 44089010814636LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x333 = 1;
	volatile int8_t x334 = 0;
	static int64_t x336 = -1LL;
	volatile int64_t t54 = 11126916885422LL;

    t54 = ((x333*(x334+x335))%x336);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x338 = -1LL;
	int8_t x339 = -57;
	volatile int64_t x340 = -1317550559579LL;
	volatile int64_t t55 = 3014132648701695316LL;

    t55 = ((x337*(x338+x339))%x340);

    if (t55 != -7366LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x346 = INT32_MAX;
	volatile int8_t x347 = -61;
	volatile int32_t x348 = INT32_MIN;
	volatile uint32_t t56 = 1U;

    t56 = ((x345*(x346+x347))%x348);

    if (t56 != 2147073580U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x357 = -1;
	int16_t x358 = INT16_MAX;
	int32_t x359 = 11;
	int32_t x360 = -38728660;
	int32_t t57 = -105511104;

    t57 = ((x357*(x358+x359))%x360);

    if (t57 != -32778) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x366 = INT8_MIN;
	static uint64_t x367 = 198088785LLU;
	int64_t x368 = INT64_MAX;
	uint64_t t58 = 9LLU;

    t58 = ((x365*(x366+x367))%x368);

    if (t58 != 14262383304LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x373 = 2;
	static uint8_t x374 = UINT8_MAX;
	int64_t x376 = INT64_MAX;
	volatile int64_t t59 = 31LL;

    t59 = ((x373*(x374+x375))%x376);

    if (t59 != 516LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x377 = -1;
	static int16_t x378 = -242;
	int32_t x379 = INT32_MAX;
	static int16_t x380 = -11;

    t60 = ((x377*(x378+x379))%x380);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x381 = 0;
	int64_t x382 = INT64_MIN;
	uint16_t x383 = 0U;
	int8_t x384 = INT8_MIN;
	int64_t t61 = -54097LL;

    t61 = ((x381*(x382+x383))%x384);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x385 = INT8_MAX;
	int8_t x386 = 0;
	int8_t x387 = INT8_MIN;
	int32_t x388 = -1;
	static int32_t t62 = -526286;

    t62 = ((x385*(x386+x387))%x388);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x393 = INT8_MIN;
	static int16_t x394 = INT16_MIN;
	int32_t t63 = 36309;

    t63 = ((x393*(x394+x395))%x396);

    if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x401 = INT8_MIN;
	uint8_t x402 = 5U;
	static int8_t x403 = INT8_MIN;
	int32_t t64 = 32917;

    t64 = ((x401*(x402+x403))%x404);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x405 = -59174423LL;
	int32_t x406 = 2033;
	static uint16_t x407 = 60U;
	volatile int32_t x408 = INT32_MIN;
	volatile int64_t t65 = -402324438LL;

    t65 = ((x405*(x406+x407))%x408);

    if (t65 != -1445499403LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x413 = -1;
	int8_t x414 = INT8_MIN;
	uint32_t x415 = 0U;
	static int8_t x416 = INT8_MIN;
	volatile uint32_t t66 = 16447453U;

    t66 = ((x413*(x414+x415))%x416);

    if (t66 != 128U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x425 = 22U;
	int32_t x427 = -1;
	int32_t x428 = INT32_MIN;
	volatile int32_t t67 = -7549;

    t67 = ((x425*(x426+x427))%x428);

    if (t67 != -720918) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x433 = -1;
	volatile int8_t x435 = 24;
	volatile uint8_t x436 = UINT8_MAX;
	volatile int32_t t68 = -6096064;

    t68 = ((x433*(x434+x435))%x436);

    if (t68 != 17) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x441 = INT8_MAX;
	static volatile int32_t x442 = INT32_MIN;
	volatile int64_t x443 = -3455310955LL;
	static volatile uint32_t x444 = 1U;
	int64_t t69 = 3780517633681LL;

    t69 = ((x441*(x442+x443))%x444);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x447 = 31865U;
	int32_t x448 = INT32_MAX;
	int32_t t70 = -12530312;

    t70 = ((x445*(x446+x447))%x448);

    if (t70 != -97400) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x453 = INT32_MIN;
	uint32_t x454 = 351U;
	int16_t x455 = -30;
	volatile int8_t x456 = INT8_MIN;
	uint32_t t71 = 13727U;

    t71 = ((x453*(x454+x455))%x456);

    if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x457 = -18292LL;
	int16_t x458 = 234;
	uint64_t x459 = UINT64_MAX;
	int64_t x460 = INT64_MIN;

    t72 = ((x457*(x458+x459))%x460);

    if (t72 != 9223372036850513772LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x461 = 1U;
	int32_t x462 = -145140089;
	static int16_t x463 = INT16_MAX;
	int64_t x464 = INT64_MIN;
	volatile int64_t t73 = -6216021056009LL;

    t73 = ((x461*(x462+x463))%x464);

    if (t73 != 4149859974LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x469 = UINT64_MAX;
	int64_t x470 = 1655554429746LL;
	volatile int16_t x471 = INT16_MIN;
	int32_t x472 = -33365354;

    t74 = ((x469*(x470+x471))%x472);

    if (t74 != 18446742418155154638LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x479 = INT32_MIN;
	int64_t x480 = -1LL;
	int64_t t75 = -81002089795717571LL;

    t75 = ((x477*(x478+x479))%x480);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x481 = -6357286;
	volatile int16_t x482 = INT16_MIN;
	uint32_t x483 = UINT32_MAX;
	uint32_t x484 = 76815925U;
	volatile uint32_t t76 = 20U;

    t76 = ((x481*(x482+x483))%x484);

    if (t76 != 12628826U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x493 = INT32_MAX;
	static int16_t x495 = INT16_MAX;
	int16_t x496 = -14837;
	volatile uint64_t t77 = 281625543528LLU;

    t77 = ((x493*(x494+x495))%x496);

    if (t77 != 70364449177602LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x497 = UINT32_MAX;
	uint8_t x498 = 11U;
	int8_t x499 = INT8_MIN;
	volatile int64_t x500 = -1LL;
	int64_t t78 = 2806239662827292881LL;

    t78 = ((x497*(x498+x499))%x500);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x502 = UINT8_MAX;
	int64_t x503 = 770860917947LL;
	volatile int64_t t79 = -101LL;

    t79 = ((x501*(x502+x503))%x504);

    if (t79 != 78750LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x505 = -1LL;
	volatile uint8_t x506 = 33U;
	uint8_t x507 = 5U;
	int16_t x508 = -3;
	int64_t t80 = 200603324LL;

    t80 = ((x505*(x506+x507))%x508);

    if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x509 = -1087590339544LL;
	int16_t x511 = INT16_MIN;
	int8_t x512 = -1;
	static int64_t t81 = 2LL;

    t81 = ((x509*(x510+x511))%x512);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x513 = UINT64_MAX;
	static int16_t x514 = -1;
	volatile int32_t x515 = -1;
	volatile uint16_t x516 = UINT16_MAX;
	uint64_t t82 = 1278451524796454775LLU;

    t82 = ((x513*(x514+x515))%x516);

    if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x521 = 13;
	static int8_t x523 = INT8_MIN;
	int64_t x524 = INT64_MAX;
	int64_t t83 = 97480737LL;

    t83 = ((x521*(x522+x523))%x524);

    if (t83 != 5564LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x529 = INT16_MIN;
	int32_t x530 = -322;
	int16_t x531 = 1;
	static int64_t x532 = -74677344LL;
	int64_t t84 = 21425905056113984LL;

    t84 = ((x529*(x530+x531))%x532);

    if (t84 != 10518528LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x538 = INT16_MIN;
	static int8_t x539 = INT8_MIN;
	static int8_t x540 = INT8_MAX;
	int32_t t85 = -139659;

    t85 = ((x537*(x538+x539))%x540);

    if (t85 != 6) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x541 = -1LL;
	uint64_t x542 = 226841149137LLU;
	int64_t x543 = INT64_MIN;
	volatile int16_t x544 = INT16_MIN;
	static uint64_t t86 = 5491438780LLU;

    t86 = ((x541*(x542+x543))%x544);

    if (t86 != 9223371810013626671LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x549 = -1LL;
	uint16_t x550 = UINT16_MAX;
	volatile int8_t x551 = -3;
	static uint16_t x552 = 239U;
	int64_t t87 = 195357690LL;

    t87 = ((x549*(x550+x551))%x552);

    if (t87 != -46LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x558 = INT16_MAX;
	int8_t x559 = -43;
	uint32_t x560 = UINT32_MAX;

    t88 = ((x557*(x558+x559))%x560);

    if (t88 != 1072267308U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x561 = 30112U;
	volatile int32_t x562 = -62355;
	int8_t x563 = 1;
	int64_t x564 = -123153473061546871LL;
	int64_t t89 = -26LL;

    t89 = ((x561*(x562+x563))%x564);

    if (t89 != 2417363648LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x571 = 127;
	uint32_t x572 = 128506U;

    t90 = ((x569*(x570+x571))%x572);

    if (t90 != 11368LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x581 = UINT8_MAX;
	static int16_t x583 = INT16_MIN;
	static int32_t x584 = -1;
	int32_t t91 = -1516;

    t91 = ((x581*(x582+x583))%x584);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x590 = 14U;
	static uint64_t x591 = 837162LLU;
	uint64_t t92 = 1083LLU;

    t92 = ((x589*(x590+x591))%x592);

    if (t92 != 376LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x597 = INT8_MAX;
	static volatile int8_t x598 = -6;
	int16_t x599 = -1;
	static uint64_t x600 = 35391758LLU;
	volatile uint64_t t93 = 14LLU;

    t93 = ((x597*(x598+x599))%x600);

    if (t93 != 3015363LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x603 = UINT64_MAX;
	int8_t x604 = INT8_MIN;
	uint64_t t94 = 8617960205617LLU;

    t94 = ((x601*(x602+x603))%x604);

    if (t94 != 64770LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x605 = INT64_MIN;
	uint64_t x606 = UINT64_MAX;
	int64_t x607 = -8237182697029275LL;
	int8_t x608 = INT8_MIN;
	volatile uint64_t t95 = 1009LLU;

    t95 = ((x605*(x606+x607))%x608);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x613 = 0LL;
	int64_t x616 = INT64_MAX;
	volatile int64_t t96 = 1448036188456314656LL;

    t96 = ((x613*(x614+x615))%x616);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x622 = -714165328541LL;
	int16_t x623 = 2;
	static int32_t x624 = -102517;
	volatile int64_t t97 = 371075288525688938LL;

    t97 = ((x621*(x622+x623))%x624);

    if (t97 != -63747LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x629 = 35;
	static int16_t x630 = INT16_MIN;
	volatile int16_t x631 = INT16_MAX;
	uint64_t x632 = UINT64_MAX;
	volatile uint64_t t98 = 8108610369099LLU;

    t98 = ((x629*(x630+x631))%x632);

    if (t98 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x634 = INT8_MAX;
	uint64_t x635 = 25028098696LLU;
	int16_t x636 = INT16_MIN;
	uint64_t t99 = 41399382783LLU;

    t99 = ((x633*(x634+x635))%x636);

    if (t99 != 18446740870112902272LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x638 = INT32_MIN;
	int32_t x639 = INT32_MAX;
	static int64_t x640 = 20870757163532LL;
	int64_t t100 = 1066194856950125607LL;

    t100 = ((x637*(x638+x639))%x640);

    if (t100 != -65089406111LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x644 = 18U;
	uint64_t t101 = 3338255906038531217LLU;

    t101 = ((x641*(x642+x643))%x644);

    if (t101 != 2LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x653 = INT16_MIN;
	int32_t x655 = 105146;
	uint64_t x656 = 434LLU;
	volatile uint64_t t102 = 11LLU;

    t102 = ((x653*(x654+x655))%x656);

    if (t102 != 90LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x665 = 30898556982362LLU;
	int8_t x666 = 0;
	int32_t x667 = INT32_MIN;
	uint64_t t103 = 1085839346957LLU;

    t103 = ((x665*(x666+x667))%x668);

    if (t103 != 87LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x671 = -1LL;
	int8_t x672 = -3;

    t104 = ((x669*(x670+x671))%x672);

    if (t104 != 2LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x673 = -1;
	uint64_t x674 = 113271023652LLU;
	int8_t x675 = 19;
	uint16_t x676 = 3748U;
	uint64_t t105 = 110432950LLU;

    t105 = ((x673*(x674+x675))%x676);

    if (t105 != 473LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x677 = UINT8_MAX;
	int64_t x678 = INT64_MAX;
	int64_t x679 = INT64_MIN;
	volatile int64_t t106 = 343301LL;

    t106 = ((x677*(x678+x679))%x680);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x681 = 195LLU;
	uint32_t x683 = 6U;
	static int32_t x684 = INT32_MAX;
	uint64_t t107 = 7263200010098429809LLU;

    t107 = ((x681*(x682+x683))%x684);

    if (t107 != 1172LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x686 = UINT64_MAX;
	int8_t x687 = INT8_MIN;
	uint64_t t108 = 7087633974684101961LLU;

    t108 = ((x685*(x686+x687))%x688);

    if (t108 != 1LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x705 = 11U;
	volatile int16_t x706 = -1;
	uint16_t x707 = 13U;
	int64_t t109 = -122147LL;

    t109 = ((x705*(x706+x707))%x708);

    if (t109 != 132LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x713 = -1;
	int64_t x714 = -1LL;
	static volatile uint8_t x715 = UINT8_MAX;
	uint64_t x716 = 12051490836LLU;

    t110 = ((x713*(x714+x715))%x716);

    if (t110 != 11802210182LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x717 = 7U;
	int64_t x718 = -1LL;
	int64_t x719 = -2520428396011811LL;
	int64_t t111 = -364383714LL;

    t111 = ((x717*(x718+x719))%x720);

    if (t111 != -17642998772082684LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x728 = 1U;
	static volatile int32_t t112 = 8730;

    t112 = ((x725*(x726+x727))%x728);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x730 = INT16_MAX;
	static volatile int64_t x731 = -3067182349563666724LL;
	volatile int64_t x732 = -1LL;
	static volatile uint64_t t113 = 574415LLU;

    t113 = ((x729*(x730+x731))%x732);

    if (t113 != 1340083323393834204LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x733 = 20;
	static int64_t x734 = 43819226LL;
	int8_t x736 = -1;
	int64_t t114 = -231387170312591LL;

    t114 = ((x733*(x734+x735))%x736);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x742 = 12040LL;
	int16_t x744 = -1;
	volatile int64_t t115 = -993005884LL;

    t115 = ((x741*(x742+x743))%x744);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x745 = -7LL;
	static uint64_t x746 = UINT64_MAX;
	static int8_t x747 = -1;
	uint16_t x748 = 1U;

    t116 = ((x745*(x746+x747))%x748);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x754 = UINT8_MAX;
	uint64_t x755 = 44730150788842680LLU;
	static int64_t x756 = INT64_MAX;
	volatile uint64_t t117 = 3900299484293631LLU;

    t117 = ((x753*(x754+x755))%x756);

    if (t117 != 3497912735882880129LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x757 = INT32_MIN;
	uint8_t x758 = UINT8_MAX;
	uint64_t x759 = UINT64_MAX;
	int16_t x760 = -84;
	uint64_t t118 = 15366170023327717LLU;

    t118 = ((x757*(x758+x759))%x760);

    if (t118 != 18446743528248705024LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x761 = 1006U;
	int8_t x762 = INT8_MIN;
	int8_t x763 = -1;
	int32_t x764 = -1;
	static volatile int32_t t119 = -40340604;

    t119 = ((x761*(x762+x763))%x764);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x770 = 2509186005LL;
	int16_t x771 = INT16_MIN;
	int64_t t120 = -513662001910545004LL;

    t120 = ((x769*(x770+x771))%x772);

    if (t120 != -4052LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x773 = INT32_MIN;
	static int8_t x774 = -1;
	uint8_t x776 = 20U;
	int64_t t121 = 28822034885163013LL;

    t121 = ((x773*(x774+x775))%x776);

    if (t121 != 4LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x777 = 0U;
	uint32_t x778 = UINT32_MAX;
	uint16_t x779 = 14U;
	int32_t x780 = INT32_MIN;
	volatile uint32_t t122 = 1921119U;

    t122 = ((x777*(x778+x779))%x780);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x781 = INT16_MIN;
	int64_t x783 = -1LL;

    t123 = ((x781*(x782+x783))%x784);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x785 = UINT16_MAX;
	int8_t x788 = INT8_MAX;
	static volatile int32_t t124 = 929682;

    t124 = ((x785*(x786+x787))%x788);

    if (t124 != -9) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x789 = -170047LL;
	static int32_t x790 = 0;
	volatile int32_t x791 = INT32_MIN;
	int16_t x792 = INT16_MAX;
	volatile int64_t t125 = 2009559071702LL;

    t125 = ((x789*(x790+x791))%x792);

    if (t125 != 12424LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x793 = -1;
	static uint8_t x794 = 10U;
	static int16_t x795 = INT16_MIN;
	int32_t x796 = -367332;
	int32_t t126 = 764104731;

    t126 = ((x793*(x794+x795))%x796);

    if (t126 != 32758) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x797 = -1;
	int8_t x798 = INT8_MAX;
	int8_t x800 = -1;
	volatile int32_t t127 = -26118;

    t127 = ((x797*(x798+x799))%x800);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x801 = 6;
	uint16_t x802 = 1630U;
	uint16_t x803 = UINT16_MAX;
	int8_t x804 = 28;
	volatile int32_t t128 = -1537443;

    t128 = ((x801*(x802+x803))%x804);

    if (t128 != 14) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x809 = 1;
	int16_t x811 = -670;
	static volatile uint64_t x812 = 495047834464447LLU;
	volatile uint64_t t129 = 9795LLU;

    t129 = ((x809*(x810+x811))%x812);

    if (t129 != 271665895326831LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x818 = -1;
	uint64_t x819 = 558821008322783LLU;
	int64_t x820 = INT64_MIN;

    t130 = ((x817*(x818+x819))%x820);

    if (t130 != 65382057973765494LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x825 = 1519117U;
	static uint64_t x826 = 18989017LLU;
	volatile int32_t x827 = INT32_MIN;
	volatile uint64_t t131 = 28787115LLU;

    t131 = ((x825*(x826+x827))%x828);

    if (t131 != 4883LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x834 = 1006875808605093LLU;
	int32_t x835 = 406279691;
	uint32_t x836 = 1599356U;
	uint64_t t132 = 25610009LLU;

    t132 = ((x833*(x834+x835))%x836);

    if (t132 != 946816LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x837 = -15;
	volatile uint16_t x840 = 810U;
	static int32_t t133 = -3254326;

    t133 = ((x837*(x838+x839))%x840);

    if (t133 != 315) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x841 = INT16_MAX;
	volatile uint8_t x842 = 58U;
	volatile int8_t x843 = INT8_MIN;
	volatile int16_t x844 = -1;
	int32_t t134 = -134;

    t134 = ((x841*(x842+x843))%x844);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x845 = 18U;
	int16_t x846 = 13835;
	int64_t x848 = INT64_MIN;

    t135 = ((x845*(x846+x847))%x848);

    if (t135 != 519876LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x849 = -19;
	static uint32_t x850 = 389345302U;
	static int8_t x851 = -1;
	int32_t x852 = INT32_MIN;
	volatile uint32_t t136 = 482203U;

    t136 = ((x849*(x850+x851))%x852);

    if (t136 != 1192373873U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x853 = 11911U;
	uint64_t x854 = UINT64_MAX;
	int16_t x855 = INT16_MAX;
	volatile uint64_t x856 = UINT64_MAX;
	uint64_t t137 = 16096501560LLU;

    t137 = ((x853*(x854+x855))%x856);

    if (t137 != 390275826LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x861 = -1LL;
	static int16_t x862 = -7;
	static uint8_t x863 = UINT8_MAX;
	uint8_t x864 = UINT8_MAX;
	volatile int64_t t138 = 2101879998LL;

    t138 = ((x861*(x862+x863))%x864);

    if (t138 != -248LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x869 = 3417U;
	int16_t x870 = -1;
	volatile int16_t x871 = -221;
	int16_t x872 = INT16_MIN;
	int32_t t139 = 58734;

    t139 = ((x869*(x870+x871))%x872);

    if (t139 != -4910) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x873 = INT8_MAX;
	static int32_t x874 = INT32_MIN;
	uint64_t t140 = 8240139222157250LLU;

    t140 = ((x873*(x874+x875))%x876);

    if (t140 != 38LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x877 = 0;
	int32_t x878 = 9;
	static uint32_t x879 = UINT32_MAX;
	static volatile uint8_t x880 = UINT8_MAX;

    t141 = ((x877*(x878+x879))%x880);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x882 = UINT8_MAX;
	int32_t x883 = -353797;
	int64_t t142 = 21007908919LL;

    t142 = ((x881*(x882+x883))%x884);

    if (t142 != -1060626LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x889 = INT8_MAX;
	int32_t x892 = INT32_MIN;

    t143 = ((x889*(x890+x891))%x892);

    if (t143 != 32385LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x897 = -1;
	uint16_t x898 = UINT16_MAX;
	int16_t x899 = INT16_MIN;
	int64_t x900 = INT64_MIN;
	static volatile int64_t t144 = -4068990407393012386LL;

    t144 = ((x897*(x898+x899))%x900);

    if (t144 != -32767LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x902 = UINT64_MAX;
	volatile int32_t x903 = -1;
	uint64_t x904 = UINT64_MAX;
	static volatile uint64_t t145 = 154908681062394047LLU;

    t145 = ((x901*(x902+x903))%x904);

    if (t145 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x906 = UINT64_MAX;
	uint32_t x907 = UINT32_MAX;
	int32_t x908 = INT32_MAX;
	uint64_t t146 = 55900519LLU;

    t146 = ((x905*(x906+x907))%x908);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x909 = 6;
	int64_t x910 = INT64_MAX;
	int64_t x911 = INT64_MIN;
	int16_t x912 = INT16_MAX;
	volatile int64_t t147 = -454294LL;

    t147 = ((x909*(x910+x911))%x912);

    if (t147 != -6LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x913 = -130327000;
	int8_t x914 = INT8_MIN;
	int64_t x915 = -2LL;
	static int8_t x916 = -1;

    t148 = ((x913*(x914+x915))%x916);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x922 = INT8_MIN;

    t149 = ((x921*(x922+x923))%x924);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x933 = INT32_MAX;
	uint16_t x934 = UINT16_MAX;
	uint32_t x935 = 25249U;
	int32_t x936 = -5429362;
	volatile uint32_t t150 = 177085432U;

    t150 = ((x933*(x934+x935))%x936);

    if (t150 != 5338578U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x938 = 30LLU;
	int8_t x939 = INT8_MAX;
	static int16_t x940 = INT16_MIN;

    t151 = ((x937*(x938+x939))%x940);

    if (t151 != 19939LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x941 = 111U;
	int8_t x942 = INT8_MIN;
	uint64_t x944 = UINT64_MAX;

    t152 = ((x941*(x942+x943))%x944);

    if (t152 != 18446744073709539073LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x945 = 102U;
	static uint64_t x946 = 3341578423190705665LLU;
	static int8_t x947 = INT8_MIN;
	int64_t x948 = -1575373006LL;

    t153 = ((x945*(x946+x947))%x948);

    if (t153 != 8799605838680035686LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x954 = 24945LLU;
	int64_t x955 = INT64_MAX;
	int16_t x956 = -1;
	volatile uint64_t t154 = 969962235LLU;

    t154 = ((x953*(x954+x955))%x956);

    if (t154 != 1094760680672LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x966 = 4445025678659LLU;
	int16_t x967 = 0;
	uint32_t x968 = 32312430U;

    t155 = ((x965*(x966+x967))%x968);

    if (t155 != 28910938LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x969 = 387;
	static int8_t x970 = 6;
	volatile uint16_t x971 = UINT16_MAX;
	static int32_t x972 = 882615;
	int32_t t156 = -115803224;

    t156 = ((x969*(x970+x971))%x972);

    if (t156 != 651147) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x974 = UINT16_MAX;
	int8_t x975 = INT8_MIN;
	int32_t x976 = 502704981;
	volatile int32_t t157 = 150149896;

    t157 = ((x973*(x974+x975))%x976);

    if (t157 != 8699131) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x977 = 24U;
	uint32_t x978 = 2U;
	static uint8_t x979 = UINT8_MAX;
	volatile uint32_t t158 = 126862165U;

    t158 = ((x977*(x978+x979))%x980);

    if (t158 != 6168U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x981 = 26631U;
	int32_t x982 = INT32_MAX;
	int64_t x983 = -1LL;

    t159 = ((x981*(x982+x983))%x984);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x985 = 3U;
	uint16_t x986 = 31U;
	static int32_t t160 = 47;

    t160 = ((x985*(x986+x987))%x988);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x993 = INT32_MIN;
	uint32_t x994 = UINT32_MAX;
	uint32_t x995 = UINT32_MAX;
	int16_t x996 = INT16_MIN;
	volatile uint32_t t161 = 83997676U;

    t161 = ((x993*(x994+x995))%x996);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x998 = UINT16_MAX;
	int32_t x999 = INT32_MIN;
	int16_t x1000 = -53;
	volatile int64_t t162 = 1222698LL;

    t162 = ((x997*(x998+x999))%x1000);

    if (t162 != 47LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1001 = -1;
	static volatile int8_t x1002 = INT8_MIN;
	int16_t x1003 = INT16_MAX;
	uint64_t x1004 = 5436LLU;
	volatile uint64_t t163 = 3119908785013LLU;

    t163 = ((x1001*(x1002+x1003))%x1004);

    if (t163 != 5429LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1006 = UINT16_MAX;
	uint32_t x1007 = 0U;
	int32_t x1008 = 2752;

    t164 = ((x1005*(x1006+x1007))%x1008);

    if (t164 != 1774U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1022 = -1;
	int64_t x1023 = -1LL;
	int64_t t165 = 1815701296609785550LL;

    t165 = ((x1021*(x1022+x1023))%x1024);

    if (t165 != -1252LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x1033 = INT8_MIN;
	volatile int16_t x1034 = -1;
	uint64_t x1035 = 132122064540LLU;
	int32_t x1036 = -17831;
	static volatile uint64_t t166 = 352248LLU;

    t166 = ((x1033*(x1034+x1035))%x1036);

    if (t166 != 18446727162085290624LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1037 = INT16_MAX;
	uint16_t x1038 = 16541U;
	static volatile int64_t x1039 = -6637LL;
	volatile int64_t t167 = 3925636025978038LL;

    t167 = ((x1037*(x1038+x1039))%x1040);

    if (t167 != 125LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1041 = 13311297868338895LLU;
	uint64_t x1043 = 2274969717643670LLU;
	int16_t x1044 = -1;

    t168 = ((x1041*(x1042+x1043))%x1044);

    if (t168 != 15351421187994118830LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1045 = INT16_MIN;
	static uint64_t x1046 = 33346829564282LLU;
	volatile int8_t x1047 = -1;
	uint64_t t169 = 4067676LLU;

    t169 = ((x1045*(x1046+x1047))%x1048);

    if (t169 != 17354035162547191808LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1054 = 133936544429611264LLU;
	uint16_t x1056 = UINT16_MAX;
	static volatile uint64_t t170 = 14566104LLU;

    t170 = ((x1053*(x1054+x1055))%x1056);

    if (t170 != 13570LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1058 = UINT64_MAX;
	int16_t x1059 = INT16_MIN;
	int8_t x1060 = INT8_MIN;
	uint64_t t171 = 24018173LLU;

    t171 = ((x1057*(x1058+x1059))%x1060);

    if (t171 != 18446744073708994543LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1061 = INT8_MIN;
	static volatile int8_t x1062 = 0;
	int8_t x1063 = INT8_MAX;
	static volatile uint64_t x1064 = UINT64_MAX;
	volatile uint64_t t172 = 22657814LLU;

    t172 = ((x1061*(x1062+x1063))%x1064);

    if (t172 != 18446744073709535360LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1078 = INT16_MAX;
	uint32_t x1079 = UINT32_MAX;
	static volatile int32_t x1080 = INT32_MAX;
	uint32_t t173 = 60888025U;

    t173 = ((x1077*(x1078+x1079))%x1080);

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1085 = INT32_MIN;
	uint32_t x1086 = 25837561U;
	volatile int8_t x1087 = INT8_MIN;
	uint8_t x1088 = UINT8_MAX;
	volatile uint32_t t174 = 198425U;

    t174 = ((x1085*(x1086+x1087))%x1088);

    if (t174 != 128U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1097 = 10343;
	uint32_t x1098 = UINT32_MAX;
	volatile uint16_t x1100 = 272U;
	static uint32_t t175 = 1313U;

    t175 = ((x1097*(x1098+x1099))%x1100);

    if (t175 != 53U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1105 = -14341901;
	int32_t x1107 = -1;
	volatile int32_t t176 = 27;

    t176 = ((x1105*(x1106+x1107))%x1108);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x1109 = INT16_MAX;
	static uint16_t x1111 = 0U;
	static int32_t x1112 = INT32_MIN;
	int32_t t177 = -829;

    t177 = ((x1109*(x1110+x1111))%x1112);

    if (t177 != 65534) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1114 = UINT32_MAX;
	int64_t x1115 = INT64_MIN;
	uint8_t x1116 = UINT8_MAX;
	static volatile uint64_t t178 = 211590982597099345LLU;

    t178 = ((x1113*(x1114+x1115))%x1116);

    if (t178 != 113LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1121 = INT16_MIN;
	uint32_t x1122 = 29U;
	volatile uint8_t x1123 = 1U;
	int8_t x1124 = INT8_MIN;
	uint32_t t179 = 1915218763U;

    t179 = ((x1121*(x1122+x1123))%x1124);

    if (t179 != 4293984256U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint32_t x1125 = 17U;
	volatile int32_t x1126 = -192368975;
	int16_t x1127 = INT16_MIN;
	int8_t x1128 = INT8_MIN;
	volatile uint32_t t180 = 28544U;

    t180 = ((x1125*(x1126+x1127))%x1128);

    if (t180 != 1024137665U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1138 = 297LLU;
	int16_t x1139 = 0;
	static volatile int32_t x1140 = -6071;
	volatile uint64_t t181 = 6557LLU;

    t181 = ((x1137*(x1138+x1139))%x1140);

    if (t181 != 18446744073709537063LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x1141 = 1564812551829075718LLU;
	int32_t x1144 = INT32_MIN;
	uint64_t t182 = 583176746029250746LLU;

    t182 = ((x1141*(x1142+x1143))%x1144);

    if (t182 != 958285615238627176LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1149 = 2U;
	int16_t x1150 = INT16_MIN;
	int64_t x1151 = -1LL;
	int64_t x1152 = -1LL;
	static volatile int64_t t183 = -5915LL;

    t183 = ((x1149*(x1150+x1151))%x1152);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1153 = 17;
	int16_t x1155 = INT16_MIN;
	volatile int16_t x1156 = INT16_MAX;
	static uint64_t t184 = 98473696856525LLU;

    t184 = ((x1153*(x1154+x1155))%x1156);

    if (t184 != 32749LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x1161 = 26U;
	int16_t x1163 = -1;
	int16_t x1164 = 28;
	volatile int64_t t185 = 2LL;

    t185 = ((x1161*(x1162+x1163))%x1164);

    if (t185 != -24LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x1169 = 1LLU;
	int32_t x1170 = INT32_MIN;
	int64_t x1171 = 73866916683LL;
	static volatile int16_t x1172 = 195;
	volatile uint64_t t186 = 118209927785760LLU;

    t186 = ((x1169*(x1170+x1171))%x1172);

    if (t186 != 55LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x1173 = INT32_MIN;
	static int8_t x1174 = 2;
	int16_t x1175 = -1;
	int32_t t187 = 0;

    t187 = ((x1173*(x1174+x1175))%x1176);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1181 = 1LLU;
	volatile int64_t x1182 = INT64_MIN;
	int16_t x1183 = INT16_MAX;
	int32_t x1184 = INT32_MAX;
	volatile uint64_t t188 = 135774289346554LLU;

    t188 = ((x1181*(x1182+x1183))%x1184);

    if (t188 != 32769LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1190 = UINT32_MAX;
	uint64_t t189 = 33145842LLU;

    t189 = ((x1189*(x1190+x1191))%x1192);

    if (t189 != 519129LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1193 = -1LL;
	volatile int8_t x1194 = INT8_MIN;
	uint64_t x1195 = UINT64_MAX;
	int32_t x1196 = INT32_MAX;
	volatile uint64_t t190 = 12461695458031LLU;

    t190 = ((x1193*(x1194+x1195))%x1196);

    if (t190 != 129LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1201 = 51;
	uint64_t x1202 = UINT64_MAX;
	int64_t x1204 = 16LL;
	uint64_t t191 = 2444406604667775314LLU;

    t191 = ((x1201*(x1202+x1203))%x1204);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1213 = UINT16_MAX;
	uint8_t x1214 = UINT8_MAX;
	int8_t x1215 = 7;
	int8_t x1216 = INT8_MIN;
	int32_t t192 = 4560394;

    t192 = ((x1213*(x1214+x1215))%x1216);

    if (t192 != 122) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x1217 = UINT8_MAX;
	uint32_t x1218 = UINT32_MAX;
	int64_t x1219 = -14366959992941302LL;
	uint32_t x1220 = 1648350U;
	volatile int64_t t193 = 544247LL;

    t193 = ((x1217*(x1218+x1219))%x1220);

    if (t193 != -1397685LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1221 = -1;
	uint8_t x1222 = UINT8_MAX;
	int64_t x1223 = INT64_MIN;
	int64_t t194 = 6962699LL;

    t194 = ((x1221*(x1222+x1223))%x1224);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1225 = -62;
	volatile uint32_t x1226 = UINT32_MAX;
	static int32_t x1228 = INT32_MIN;
	volatile uint32_t t195 = 3375U;

    t195 = ((x1225*(x1226+x1227))%x1228);

    if (t195 != 2147482966U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1229 = INT64_MIN;
	static volatile int8_t x1230 = 0;
	volatile int32_t x1231 = 0;
	int64_t t196 = -65832825435853299LL;

    t196 = ((x1229*(x1230+x1231))%x1232);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1233 = -1;
	static uint32_t x1234 = UINT32_MAX;
	int8_t x1235 = INT8_MIN;
	int32_t x1236 = -16416832;

    t197 = ((x1233*(x1234+x1235))%x1236);

    if (t197 != 129U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1237 = -140;
	volatile uint16_t x1238 = 152U;
	int32_t x1239 = -1;
	int64_t x1240 = INT64_MIN;

    t198 = ((x1237*(x1238+x1239))%x1240);

    if (t198 != -21140LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1241 = -1LL;
	int8_t x1242 = -1;
	uint16_t x1244 = UINT16_MAX;
	volatile int64_t t199 = 326827665302LL;

    t199 = ((x1241*(x1242+x1243))%x1244);

    if (t199 != -2LL) { NG(); } else { ; }
	
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

