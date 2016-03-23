
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

static int8_t x5 = -1;
int16_t x6 = INT16_MIN;
volatile int8_t x7 = 9;
int16_t x8 = -1;
int32_t x25 = 3102;
int16_t x36 = INT16_MIN;
static volatile uint64_t t6 = 138177780875LLU;
int32_t x42 = 0;
uint8_t x52 = 1U;
static uint64_t x54 = 266232996281837811LLU;
int32_t x55 = INT32_MAX;
uint64_t x58 = 4364627915463LLU;
int32_t t12 = 569;
uint8_t x83 = UINT8_MAX;
static volatile int64_t x85 = 1505072LL;
volatile int64_t t16 = 172357539295551101LL;
volatile uint16_t x103 = 6U;
uint64_t t20 = 518267LLU;
int32_t x117 = INT32_MIN;
uint8_t x119 = 109U;
uint16_t x120 = UINT16_MAX;
static int16_t x125 = -214;
int16_t x127 = INT16_MAX;
static int64_t x130 = INT64_MAX;
int32_t x135 = INT32_MAX;
volatile int32_t x138 = 3492172;
uint64_t t26 = 204913845841LLU;
uint8_t x142 = 75U;
volatile uint16_t x145 = 20648U;
static int16_t x148 = INT16_MIN;
int8_t x150 = INT8_MAX;
uint8_t x151 = UINT8_MAX;
uint32_t x152 = UINT32_MAX;
int16_t x163 = 84;
volatile int64_t x164 = INT64_MIN;
int8_t x170 = -23;
static uint32_t x171 = UINT32_MAX;
volatile int8_t x173 = INT8_MAX;
uint16_t x183 = UINT16_MAX;
static int16_t x189 = 9312;
volatile int32_t x191 = INT32_MIN;
int8_t x197 = INT8_MIN;
static uint64_t x198 = UINT64_MAX;
int16_t x199 = INT16_MIN;
int16_t x200 = 814;
uint64_t x201 = 6497082971468397622LLU;
int8_t x203 = INT8_MIN;
int8_t x204 = -4;
volatile uint64_t t39 = 466737716222070LLU;
int8_t x208 = INT8_MAX;
volatile uint64_t t40 = 188324LLU;
volatile int64_t t41 = -1116231917386339LL;
int8_t x217 = -1;
volatile int16_t x221 = -2800;
volatile uint64_t t43 = 24144006747LLU;
static volatile int64_t t45 = -9060528LL;
uint16_t x234 = 5U;
int8_t x236 = 21;
static volatile int64_t x265 = 16LL;
uint32_t x267 = UINT32_MAX;
int16_t x290 = -111;
int64_t x291 = -945LL;
static int16_t x300 = INT16_MAX;
int8_t x304 = INT8_MIN;
uint32_t t57 = 1325490U;
static int64_t x326 = -1LL;
int16_t x327 = INT16_MIN;
volatile int64_t t59 = -24LL;
static uint32_t x337 = 299U;
int16_t x345 = 10032;
static volatile uint64_t t65 = 499815043279LLU;
int64_t x363 = -2LL;
int32_t x368 = 36;
int16_t x384 = -336;
volatile uint64_t t72 = 18106878033LLU;
int16_t x385 = 225;
uint8_t x387 = 1U;
static int16_t x396 = -5;
volatile int64_t x397 = INT64_MAX;
uint8_t x412 = 62U;
uint64_t t80 = 9LLU;
int16_t x426 = 1;
volatile int64_t x427 = INT64_MAX;
static int64_t x441 = INT64_MIN;
volatile int64_t t86 = 7LL;
static int8_t x459 = 1;
uint64_t x463 = 6864545567297LLU;
uint64_t x469 = UINT64_MAX;
uint64_t x483 = 420806996527515LLU;
uint64_t t91 = 2692538304565LLU;
int32_t x487 = -1;
int64_t x495 = -1LL;
int16_t x524 = INT16_MIN;
volatile int8_t x532 = -34;
int16_t x536 = -276;
int32_t x545 = INT32_MIN;
int16_t x550 = INT16_MAX;
uint64_t x557 = 8267457LLU;
static int16_t x568 = -1;
volatile uint8_t x573 = 63U;
int32_t x576 = -1;
int32_t t105 = -116993;
int64_t x586 = -259354069460LL;
volatile int32_t x602 = -11414;
int32_t x603 = INT32_MAX;
int8_t x610 = INT8_MIN;
uint64_t x615 = 6358436171533527422LLU;
uint64_t x616 = UINT64_MAX;
static uint16_t x624 = 1590U;
uint64_t x626 = UINT64_MAX;
uint8_t x627 = UINT8_MAX;
static int16_t x628 = INT16_MIN;
volatile uint64_t t116 = 223696179333LLU;
int32_t x632 = INT32_MIN;
volatile int64_t x634 = -1LL;
uint16_t x635 = UINT16_MAX;
int64_t x638 = -28232474318144936LL;
volatile int32_t t121 = -2675;
volatile int16_t x651 = -1;
volatile uint32_t t122 = 1130971U;
static int16_t x654 = -1;
uint64_t t126 = 7LLU;
uint32_t x674 = UINT32_MAX;
static int64_t x680 = -5015350LL;
volatile int32_t x685 = 7475;
volatile int32_t x689 = -1;
uint8_t x696 = UINT8_MAX;
int16_t x726 = INT16_MAX;
int16_t x729 = 8;
int16_t x731 = INT16_MIN;
int32_t x735 = -884;
static uint64_t x747 = UINT64_MAX;
volatile int16_t x750 = 6;
int16_t x752 = -1;
volatile int64_t t143 = 3020LL;
uint32_t x759 = UINT32_MAX;
volatile int64_t x768 = 8109343060LL;
volatile uint64_t t147 = 15595943LLU;
static int32_t x788 = 946645704;
int32_t t151 = 28207248;
uint32_t x814 = 167821904U;
static uint32_t t153 = 12544939U;
static int16_t x821 = -1;
uint64_t t155 = 4000817516720969LLU;
int64_t x832 = INT64_MAX;
uint64_t t157 = 40LLU;
static uint8_t x834 = 89U;
volatile uint32_t t159 = 11713826U;
int32_t x868 = -1;
int16_t x869 = INT16_MIN;
static int16_t x872 = 6085;
volatile int64_t t164 = -136406748871190LL;
int32_t x879 = 515;
volatile int32_t x881 = INT32_MIN;
int64_t x882 = 24368LL;
uint16_t x884 = UINT16_MAX;
int32_t x894 = -1;
static int64_t x901 = -1LL;
volatile int64_t t170 = 884899LL;
int16_t x921 = 379;
int16_t x922 = -1;
volatile uint16_t x923 = 3U;
uint64_t x930 = UINT64_MAX;
static volatile uint64_t t174 = 386752140339LLU;
int16_t x937 = INT16_MAX;
uint64_t t176 = 4196213976325379054LLU;
int16_t x942 = INT16_MAX;
volatile uint32_t t178 = 88737602U;
volatile int16_t x950 = INT16_MIN;
static uint32_t x974 = 4U;
volatile int16_t x977 = -1;
static volatile int16_t x978 = INT16_MIN;
volatile int32_t t185 = -670566478;
int64_t x985 = -1047481514260252LL;
int8_t x1017 = 0;
int16_t x1023 = 25;
int64_t t195 = -2048711LL;
int64_t x1045 = 117002442290203287LL;
uint64_t x1047 = 207LLU;
static int8_t x1050 = -1;
static int64_t x1051 = -1LL;


void f0(void) {
    	volatile int32_t t0 = -878564;

    t0 = ((x5+x6)^(x7+x8));

    if (t0 != -32777) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x9 = UINT64_MAX;
	int8_t x10 = INT8_MAX;
	volatile uint32_t x11 = 192U;
	static int16_t x12 = -1;
	uint64_t t1 = 28905LLU;

    t1 = ((x9+x10)^(x11+x12));

    if (t1 != 193LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x17 = INT32_MIN;
	uint32_t x18 = 819U;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MIN;
	static uint32_t t2 = 41U;

    t2 = ((x17+x18)^(x19+x20));

    if (t2 != 2147482700U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = INT32_MAX;
	int64_t x22 = INT64_MIN;
	static volatile uint32_t x23 = 0U;
	int8_t x24 = 3;
	int64_t t3 = 5906LL;

    t3 = ((x21+x22)^(x23+x24));

    if (t3 != -9223372034707292164LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x26 = 114U;
	volatile int32_t x27 = INT32_MIN;
	uint64_t x28 = 38894678072832313LLU;
	volatile uint64_t t4 = 224417916888LLU;

    t4 = ((x25+x26)^(x27+x28));

    if (t4 != 38894675925351849LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x33 = -44;
	volatile uint64_t x34 = 0LLU;
	uint32_t x35 = 435828680U;
	uint64_t t5 = 29582LLU;

    t5 = ((x33+x34)^(x35+x36));

    if (t5 != 18446744073273755676LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x37 = UINT32_MAX;
	int64_t x38 = 15937408396LL;
	volatile uint64_t x39 = UINT64_MAX;
	static int64_t x40 = INT64_MIN;

    t6 = ((x37+x38)^(x39+x40));

    if (t6 != 9223372016622400116LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = INT32_MIN;
	static volatile int32_t x43 = 39402;
	static volatile int8_t x44 = INT8_MAX;
	volatile int32_t t7 = 0;

    t7 = ((x41+x42)^(x43+x44));

    if (t7 != -2147444119) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x45 = -54LL;
	uint8_t x46 = UINT8_MAX;
	int64_t x47 = -525332647LL;
	volatile int32_t x48 = 772;
	static volatile int64_t t8 = -5906LL;

    t8 = ((x45+x46)^(x47+x48));

    if (t8 != -525331820LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x49 = INT8_MIN;
	uint64_t x50 = 917391221203918182LLU;
	static volatile int64_t x51 = -251228105067LL;
	uint64_t t9 = 362944775012348LLU;

    t9 = ((x49+x50)^(x51+x52));

    if (t9 != 17529353013671004784LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x53 = -1LL;
	int64_t x56 = 434004LL;
	uint64_t t10 = 1LLU;

    t10 = ((x53+x54)^(x55+x56));

    if (t10 != 266232994134194081LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = INT16_MIN;
	int8_t x59 = -1;
	static volatile int32_t x60 = INT32_MAX;
	uint64_t t11 = 33761251996662357LLU;

    t11 = ((x57+x58)^(x59+x60));

    if (t11 != 4364893146425LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x61 = INT32_MIN;
	uint16_t x62 = 5323U;
	static int32_t x63 = INT32_MIN;
	uint8_t x64 = 4U;

    t12 = ((x61+x62)^(x63+x64));

    if (t12 != 5327) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x69 = 2531LL;
	int64_t x70 = -14636125210660LL;
	uint16_t x71 = 1716U;
	volatile int16_t x72 = -1;
	volatile int64_t t13 = 4025568LL;

    t13 = ((x69+x70)^(x71+x72));

    if (t13 != -14636125206772LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x73 = -25;
	int16_t x74 = -498;
	volatile uint32_t x75 = UINT32_MAX;
	int8_t x76 = INT8_MAX;
	uint32_t t14 = 14107U;

    t14 = ((x73+x74)^(x75+x76));

    if (t14 != 4294966667U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x81 = -1242;
	int8_t x82 = 24;
	volatile int8_t x84 = -1;
	volatile int32_t t15 = -58201;

    t15 = ((x81+x82)^(x83+x84));

    if (t15 != -1088) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x86 = -58;
	uint32_t x87 = UINT32_MAX;
	static int64_t x88 = INT64_MIN;

    t16 = ((x85+x86)^(x87+x88));

    if (t16 != -9223372032561313527LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x89 = INT32_MAX;
	int8_t x90 = -1;
	int32_t x91 = -42;
	static int32_t x92 = -2;
	volatile int32_t t17 = 9563;

    t17 = ((x89+x90)^(x91+x92));

    if (t17 != -2147483606) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x101 = INT64_MIN;
	uint8_t x102 = 1U;
	int8_t x104 = -34;
	int64_t t18 = -403LL;

    t18 = ((x101+x102)^(x103+x104));

    if (t18 != 9223372036854775781LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x105 = INT64_MIN;
	uint8_t x106 = UINT8_MAX;
	int16_t x107 = -5538;
	static volatile int8_t x108 = INT8_MAX;
	volatile int64_t t19 = -1803LL;

    t19 = ((x105+x106)^(x107+x108));

    if (t19 != 9223372036854770210LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x113 = 83U;
	static uint64_t x114 = 2160114248LLU;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = 131685757LLU;

    t20 = ((x113+x114)^(x115+x116));

    if (t20 != 2266621542LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x118 = 4U;
	int32_t t21 = -4;

    t21 = ((x117+x118)^(x119+x120));

    if (t21 != -2147418008) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x121 = 1243320345781LLU;
	uint64_t x122 = UINT64_MAX;
	int32_t x123 = -13;
	int64_t x124 = -1LL;
	static volatile uint64_t t22 = 1107210302LLU;

    t22 = ((x121+x122)^(x123+x124));

    if (t22 != 18446742830389205830LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x126 = INT16_MIN;
	static int32_t x128 = -1719;
	static volatile int32_t t23 = 529;

    t23 = ((x125+x126)^(x127+x128));

    if (t23 != -63902) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x129 = -1;
	volatile uint16_t x131 = 917U;
	int8_t x132 = -1;
	int64_t t24 = -265138105511LL;

    t24 = ((x129+x130)^(x131+x132));

    if (t24 != 9223372036854774890LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x133 = 7604U;
	int8_t x134 = -1;
	int32_t x136 = -1;
	static volatile int32_t t25 = -374148;

    t25 = ((x133+x134)^(x135+x136));

    if (t25 != 2147476045) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x137 = UINT64_MAX;
	static int32_t x139 = -95;
	int16_t x140 = -1;

    t26 = ((x137+x138)^(x139+x140));

    if (t26 != 18446744073706059499LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x141 = 7;
	volatile int16_t x143 = INT16_MIN;
	static uint16_t x144 = 7079U;
	int32_t t27 = -847677;

    t27 = ((x141+x142)^(x143+x144));

    if (t27 != -25611) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x146 = 4254;
	volatile int16_t x147 = 215;
	int32_t t28 = -1;

    t28 = ((x145+x146)^(x147+x148));

    if (t28 != -7791) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint8_t x149 = 23U;
	volatile uint32_t t29 = 5U;

    t29 = ((x149+x150)^(x151+x152));

    if (t29 != 104U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x153 = -1;
	static uint32_t x154 = UINT32_MAX;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = UINT8_MAX;
	uint32_t t30 = 118U;

    t30 = ((x153+x154)^(x155+x156));

    if (t30 != 2147483393U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x157 = -1;
	uint32_t x158 = UINT32_MAX;
	volatile int32_t x159 = 7;
	volatile int64_t x160 = INT64_MIN;
	volatile int64_t t31 = -864168988138LL;

    t31 = ((x157+x158)^(x159+x160));

    if (t31 != -9223372032559808519LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x161 = 601925043U;
	int32_t x162 = -1;
	volatile int64_t t32 = -5148195025LL;

    t32 = ((x161+x162)^(x163+x164));

    if (t32 != -9223372036252850714LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x169 = UINT32_MAX;
	int64_t x172 = -1LL;
	volatile int64_t t33 = -48354LL;

    t33 = ((x169+x170)^(x171+x172));

    if (t33 != 22LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x174 = INT8_MIN;
	static volatile int16_t x175 = INT16_MIN;
	volatile uint64_t x176 = 109532LLU;
	uint64_t t34 = 61234583LLU;

    t34 = ((x173+x174)^(x175+x176));

    if (t34 != 18446744073709474851LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x177 = -1;
	int32_t x178 = -60461;
	volatile int64_t x179 = INT64_MIN;
	int16_t x180 = 236;
	volatile int64_t t35 = -43688659355848LL;

    t35 = ((x177+x178)^(x179+x180));

    if (t35 != 9223372036854715198LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x181 = 15388795LL;
	int8_t x182 = INT8_MIN;
	static volatile uint64_t x184 = 47506LLU;
	volatile uint64_t t36 = 52114392386970653LLU;

    t36 = ((x181+x182)^(x183+x184));

    if (t36 != 15431274LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x190 = 122308344667129163LL;
	volatile int64_t x192 = 5633LL;
	int64_t t37 = -9855619LL;

    t37 = ((x189+x190)^(x191+x192));

    if (t37 != -122308345843187798LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t t38 = 4279834126LLU;

    t38 = ((x197+x198)^(x199+x200));

    if (t38 != 31825LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x202 = UINT8_MAX;

    t39 = ((x201+x202)^(x203+x204));

    if (t39 != 11949661102241153609LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x205 = 45419LLU;
	volatile int16_t x206 = -1;
	static int8_t x207 = 1;

    t40 = ((x205+x206)^(x207+x208));

    if (t40 != 45546LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x213 = 18;
	int64_t x214 = -118LL;
	int16_t x215 = INT16_MIN;
	uint32_t x216 = 8U;

    t41 = ((x213+x214)^(x215+x216));

    if (t41 != -4294934636LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x218 = UINT8_MAX;
	volatile uint16_t x219 = UINT16_MAX;
	uint64_t x220 = UINT64_MAX;
	uint64_t t42 = 633848236210459LLU;

    t42 = ((x217+x218)^(x219+x220));

    if (t42 != 65280LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x222 = 61123122737817986LLU;
	volatile uint32_t x223 = UINT32_MAX;
	int16_t x224 = INT16_MAX;

    t43 = ((x221+x222)^(x223+x224));

    if (t43 != 61123122737832300LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x225 = -1;
	int8_t x226 = -1;
	volatile uint64_t x227 = 614833745LLU;
	volatile int64_t x228 = INT64_MIN;
	volatile uint64_t t44 = 124891984351948398LLU;

    t44 = ((x225+x226)^(x227+x228));

    if (t44 != 9223372036239942063LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x229 = UINT16_MAX;
	int64_t x230 = -167060LL;
	static int8_t x231 = 1;
	volatile int8_t x232 = INT8_MIN;

    t45 = ((x229+x230)^(x231+x232));

    if (t45 != 101610LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x233 = INT16_MAX;
	volatile int8_t x235 = INT8_MIN;
	volatile int32_t t46 = -240134;

    t46 = ((x233+x234)^(x235+x236));

    if (t46 != -32879) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x245 = UINT32_MAX;
	int8_t x246 = 12;
	volatile int16_t x247 = 3;
	uint16_t x248 = 8U;
	uint32_t t47 = 265392880U;

    t47 = ((x245+x246)^(x247+x248));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x249 = -1;
	static volatile int16_t x250 = -1;
	uint32_t x251 = UINT32_MAX;
	int64_t x252 = -40565LL;
	volatile int64_t t48 = 109485137636944692LL;

    t48 = ((x249+x250)^(x251+x252));

    if (t48 != -4294926732LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x253 = -1;
	static int8_t x254 = -1;
	int8_t x255 = 46;
	uint8_t x256 = 32U;
	static int32_t t49 = -4;

    t49 = ((x253+x254)^(x255+x256));

    if (t49 != -80) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x261 = 2U;
	static volatile uint32_t x262 = 7U;
	int64_t x263 = INT64_MIN;
	int8_t x264 = 0;
	int64_t t50 = -10476624060895LL;

    t50 = ((x261+x262)^(x263+x264));

    if (t50 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x266 = 15U;
	int8_t x268 = -38;
	volatile int64_t t51 = -10941668LL;

    t51 = ((x265+x266)^(x267+x268));

    if (t51 != 4294967238LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x273 = 0;
	int8_t x274 = -1;
	volatile uint8_t x275 = 113U;
	int64_t x276 = -1LL;
	int64_t t52 = 36979533644285088LL;

    t52 = ((x273+x274)^(x275+x276));

    if (t52 != -113LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x289 = 69LLU;
	int16_t x292 = INT16_MIN;
	static volatile uint64_t t53 = 42594868752LLU;

    t53 = ((x289+x290)^(x291+x292));

    if (t53 != 33689LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint16_t x293 = 25867U;
	int16_t x294 = 0;
	int32_t x295 = INT32_MIN;
	static int32_t x296 = 0;
	static int32_t t54 = 14880;

    t54 = ((x293+x294)^(x295+x296));

    if (t54 != -2147457781) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x297 = 95U;
	static volatile int8_t x298 = INT8_MIN;
	uint8_t x299 = 12U;
	int32_t t55 = 1540283;

    t55 = ((x297+x298)^(x299+x300));

    if (t55 != -32812) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x301 = 186;
	int64_t x302 = INT64_MIN;
	static int16_t x303 = 952;
	int64_t t56 = -2352233616389488026LL;

    t56 = ((x301+x302)^(x303+x304));

    if (t56 != -9223372036854774910LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x313 = UINT32_MAX;
	static int16_t x314 = 5;
	volatile uint8_t x315 = UINT8_MAX;
	int16_t x316 = -22;

    t57 = ((x313+x314)^(x315+x316));

    if (t57 != 237U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x317 = 17292803327108501LL;
	volatile int8_t x318 = -11;
	int8_t x319 = INT8_MIN;
	static int64_t x320 = INT64_MAX;
	int64_t t58 = -205355518772596553LL;

    t58 = ((x317+x318)^(x319+x320));

    if (t58 != 9206079233527667445LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x325 = 290206U;
	int64_t x328 = 2169515LL;

    t59 = ((x325+x326)^(x327+x328));

    if (t59 != 2422582LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x329 = UINT64_MAX;
	int8_t x330 = INT8_MIN;
	int64_t x331 = -92363942205LL;
	int32_t x332 = INT32_MAX;
	volatile uint64_t t60 = 803453919899603310LLU;

    t60 = ((x329+x330)^(x331+x332));

    if (t60 != 90216458685LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x338 = 0LL;
	int16_t x339 = INT16_MAX;
	int64_t x340 = 134LL;
	volatile int64_t t61 = -70583486431LL;

    t61 = ((x337+x338)^(x339+x340));

    if (t61 != 33198LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x341 = 119U;
	volatile int32_t x342 = -1;
	int16_t x343 = 472;
	static uint32_t x344 = UINT32_MAX;
	static uint32_t t62 = 9724446U;

    t62 = ((x341+x342)^(x343+x344));

    if (t62 != 417U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x346 = INT8_MIN;
	int8_t x347 = -1;
	static int32_t x348 = 264893;
	volatile int32_t t63 = -230043;

    t63 = ((x345+x346)^(x347+x348));

    if (t63 != 273420) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x349 = 8U;
	uint32_t x350 = 70148384U;
	volatile uint64_t x351 = UINT64_MAX;
	volatile int16_t x352 = -23;
	volatile uint64_t t64 = 2007454097796038LLU;

    t64 = ((x349+x350)^(x351+x352));

    if (t64 != 18446744073639403200LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x353 = UINT64_MAX;
	volatile uint16_t x354 = UINT16_MAX;
	volatile uint32_t x355 = UINT32_MAX;
	volatile uint32_t x356 = UINT32_MAX;

    t65 = ((x353+x354)^(x355+x356));

    if (t65 != 4294901760LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x357 = INT8_MIN;
	uint32_t x358 = 9606U;
	int16_t x359 = INT16_MAX;
	int64_t x360 = -61LL;
	volatile int64_t t66 = 0LL;

    t66 = ((x357+x358)^(x359+x360));

    if (t66 != 23236LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x361 = INT16_MAX;
	static volatile int16_t x362 = -1;
	uint16_t x364 = 17037U;
	static int64_t t67 = 56214899LL;

    t67 = ((x361+x362)^(x363+x364));

    if (t67 != 15733LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x365 = INT64_MAX;
	uint64_t x366 = 8149647942746LLU;
	static int8_t x367 = INT8_MIN;
	volatile uint64_t t68 = 5785962378271200247LLU;

    t68 = ((x365+x366)^(x367+x368));

    if (t68 != 9223363887206833149LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x369 = 120733850006397LLU;
	static int8_t x370 = INT8_MIN;
	static uint64_t x371 = UINT64_MAX;
	static int32_t x372 = INT32_MIN;
	static volatile uint64_t t69 = 1399114650536605737LLU;

    t69 = ((x369+x370)^(x371+x372));

    if (t69 != 18446623342007028994LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x373 = UINT8_MAX;
	int16_t x374 = INT16_MIN;
	static int32_t x375 = INT32_MIN;
	uint32_t x376 = 120570821U;
	uint32_t t70 = 991U;

    t70 = ((x373+x374)^(x375+x376));

    if (t70 != 2026914618U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MAX;
	static int64_t x379 = -1LL;
	volatile int32_t x380 = INT32_MAX;
	static int64_t t71 = -119948596794LL;

    t71 = ((x377+x378)^(x379+x380));

    if (t71 != -2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x381 = INT64_MIN;
	uint64_t x382 = 7150310757LLU;
	int16_t x383 = INT16_MIN;

    t72 = ((x381+x382)^(x383+x384));

    if (t72 != 9223372029704432597LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x386 = UINT8_MAX;
	uint8_t x388 = UINT8_MAX;
	int32_t t73 = 238396;

    t73 = ((x385+x386)^(x387+x388));

    if (t73 != 224) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x389 = 537U;
	int16_t x390 = INT16_MAX;
	volatile uint8_t x391 = UINT8_MAX;
	volatile uint16_t x392 = 19U;
	volatile int32_t t74 = -2;

    t74 = ((x389+x390)^(x391+x392));

    if (t74 != 33546) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x393 = 266054328U;
	uint8_t x394 = 22U;
	volatile int16_t x395 = -1;
	uint32_t t75 = 485653U;

    t75 = ((x393+x394)^(x395+x396));

    if (t75 != 4028912948U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x398 = INT8_MIN;
	static int8_t x399 = INT8_MIN;
	int64_t x400 = 3515LL;
	int64_t t76 = -414468703281LL;

    t76 = ((x397+x398)^(x399+x400));

    if (t76 != 9223372036854772292LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x409 = -1;
	static int8_t x410 = INT8_MIN;
	uint16_t x411 = 1U;
	int32_t t77 = -775;

    t77 = ((x409+x410)^(x411+x412));

    if (t77 != -192) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x413 = 200U;
	static volatile int16_t x414 = INT16_MIN;
	int8_t x415 = -1;
	int32_t x416 = -2092541;
	uint32_t t78 = 15U;

    t78 = ((x413+x414)^(x415+x416));

    if (t78 != 2069194U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x417 = INT8_MIN;
	uint32_t x418 = UINT32_MAX;
	int16_t x419 = -1866;
	uint64_t x420 = UINT64_MAX;
	uint64_t t79 = 29089678285LLU;

    t79 = ((x417+x418)^(x419+x420));

    if (t79 != 18446744069414586314LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x421 = INT16_MAX;
	int32_t x422 = 169321244;
	volatile uint64_t x423 = 19758589928LLU;
	int32_t x424 = INT32_MAX;

    t80 = ((x421+x422)^(x423+x424));

    if (t80 != 21804877052LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x425 = INT16_MIN;
	int8_t x428 = -30;
	int64_t t81 = -69911LL;

    t81 = ((x425+x426)^(x427+x428));

    if (t81 != -9223372036854743072LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x429 = INT16_MIN;
	volatile int8_t x430 = -1;
	uint32_t x431 = 29U;
	uint8_t x432 = 3U;
	uint32_t t82 = 90869650U;

    t82 = ((x429+x430)^(x431+x432));

    if (t82 != 4294934495U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x437 = 8024478470731397LLU;
	int16_t x438 = -22;
	volatile uint32_t x439 = 851U;
	int16_t x440 = -1;
	volatile uint64_t t83 = 5LLU;

    t83 = ((x437+x438)^(x439+x440));

    if (t83 != 8024478470731069LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x442 = 27;
	static int32_t x443 = INT32_MIN;
	static volatile int32_t x444 = 3529;
	static int64_t t84 = 1234476016715LL;

    t84 = ((x441+x442)^(x443+x444));

    if (t84 != 9223372034707295698LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x445 = -11;
	uint8_t x446 = UINT8_MAX;
	volatile uint16_t x447 = 10348U;
	uint64_t x448 = 438342529LLU;
	volatile uint64_t t85 = 53LLU;

    t85 = ((x445+x446)^(x447+x448));

    if (t85 != 438352665LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x453 = 27;
	static volatile int32_t x454 = 5853428;
	int64_t x455 = INT64_MAX;
	int64_t x456 = -1LL;

    t86 = ((x453+x454)^(x455+x456));

    if (t86 != 9223372036848922353LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x457 = 376502723881LLU;
	int16_t x458 = -22;
	volatile int32_t x460 = INT32_MIN;
	volatile uint64_t t87 = 28502LLU;

    t87 = ((x457+x458)^(x459+x460));

    if (t87 != 18446743696445515026LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x461 = INT16_MAX;
	int64_t x462 = -1LL;
	int32_t x464 = INT32_MAX;
	static uint64_t t88 = 822747589298LLU;

    t88 = ((x461+x462)^(x463+x464));

    if (t88 != 6866693041598LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x470 = 2156067530289395LLU;
	int32_t x471 = INT32_MIN;
	static int64_t x472 = 358LL;
	static uint64_t t89 = 305277444LLU;

    t89 = ((x469+x470)^(x471+x472));

    if (t89 != 18444588004812075412LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x477 = 321U;
	static int32_t x478 = INT32_MIN;
	int16_t x479 = INT16_MIN;
	int16_t x480 = INT16_MIN;
	static volatile int32_t t90 = 1;

    t90 = ((x477+x478)^(x479+x480));

    if (t90 != 2147418433) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x481 = UINT16_MAX;
	int16_t x482 = -1;
	volatile int16_t x484 = 904;

    t91 = ((x481+x482)^(x483+x484));

    if (t91 != 420806996587229LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x485 = INT32_MAX;
	int64_t x486 = INT64_MIN;
	uint64_t x488 = 4470733LLU;
	uint64_t t92 = 6707546292LLU;

    t92 = ((x485+x486)^(x487+x488));

    if (t92 != 9223372038997788723LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x493 = UINT32_MAX;
	uint32_t x494 = 46193U;
	uint64_t x496 = UINT64_MAX;
	uint64_t t93 = 1587685138997LLU;

    t93 = ((x493+x494)^(x495+x496));

    if (t93 != 18446744073709505422LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x501 = 0U;
	int64_t x502 = -1LL;
	volatile uint8_t x503 = UINT8_MAX;
	uint64_t x504 = UINT64_MAX;
	static uint64_t t94 = 855824010447036549LLU;

    t94 = ((x501+x502)^(x503+x504));

    if (t94 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x505 = -1;
	int16_t x506 = INT16_MIN;
	int16_t x507 = INT16_MIN;
	int16_t x508 = INT16_MIN;
	int32_t t95 = -26;

    t95 = ((x505+x506)^(x507+x508));

    if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	uint64_t x522 = 1279192927LLU;
	int8_t x523 = INT8_MIN;
	uint64_t t96 = 4073349864LLU;

    t96 = ((x521+x522)^(x523+x524));

    if (t96 != 18446744072430391518LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x529 = 26909172U;
	static uint32_t x530 = 416710219U;
	int16_t x531 = -14;
	volatile uint32_t t97 = 464556967U;

    t97 = ((x529+x530)^(x531+x532));

    if (t97 != 3851347951U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x533 = INT32_MAX;
	static uint32_t x534 = 27189376U;
	static volatile uint16_t x535 = UINT16_MAX;
	volatile uint32_t t98 = 27U;

    t98 = ((x533+x534)^(x535+x536));

    if (t98 != 2174623380U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x537 = INT32_MIN;
	static uint8_t x538 = UINT8_MAX;
	int64_t x539 = INT64_MAX;
	int64_t x540 = -1LL;
	int64_t t99 = 532399007007LL;

    t99 = ((x537+x538)^(x539+x540));

    if (t99 != -9223372034707292415LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x546 = UINT8_MAX;
	static int16_t x547 = INT16_MIN;
	static int8_t x548 = -1;
	int32_t t100 = -838419174;

    t100 = ((x545+x546)^(x547+x548));

    if (t100 != 2147450624) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x549 = 80U;
	uint16_t x551 = UINT16_MAX;
	int8_t x552 = INT8_MIN;
	static int32_t t101 = -1;

    t101 = ((x549+x550)^(x551+x552));

    if (t101 != 32560) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x553 = INT32_MIN;
	int32_t x554 = INT32_MAX;
	static volatile uint8_t x555 = 0U;
	uint64_t x556 = 1043478400875129LLU;
	uint64_t t102 = 260496617561032LLU;

    t102 = ((x553+x554)^(x555+x556));

    if (t102 != 18445700595308676486LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x558 = INT32_MAX;
	uint16_t x559 = UINT16_MAX;
	volatile int16_t x560 = INT16_MIN;
	volatile uint64_t t103 = 29413949819591LLU;

    t103 = ((x557+x558)^(x559+x560));

    if (t103 != 2155764031LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x566 = -1;
	static uint8_t x567 = UINT8_MAX;
	static int32_t t104 = 14;

    t104 = ((x565+x566)^(x567+x568));

    if (t104 != -33023) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x574 = 17U;
	static int32_t x575 = -1;

    t105 = ((x573+x574)^(x575+x576));

    if (t105 != -82) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x577 = INT64_MAX;
	volatile int8_t x578 = -1;
	int8_t x579 = -2;
	uint32_t x580 = UINT32_MAX;
	int64_t t106 = -7984883LL;

    t106 = ((x577+x578)^(x579+x580));

    if (t106 != 9223372032559808515LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x581 = 0U;
	int16_t x582 = INT16_MAX;
	int64_t x583 = 87178345LL;
	uint8_t x584 = 92U;
	int64_t t107 = -596728896293552943LL;

    t107 = ((x581+x582)^(x583+x584));

    if (t107 != 87180090LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x585 = 6108U;
	int32_t x587 = -1;
	int16_t x588 = -15;
	int64_t t108 = -58182413339656LL;

    t108 = ((x585+x586)^(x587+x588));

    if (t108 != 259354063352LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x589 = INT16_MIN;
	uint8_t x590 = UINT8_MAX;
	int32_t x591 = 40;
	volatile int8_t x592 = 21;
	int32_t t109 = 40007966;

    t109 = ((x589+x590)^(x591+x592));

    if (t109 != -32574) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x593 = 0U;
	int8_t x594 = 44;
	int64_t x595 = -194066LL;
	volatile uint8_t x596 = 17U;
	int64_t t110 = -390448626LL;

    t110 = ((x593+x594)^(x595+x596));

    if (t110 != -194093LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x601 = INT16_MIN;
	volatile int16_t x604 = -33;
	volatile int32_t t111 = 6479;

    t111 = ((x601+x602)^(x603+x604));

    if (t111 != -2147439436) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x609 = 590845818695704LLU;
	uint32_t x611 = UINT32_MAX;
	volatile int32_t x612 = -1;
	uint64_t t112 = 95617LLU;

    t112 = ((x609+x610)^(x611+x612));

    if (t112 != 590850008289382LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x613 = 0U;
	int16_t x614 = -1;
	uint64_t t113 = 829663107793LLU;

    t113 = ((x613+x614)^(x615+x616));

    if (t113 != 12088307902176024194LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x617 = -82;
	uint32_t x618 = UINT32_MAX;
	uint32_t x619 = 216411U;
	uint8_t x620 = 17U;
	uint32_t t114 = 0U;

    t114 = ((x617+x618)^(x619+x620));

    if (t114 != 4294750913U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x621 = 3;
	int16_t x622 = INT16_MIN;
	volatile uint16_t x623 = 96U;
	static int32_t t115 = 644291;

    t115 = ((x621+x622)^(x623+x624));

    if (t115 != -31083) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x625 = -1LL;

    t116 = ((x625+x626)^(x627+x628));

    if (t116 != 32513LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int32_t x629 = -7;
	uint16_t x630 = UINT16_MAX;
	int16_t x631 = 0;
	int32_t t117 = 29487;

    t117 = ((x629+x630)^(x631+x632));

    if (t117 != -2147418120) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x633 = -1;
	volatile int64_t x636 = -8360892990529132LL;
	int64_t t118 = -193851897LL;

    t118 = ((x633+x634)^(x635+x636));

    if (t118 != 8360892990463597LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x637 = 59U;
	int32_t x639 = -1;
	uint16_t x640 = UINT16_MAX;
	int64_t t119 = -8172821864729639LL;

    t119 = ((x637+x638)^(x639+x640));

    if (t119 != -28232474318207635LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x641 = 426;
	uint16_t x642 = UINT16_MAX;
	int16_t x643 = INT16_MAX;
	static int64_t x644 = 93036270293222LL;
	int64_t t120 = 1815231345154LL;

    t120 = ((x641+x642)^(x643+x644));

    if (t120 != 93036270391628LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x645 = INT16_MAX;
	static uint8_t x646 = UINT8_MAX;
	static int8_t x647 = INT8_MAX;
	static volatile int8_t x648 = INT8_MAX;

    t121 = ((x645+x646)^(x647+x648));

    if (t121 != 32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x649 = INT32_MIN;
	uint32_t x650 = 12133U;
	static int16_t x652 = -13;

    t122 = ((x649+x650)^(x651+x652));

    if (t122 != 2147471511U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x653 = 278941000U;
	static uint8_t x655 = 46U;
	uint64_t x656 = UINT64_MAX;
	static volatile uint64_t t123 = 16206647305031LLU;

    t123 = ((x653+x654)^(x655+x656));

    if (t123 != 278941034LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x661 = 92U;
	uint32_t x662 = UINT32_MAX;
	volatile int64_t x663 = -1LL;
	volatile uint8_t x664 = 86U;
	volatile int64_t t124 = 54761519894LL;

    t124 = ((x661+x662)^(x663+x664));

    if (t124 != 14LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x665 = 0U;
	volatile int64_t x666 = -1LL;
	int32_t x667 = 29347145;
	static int8_t x668 = -1;
	volatile int64_t t125 = -5471337LL;

    t125 = ((x665+x666)^(x667+x668));

    if (t125 != -29347145LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x669 = 212LLU;
	volatile int64_t x670 = INT64_MIN;
	volatile int64_t x671 = 44925LL;
	static int32_t x672 = INT32_MIN;

    t126 = ((x669+x670)^(x671+x672));

    if (t126 != 9223372034707337129LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x673 = INT32_MIN;
	uint64_t x675 = 372506LLU;
	volatile int16_t x676 = INT16_MAX;
	volatile uint64_t t127 = 2708917274449LLU;

    t127 = ((x673+x674)^(x675+x676));

    if (t127 != 2147078374LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x677 = INT32_MIN;
	uint32_t x678 = UINT32_MAX;
	int8_t x679 = INT8_MIN;
	static int64_t t128 = 2862200386LL;

    t128 = ((x677+x678)^(x679+x680));

    if (t128 != -2142468171LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x686 = 472U;
	int16_t x687 = -1;
	volatile int32_t x688 = -9;
	volatile uint32_t t129 = 110557U;

    t129 = ((x685+x686)^(x687+x688));

    if (t129 != 4294959357U) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x690 = UINT64_MAX;
	int32_t x691 = INT32_MIN;
	uint64_t x692 = 3885636277539260931LLU;
	volatile uint64_t t130 = 6548085569857LLU;

    t130 = ((x689+x690)^(x691+x692));

    if (t130 != 14561107798317774333LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x693 = -6;
	volatile int16_t x694 = 56;
	int8_t x695 = INT8_MAX;
	int32_t t131 = -4015204;

    t131 = ((x693+x694)^(x695+x696));

    if (t131 != 332) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x697 = 1U;
	uint8_t x698 = UINT8_MAX;
	int16_t x699 = INT16_MAX;
	static uint64_t x700 = UINT64_MAX;
	uint64_t t132 = 2LLU;

    t132 = ((x697+x698)^(x699+x700));

    if (t132 != 32510LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x701 = INT32_MIN;
	int64_t x702 = INT64_MAX;
	uint16_t x703 = UINT16_MAX;
	static volatile int64_t x704 = INT64_MIN;
	int64_t t133 = -216LL;

    t133 = ((x701+x702)^(x703+x704));

    if (t133 != -2147549184LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x705 = 10154U;
	uint16_t x706 = UINT16_MAX;
	int32_t x707 = -1;
	uint32_t x708 = 106U;
	volatile uint32_t t134 = 289U;

    t134 = ((x705+x706)^(x707+x708));

    if (t134 != 75712U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x709 = -44012LL;
	int8_t x710 = INT8_MIN;
	volatile int16_t x711 = -31;
	int8_t x712 = INT8_MIN;
	volatile int64_t t135 = -1802539517LL;

    t135 = ((x709+x710)^(x711+x712));

    if (t135 != 44277LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x717 = -1;
	uint8_t x718 = 1U;
	int32_t x719 = -1;
	int16_t x720 = -21;
	volatile int32_t t136 = 978447;

    t136 = ((x717+x718)^(x719+x720));

    if (t136 != -22) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x721 = -6;
	volatile int8_t x722 = INT8_MAX;
	uint16_t x723 = 40U;
	int16_t x724 = -1;
	volatile int32_t t137 = 100066;

    t137 = ((x721+x722)^(x723+x724));

    if (t137 != 94) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x725 = -1LL;
	static uint8_t x727 = UINT8_MAX;
	uint8_t x728 = 19U;
	int64_t t138 = 474LL;

    t138 = ((x725+x726)^(x727+x728));

    if (t138 != 32492LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x730 = 43415706418LLU;
	static uint16_t x732 = UINT16_MAX;
	static uint64_t t139 = 32672601722760735LLU;

    t139 = ((x729+x730)^(x731+x732));

    if (t139 != 43415725253LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x733 = 39U;
	static volatile int16_t x734 = 52;
	volatile uint8_t x736 = 0U;
	volatile uint32_t t140 = 28178412U;

    t140 = ((x733+x734)^(x735+x736));

    if (t140 != 4294966487U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x741 = 48253227U;
	volatile uint16_t x742 = 19556U;
	uint32_t x743 = 140U;
	volatile uint32_t x744 = 202U;
	uint32_t t141 = 6872U;

    t141 = ((x741+x742)^(x743+x744));

    if (t141 != 48272601U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x745 = UINT8_MAX;
	static int16_t x746 = -55;
	int32_t x748 = INT32_MAX;
	uint64_t t142 = 7917171LLU;

    t142 = ((x745+x746)^(x747+x748));

    if (t142 != 2147483446LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x749 = INT64_MIN;
	static volatile int8_t x751 = INT8_MIN;

    t143 = ((x749+x750)^(x751+x752));

    if (t143 != 9223372036854775673LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x753 = 14141705;
	uint8_t x754 = UINT8_MAX;
	uint8_t x755 = 34U;
	volatile int8_t x756 = INT8_MAX;
	volatile int32_t t144 = -1679276;

    t144 = ((x753+x754)^(x755+x756));

    if (t144 != 14142121) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x757 = 1255975286U;
	uint64_t x758 = UINT64_MAX;
	static volatile uint64_t x760 = 4573513690LLU;
	uint64_t t145 = 3946685402LLU;

    t145 = ((x757+x758)^(x759+x760));

    if (t145 != 10104532652LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x761 = -1;
	int16_t x762 = -1;
	uint16_t x763 = 40U;
	uint64_t x764 = 284098583363018LLU;
	uint64_t t146 = 120195926159LLU;

    t146 = ((x761+x762)^(x763+x764));

    if (t146 != 18446459975126188556LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x765 = INT16_MIN;
	int16_t x766 = -6;
	static uint64_t x767 = UINT64_MAX;

    t147 = ((x765+x766)^(x767+x768));

    if (t147 != 18446744065600241321LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x769 = -1;
	int8_t x770 = 0;
	uint8_t x771 = UINT8_MAX;
	uint16_t x772 = 123U;
	int32_t t148 = -1210591;

    t148 = ((x769+x770)^(x771+x772));

    if (t148 != -379) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x777 = 4522816U;
	int64_t x778 = -1LL;
	int8_t x779 = -3;
	uint64_t x780 = UINT64_MAX;
	volatile uint64_t t149 = 40LLU;

    t149 = ((x777+x778)^(x779+x780));

    if (t149 != 18446744073705028803LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x785 = 21168;
	uint16_t x786 = 1U;
	int32_t x787 = INT32_MIN;
	volatile int32_t t150 = 2660532;

    t150 = ((x785+x786)^(x787+x788));

    if (t150 != -1200818055) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x789 = -1663979;
	int16_t x790 = -2;
	int16_t x791 = INT16_MAX;
	int8_t x792 = 0;

    t151 = ((x789+x790)^(x791+x792));

    if (t151 != -1645588) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x805 = 0U;
	static volatile int32_t x806 = -6;
	volatile int32_t x807 = INT32_MIN;
	static int64_t x808 = INT64_MAX;
	static int64_t t152 = -10LL;

    t152 = ((x805+x806)^(x807+x808));

    if (t152 != -9223372034707292155LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x813 = 17U;
	int16_t x815 = -1;
	int8_t x816 = -1;

    t153 = ((x813+x814)^(x815+x816));

    if (t153 != 4127145375U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x817 = 257609U;
	static volatile uint32_t x818 = UINT32_MAX;
	static uint8_t x819 = UINT8_MAX;
	int16_t x820 = INT16_MIN;
	uint32_t t154 = 2076561U;

    t154 = ((x817+x818)^(x819+x820));

    if (t154 != 4294733495U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x822 = INT8_MIN;
	uint16_t x823 = 46U;
	uint64_t x824 = 4104846732354461LLU;

    t155 = ((x821+x822)^(x823+x824));

    if (t155 != 18442639226977197236LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x825 = -1;
	int64_t x826 = -1LL;
	uint64_t x827 = 305436580878LLU;
	int32_t x828 = -1;
	uint64_t t156 = 1029768LLU;

    t156 = ((x825+x826)^(x827+x828));

    if (t156 != 18446743768272970739LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x829 = 116381U;
	uint16_t x830 = 22842U;
	static uint64_t x831 = 172473LLU;

    t157 = ((x829+x830)^(x831+x832));

    if (t157 != 9223372036854824559LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x833 = 4790;
	static volatile uint16_t x835 = UINT16_MAX;
	static int8_t x836 = -1;
	volatile int32_t t158 = 400455768;

    t158 = ((x833+x834)^(x835+x836));

    if (t158 != 60657) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x849 = 24597U;
	static uint8_t x850 = UINT8_MAX;
	int8_t x851 = 45;
	int32_t x852 = INT32_MIN;

    t159 = ((x849+x850)^(x851+x852));

    if (t159 != 2147508537U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x853 = INT32_MIN;
	uint16_t x854 = 23U;
	int32_t x855 = -1;
	int8_t x856 = INT8_MIN;
	volatile int32_t t160 = 84;

    t160 = ((x853+x854)^(x855+x856));

    if (t160 != 2147483496) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x857 = 3567847;
	static int32_t x858 = INT32_MIN;
	volatile uint64_t x859 = UINT64_MAX;
	uint8_t x860 = 25U;
	uint64_t t161 = 2208847465532342LLU;

    t161 = ((x857+x858)^(x859+x860));

    if (t161 != 18446744071565635839LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x861 = -1LL;
	int8_t x862 = INT8_MAX;
	static uint8_t x863 = 1U;
	static int32_t x864 = INT32_MIN;
	static volatile int64_t t162 = 955336240LL;

    t162 = ((x861+x862)^(x863+x864));

    if (t162 != -2147483521LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x865 = 7U;
	int8_t x866 = INT8_MIN;
	volatile int16_t x867 = -1;
	volatile int32_t t163 = 32277;

    t163 = ((x865+x866)^(x867+x868));

    if (t163 != 121) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x870 = INT64_MAX;
	int8_t x871 = -1;

    t164 = ((x869+x870)^(x871+x872));

    if (t164 != 9223372036854736955LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x877 = 145LL;
	uint16_t x878 = UINT16_MAX;
	uint8_t x880 = 22U;
	int64_t t165 = 1920017710672387LL;

    t165 = ((x877+x878)^(x879+x880));

    if (t165 != 66185LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x883 = UINT64_MAX;
	volatile uint64_t t166 = 39920LLU;

    t166 = ((x881+x882)^(x883+x884));

    if (t166 != 18446744071562109134LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x885 = -1;
	static uint32_t x886 = 447229652U;
	int64_t x887 = INT64_MIN;
	uint64_t x888 = UINT64_MAX;
	volatile uint64_t t167 = 4351593558330499LLU;

    t167 = ((x885+x886)^(x887+x888));

    if (t167 != 9223372036407546156LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x893 = INT64_MAX;
	uint16_t x895 = 83U;
	volatile uint64_t x896 = UINT64_MAX;
	uint64_t t168 = 6739390LLU;

    t168 = ((x893+x894)^(x895+x896));

    if (t168 != 9223372036854775724LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x897 = UINT16_MAX;
	uint16_t x898 = 41U;
	uint16_t x899 = 361U;
	int16_t x900 = 0;
	int32_t t169 = -110927;

    t169 = ((x897+x898)^(x899+x900));

    if (t169 != 65857) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x902 = -72293656;
	int8_t x903 = INT8_MAX;
	int64_t x904 = 265574174731529073LL;

    t170 = ((x901+x902)^(x903+x904));

    if (t170 != -265574174795036393LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x905 = 0U;
	static int64_t x906 = INT64_MIN;
	int64_t x907 = INT64_MAX;
	uint64_t x908 = 3864982688LLU;
	volatile uint64_t t171 = 61802586055182LLU;

    t171 = ((x905+x906)^(x907+x908));

    if (t171 != 3864982687LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x917 = 30690U;
	uint64_t x918 = 1187719121467075LLU;
	int8_t x919 = -8;
	static int64_t x920 = -21506828692LL;
	volatile uint64_t t172 = 3881623283151489LLU;

    t172 = ((x917+x918)^(x919+x920));

    if (t172 != 18445556341679569089LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x924 = 12U;
	int32_t t173 = -119;

    t173 = ((x921+x922)^(x923+x924));

    if (t173 != 373) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x929 = 8;
	int16_t x931 = -1;
	int32_t x932 = INT32_MAX;

    t174 = ((x929+x930)^(x931+x932));

    if (t174 != 2147483641LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x933 = INT16_MAX;
	static int16_t x934 = INT16_MIN;
	volatile int16_t x935 = INT16_MIN;
	int16_t x936 = 4871;
	int32_t t175 = 28;

    t175 = ((x933+x934)^(x935+x936));

    if (t175 != 27896) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x938 = 295658153U;
	uint64_t x939 = 903LLU;
	uint16_t x940 = 0U;

    t176 = ((x937+x938)^(x939+x940));

    if (t176 != 295690543LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x941 = 8U;
	uint16_t x943 = 2U;
	int32_t x944 = -1;
	uint32_t t177 = 3694931U;

    t177 = ((x941+x942)^(x943+x944));

    if (t177 != 32774U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x945 = INT32_MIN;
	uint32_t x946 = 345137396U;
	uint32_t x947 = UINT32_MAX;
	static int32_t x948 = INT32_MIN;

    t178 = ((x945+x946)^(x947+x948));

    if (t178 != 3949829899U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x949 = -2828933;
	volatile int64_t x951 = -1LL;
	static int16_t x952 = INT16_MAX;
	volatile int64_t t179 = -169084501LL;

    t179 = ((x949+x950)^(x951+x952));

    if (t179 != -2872699LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x957 = UINT64_MAX;
	uint16_t x958 = 2U;
	static uint32_t x959 = 1498212995U;
	static uint64_t x960 = UINT64_MAX;
	uint64_t t180 = 1LLU;

    t180 = ((x957+x958)^(x959+x960));

    if (t180 != 1498212995LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x961 = UINT32_MAX;
	volatile int8_t x962 = -1;
	int8_t x963 = INT8_MAX;
	static int8_t x964 = -3;
	static uint32_t t181 = 423006304U;

    t181 = ((x961+x962)^(x963+x964));

    if (t181 != 4294967170U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x965 = UINT16_MAX;
	int16_t x966 = -703;
	uint64_t x967 = UINT64_MAX;
	uint8_t x968 = 5U;
	volatile uint64_t t182 = 1126LLU;

    t182 = ((x965+x966)^(x967+x968));

    if (t182 != 64836LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x969 = 15U;
	volatile int32_t x970 = INT32_MIN;
	volatile int32_t x971 = 256261;
	uint8_t x972 = UINT8_MAX;
	static volatile int32_t t183 = 1776;

    t183 = ((x969+x970)^(x971+x972));

    if (t183 != -2147227125) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x973 = 19678U;
	static int16_t x975 = INT16_MIN;
	int64_t x976 = -1LL;
	int64_t t184 = 79365139380280406LL;

    t184 = ((x973+x974)^(x975+x976));

    if (t184 != -52451LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x979 = INT16_MIN;
	static volatile uint8_t x980 = 19U;

    t185 = ((x977+x978)^(x979+x980));

    if (t185 != 65516) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x986 = -1;
	int16_t x987 = 1687;
	int8_t x988 = 2;
	int64_t t186 = 916868468374113418LL;

    t186 = ((x985+x986)^(x987+x988));

    if (t186 != -1047481514258822LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x989 = -210;
	uint16_t x990 = 2U;
	int16_t x991 = -1;
	int16_t x992 = 8816;
	static volatile int32_t t187 = -124738;

    t187 = ((x989+x990)^(x991+x992));

    if (t187 != -8865) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x993 = 0U;
	volatile int64_t x994 = 1298986188800204LL;
	int16_t x995 = 267;
	static uint16_t x996 = 32U;
	volatile int64_t t188 = 832487694375654LL;

    t188 = ((x993+x994)^(x995+x996));

    if (t188 != 1298986188800487LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1001 = 7U;
	static uint32_t x1002 = 2U;
	int64_t x1003 = INT64_MIN;
	uint16_t x1004 = UINT16_MAX;
	int64_t t189 = -129232465193622LL;

    t189 = ((x1001+x1002)^(x1003+x1004));

    if (t189 != -9223372036854710282LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1005 = 20846U;
	int64_t x1006 = 28840497445LL;
	int8_t x1007 = INT8_MAX;
	int64_t x1008 = -550975229LL;
	volatile int64_t t190 = 39202981155311059LL;

    t190 = ((x1005+x1006)^(x1007+x1008));

    if (t190 != -28316816623LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1013 = INT32_MAX;
	uint64_t x1014 = 834812101607683LLU;
	int8_t x1015 = INT8_MIN;
	int64_t x1016 = 444960383394149553LL;
	volatile uint64_t t191 = 1649920043098LLU;

    t191 = ((x1013+x1014)^(x1015+x1016));

    if (t191 != 445335598888203571LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1018 = 1LL;
	uint32_t x1019 = UINT32_MAX;
	static int32_t x1020 = INT32_MAX;
	int64_t t192 = -31400LL;

    t192 = ((x1017+x1018)^(x1019+x1020));

    if (t192 != 2147483647LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x1021 = 8030U;
	int8_t x1022 = 1;
	int16_t x1024 = INT16_MAX;
	int32_t t193 = -2390;

    t193 = ((x1021+x1022)^(x1023+x1024));

    if (t193 != 40775) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1029 = -115933LL;
	static uint32_t x1030 = 21U;
	static uint32_t x1031 = UINT32_MAX;
	static volatile uint8_t x1032 = UINT8_MAX;
	int64_t t194 = 133366559822157445LL;

    t194 = ((x1029+x1030)^(x1031+x1032));

    if (t194 != -115770LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x1033 = 24U;
	int16_t x1034 = -1;
	int64_t x1035 = 54000436050489LL;
	int64_t x1036 = -1LL;

    t195 = ((x1033+x1034)^(x1035+x1036));

    if (t195 != 54000436050479LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1037 = UINT16_MAX;
	volatile int32_t x1038 = INT32_MIN;
	uint16_t x1039 = 2416U;
	int8_t x1040 = INT8_MAX;
	int32_t t196 = -143;

    t196 = ((x1037+x1038)^(x1039+x1040));

    if (t196 != -2147420656) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1041 = 55;
	int16_t x1042 = INT16_MIN;
	int64_t x1043 = INT64_MIN;
	int32_t x1044 = INT32_MAX;
	volatile int64_t t197 = 69696276891LL;

    t197 = ((x1041+x1042)^(x1043+x1044));

    if (t197 != 9223372034707324872LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1046 = INT64_MIN;
	int8_t x1048 = INT8_MIN;
	static uint64_t t198 = 299755LLU;

    t198 = ((x1045+x1046)^(x1047+x1048));

    if (t198 != 9340374479144979160LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1049 = 0;
	uint8_t x1052 = 1U;
	volatile int64_t t199 = 700794097385364LL;

    t199 = ((x1049+x1050)^(x1051+x1052));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

